#include <iostream>
#include <string>
#include <Windows.h>
#include <fstream>
#include "Student.h"
using namespace std;
Student* students;
int n, id = 0;
int main()
{
	setlocale(LC_ALL, "rus");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	char SwVal = '0';
	do {
		cout << "������� ���������� ���������: " << endl;
		cin >> n;
	} while (n <= 0);
	students = new Student[n];
	while (SwVal != '7')
	{
		try
		{
			cout << "1 - ������ ������� \n2 - ����� ���� ��������� \n3 - ������������� ������� \n4 - ������� ������� \n5 - ������� 2 \n6 - ����� ��������� � 4 � 5 \n7 - �����\n����� ���� : ";
				cin >> SwVal;
			if (SwVal == '1')
			{
				
			}
			else if (SwVal == '2')
			{
				
			}
			else if (SwVal == '3')
			{
				
			}
			else if (SwVal == '4')
			{
				
			}
			else if (SwVal == '5')
			{
				
			}
			else if (SwVal == '6')
			{
				
			}
			else if (SwVal == '7')
			{
				break;
			}
			else
			{
				throw exception("�������� ����� ����");
			}
		}
		catch (const exception& exp)
		{
			cout << "����������: " << exp.what() << endl;
		}
		system("pause");
		system("cls");
	}
	
}

