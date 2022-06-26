#include <iostream>
#include <fstream>
#include "config.h"

int main(int argc, char **argv) {
    std::cout   << "project name: " 
                << PROJECT_NAME 
                << " version: " 
                << PROJECT_VER 
                << std::endl;
    std::ifstream pic("pic.jpg", std::ios::binary);
    if (pic.is_open()) {
        std::string line;
        line.reserve(64);
        pic.read(reinterpret_cast<char*>(&line), line.size());
        std::cout << line << std::endl;
    }
}
