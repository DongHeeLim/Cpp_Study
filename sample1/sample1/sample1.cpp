#include <iostream>
//#include <string.h>
#include <cstring>
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
int findMax(int x[], int length);
int findLength(char* str);
int findLength2(char* str);
int countLiteral(char str[], char ch);
int countLiteral2(char str[], char ch);


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

	char str[] = "because";

	for (int i = 0; str[i] != '\0'; i++)	// ���ڿ��� �������� NULL ���ڿ��� NULL ������ '-'���
	{
		cout << str[i] << '-';
	}
	cout << '\n';

	cout << "because ����(NULL ����) : " << strlen(str) << '\n';


	char str1[10] = "hi";
	char str2[10];
	char str3[100];

	cout << strcpy(str1, "bye") << '\n';
	cout << strcpy(str2, "good") << '\n';
	cout << strcat(str1, str2) << '\n';
	int testScore[5];


	//findMax(testScore, sizeof(testScore)/sizeof(testScore[0]));
	//findLength(str3);
	//cout << str3 << '\n';
	//cout << "���� : " << findLength2(str3) << '\n';
	
	char sentence1[100] = "";
	char letter = 'a';

	countLiteral(sentence1, letter);

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

double avg(int* pT, int num) {
	double sum = 0;
	for (int i = 0; i < num; i++)
	{
		sum += *(pT + i);
	}

	return sum/num;
}

int findMax(int x[], int length) {
	cout << "���������� �Է��ϼ���. ��� \n";

	int max = 0;

	for (int i = 0; i < length; i++)
	{
		cin >> x[i];
	}

	for (int i = 0; i < length; i++)
	{
		if (x[i] > max) max = x[i];
	}

	cout << "�ְ��� : " << max << '\n';

	return max;
}


int findLength(char* str) {

	int result = 0;

	cout << "���ڿ��� �Է����ּ��� : ";
	

	cin >> str;

	cout << "���ڿ��� ���̴� : " << strlen(str) << '\n';
	
	result = strlen(str);

	return result;
}

int findLength2(char* str) {

	int cnt = 0;

	while (str[cnt]) {	// NULL -> 0��
		cnt++;
	}
	return cnt;
}


int countLiteral(char str[], char ch) {
	
	int length = 0;
	int cnt = 0;

	cout << "���ڿ��� �Է��Ͻʽÿ�\n";
	cout << "->";

	cin >> str;

	cout << "���ڿ����� �˻��� ���ڸ� �Է��Ͻʽÿ�\n";
	cout << "->";

	cin >> ch;

	length = strlen(str);

	for (int i = 0; i < length; i++)
	{
		if (str[i] == ch) {
			cnt++;
		}
	}



	cout << "�ȿ�" << ch << "�� ��" << cnt << "�� �ֽ��ϴ�.\n";

	return cnt;
}

int countLiteral2(char str[], char ch) {

	int cnt;
	int i;

	while (str[i])
	{
		if (str[i] == ch) {
			cnt++;
		}
		i++;
	}

	return cnt;
}