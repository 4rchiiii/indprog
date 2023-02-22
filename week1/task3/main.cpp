#include <iostream>
#include <vector>
#include <string>
#include "figure.h"

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	vector<Figure> mas;
	float x1, x2, x3, x4, y1, y2, y3, y4;
	for (int i = 0; i < 3; i++)
	{
		cout << "¬ведите координаты x1,x2,x3,x4,y1,y2,y3,y4 дл€ четырехугольника є" << i + 1 << endl;
		cin >> x1 >> x2 >> x3 >> x4 >> y1 >> y2 >> y3 >> y4;
		mas.push_back(Figure(x1, x2, x3, x4, y1, y2, y3, y4));
	}
	for (int i = 0; i < 3; i++)
	{
		cout << "\n„етырЄхугольник є " << i + 1 << " : "; mas[i].show();
		cout << "\nявл€етс€ ли пр€моугольником четырехугольник  є " << i + 1 << " : " << mas[i].is_prug() << endl;
		cout << "\nявл€етс€ ли квадратом четырехугольник  є " << i + 1 << " : " << mas[i].is_square() << endl;
		cout << "\nявл€етс€ ли ромбом четырехугольник  є " << i + 1 << " : " << mas[i].is_romb() << endl;
		cout << "\nћожно ли вписать окружность в четырехугольник  є " << i + 1 << " : " << mas[i].is_in_circle() << endl;
		cout << "\nћожно ли описать четырехугольник  є " << i + 1 << " : " << mas[i].is_out_circle() << endl;
	}
}