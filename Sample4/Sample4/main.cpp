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

Car::Car() {		// ������
	num = 0;
	gas = 0.0;

	cout << "�ڵ��� ���� �Ϸ�.\n";
}

void Car::show() {
	cout << "������ȣ : " << num << "\n";
	cout << "���ᷮ   : "<< gas << "\n";

}


int main() {

	Car car1;	// ��ü ������ �ʱ�ȭ -> ������
	car1.show();

	return 0;
}