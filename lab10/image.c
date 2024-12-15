#include <stdio.h>
#include <stdlib.h>
#include "image.h"

void writeBMP(const char *filename, RGBPixel **pixels, int width, int height)
{
    FILE *file = fopen(filename, "wb");
    if (!file)
    {
        perror("Failed to open file");
        exit(1);
    }

    int rowSize = (3 * width + 3) & ~3; // Row size must be a multiple of 4 bytes
    int imageSize = rowSize * height;

    BMPFileHeader fileHeader = {
        .bfType = 0x4D42, // "BM"
        .bfSize = sizeof(BMPFileHeader) + sizeof(BMPInfoHeader) + imageSize,
        .bfReserved1 = 0,
        .bfReserved2 = 0,
        .bfOffBits = sizeof(BMPFileHeader) + sizeof(BMPInfoHeader)};

    BMPInfoHeader infoHeader = {
        .biSize = sizeof(BMPInfoHeader),
        .biWidth = width,
        .biHeight = height,
        .biPlanes = 1,
        .biBitCount = 24,
        .biCompression = 0,
        .biSizeImage = imageSize,
        .biXPelsPerMeter = 0,
        .biYPelsPerMeter = 0,
        .biClrUsed = 0,
        .biClrImportant = 0};

    fwrite(&fileHeader, sizeof(BMPFileHeader), 1, file);
    fwrite(&infoHeader, sizeof(BMPInfoHeader), 1, file);

    uint8_t *row = (uint8_t *)malloc(rowSize);
    for (int y = height - 1; y >= 0; y--)
    { // BMP stores rows bottom-to-top
        for (int x = 0; x < width; x++)
        {
            row[x * 3 + 0] = pixels[y][x].b; // Blue
            row[x * 3 + 1] = pixels[y][x].g; // Green
            row[x * 3 + 2] = pixels[y][x].r; // Red
        }
        // Pad the row to a multiple of 4 bytes
        for (int p = width * 3; p < rowSize; p++)
        {
            row[p] = 0;
        }
        fwrite(row, rowSize, 1, file);
    }

    free(row);
    fclose(file);
    printf("BMP file written to %s\n", filename);
}

RGBPixel **readBMP(const char *filename, int *width, int *height)
{
    FILE *file = fopen(filename, "rb");
    if (!file)
    {
        perror("Failed to open file");
        exit(1);
    }

    BMPFileHeader fileHeader;
    BMPInfoHeader infoHeader;

    fread(&fileHeader, sizeof(BMPFileHeader), 1, file);
    fread(&infoHeader, sizeof(BMPInfoHeader), 1, file);

    if (fileHeader.bfType != 0x4D42)
    {
        fprintf(stderr, "Not a valid BMP file\n");
        fclose(file);
        exit(1);
    }

    *width = infoHeader.biWidth;
    *height = infoHeader.biHeight;

    int rowSize = (3 * (*width) + 3) & ~3;
    RGBPixel **pixels = malloc((*height) * sizeof(RGBPixel *));

    printf("->%p\n", pixels);

    for (int y = *height - 1; y >= 0; y--)
    {
        pixels[y] = malloc((*width) * sizeof(RGBPixel));
        uint8_t *row = (uint8_t *)malloc(rowSize);
        fread(row, rowSize, 1, file);
        for (int x = 0; x < *width; x++)
        {
            pixels[y][x].b = row[x * 3 + 0];
            pixels[y][x].g = row[x * 3 + 1];
            pixels[y][x].r = row[x * 3 + 2];
            // printPixel(pixels[y][x]);
        }
        free(row);
    }

    fclose(file);
    return pixels;
}
