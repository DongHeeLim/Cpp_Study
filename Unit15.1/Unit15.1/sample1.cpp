#include <iostream>
using namespace std;

class Point {

private:
	int x;
	int y;

public:
	Point(int a = 0, int b = 0) { x = a; y = b; }
	void setX(int a) { x = a; }
	void setY(int b) { y = b; }
	void show() { cout << "x:" << x << " y:" << y << '\n'; }
	Point operator++();			// 전위 증가 연산자
	Point operator++(int d);	// 후위 증가 연산자
	// 프랜드 함수는 인수 파악하기 쉽고 같은 형태가 아니여도 됨
	friend Point operator+(Point p1, Point p2);	
	friend Point operator+(Point p, int a);
	friend Point operator+(int a, Point p);
	//Point operator+(const Point& p);	// 래퍼런스 사용 가능 참고용 p1 + p2 와 동일함
};

Point Point::operator++() 
{
	x++;
	y++;
	return *this;
}

Point Point::operator++(int d)
{
	Point p = *this;	// 자신은 그대로 두고 ++
	x++;
	y++;
	return p;
}

Point operator+(Point p1, Point p2)
{
	Point tmp;
	tmp.x = p1.x + p2.x;
	tmp.y = p1.y + p2.y;
	return tmp;
}

Point operator+(Point p, int a)
{
	Point tmp;
	tmp.x = p.x + a;
	tmp.y = p.y + a;
	return tmp;
}

Point operator+(int a, Point p)
{
	Point tmp;
	tmp.x = a + p.x;
	tmp.y = a + p.y;
	return tmp;
}


int main()
{
	Point p1(1, 2);
	Point p2(3, 5);

	p1 = p1 + p2;
	p1.show();
	p1++;
	p1.show();
	p1 = p1 + 3;
	p1.show();
	p2 = 3 + p2;

	p1.show();
	p2.show();

	++p1;

	p1.show();

	return 0;
}