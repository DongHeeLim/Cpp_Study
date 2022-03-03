#include <iostream>
using namespace std;

class Number {

private:
	int num;

public:
	Number() { num = 0; }
	Number(int n) { num = n; }
	operator int() { return num; }
	Number operator++();		// ����
	Number operator++(int d);	// ����
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
	int i = (int)n;		// cast ������ ���
	int j = n;			// cast �����ڰ� ���ǵǾ� ������ �׳� ��밡��

	Number n2(15);		// ��ȯ ������
	Number n3 = 17;		// cast ������ ���� ����

	return 0;
}
