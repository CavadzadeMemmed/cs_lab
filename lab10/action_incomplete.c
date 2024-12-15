#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "image.h"

int _randValueForColorComponent()
{
    return rand() % 256;
}

void printPixel(RGBPixel pixel)
{
    printf("(%d %d %d)", pixel.r, pixel.g, pixel.b);
}

RGBPixel **generateRandomImage(int width, int height)
{
    // Allocate and populate pixel data
    RGBPixel **pixels = malloc(height * sizeof(RGBPixel *));
    for (int y = 0; y < height; y++)
    {
        pixels[y] = malloc(width * sizeof(RGBPixel));
        for (int x = 0; x < width; x++)
        {
            pixels[y][x].r = _randValueForColorComponent();
            pixels[y][x].g = _randValueForColorComponent();
            pixels[y][x].b = _randValueForColorComponent();
        }
    }
    return pixels;
}

RGBPixel **transposeArray(RGBPixel **pixels, int width, int height)
{
    // TODO
}

void clearMemory(RGBPixel **image, int width, int height)
{
    // Free the pixel array
    for (int y = 0; y < height; y++)
    {
        free(image[y]);
    }
    free(image);
}

int main()
{
    // TODO
    return 0;
}
