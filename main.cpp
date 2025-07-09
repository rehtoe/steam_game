// main source file
#include <iostream>

int main(int argc, char* argv[]){

    for(int i = 0; i < argc; i++){
        if(i == argc-1){ std::cout << argv[i] << std::endl; }
        else{ std::cout << argv[i] << " "; }
    }

    return 0;
}
