#include <iostream>
#define SCORESIZE 2
#include "myfunc.h"	// 본인 것 사용, 본인 함수 및 구조체 등등

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

	cout << "차량 번호를 입력하십시오\n-> ";
	cin >> car1.number;

	cout << "연료량을 입력하십시오 \n-> ";
	cin >> car1.gas;

	show(&car1);
	showR(car1);
}

// 구조체 주소 받기
void show(Car* pCar) {
	cout << "차량번호 : " << pCar->number << "\n연 료 량 : " << pCar->gas << "\n";
}

// 구조체 레퍼런스
void showR(Car& rCar) {
	cout << "차량번호 : " << rCar.number << "\n연 료 량 : " << rCar.gas << "\n";
}

int* func() {

	// static 을 사용하지 않으면 함수가 끝나면 지역변수 a가 파괴되어서 포인터가 무엇을 가리키는지 알 수 없음
	static int a = 15;
	int* pA = &a;
	cout << pA << '\n';
	return pA;
}

void setWeek(Week week) {	// enum class?? 사용??
	Week w;
	w = week;

	switch (w)
	{
	case SUN:
		cout << "일요일입니다.\n";
		break;
	case MON:
		cout << "월요일입니다.\n";
		break;
	case TUE:
		cout << "화요일입니다.\n";
		break;
	case WED:
		cout << "수요일입니다.\n";
		break;
	case THU:
		cout << "목요일입니다.\n";
		break;
	case FRI:
		cout << "금요일입니다.\n";
		break;
	case SAT:
		cout << "토요일입니다.\n";
		break;
	default:
		cout << "무슨 요일인지 알 수 없습니다.\n";
		break;
	}
}

void saveDynamicHeap() {

	int num;
	int* pT;

	cout << "사람 수 : ";

	cin >> num;

	pT = new int[num];

	cout << num << " 명 분의 점수를 입력하세요.\n";

	for (int i = 0; i < num; i++)
	{
		cin >> pT[i];
	}

	for (int j = 0; j < num; j++)
	{
		cout << j + 1 << "번째 사람의 점수는 " << pT[j] << " 입니다.\n";
	}

	delete[] pT;
}



void updateScore() {

	int score[SCORESIZE];
	int addScore = 0;

	cout << "2과목 분의 점수를 입력하십시오." << "\n";

	for (int i = 0; i < SCORESIZE; i++)
	{
		cout << "-> ";
		cin >> score[i];
	}


	cout << "더할 점수를 입력하십시오" << "\n-> ";

	cin >> addScore;

	for (int i = 0; i < SCORESIZE; i++)
	{
		cout << "과목" << i + 1 << "은(는) " << score[i] + addScore << " 되었습니다.\n";
	}
}