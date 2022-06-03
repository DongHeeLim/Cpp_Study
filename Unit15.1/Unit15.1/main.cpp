#include <iostream>
using namespace std;

class Point {

private:
	int x;
	int y;

public:
	Point(int a = 0, int b = 0) { x = a; y = b; }
	Point operator+(Point p);	// �ڷ���(���ϰ�) ������ + (������ ����)
	friend Point operator-(int a, Point p);
	Point operator++();
	void show();

};

// ����

Point Point::operator+(Point p) 
{
	Point tmp;
	tmp.x = x + p.x;
	tmp.y = y + p.y;
	return tmp;
}

// �ɹ� �Լ��� �� �� ���� ������ �Լ�
Point operator-(int a, Point p)		// friend �Լ� �����ǿ�����, ������ ����
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