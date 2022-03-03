#include <iostream>
using namespace std;

class Vehicle {

protected:
	int speed;

public:
	void setSpeed(int s);
	virtual void show() = 0;	// 순수 가상 함수

};

class Car : public Vehicle{
	
private:
	int num;
	double gas;

public:
	Car(int n, double g);
	void show();

};

class Plane : public Vehicle {

private:
	int flight;
	
public:
	Plane(int f);
	void show();

};


void Vehicle::setSpeed(int s) 
{
	speed = s;
	cout << "속도를 " << speed << " 로 변경했습니다.\n";
}

Car::Car(int n, double g)
{
	num = n;
	gas = g;
	cout << "차량 번호가 " << num << "이고, 연료량이 " << gas << "인 자동차가 만들어졌습니다.\n";
}

void Car::show() 
{
	cout << "차량 번호는 " << num << "입니다.\n";
	cout << "연료량은 " << gas << "입니다.\n";
	cout << "속도는 " << speed << "입니다.\n";
}

Plane::Plane(int f) 
{
	flight = f;
	cout << "비행기 번호가 " << flight << "인 비행기가 만들어졌습니다.\n";
}

void Plane::show()
{
	cout << "비행기 번호는 " << flight << "입니다.\n";
	cout << "속도는 " << speed << "입니다.\n";
}


int main()
{
	Vehicle* pVc[2];

	Car car1(1234, 10.5);
	pVc[0] = &car1;
	pVc[0]->setSpeed(60);


	Plane pln1(707);
	pVc[1] = &pln1;
	pVc[1]->setSpeed(300);

	for (int i = 0; i < 2; i++)
	{
		pVc[i]->show();
	}


	return 0;
}