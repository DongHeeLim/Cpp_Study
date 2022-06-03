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
	Car(const Car& c);				// 복사 생성자
	Car& operator=(const Car& c);	// 대입 연산자 오버로드

};

Car::Car(const char* pN, int n, double g)
{
	pName = new char[strlen(pN) + 1];
	strcpy(pName, pN);
	num = n;
	gas = g;

	cout << pName << "를 생성하였습니다.\n";

}

Car::~Car()
{
	cout << pName << "를 소멸시킵니다.\n";
	delete[] pName;
}

// 복사 생성자
Car::Car(const Car& c)
{
	cout << c.pName << "로 초기화합니다.\n";
	// 기존과 다른 공간 확보
	pName = new char[strlen(c.pName) + strlen("의 복사본 1") + 1];	
	strcpy(pName, c.pName);
	strcat(pName, "의 복사본 1");

	num = c.num;
	gas = c.gas;
}

Car& Car::operator=(const Car& c)
{
	cout << pName << "에 " << c.pName << " 를 대입합니다.\n";

	if (this != &c) {	// c가 가리키는 것이 대입 X, 새로운 곳에 내용물이 대입됨
		delete[] pName;
		pName = new char[strlen(c.pName) + strlen("의 복사본 2") + 1];	// 대입 대상 만큼 동적할당
		strcpy(pName, c.pName);
		strcat(pName, "의 복사본 2");
		num = c.num;
		gas = c.gas;
	
	}

	return *this;	// 결과값이 Car&
}


int main()
{
	Car mycar("mycar", 1234, 20.5);

	Car car1 = mycar;	// 복사 생성자

	Car car2("car2", 5542, 10.2);
	car2 = mycar;		// 대입 연산자

	return 0;
}