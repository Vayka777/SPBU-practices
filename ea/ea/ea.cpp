// ea

#include <iostream>

void main()
{
    int i, N;
    std::cout << "Input N: ";
    std::cin >> N;
    if ((1 <= N) && (N <= 15))
    {
        for (i = 0; i < N; i++)
        {
            int x1, x2, y1, y2;
            std::cout << "\nInput coordinates of point a: \n" << "Input x1: ";
            std::cin >> x1;
            std::cout << "Input y1: ";
            std::cin >> y1;
            std::cout << "Input coordinates of point b: \n" << "Input x2: ";
            std::cin >> x2;
            std::cout << "Input y2: ";
            std::cin >> y2;
            std::cout << "Coordinates of point c: \n" << "x3: " << (y1 - y2) + x2 << std::endl;
            std::cout << "y3: " << -(x1 - x2) + y2 << "\n" << std::endl;
        }
    }
    else std::cout << "ERROR\n" << std::endl;
}