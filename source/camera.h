#ifndef CAMERA_H
#define CAMERA_H

#include "pixeldata.h"

#include <iostream>
#include <map>

class Camera{
    private:
    std::map<int, std::map<int, PixelMetaData>> canvas; // Canvas/Image
    int frameWidth, frameHeight;                        // resolution scalars
    public:
    Camera(int resWidth, int resHeight);                // Constructor
    void print();                                       // prints matrix
};


#endif // CAMERA_H