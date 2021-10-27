/*Реализовать функцию, которая будет перемножать два числа с помощью
побитовых операторов (без использования арифметических) */

#include <iostream>

int multiply(int a, int b)
{
    int a1, b1;
    int rez = 0;
    while (b > 0)
    {
        if (b & 1)
        {
            a1 = a;
            while (a1 != 0)
            {
                b1 = rez & a1;
                rez = rez ^ a1;
                a1 = b1 << 1;
            }
        }
        b = b >> 1;
        a = a << 1;
    }
    return rez;

}

  int main()
{
    int i, N;
    std::cout << "Input N: ";
    std::cin >> N;
    if ((1 <= N) && (N <= 10))
    {
        for (i = 0; i < N; i++)
        {
            int x, y, REZ;
            std::cout << "\nInput x: ";
            std::cin >> x;
            std::cout << "Input y: ";
            std::cin >> y;
            REZ = multiply(x, y);
            std::cout << "x * y = " << REZ << std::endl;
        }
    }
    else std::cout << "ERROR\n";
    return 0;
}