#pragma warning(disable:4996)
#include <iostream>
#include <cstring>
using namespace std;

class Car {

private:
	int num;
	double gas;
	char* pName;

public:
	Car(const char* pN, int n, double g);
	~Car();
	Car(const Car& c);				// ���� ������
	Car& operator=(const Car& c);	// ���� ������ �����ε�

};

Car::Car(const char* pN, int n, double g)
{
	pName = new char[strlen(pN) + 1];
	strcpy(pName, pN);
	num = n;
	gas = g;

	cout << pName << "�� �����Ͽ����ϴ�.\n";

}

Car::~Car()
{
	cout << pName << "�� �Ҹ��ŵ�ϴ�.\n";
	delete[] pName;
}

// ���� ������
Car::Car(const Car& c)
{
	cout << c.pName << "�� �ʱ�ȭ�մϴ�.\n";
	// ������ �ٸ� ���� Ȯ��
	pName = new char[strlen(c.pName) + strlen("�� ���纻 1") + 1];	
	strcpy(pName, c.pName);
	strcat(pName, "�� ���纻 1");

	num = c.num;
	gas = c.gas;
}

Car& Car::operator=(const Car& c)
{
	cout << pName << "�� " << c.pName << " �� �����մϴ�.\n";

	if (this != &c) {	// c�� ����Ű�� ���� ���� X, ���ο� ���� ���빰�� ���Ե�
		delete[] pName;
		pName = new char[strlen(c.pName) + strlen("�� ���纻 2") + 1];	// ���� ��� ��ŭ �����Ҵ�
		strcpy(pName, c.pName);
		strcat(pName, "�� ���纻 2");
		num = c.num;
		gas = c.gas;
	
	}

	return *this;	// ������� Car&
}


int main()
{
	Car mycar("mycar", 1234, 20.5);

	Car car1 = mycar;	// ���� ������

	Car car2("car2", 5542, 10.2);
	car2 = mycar;		// ���� ������

	return 0;
}