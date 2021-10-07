//eb
#include <iostream>

void main()
{
    int i, N;
    std::cout << "Input N: ";
    std::cin >> N;
    if ((1 <= N) && (N <= 10))
    {
        for (i = 0; i < N; i++)
        {
            int a, S;
            std::cout << "\nInput the base of the triangle: ";
            std::cin >> a;
            std::cout << "Input the area of the triangle: ";
            std::cin >> S;
            std::cout << "h = " << (float)(2 * S) / a << "\n" << std::endl;
        }
    }
    else std::cout << "ERROR\n";
}