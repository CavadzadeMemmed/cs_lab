#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "image.h"

// Function to generate random values for color components
int _randValueForColorComponent() {
    return rand() % 256;
}

// Function to print a pixel (RGB format)
void printPixel(RGBPixel pixel) {
    printf("(%d %d %d)", pixel.r, pixel.g, pixel.b);
}

// Function to print the whole image (2D array of pixels)
void printImage(RGBPixel **pixels, int width, int height) {
    for (int y = 0; y < height; y++) {
        for (int x = 0; x < width; x++) {
            printPixel(pixels[y][x]);
            printf(" ");
        }
        printf("\n");
    }
}

// Function to generate a random image of given width and height
RGBPixel **generateRandomImage(int width, int height) {
    RGBPixel **pixels = malloc(height * sizeof(RGBPixel *));
    for (int y = 0; y < height; y++) {
        pixels[y] = malloc(width * sizeof(RGBPixel));
        for (int x = 0; x < width; x++) {
            pixels[y][x].r = _randValueForColorComponent();
            pixels[y][x].g = _randValueForColorComponent();
            pixels[y][x].b = _randValueForColorComponent();
        }
    }
    return pixels;
}

// Function to transpose an image (swap rows and columns)
RGBPixel **transposeImage(RGBPixel **image, int width, int height) {
    RGBPixel **transposed = malloc(width * sizeof(RGBPixel *));
    for (int i = 0; i < width; i++) {
        transposed[i] = malloc(height * sizeof(RGBPixel));
        for (int j = 0; j < height; j++) {
            transposed[i][j] = image[j][i];
        }
    }
    return transposed;
}

// Function to free the memory allocated for the image
void clearMemory(RGBPixel **image, int width, int height) {
    for (int y = 0; y < height; y++) {
        free(image[y]);
    }
    free(image);
}

int main() {
    srand(time(NULL));  // Initialize random seed

    // Part 1: Create a random image and print it
    int width = 10, height = 10;  // Example dimensions
    RGBPixel **randomImage = generateRandomImage(width, height);
    
    // Print the random image
    printf("Random Image:\n");
    printImage(randomImage, width, height);
    
    // Free the memory for the random image
    clearMemory(randomImage, width, height);

    // Part 2: Write the random image to a BMP file
    randomImage = generateRandomImage(width, height);
    writeBMP("random_image.bmp", randomImage, width, height);
    
    // Free the memory for the random image
    clearMemory(randomImage, width, height);

    // Part 3: Read an image from a BMP file, transpose it, and write the transposed image
    int readWidth, readHeight;
    RGBPixel **sampleImage = readBMP("sample1.bmp", &readWidth, &readHeight);
    
    // Print the original image
    printf("\nOriginal Image:\n");
    printImage(sampleImage, readWidth, readHeight);
    
    // Transpose the image
    RGBPixel **transposedImage = transposeImage(sampleImage, readWidth, readHeight);
    
    // Write the transposed image to a BMP file
    writeBMP("transposed_image.bmp", transposedImage, readHeight, readWidth);
    
    // Free the memory for both images
    clearMemory(sampleImage, readWidth, readHeight);
    clearMemory(transposedImage, readHeight, readWidth);

    return 0;
}
