// 26.11.2020 classwork.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

const int calculator = 1000;
char array[calculator];


void Initialization() {
	const int calculator = 1000;
	char array[calculator];

	system("cls");
	printf("Введите пример: ");
	cin >> array;

	int firstNumber = array[0];
	int secondNumber = array[2];


	switch (array[1]) {
	case '+':
		int sum = atoi(firstNumber) + secondNumber;
		cout << sum;
		break;
	}
}



int main()
{
	setlocale(LC_ALL, "rus");
	Initialization();
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
