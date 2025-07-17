#include "camera.h"

Camera::Camera(int resWidth, int resHeight):canvas(std::map<int, std::map<int, PixelMetaData>>()){
    frameWidth = resWidth;
    frameHeight = resHeight;
    for(int row = 0; row < frameHeight; row++){
        canvas[row] = std::map<int,PixelMetaData>();
        for(int col = 0; col < frameWidth; col++){
            canvas[row][col] = PixelMetaData();
        }
    }
}

void Camera::print(){
    for(int row = 0; row < frameHeight; row++){
        for(int col = 0; col < frameWidth; col++){
            std::cout << "[" << canvas[row][col].x << ","
                        << canvas[row][col].y << "]";
        }
        std::cout << std::endl;
    }
}