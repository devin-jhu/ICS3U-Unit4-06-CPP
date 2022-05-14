// Copyright (C) 2022 Devin Jhu All rights reserved
//
// Created by Devin Jhu
// Created on May 2022
// RGB

#include <iostream>
#include <string>

int main() {
    // this program shows RGB
    // process & output
    for (int red = 0; red < 256; red++) {
        for (int green = 0; green < 256; green++) {
            for (int blue = 0; blue < 256; blue++) {
                std::cout << "RGB " << red << ", " << green
                << ", "  << blue << std::endl;
            }
        }
    }
    std::cout << "\nDone." << std::endl;
}
