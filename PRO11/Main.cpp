#include <iostream>
#include <Windows.h>



int main()
{
	setlocale(LC_ALL, "ru");

	std::cout << "Hello world\n\n\n";

	/*
	int num = 0;
	int sum = 0;

	while (true)
	{
		std::cin >> num;
		if (num == 0)
		{
			break;
		}
		sum = sum + num;
	}
	
	std::cout << sum << '\n' << " " << 123;
	*/

	/*
	double rub = 0, dollar = 81.65, euro = 94.75, yuan = 11.45, farit = 37., yena = 0.54;
	int choose = 0;
	double comission = 0, percent = 0.05;

	Sleep(1000);

	while (true)
	{
		system("cls"); // очистка консоли от информации
		std::cout << "Конвертер валют\n\n";

		while (true)
		{
			std::cout << "Введите кол-во рублей для обмена: ";
			std::cin >> rub;
			if (rub >= 100)
			{
				break;
			}
			std::cout << "Некорректный ввод. Минимальный взнос - 100 руб\n\n";
			system("pause");
			system("cls");
		}

		while (true)
		{
			std::cout << "Выберите валюту для покупки\n";
			std::cout << "1 - Доллар\t" << dollar << " руб\n";
			std::cout << "2 - Евро\t" << euro << " руб\n";
			std::cout << "3 - Юань\t" << yuan << " руб\n";
			std::cout << "4 - Фарит\t" << farit << " руб\n";
			std::cout << "5 - Йена\t" << yena << " руб\n";
			std::cin >> choose;
			if (choose > 0 || choose < 6)
			{
				break;
			}
			std::cout << "Некорректный ввод\n\n";
			system("pause");
			system("cls");
		}

		comission = rub * percent;
		rub -= comission;

		if (choose == 1)
		{
			std::cout << "К покупке: " << rub / dollar << " долларов\nКомиссия составила: "
				<< comission << " рублей\n\n";
		}
		else if (choose == 2)
		{
			std::cout << "К покупке: " << rub / euro << " евро\nКомиссия составила: "
				<< comission << " рублей\n\n";
		}
		else if (choose == 3)
		{
			std::cout << "К покупке: " << rub / yuan << " юаней\nКомиссия составила: "
				<< comission << " рублей\n\n";
		}
		else if (choose == 4)
		{
			std::cout << "К покупке: " << rub / farit << " Фаритов\nКомиссия составила: "
				<< comission << " рублей\n\n";
		}
		else if (choose == 5)
		{
			std::cout << "К покупке: " << rub / yena << " Йен\nКомиссия составила: "
				<< comission << " рублей\n\n";
		}


		while (true)
		{
			std::cout << "Повторим?\n1 - Да\n2 - Нет\nВвод: ";
			std::cin >> choose;
			if (choose < 1 || choose > 2)
			{
				std::cout << "Ошибка ввода\n";
				system("pause");
				system("cls");
			}
			else
			{
				break;
			}
		}

		if (choose == 2)
		{
			system("cls");
			std::cout << "Спасибо за использование программы\n\n";
			break;
		}

	}
	*/

	/*
		
		тип_данных имя_массива[кол-во_ячеек];
	
	*/

	const int size = 10;

	int arr[size]{};
	
	for (int i = 0; i < size; i++)
	{
		arr[i] = i + 1;
		std::cout << arr[i] << " ";
	}

	std::cout << "\n\n";
	
	for (int i = size - 1; i >= 0; i--)
	{
		std::cout << arr[i] << " ";
	}
	
	return 0;
}









