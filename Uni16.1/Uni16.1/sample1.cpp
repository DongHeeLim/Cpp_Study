#include <iostream>
using namespace std;


class Car {

private:
	int num;
	double gas;
public:
	Car(int _num = 1234, double _gas = 20.0) { num = _num; gas = _gas; }
	void setCar(int _num, double _gas) { num = _num; gas = _gas; }
	friend ostream& operator<<(ostream& out, Car& c);

};

ostream& operator<<(ostream& out, Car& c)
{
	Car& temp = c;
	out << "차량번호 " << temp.num << " : " << "연료량 " << temp.gas << "\n";
	return out;
}

int main()
{
	Car mycar(5678, 30.4);
	cout << mycar;

	int i;
	double d;
	char str[100];

	cout << "정수를 입력하세요. : ";
	cin >> i;
	cout << "소수를 입력하세요. : ";
	cin >> d;
	cout << "문자열을 입력하세요. :";
	cin >> str;

	cout << "입력한 정수 값은 " << i << "입니다.\n";
	cout << "입력한 소수 값은 " << d << "입니다.\n";
	cout << "입력한 문자열은 " << str << "입니다.\n";



	return 0;
}
