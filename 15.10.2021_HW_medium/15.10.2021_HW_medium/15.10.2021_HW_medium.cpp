/*Создайте динамический двумерный массив и заполните его
случайными  числами от 10 до 50. Вывести его в консоль.
Для напоплнения и визуализации необходимо написать отдельные функции*/

#include <iostream>
#include <ctime>

void input(int** a, int M, int N)
{
    int i, j;
    srand(time(NULL));
    for (i = 0; i < M; i++)
    {
        for (j = 0; j < N; j++)
        {
            a[i][j] = rand() % 50 + 10;
        }
    }
}

void print(int** a, int M, int N)
{
    int i, j;
    for (i = 0; i < M; i++)
    {
        for (j = 0; j < N; j++)
        {
            std::cout << a[i][j] << " ";
        }
        std::cout << "\n";
    }
}

int main()
{
    int i, M, N;
    std::cout << "Input M: ";
    std::cin >> M;
    std::cout << "Imput N: ";
    std::cin >> N;
    int** arr = new int* [M];
    for (i = 0; i < M; i++)
    {
        arr[i] = new int[N];
    }
    input(arr, M, N);
    std::cout << "\nArray: \n";
    print(arr, M, N);

    return 0;
}
