#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	const double pi = 3.141592;
	const double route = 14.1234;
	int num;

	cout << "�������� ����մϴ�. \n";
	cout << "�Ҽ��� �� ��° ���� ����Ͻðڽ��ϱ�? (1~7) :";
	cin >> num;	

	streamsize prec = cout.precision();
	cout.precision(num);	//  ������ �Ҽ��� �ڸ���ŭ�� ���
	cout << "�������� " << pi << "�Դϴ�.\n";
	cout << route << "\n";
	cout.precision(prec);	// �ʱ�ȭ
	cout << "�ʱ�ȭ�� �������� " << pi << "�Դϴ�.\n";

	// ��� iomanip �� ���е� ������ �ʱ�ȭ ������ �ּ�ȭ ����
	streamsize prec2 = cout.precision(3);
	cout << route << setprecision(4) << setprecision(prec2) << "\n";

	return 0;
}