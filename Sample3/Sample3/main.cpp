#pragma warning(disable: 4996)
#include <iostream>
#include <time.h>
#include "exercise.h"
using namespace std;


//클래스 선언
class Car {

	private:
		int num;
		double gas;

	public:
		void show();
		void setNumGas(int n, double g);

		// 함수 본체를 클래스 선언부에서 작성 -> 인라인 함수
		int getNum() { return num; }; 
		double getGas() { return gas; };
};

void Car::show() {
	cout << "차량번호 : " << num << "\n";
	cout << "연 료 량 : " << gas << "\n";
	cout << "==============출력================\n";
}

void Car::setNumGas(int n, double g){
	if (g > 0 && g < 1000) {
		num = n;	// 맴버 변수에 접근
		gas = g;
		cout << "=============입력=============\n";
		cout << "차량번호 : " << num << "\n";	
		cout << "연 료 량 : " << gas << "\n";
		cout << "==============================\n";
	}
	else {
		cout << g <<"올바른 연료량이 아닙니다.\n";
	}
}

void check(Car c);
void check2(Car* c);
void check3(Car& c);
int PrintCurrentTime(void);


int main() {

	Car car1;
	//car1.num = 1234; private 클래스 접근 지정자로 제한
	//car1.gas = 12.4;
	car1.setNumGas(1234, 12.4);
	//car1.show();
	//check(car1);
	//check2(&car1);
	check3(car1);


	Car* pCar;	// 클래스 포인터 접근, 객체 생성
	pCar = new Car;
	pCar->setNumGas(5678, -10);
	//pCar->show();
	//pCar->num = 5678;
	//pCar->gas = 25.1;

	delete pCar;	// 객체 제거

	Position position;
	//position.setX(2);
	//position.setY(5);

	//showPosition(&position);
	setPoint(&position);

	return 0;
}

// 객체를 인수로 받아 맴버 복사
void check(Car c) {
	int n = c.getNum();
	double g = c.getGas();

	cout << "차량번호 : " << n << "\n";
	cout << "연 료 량 : " << g << "\n";
	PrintCurrentTime();
	cout << " 에 정기 점검을 받으셨습니다.\n";
}

// 주소 받아옴
void check2(Car* c) {
	int n = c->getNum();
	double g = c->getGas();

	cout << "차량번호 : " << n << "\n";
	cout << "연 료 량 : " << g << "\n";
	PrintCurrentTime();
	cout << " 에 정기 점검을 받으셨습니다.\n";
}

// 레퍼런스
void check3(Car& c) {
	int n = c.getNum();
	double g = c.getGas();

	cout << "차량번호 : " << n << "\n";
	cout << "연 료 량 : " << g << "\n";
	PrintCurrentTime();
	cout << " 에 정기 점검을 받으셨습니다.\n";
}




// 시간 출력 함수 
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