#include <iostream>
#include <tuple>
#include <string>

#include "myfunc.h"
#include "exercise.h"

using namespace std;

typedef unsigned long int ULINT;

tuple<int, string> testFunc(int cnt) {
	uint32_t val_a = 0;
	uint32_t val_b = 1;
	string text;

	text.reserve(cnt * 2);	// cnt 2�踦 text�� ����
	text += "1";

	char buff[24];
	for (int i = 0; i < cnt; i++)
	{
		// cnt�� 5�̸� 0,1 
		tie(val_a, val_b) = make_tuple(val_b, val_a + val_b);
		snprintf(buff, sizeof(buff), "+%lu", val_b);
		cout << buff << " : " << text << '\n';
		text += buff;
	}

	return {val_b, text};
}


int main() { 

	//updateScore();
	//saveDynamicHeap();
	cout << max(10, 20) << "\n";

	snum = 12;
	cout << snum << '\n';

	int* pRes = func();
	cout << pRes << '\n';
	cout << *pRes << '\n';

	ULINT numInt = 5;
	cout << numInt << '\n';

	setWeek(SAT);
	//insertCarData();
	//PPerson group_Student = insertPersonData();
	//clearMemory(group_Student);

	int cnt = 5;
	
	string text1;
	text1.reserve(10);	// ���� �Ҵ� expand ���� ����
	text1 += "2";	// ���ڿ� �ֱ�
	cout << "text1 : " << text1 << '\n';

	//auto [fib, fib_str] = testFunc(cnt);
	//auto [a, b] = testFunc(cnt);
	//testFunc2 TEST(cnt);
	//auto [c, d] = tuple<int, string>testFunc2(cnt);
	//tuple<int, string> TEST = testFunc2(cnt);

	//cout << "1�� " << fib << endl;
	//cout << "2�� " << fib_str << endl;
	/*cout << "1�� " << a << endl;
	cout << "2�� " << b << endl;*/
	/*cout << "1�� " << c << endl;
	cout << "2�� " << d << endl;*/

	return 0;
}

