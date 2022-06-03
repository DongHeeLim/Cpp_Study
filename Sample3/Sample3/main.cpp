#pragma warning(disable: 4996)
#include <iostream>
#include <time.h>
#include "exercise.h"
using namespace std;


//Ŭ���� ����
class Car {

	private:
		int num;
		double gas;

	public:
		void show();
		void setNumGas(int n, double g);

		// �Լ� ��ü�� Ŭ���� ����ο��� �ۼ� -> �ζ��� �Լ�
		int getNum() { return num; }; 
		double getGas() { return gas; };
};

void Car::show() {
	cout << "������ȣ : " << num << "\n";
	cout << "�� �� �� : " << gas << "\n";
	cout << "==============���================\n";
}

void Car::setNumGas(int n, double g){
	if (g > 0 && g < 1000) {
		num = n;	// �ɹ� ������ ����
		gas = g;
		cout << "=============�Է�=============\n";
		cout << "������ȣ : " << num << "\n";	
		cout << "�� �� �� : " << gas << "\n";
		cout << "==============================\n";
	}
	else {
		cout << g <<"�ùٸ� ���ᷮ�� �ƴմϴ�.\n";
	}
}

void check(Car c);
void check2(Car* c);
void check3(Car& c);
int PrintCurrentTime(void);


int main() {

	Car car1;
	//car1.num = 1234; private Ŭ���� ���� �����ڷ� ����
	//car1.gas = 12.4;
	car1.setNumGas(1234, 12.4);
	//car1.show();
	//check(car1);
	//check2(&car1);
	check3(car1);


	Car* pCar;	// Ŭ���� ������ ����, ��ü ����
	pCar = new Car;
	pCar->setNumGas(5678, -10);
	//pCar->show();
	//pCar->num = 5678;
	//pCar->gas = 25.1;

	delete pCar;	// ��ü ����

	Position position;
	//position.setX(2);
	//position.setY(5);

	//showPosition(&position);
	setPoint(&position);

	return 0;
}

// ��ü�� �μ��� �޾� �ɹ� ����
void check(Car c) {
	int n = c.getNum();
	double g = c.getGas();

	cout << "������ȣ : " << n << "\n";
	cout << "�� �� �� : " << g << "\n";
	PrintCurrentTime();
	cout << " �� ���� ������ �����̽��ϴ�.\n";
}

// �ּ� �޾ƿ�
void check2(Car* c) {
	int n = c->getNum();
	double g = c->getGas();

	cout << "������ȣ : " << n << "\n";
	cout << "�� �� �� : " << g << "\n";
	PrintCurrentTime();
	cout << " �� ���� ������ �����̽��ϴ�.\n";
}

// ���۷���
void check3(Car& c) {
	int n = c.getNum();
	double g = c.getGas();

	cout << "������ȣ : " << n << "\n";
	cout << "�� �� �� : " << g << "\n";
	PrintCurrentTime();
	cout << " �� ���� ������ �����̽��ϴ�.\n";
}




// �ð� ��� �Լ� 
int PrintCurrentTime(void)
{
	// Get the current time 
	time_t curTime = time(NULL);

	// Convert the current time 
	struct tm* pLocal = NULL;
#if defined(_WIN32) || defined(_WIN64) 
	pLocal = localtime(&curTime);
#else 
	localtime_r(&curTime, pLocal);
#endif 
	if (pLocal == NULL)
	{
		// Failed to convert the current time 
		return 1;
	}

	// Print the current time 
	printf("%04d-%02d-%02d T %02d:%02d:%02d",
		pLocal->tm_year + 1900, pLocal->tm_mon + 1, pLocal->tm_mday,
		pLocal->tm_hour, pLocal->tm_min, pLocal->tm_sec);

	// Return success 
	return 0;
}