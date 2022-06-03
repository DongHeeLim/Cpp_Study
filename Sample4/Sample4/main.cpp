#include <iostream>
using namespace std;

class Car {
private:
	int num;
	double gas;
public:
	Car();
	void show();
};

Car::Car() {		// 생성자
	num = 0;
	gas = 0.0;

	cout << "자동차 제작 완료.\n";
}

void Car::show() {
	cout << "차량번호 : " << num << "\n";
	cout << "연료량   : "<< gas << "\n";

}


int main() {

	Car car1;	// 객체 생성시 초기화 -> 생성자
	car1.show();

	return 0;
}