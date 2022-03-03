#include <iostream>
using namespace std;

class Car {

protected:	// �Ļ� Ŭ�������� ���� ����
	int num;
	double gas;

public:
	Car();
	void setCar(int n, double g);
	virtual void show();	// ���� �Լ� ( ������ ȣ���� ���ؼ� )
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

	cout << "�ڵ����� ����������ϴ�.\n";
}

void Car::setCar(int n, double g)
{
	num = n;
	gas = g;

	cout << "���� ��ȣ�� " << num << "����, ���ᷮ�� " << gas << "���� �ٲپ����ϴ�.\n";
}

void Car::show()
{
	cout << "���� ��ȣ��" << num << "�Դϴ�.\n";
	cout << "���ᷮ��" << gas << "�Դϴ�.\n";
}

RacingCar::RacingCar()
{
	course = 0;
	cout << "���̽� ī�� ����������ϴ�.\n";
}

void RacingCar::setCourse(int c)
{
	course = c;
	cout << "�ڽ� ��ȣ�� " << course << " �� ���߽��ϴ�.\n";
}

void RacingCar::show()
{
	cout << "���̽� ī�� ���� ��ȣ�� " << num << " �Դϴ�.\n";
	cout << "���ᷮ�� " << gas << " �Դϴ�.\n";
	cout << "�ڽ� ��ȣ�� " << course << " �Դϴ�.\n";
}

int main()
{
	Car* pCars[2];		// �⺻ Ŭ������ ������ 2�� ����

	Car car1;			// �⺻ Ŭ���� ��ü ����
	RacingCar rccar1;	// �Ļ� Ŭ���� ��ü ����

	pCars[0] = &car1;				// �⺻ Ŭ������ ���
	pCars[0]->setCar(1234, 20.1);	

	pCars[1] = &rccar1;				// �Ļ� Ŭ������ ���
	pCars[1]->setCar(4567, 30.5);

	for (int i = 0; i < 2; i++)
	{
		pCars[i]->show();			// �� ����� show()�� ȣ����
	}


	return 0;
}

