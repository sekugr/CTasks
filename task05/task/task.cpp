// task.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
//#include <pch.h>
#include <locale.h>
#include <iostream>  // cout, cin ...
#include "task.h"



using namespace std;

int main()
{

	int number = 0;
	
	setlocale(LC_ALL, "rus");

	do
	{

		std::cout << "Выберите номер задания (1, 2, 3), -1 ВЫХОД\n";
		cin >> number;
		
		switch (number)
		{
		case 1: task_1(); break;
		case 2: task_2(); break;
		case 3: task_3(); break;
		default: break;
		}
		
	} while (number > -1);
}