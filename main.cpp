// main source file

#include "source/camera.h"

#include <iostream>

int main(int argc, char* argv[]){
/*
    for(int i = 0; i < argc; i++){
        if(i == argc-1){ std::cout << argv[i] << std::endl; }
        else{ std::cout << argv[i] << " "; }
    }
*/    

    Camera cam(10,10);
    cam.print();

    return 0;
}
