#include <iostream>
using namespace std;

class Car
{
private:
	int num;
	double gas;
public:
	Car(int n = 0, double g = 0);	// 기본 인수
	void show();
};

// 텅 빈 생성자 필요 없음

Car::Car(int n, double g)
{
	num = n;
	gas = g;

	cout << "차량번호가 " << num << "이며, 연료량이 " << gas << "인 자동차가 만들어졌습니다. \n";
}

void Car::show()
{
	cout << "차량번호는 " << num << "입니다.\n";
	cout << "연료량은 " << gas << "입니다. \n";
}

int main() 
{
	Car car1;	// 기본인수 받음
	Car car2(1234, 20.5);

	return 0;
}