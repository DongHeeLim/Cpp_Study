#include <iostream>
#define SCORESIZE 2
#include "myfunc.h"	// ���� �� ���, ���� �Լ� �� ����ü ���

using namespace std;

int snum;

int max(int x, int y) {
	if (x > y)
		return x;
	else
		return y;
}

void insertCarData() {
	Car car1 = { 0, 0.0 };

	cout << "���� ��ȣ�� �Է��Ͻʽÿ�\n-> ";
	cin >> car1.number;

	cout << "���ᷮ�� �Է��Ͻʽÿ� \n-> ";
	cin >> car1.gas;

	show(&car1);
	showR(car1);
}

// ����ü �ּ� �ޱ�
void show(Car* pCar) {
	cout << "������ȣ : " << pCar->number << "\n�� �� �� : " << pCar->gas << "\n";
}

// ����ü ���۷���
void showR(Car& rCar) {
	cout << "������ȣ : " << rCar.number << "\n�� �� �� : " << rCar.gas << "\n";
}

int* func() {

	// static �� ������� ������ �Լ��� ������ �������� a�� �ı��Ǿ �����Ͱ� ������ ����Ű���� �� �� ����
	static int a = 15;
	int* pA = &a;
	cout << pA << '\n';
	return pA;
}

void setWeek(Week week) {	// enum class?? ���??
	Week w;
	w = week;

	switch (w)
	{
	case SUN:
		cout << "�Ͽ����Դϴ�.\n";
		break;
	case MON:
		cout << "�������Դϴ�.\n";
		break;
	case TUE:
		cout << "ȭ�����Դϴ�.\n";
		break;
	case WED:
		cout << "�������Դϴ�.\n";
		break;
	case THU:
		cout << "������Դϴ�.\n";
		break;
	case FRI:
		cout << "�ݿ����Դϴ�.\n";
		break;
	case SAT:
		cout << "������Դϴ�.\n";
		break;
	default:
		cout << "���� �������� �� �� �����ϴ�.\n";
		break;
	}
}

void saveDynamicHeap() {

	int num;
	int* pT;

	cout << "��� �� : ";

	cin >> num;

	pT = new int[num];

	cout << num << " �� ���� ������ �Է��ϼ���.\n";

	for (int i = 0; i < num; i++)
	{
		cin >> pT[i];
	}

	for (int j = 0; j < num; j++)
	{
		cout << j + 1 << "��° ����� ������ " << pT[j] << " �Դϴ�.\n";
	}

	delete[] pT;
}



void updateScore() {

	int score[SCORESIZE];
	int addScore = 0;

	cout << "2���� ���� ������ �Է��Ͻʽÿ�." << "\n";

	for (int i = 0; i < SCORESIZE; i++)
	{
		cout << "-> ";
		cin >> score[i];
	}


	cout << "���� ������ �Է��Ͻʽÿ�" << "\n-> ";

	cin >> addScore;

	for (int i = 0; i < SCORESIZE; i++)
	{
		cout << "����" << i + 1 << "��(��) " << score[i] + addScore << " �Ǿ����ϴ�.\n";
	}
}