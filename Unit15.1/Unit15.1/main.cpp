#include <iostream>
using namespace std;

class Point {

private:
	int x;
	int y;

public:
	Point(int a = 0, int b = 0) { x = a; y = b; }
	Point operator+(Point p);	// 자료형(리턴값) 연산자 + (오른쪽 변수)
	friend Point operator-(int a, Point p);
	Point operator++();
	void show();

};

// 구현

Point Point::operator+(Point p) 
{
	Point tmp;
	tmp.x = x + p.x;
	tmp.y = y + p.y;
	return tmp;
}

// 맴버 함수가 될 수 없는 연산자 함수
Point operator-(int a, Point p)		// friend 함수 왼쪽피연산자, 오른쪽 변수
{
	Point tmp;
	tmp.x = a - p.x;
	tmp.y = a - p.y;
	return tmp;
}

Point Point::operator++()
{
	x++;
	y++;
	return *this;
}

void Point::show()
{
	cout << "X : " << x << "\nY : " << y << "\n";
}

int main() 
{
	Point p1(2, 3);
	Point p2(4, 7);
	
	p1 = p1 + p2;
	p1.show();
	p1 = 5 - p2; // (5, 5) - (4, 7)
	p1.show();
	++p1;
	p1.show();

	return 0;
}