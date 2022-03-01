#pragma once


class Position {

private:
	int x;
	int y;

public:
	void setX(int a);
	void setY(int b);
	int getX() { return x; };
	int getY() { return y; };
};

void showPosition(Position* p);
void setPoint(Position* p);