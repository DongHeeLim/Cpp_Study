#include <iostream>
#include <string.h>
using namespace std;

void say_hello(string greeting = "Hello") {
	cout << "Say " << greeting + '\n';

	cout << "Seeya!~\n";
}

// �ζ��� �Լ�
inline int max(int x, int y) { if (x > y) return x; else return y;}	// ȣ���� �ƴ� ��ũ�� ����
inline double max(double x, double y) { if (x > y) return x; else return y;}	// �����ε�(�ߺ�����)

template <class Type>	// �Լ� ���ø�
Type maxt(Type x, Type y)
{
	if (x > y)
		return x;
	else
		return y;
}

int square(int x);
void swap(int& x, int& y);


int main() {
	cout << "hi �ȳ�! \n";
	cout << "hi �ȳ�! \n";

	cout << "������" << '\v' << '\n';	//  �� Ư���� ����

	cout <<  "������ ������" << '\f' << '\n';

	cout << "�齺���̽�" << '\b' << '\n';

	cout << 1 << 2 << 3 << '\n' << 4 << 5 << '\n';

	cout << "\\" << '\n';
	cout << "\\" << endl;	// ����Լ��� ���� ��Ÿ���� ���۸� �����ϴ� ��ɵ� �־ �� ���� 

	cout << "8���� 6  : "  << 006 << '\n';
	cout << "8���� 20 : "  << 024 << '\n';
	cout << "8���� 13 : "  << 015 << '\n';

	cout << "16���� 6  : " << 0x6 << '\n';
	cout << "16���� 20 : " << 0x14 << '\n';
	cout << "16���� 13 : " << 0xD << '\n';

	cout << "���� 2���� �Է��ϼ���\n";
	int  num1 = 0, num2 = 0;
	cout << "���� 1 : ";
	//cin >> num1;
	cout << "���� 2 : ";
	//cin >> num2;
	cout << "num1 : " << num1 << ", num2 : " << num2 << '\n';

	cout << "���� �ΰ� �ѹ��� �Է��ϱ�(�����̽� �Ǵ� ���ͷ� ����) : ";
	//cin >> num1 >> num2;

	cout << "num1 : " << num1 << ", num2 : " << num2 << '\n';
	
	const double pi = 3.141592;

	cout << " ~1 : 1�� ���� ->" << ~1 << '\n';	// 2�� ������ ��ȣ �ݴ� : ~num + 1
	cout << " ~0 : 1�� ���� ->" << ~0 << '\n';

	say_hello("�ȳ�");
	say_hello();
	
	cout << "�� �� ū ����->" << max(10, 20) << '\n';
	cout << "�� �� ū ����->" << max(12.4, 12.2) << '\n';
	cout << "�� �� ū ����->" << maxt(1, 2) << '\n';
	cout << "�� �� ū ����->" << maxt(1.5, 3.4) << '\n';

	int num3 = 0;
	cout << "������ ���� �Է� : ";
	//cin >> num3;

	square(num3);

	cout << &num3 << '\n';

	int target = 15;
	int& referenceT = target;

	cout << "���۷��� : " << referenceT << '\n';

	num1 = 10, num2 = 20;
	cout << "���۷��� swap: num1 -> " << num1 << " num2 -> " << num2 << '\n';
	swap(num1, num2);
	cout << "���۷��� swap: num1 -> " << num1 <<" num2 -> " << num2 << '\n';
	
	int array[5] = { 1, 3, 5, 2, 4 };
	int cnt = 0;
	for ( int arraynum : array)		// �����ϴ� ����
	{

		cout << arraynum << ' ';
	}
	int length = sizeof(array) / sizeof(array[0]);
	for (int i = 0; i < length-1; i++)	//��
	{
		
		for (int j = i+1; j < length; j++)	// ��
		{

			if (array[j] > array[i]) {	// �ڰ� �պ��� ũ��
				int temp = array[i];
				array[i] = array[j];
				array[j] = temp;
				cnt++;
			}
		}

	}
	cout << '\n';
	for (int& arraynum : array)	// ������ �Ͽ� ���� ������ �� �ְ� �ϱ�, ���� ��뵵 ���� ����
	{
		arraynum += 1;	// ���浵 ����
		cout << arraynum << ' ';
	}
	cout << "\ncount : " << cnt << '\n';


	return 0;
}

int square(int x) {
	int result = 0;

	result = x * x;
	
	cout << "��� : " << result <<'\n';

	return result;
}

void swap(int& x, int& y) {
	int temp;

	temp = x;
	x = y;
	y = temp;
}

void add(int* x, int* y, int a) {
	int subject1 = 0;
	int subject2 = 0;
	subject1 = *x + a;
	subject2 = *y + a;

	cout << subject1 <<'\n';
	cout << subject2 <<'\n';
}