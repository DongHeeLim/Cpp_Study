#include <iostream>
using namespace std;

class Car {

protected:	// 파생 클래스에서 접근 가능
	int num;
	double gas;

public:
	Car();
	void setCar(int n, double g);
	virtual void show();	// 가상 함수 ( 직관적 호출을 위해서 )
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
	Car* pCars[2];		// 기본 클래스형 포인터 2개 생성

	Car car1;			// 기본 클래스 객체 생성
	RacingCar rccar1;	// 파생 클래스 객체 생성

	pCars[0] = &car1;				// 기본 클래스가 대상
	pCars[0]->setCar(1234, 20.1);	

	pCars[1] = &rccar1;				// 파생 클래스가 대상
	pCars[1]->setCar(4567, 30.5);

	for (int i = 0; i < 2; i++)
	{
		pCars[i]->show();			// 각 대상의 show()를 호출함
	}


	return 0;
}

