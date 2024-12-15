
#include <stdint.h>

#pragma pack(push, 1)

// BMP file header structure
typedef struct
{
    uint16_t bfType;      // File type, always "BM"
    uint32_t bfSize;      // Size of the file in bytes
    uint16_t bfReserved1; // Reserved, must be 0
    uint16_t bfReserved2; // Reserved, must be 0
    uint32_t bfOffBits;   // Offset to the pixel data
} BMPFileHeader;

// BMP info header structure
typedef struct
{
    uint32_t biSize;         // Size of the header
    int32_t biWidth;         // Width of the image
    int32_t biHeight;        // Height of the image
    uint16_t biPlanes;       // Number of color planes, must be 1
    uint16_t biBitCount;     // Bits per pixel (24 for RGB)
    uint32_t biCompression;  // Compression type (0 for no compression)
    uint32_t biSizeImage;    // Size of the image data
    int32_t biXPelsPerMeter; // Horizontal resolution (pixels per meter)
    int32_t biYPelsPerMeter; // Vertical resolution (pixels per meter)
    uint32_t biClrUsed;      // Number of colors used (0 for all colors)
    uint32_t biClrImportant; // Number of important colors (0 for all colors)
} BMPInfoHeader;

#pragma pack(pop)

// Function to write a BMP file
typedef struct
{
    uint8_t r, g, b; // Red, Green, Blue
} RGBPixel;

void writeBMP(const char *filename, RGBPixel **pixels, int width, int height);
RGBPixel **readBMP(const char *filename, int *width, int *height);
