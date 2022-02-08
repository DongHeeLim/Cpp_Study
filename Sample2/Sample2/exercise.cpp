#include <iostream>
#include <tuple>
#include <string>
#include "exercise.h"
using namespace std;


PPerson insertPersonData() {
	
	int numberOfPerson = 0;

	cout << "사람 수를 입력해주세요 : ";
	cin >> numberOfPerson;

	PPerson person = new Person[numberOfPerson];	// 구조체 포인터에 구조체 배열 동적 할당

	for (int i = 0; i < numberOfPerson; i++)
	{
		cout << i + 1 << "번 사람의 나이를 입력하세요     : ";
		cin >> person[i].age;
		cout << i + 1 << "번 사람의 몸무게를 입력해주세요 : ";
		cin >> person[i].weight;
		cout << i + 1 << "번 사람의 키를 입력해주세요     : ";
		cin >> person[i].height;

		cout << "=========================================\n";
	}

	showPersonData(person, numberOfPerson);

	return person;
}

void showPersonData(PPerson person, int numberOfPerson) {

	for (int i = 0; i < numberOfPerson; i++)
	{
		cout << i + 1 << "번 사람의 나이   : "<< person[i].age << " 세\n";
		cout << i + 1 << "번 사람의 몸무게 : "<< person[i].weight << " kg\n";
		cout << i + 1 << "번 사람의 키     : " << person[i].height <<" cm\n";

		cout << "=========================================\n";
	}
}

void clearMemory(PPerson person) {
	delete[] person;
}

void aging(PPerson person, int numberOfPerson) {
	
	cout << "1년이 지났습니다. \n";

	for (int i = 0; i < numberOfPerson; i++)
	{
		cout << i + 1 << "번 사람의 나이   : " << person[i].age + 1<< " 세\n";
		cout << i + 1 << "번 사람의 몸무게 : " << person[i].weight << " kg\n";
		cout << i + 1 << "번 사람의 키     : " << person[i].height << " cm\n";

		cout << "=========================================\n";
	}
}

tuple<int, string> testFunc2(int cnt) {
	uint32_t val_a = 0;
	uint32_t val_b = 1;
	string text;

	text.reserve(cnt * 2);	// cnt 2배를 text에 저장
	text += "1";

	char buff[24];
	for (int i = 0; i < cnt; i++)
	{
		// cnt가 5이면 0,1 
		tie(val_a, val_b) = make_tuple(val_b, val_a + val_b);
		snprintf(buff, sizeof(buff), "+%lu", val_b);
		cout << buff << " : " << text << '\n';
		text += buff;
	}

	return { val_b, text };
}