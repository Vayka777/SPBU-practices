//ma
#include <iostream>

bool fibonacci(int F, int a, int b)
{
    int next;
    if ((F == 0) || (F == 1)) return true;
    next = a + b;
    if (next > F) return false;
    else
    {
        if (next == F) return true;
        else fibonacci(F, b, next);
    }
}

void main()
{
    int i, N;
    bool fib = 0;
    std::cout << "Input N: ";
    std::cin >> N;
    if ((1 <= N) && (N <= 10))
    {
        for (i = 0; i < N; i++)
        {
            int F;
            std::cout << "\nInput F: ";
            std::cin >> F;
            fib = fibonacci(F, 1, 1);
            if (fib != 1) std::cout << "It is not fibonacci number\n";
            else std::cout << "It is fibonacci number\n";
        }
    }
    else std::cout << "ERROR\n";
}
