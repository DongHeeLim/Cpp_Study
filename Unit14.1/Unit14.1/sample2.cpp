#include <iostream>
using namespace std;

class Car {

private:
	int num;
	double gas;

public:
	Car();
	Car(int n, double g);
	void setCar(int n, double g);
	void show();

};

class RacingCar : public Car {

private:
	int course;

public:
	RacingCar();
	RacingCar(int n, double g, int c);
	void setCourse(int c);

};

Car::Car()
{
	num = 0;
	gas = 0.0;
	cout << "자동차가 만들어졌습니다.\n";
}

Car::Car(int n, double g) 
{
	num = n;
	gas = g;

	cout << "차량 번호는 " << num << "이고, 연료량은 " << gas << "입니다.\n";
}

void Car::setCar(int n, double g)
{
	num = n;
	gas = g;
	cout << "차량 번호는 " << num << " 으로, 연료량은" << gas << " 으로 바뀌었습니다.\n";
}

void Car::show() 
{
	cout << "차량 번호는 " << num << "입니다.\n";
	cout << "연료량은 " << gas << "입니다.\n";
}

RacingCar::RacingCar()
{
	course = 0;
	cout << "레이싱 카가 만들어졌습니다.\n";
}

RacingCar::RacingCar(int n, double g, int c) : Car(n, g)	// 두 인수 받는 생성자 호출
{
	course = c;
	cout << "코스 번호가 " << course << "인 레이싱 카가 만들어졌습니다. \n";
}

void RacingCar::setCourse(int c)
{
	course = c;
	cout << "코스 번호를 " << course << " 로 했습니다.\n";
}

int main()
{
	RacingCar rccar1(1234, 30.5, 3);	// 인수 2개 받는 기본 클래스 생성자 + 인수 3개 받는 파생 클래스 생성자

	return 0;
}