#include <iostream>
using namespace std;

class Car {

protected:	// 파생 클래스에서 접근 가능
	int num;
	double gas;
	
public:
	Car();
	void setCar(int n, double g);
	void show();
};

class RacingCar : public Car {

private:
	int course;

public:
	RacingCar();
	void setCourse(int c);
	void show();

};

Car::Car() {
	num = 0;
	gas = 0.0;

	cout << "자동차가 만들어졌습니다.\n";
}

void Car::setCar(int n, double g) 
{
	num = n;
	gas = g;

	cout << "차량 번호를 " << num << "으로, 연료량을 " << gas << "으로 바꾸었습니다.\n";
}

void Car::show()
{
	cout << "차량 번호는" << num << "입니다.\n";
	cout << "연료량은" << gas << "입니다.\n";
}

RacingCar::RacingCar()
{
	course = 0;
	cout << "레이싱 카가 만들어졌습니다.\n";
}

void RacingCar::setCourse(int c) 
{
	course = c;
	cout << "코스 번호를 " << course << " 로 정했습니다.\n";
}

void RacingCar::show() 
{
	cout << "레이싱 카의 차량 번호는 " << num << " 입니다.\n";
	cout << "연료량은 " << gas << " 입니다.\n";
	cout << "코스 번호는 " << course << " 입니다.\n";
}

int main()
{
	RacingCar rccar1;	// 기본 클래스 생성자, 파생 클래스 생성자
	rccar1.setCar(1234, 30.4);	// 기본 클래스 맴버 함수
	rccar1.setCourse(2);		// 파생 클래스 맴버 함수

	rccar1.show();	// 파생 클래스의 맴버 함수 show() -> 오버라이드

	return 0;
}

