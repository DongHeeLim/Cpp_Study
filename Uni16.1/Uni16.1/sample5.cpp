#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	const double pi = 3.141592;
	const double route = 14.1234;
	int num;

	cout << "원주율을 출력합니다. \n";
	cout << "소수점 몇 번째 까지 출력하시겠습니까? (1~7) :";
	cin >> num;	

	streamsize prec = cout.precision();
	cout.precision(num);	//  지정된 소수점 자리만큼만 출력
	cout << "원주율은 " << pi << "입니다.\n";
	cout << route << "\n";
	cout.precision(prec);	// 초기화
	cout << "초기화된 원주율은 " << pi << "입니다.\n";

	// 헤더 iomanip 로 정밀도 설정과 초기화 범위를 최소화 가능
	streamsize prec2 = cout.precision(3);
	cout << route << setprecision(4) << setprecision(prec2) << "\n";

	return 0;
}