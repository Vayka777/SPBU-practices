/*Нвписать функицю, кторая проверяет, является ли целое число палиндромом в двоичном исполнении*/

#include <iostream>

int check(int N)
{
	int i; 
	int count = 0;
	int k = 1;
	int arr[32] = {};
	while (N != 0)
	{
		arr[count] = N % 2;
		N = N / 2;
		count++;
	}
	for (i = 0; i < count / 2; i++)
	{
		if (arr[count] != arr[count - 1 - i])
			k = 0;
	}
	return k;
}

int main()
{
	int i, N, ch;
	std::cout << "Input N: ";
	std::cin >> N;
	ch = check(N);
	if (ch == 0) std::cout << "NO\n";
	else std::cout << "Yes\n";
			
	return 0;
}
