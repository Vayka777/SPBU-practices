// ec
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
            int A, i, max, min = 2;
            std::cout << "\nInput A: ";
            std::cin >> A;
            max = A - 1;
            for (i = 0; i < A; i++)
            {
                if (A % max != 0) max = max - 1;
                if (A % min != 0) min = min + 1;
            }
            std::cout << "d = " << max * min << "\n" << std::endl;

        }
    }
    else std::cout << "ERROR\n";
}