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
	Car(const char* pN, int n, double g);	// 생성자
	~Car();							// 소멸자
	void show();

};

Car::Car(const char* pN, int n, double g) 
{
	pName = new char[strlen(pN) + 1];	// 문자열 -> 문자 개수 + NULL , 동적 메모리 확보
	strcpy(pName, pN);
	num = n;
	gas = g;
	cout << pName << "를 생성했습니다.\n";

}

Car::~Car()
{
	cout << pName << "를 소멸시킵니다.\n";
	delete[] pName;	// 메모리 해제
}

void Car::show()
{
	cout << "차 이름은" << pName << "입니다.\n";
	cout << "차량 번호는" << num << "입니다.\n";
	cout << "연료량은" << gas << "입니다.\n";
}

int main() 
{
	Car car1("mycar", 1234, 25.1);
	car1.show();

	return 0;
}