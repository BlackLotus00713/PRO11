#include <iostream>
#include <Windows.h>
#include <type_traits>

void FillArray(int arr[], int size);
void FillArray(double arr[], int size);
void FillArray(char arr[], int size);
void FillArray(bool arr[], int size);

void PrintArray(int arr[], int size);
void PrintArray(double arr[], int size);
void PrintArray(char arr[], int size);
void PrintArray(bool arr[], int size);

int RecSum(int a, int b)
{
	if (b == 0)
	{
		return a;
	}
	if (b < 0)
	{
		return RecSum(a - 1, b + 1);
	}
	else
	{
		return RecSum(a + 1, b - 1);
	}
}

int Fak(int n)
{
	if (n < 0)
	{
		return 0;
	}
	if (n == 0)
	{
		return 1;
	}
	else
	{
		return n * Fak(n - 1);
	}
}


template <typename Arr>
double Arifm(Arr arr[], int size)
{
	if (std::is_same<Arr, char>::value == true)
	{
		std::cout << "Нельзя посчитать не на числовом массиве! Поэтому: ";
		return 0.0;
	}
	else if (std::is_same<Arr, bool>::value == true)
	{
		std::cout << "Нельзя посчитать не на числовом массиве! Поэтому: ";
		return 0.0;
	}
	else
	{
		double result = 0.0;
		for (int i = 0; i < size; i++)
		{
			result += arr[i];
		}
		return result / size;
	}
}

void Moo(int *c)
{
	*c += 2;
}

void Moo2(int &c)
{
	c += 2;
}

int main()
{
	setlocale(LC_ALL, "ru");
	srand(time(NULL));
	std::cout << "Hello world\n\n\n";
	
	int arr[5]{ 3,4,5,1,3 };
	std::cout << *arr;

	//   X



	/*
	const int size = 6;
	int arrI[size];
	double arrD[size];
	char arrC[size];
	bool arrB[size];


	FillArray(arrI, size);
	FillArray(arrD, size);
	FillArray(arrC, size);
	FillArray(arrB, size);

	PrintArray(arrI, size);
	PrintArray(arrD, size);
	PrintArray(arrC, size);
	PrintArray(arrB, size);

	std::cout << "\n Проверка!\n\n" << Arifm(arrI, size) << "\n";
	std::cout << Arifm(arrD, size) << "\n";
	std::cout << Arifm(arrC, size) << "\n";
	std::cout << Arifm(arrB, size) << "\n";
	*/

	return 0;
}

void FillArray(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 100;
	}
}

void FillArray(double arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 100 * 0.01;
	}
}

void FillArray(char arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 32 + 'а';
	}
}

void FillArray(bool arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 2;
	}
}

void PrintArray(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		std::cout << arr[i] << " ";
	}
	std::cout << "\n";
}

void PrintArray(double arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		std::cout << arr[i] << " ";
	}
	std::cout << "\n";
}

void PrintArray(char arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		std::cout << arr[i] << " ";
	}
	std::cout << "\n";
}

void PrintArray(bool arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		std::cout << arr[i] << " ";
	}
	std::cout << "\n";
}
