// task.cpp: определяет точку входа для консольного приложения.
//
#include "stdafx.h"
#include <locale.h>
#include <iostream>  // cout, cin ...
#include "task.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	int*  num = new int;;
	
	do
	{
		cout << "Задание 6. Указатели"<< endl;
		std::cout << "Выберите номер задания (1, 2, 3), ВЫХОД - 0\n";
		cin >> *num;
		switch (*num)
		{
		case 1: task_1(); break;
		case 2: task_2(); break;
		case 3: task_3(); break;
		default: break;
		}
	} while (*num > 0);
}