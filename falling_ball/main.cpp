#include <iostream>
#include "constants.h"

double getHeight()
{
    std::cout << "Enter the initial height of the tower in meters: ";
    double x;
    std::cin >> x; 
    std::cout << std::endl;
    return x;
}

void heightAfterFiveSec(double x)
{
    std::cout << "At 0 seconds, the ball is at height: " << x << "meters" << std::endl;
    if ((x - myConstans::gravity / 2) > 0)
        std::cout << "At 1 seconds, the ball is at height: " << x - myConstans::gravity / 2 << "meters" << std::endl;
    else
        std::cout << "At 1 seconds the ball is on the ground." << std::endl;
    if ((x - myConstans::gravity * 4 / 2) > 0)
        std::cout << "At 2 seconds, the ball is at height: " << x - myConstans::gravity *4 / 2 << "meters" << std::endl;
    else
        std::cout << "At 2 seconds the ball is on the ground." << std::endl;
    if ((x - myConstans::gravity * 9 / 2) > 0)
        std::cout << "At 3 seconds, the ball is at height: " << x - myConstans::gravity * 9 / 2 << "meters" << std::endl;
    else
        std::cout << "At 3 seconds the ball is on the ground." << std::endl;
    if ((x - myConstans::gravity * 16 / 2) > 0)
        std::cout << "At 4 seconds, the ball is at height: " << x - myConstans::gravity * 16 / 2 << "meters" << std::endl;
    else
        std::cout << "At 4 seconds the ball is on the ground." << std::endl;
    if ((x - myConstans::gravity * 25 / 2) > 0)
        std::cout << "At 5 seconds, the ball is at height: " << x - myConstans::gravity * 25 / 2 << "meters" << std::endl;
    else
        std::cout << "At 5 seconds the ball is on the ground." << std::endl;
}

int main()
{
    double initHeight = getHeight();
    heightAfterFiveSec(initHeight);

   	return 0;
}