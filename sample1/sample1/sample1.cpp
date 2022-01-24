#include <iostream>
//#include <string.h>
#include <cstring>
using namespace std;

void say_hello(string greeting = "Hello") {
	cout << "Say " << greeting + '\n';

	cout << "Seeya!~\n";
}

// 인라인 함수
inline int max(int x, int y) { if (x > y) return x; else return y;}	// 호출이 아닌 매크로 형태
inline double max(double x, double y) { if (x > y) return x; else return y;}	// 오버로딩(중복정의)

template <class Type>	// 함수 템플릿
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
	cout << "hi 안녕! \n";
	cout << "hi 안녕! \n";

	cout << "수직탭" << '\v' << '\n';	//  왜 특문이 뜨지

	cout <<  "페이지 나누기" << '\f' << '\n';

	cout << "백스페이스" << '\b' << '\n';

	cout << 1 << 2 << 3 << '\n' << 4 << 5 << '\n';

	cout << "\\" << '\n';
	cout << "\\" << endl;	// 출력함수의 끝을 나타내며 버퍼를 정리하는 기능도 있어서 좀 느림 

	cout << "8진수 6  : "  << 006 << '\n';
	cout << "8진수 20 : "  << 024 << '\n';
	cout << "8진수 13 : "  << 015 << '\n';

	cout << "16진수 6  : " << 0x6 << '\n';
	cout << "16진수 20 : " << 0x14 << '\n';
	cout << "16진수 13 : " << 0xD << '\n';

	cout << "숫자 2개를 입력하세요\n";
	int  num1 = 0, num2 = 0;
	cout << "숫자 1 : ";
	//cin >> num1;
	cout << "숫자 2 : ";
	//cin >> num2;
	cout << "num1 : " << num1 << ", num2 : " << num2 << '\n';

	cout << "숫자 두개 한번에 입력하기(스페이스 또는 엔터로 구분) : ";
	//cin >> num1 >> num2;

	cout << "num1 : " << num1 << ", num2 : " << num2 << '\n';
	
	const double pi = 3.141592;

	cout << " ~1 : 1의 보수 ->" << ~1 << '\n';	// 2의 보수가 부호 반대 : ~num + 1
	cout << " ~0 : 1의 보수 ->" << ~0 << '\n';

	say_hello("안녕");
	say_hello();
	
	cout << "둘 중 큰 숫자->" << max(10, 20) << '\n';
	cout << "둘 중 큰 숫자->" << max(12.4, 12.2) << '\n';
	cout << "둘 중 큰 숫자->" << maxt(1, 2) << '\n';
	cout << "둘 중 큰 숫자->" << maxt(1.5, 3.4) << '\n';

	int num3 = 0;
	cout << "제곱할 정수 입력 : ";
	//cin >> num3;

	square(num3);

	cout << &num3 << '\n';

	int target = 15;
	int& referenceT = target;

	cout << "레퍼런스 : " << referenceT << '\n';

	num1 = 10, num2 = 20;
	cout << "레퍼런스 swap: num1 -> " << num1 << " num2 -> " << num2 << '\n';
	swap(num1, num2);
	cout << "레퍼런스 swap: num1 -> " << num1 <<" num2 -> " << num2 << '\n';
	
	int array[5] = { 1, 3, 5, 2, 4 };
	int cnt = 0;
	for ( int arraynum : array)		// 복사하는 것임
	{

		cout << arraynum << ' ';
	}
	int length = sizeof(array) / sizeof(array[0]);
	for (int i = 0; i < length-1; i++)	//앞
	{
		
		for (int j = i+1; j < length; j++)	// 뒤
		{

			if (array[j] > array[i]) {	// 뒤가 앞보다 크면
				int temp = array[i];
				array[i] = array[j];
				array[j] = temp;
				cnt++;
			}
		}

	}
	cout << '\n';
	for (int& arraynum : array)	// 참조를 하여 값도 변경할 수 있게 하기, 복사 비용도 감소 가능
	{
		arraynum += 1;	// 변경도 가능
		cout << arraynum << ' ';
	}
	cout << "\ncount : " << cnt << '\n';

	char str[] = "because";

	for (int i = 0; str[i] != '\0'; i++)	// 문자열의 마지막은 NULL 문자여서 NULL 전까지 '-'출력
	{
		cout << str[i] << '-';
	}
	cout << '\n';

	cout << "because 길이(NULL 제외) : " << strlen(str) << '\n';


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
	//cout << "길이 : " << findLength2(str3) << '\n';
	
	char sentence1[100] = "";
	char letter = 'a';

	countLiteral(sentence1, letter);

	return 0;
}

int square(int x) {
	int result = 0;

	result = x * x;
	
	cout << "결과 : " << result <<'\n';

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
	cout << "시험점수를 입력하세요. ↓↓ \n";

	int max = 0;

	for (int i = 0; i < length; i++)
	{
		cin >> x[i];
	}

	for (int i = 0; i < length; i++)
	{
		if (x[i] > max) max = x[i];
	}

	cout << "최고점 : " << max << '\n';

	return max;
}


int findLength(char* str) {

	int result = 0;

	cout << "문자열을 입력해주세요 : ";
	

	cin >> str;

	cout << "문자열의 길이는 : " << strlen(str) << '\n';
	
	result = strlen(str);

	return result;
}

int findLength2(char* str) {

	int cnt = 0;

	while (str[cnt]) {	// NULL -> 0임
		cnt++;
	}
	return cnt;
}


int countLiteral(char str[], char ch) {
	
	int length = 0;
	int cnt = 0;

	cout << "문자열을 입력하십시오\n";
	cout << "->";

	cin >> str;

	cout << "문자열에서 검색할 문자를 입력하십시오\n";
	cout << "->";

	cin >> ch;

	length = strlen(str);

	for (int i = 0; i < length; i++)
	{
		if (str[i] == ch) {
			cnt++;
		}
	}



	cout << "안에" << ch << "는 총" << cnt << "개 있습니다.\n";

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