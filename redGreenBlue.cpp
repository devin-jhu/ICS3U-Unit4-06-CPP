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
    for (int red = 0; red < 255; red++) {
        for (int green = 0; green < 255; green++) {
            for (int blue = 0; blue < 255; blue++) {
                std::cout << "RGB " << red << ", " << green
                << ", "  << blue << std::endl;
            }
        }
    }
}
