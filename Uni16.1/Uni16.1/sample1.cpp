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
	out << "������ȣ " << temp.num << " : " << "���ᷮ " << temp.gas << "\n";
	return out;
}

int main()
{
	Car mycar(5678, 30.4);
	cout << mycar;

	int i;
	double d;
	char str[100];

	cout << "������ �Է��ϼ���. : ";
	cin >> i;
	cout << "�Ҽ��� �Է��ϼ���. : ";
	cin >> d;
	cout << "���ڿ��� �Է��ϼ���. :";
	cin >> str;

	cout << "�Է��� ���� ���� " << i << "�Դϴ�.\n";
	cout << "�Է��� �Ҽ� ���� " << d << "�Դϴ�.\n";
	cout << "�Է��� ���ڿ��� " << str << "�Դϴ�.\n";



	return 0;
}
