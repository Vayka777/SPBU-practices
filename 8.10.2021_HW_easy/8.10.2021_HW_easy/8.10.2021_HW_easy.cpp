/*Реализовать игру в жизнь...*/

#include <iostream>
#include <ctime>

const int N = 5;

int main()
{
    srand(time(NULL));
    int i, j, k, l;
    int count = 0;
    int arr[N][N], mass[N][N];
    std::cout << "1 - live \n0 - dead\n\n" << "START:\n";
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {
            arr[i][j] = rand() % 2;
        }
    }
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {
            std::cout << arr[i][j] << " ";
        }
        std::cout << std::endl;
    }

    std::cout << "\n";

    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {
            mass[i][j] = rand() % 2;
        }
    }
    /*
    for (i = 0; i <= N-1; i++)
    {
        for (j = 0; j <= N-1; j++)
        {
            std::cout << mass[i][j] << " ";
        }
        std::cout << std::endl;
    }
    */


    std::cout << "\nInput game steps (k): ";
    std::cin >> k;
    for (l = 0; l < k; l++)

    {
        for (i = 0; i < N; i++)
        {
            for (j = 0; j < N; j++)
            {
                arr[i][j] = mass[i][j];
            }
        }
        for (i = 0; i < N; i++)
        {
            for (j = 0; j < N; j++)
            {
                if (arr[i][j] == 0)
                {
                    if (arr[i - 1][j - 1] == 1) count++;
                    if (arr[i][j - 1] == 1) count++;
                    if (arr[i + 1][j - 1] == 1) count++;
                    if (arr[i + 1][j] == 1) count++;
                    if (arr[i + 1][j + 1] == 1) count++;
                    if (arr[i][j + 1] == 1) count++;
                    if (arr[i - 1][j + 1] == 1) count++;
                    if (arr[i - 1][j] == 1) count++;
                    if (count == 3) mass[i][j] = 1;
                    count = 0;
                }
                else
                {
                    if (arr[i - 1][j - 1] == 1) count++;
                    if (arr[i][j - 1] == 1) count++;
                    if (arr[i + 1][j - 1] == 1) count++;
                    if (arr[i + 1][j] == 1) count++;
                    if (arr[i + 1][j + 1] == 1) count++;
                    if (arr[i - 1][j + 1] == 1) count++;
                    if (arr[i - 1][j] == 1) count++;
                    if ((count == 2) || (count == 3))
                    {
                        mass[i][j] = 1;
                        count = 0;
                    }
                    else
                    {
                        mass[i][j] = 0;
                        count = 0;
                    }
                }
            }
        }
        std::cout << "\nNew step:\n";
        for (i = 0; i < N; i++)
        {
            for (j = 0; j < N; j++)
            {
                std::cout << mass[i][j] << " ";
            }
            std::cout << std::endl;
        }

    }

    return 0;
}