#include <iostream>
using namespace std;

class Number {

private:
	int num;

public:
	Number() { num = 0; }
	Number(int n) { num = n; }
	operator int() { return num; }
	Number operator++();		// 전위
	Number operator++(int d);	// 후위
	Number operator--();
	Number operator--(int d);
};

Number Number::operator++() 
{
	num++;
	return *this;
}

Number Number::operator++(int d)
{
	Number n = *this;
	num++;
	return n;
}

Number Number::operator--()
{
	num--;
	return *this;
}

Number Number::operator--(int d)
{
	Number n = *this;
	num--;
	return n;
}


int main()
{
	Number n;
	int i = (int)n;		// cast 연산자 사용
	int j = n;			// cast 연산자가 정의되어 있으면 그냥 사용가능

	Number n2(15);		// 변환 생성자
	Number n3 = 17;		// cast 연산자 빼고 가능

	return 0;
}
