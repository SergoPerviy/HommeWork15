#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
	setlocale(LC_ALL, "Russian");

	int n{};
	int const size = 10;
	int mx[size][size];

	std::cout << "Матрица:\n\n";

	srand(time(NULL));
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			mx[i][j] = rand() % 100;
			std::cout << mx[i][j] << '\t';
		}
		std::cout << "\n";
	}

	/*
	Задача 1. 
	Напишите программу, которая считает сумму каждого отдельного ряда и выводит все найденные суммы в консоль.
	*/

	std::cout << "\nЗадача №1. Сумма рядов.\n\n";

	for (int i = 0; i < size; i++) {
		int sum{};
		for (int j = 0; j < size; j++) {
			sum += mx[i][j];
		}
		std::cout << "Сумма " << i+1 << " ряда = " << sum << "\n";
		}
		std::cout << "\n\n";	

	/*
	Задача 2.
	Пользователь вводит число N от 0 до 9. Программа сортирует соответствующий ряд массива и выводит его.
	*/

	std::cout << "Задача №2. Сортировка ряда\nВведите число от 0 до 9 -> ";
	std::cin >> n;
	
	for (int k = 0; k < size * size; k++) {
		for (int i = n; i < size; i++) {
			for (int j = 0; j < size-1; j++) {
				if (mx[i][j] > mx[i][j + 1]) {
					int tmp = mx[i][j];
					mx[i][j] = mx[i][j + 1];
					mx[i][j + 1] = tmp;
				}
			}
		}
	}

	std::cout << "Отсортированная матрица:\n\n";
		
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			std::cout << mx[i][j] << '\t';
		}
		std::cout << '\n';
	}
	
	return 0;
}
