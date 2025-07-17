#ifndef PIXELDATA_H
#define PIXELDATA_H

struct PixelMetaData{
    public:
    PixelMetaData();    // Constructor
    PixelMetaData(int _X, int _Y);
    int x, y;           // (X,Y) Coordinates
    float a;            // Transparency
    int r, g, b;        // RGB values
};

#endif // PIXELDATA_H