#pragma warning(disable:4996)

#include <iostream>
#include <string>
using namespace std;


class Car {

private:
	int num;
	double gas;
	char* pName;
	
public:
	Car(const char* pN, int n, double g);	// ������
	~Car();							// �Ҹ���
	void show();

};

Car::Car(const char* pN, int n, double g) 
{
	pName = new char[strlen(pN) + 1];	// ���ڿ� -> ���� ���� + NULL , ���� �޸� Ȯ��
	strcpy(pName, pN);
	num = n;
	gas = g;
	cout << pName << "�� �����߽��ϴ�.\n";

}

Car::~Car()
{
	cout << pName << "�� �Ҹ��ŵ�ϴ�.\n";
	delete[] pName;	// �޸� ����
}

void Car::show()
{
	cout << "�� �̸���" << pName << "�Դϴ�.\n";
	cout << "���� ��ȣ��" << num << "�Դϴ�.\n";
	cout << "���ᷮ��" << gas << "�Դϴ�.\n";
}

int main() 
{
	Car car1("mycar", 1234, 25.1);
	car1.show();

	return 0;
}