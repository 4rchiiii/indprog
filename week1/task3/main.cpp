#include <iostream>
#include <vector>
#include <string>
#include "figure.h"

using namespace std;

int main() {
	vector<Figure> mas;
	float x1, x2, x3, x4, y1, y2, y3, y4;
	for (int i = 0; i < 3; i++)
	{
		cout << "Enter the coordinates x1,x2,x3,x4,y1,y2,y3,y4 for quadrilateral no." << i + 1 << endl;
		cin >> x1 >> x2 >> x3 >> x4 >> y1 >> y2 >> y3 >> y4;
		mas.push_back(Figure(x1, x2, x3, x4, y1, y2, y3, y4));
	}
	for (int i = 0; i < 3; i++)
	{
		cout << "\nQuadrilateral No. " << i + 1 << " : "; mas[i].show();
		cout << "\nßIs a rectangle a quadrilateral No. " << i + 1 << " : " << mas[i].is_prug() << endl;
		cout << "\nIs a square a quadrilateral No. " << i + 1 << " : " << mas[i].is_square() << endl;
		cout << "\nIs a rhombus a quadrilateral No. " << i + 1 << " : " << mas[i].is_romb() << endl;
		cout << "\nCan a circle be inscribed in a quadrilateral No. " << i + 1 << " : " << mas[i].is_in_circle() << endl;
		cout << "\nIs it possible to describe a quadrilateral No. " << i + 1 << " : " << mas[i].is_out_circle() << endl;
	}
}