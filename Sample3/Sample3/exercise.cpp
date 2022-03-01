#include <iostream>
#include "exercise.h"
using namespace std;


void Position::setX(int a) {

	if (a >= 0 && a <= 10)
	{
		x = a;
	}
	else {
		x = 0;
	}
	/*cout << "X ÁÂÇ¥¸¦ ÀÔ·ÂÇØÁÖ¼¼¿ä.\n-> ";
	cin >> a;
	x = a;*/
}

void Position::setY(int b) {

	if (b >= 0 && b <= 10)
	{
		y = b;
	}
	else {
		y = 0;
	}
	/*cout << "Y ÁÂÇ¥¸¦ ÀÔ·ÂÇØÁÖ¼¼¿ä.\n-> ";
	cin >> b;
	y = b;*/
}

void showPosition(Position* p) {
	int x = p->getX();
	int y = p->getY();

	cout << "ÁÂÇ¥´Â ( " << x << ", " << y << " )ÀÔ´Ï´Ù.\n";
}

void setPoint(Position* p) {
	int x_value, y_value;

	cout << "X ÁÂÇ¥\n->";
	cin >> x_value;
	cout << "Y ÁÂÇ¥\n->";
	cin >> y_value;

	p->setX(x_value);
	p->setY(y_value);

	showPosition(p);
}