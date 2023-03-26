#include <iostream>
#include "subcone.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	int size;
	cout << "������� ���-�� ��������� �������\n";
	cin >> size;

	subcone* C = new subcone[size];

	cout << "\n";
	cout << "������� ��������� ����� � ������� {x y z R H subH}\n";

	for (int i = 0; i < size; i++)
	{
		cout << "������� ������ ��������� ������ ����� " << i + 1 << ": ";
		cin >> C[i];
	}

	for (int i = 0; i < size; i++)
	{
		cout << "\n";
		cout << "������ ������ ����� " << i + 1 << ":\n";
		cout << C[i] << "\n";
		cout << "S = " << C[i].area() << "\n";
		cout << "V = " << C[i].volume() << "\n";
	}

	return 0;
}