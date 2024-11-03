#include "ColorUtils.h"

void setColor2(int color) {
    switch (color) {
        case 0:  // Reset color
            std::cout << "\033[0m";
            break;
        case 1:  // Red text
            std::cout << "\033[31m";
            break;
        case 2:  // Green text
            std::cout << "\033[32m";
            break;
        case 3:  // Yellow text
            std::cout << "\033[33m";
            break;
        case 4:  // Blue text
            std::cout << "\033[34m";
            break;
        case 5:  // Magenta text
            std::cout << "\033[35m";
            break;
        case 6:  // Cyan text
            std::cout << "\033[36m";
            break;
        case 7:  // White text
            std::cout << "\033[37m";
            break;
        default:
            std::cout << "\033[0m"; // Reset if color not recognized
    }
}
