//mb
#include <iostream>

int transfusion(int v1, int v2)
{
    while (v1 && v2)
        if (v1 >= v2) v1 %= v2;
        else v2 %= v1;
    return v1 | v2;
}

void main()
{
    int i, N;
    std::cout << "Input N: ";
    std::cin >> N;
    if ((1 <= N) && (N <= 10))
    {
        for (i = 0; i < N; i++)
        {
            int v1, v2, v3;
            std::cout << "\nInput v1: ";
            std::cin >> v1;
            std::cout << "Input v2: ";
            std::cin >> v2;
            std::cout << "Input v3: ";
            std::cin >> v3;
            if (v3 % transfusion(v1, v2) == 0)
                std::cout << "Yes\n";
            else std::cout << "No\n";


        }
    }
    else std::cout << "ERROR\n";
}