//ed
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
            int M, F, a, j;
            bool flag = 0;
            std::cout << "\nInput M: ";
            std::cin >> M;
            std::cout << "Input F: ";
            std::cin >> F;
            if (M < F) flag = 0;
            for (j = 0; ((j <= M - 1) && (flag == 0)); j++)
            {
                a = (j * j) % M;
                if (a == F) flag = 1;
            }
            if (flag != 1) std::cout << "False\n";
            else std::cout << "True\n";
        }
    }
    else std::cout << "ERROR\n";

}
