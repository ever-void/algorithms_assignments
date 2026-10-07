// University of Arkansas at Little Rock
// Department of Computer Science
// CPSI 28003: Algorithms
// Fall 2026
// Project 1: The Climbing Problem
// Due Date: October 8, 2026, Thursday
// Name: Catalina McCoy
// ID-number (Last 4 Digits): 0929
// Description of the Program (2-3 sentences): Each time you can either climb (1) 1 or
// 2, (2) 1, 2, or 3 steps. The program runs a non recursive algorithm to find how many distinct ways can you climb to the top of an 8-step
// staircase.
// Date Written: 10/6/2026
// Date Revised: 10/7/2026

#include <iostream>

int main() {
    int count = 0;

    for (int a = 1; a <= 3; a++) {
        for (int b = 1; b <= 3; b++) {
            for (int c = 1; c <= 3; c++) {
                for (int d = 1; d <= 3; d++) {
                    for (int e = 1; e <= 3; e++){
                        for (int f = 1; f <= 3; f++) {
                            for (int g = 1; g <= 3; g++) {
                                for (int h = 1; h <= 3; h++) {
                                    if (a + b + c + d + e + f + g + h == 8) {
                                        std::cout << a << " " << b << " " << c << " " << d << " " << e << " " << f << " " << g << " " << h << std::endl;
                                        count++;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }

    std::cout << "Number of Ways: " << count << std::endl;

    return 0;
}