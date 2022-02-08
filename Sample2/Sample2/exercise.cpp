#include <iostream>
#include <tuple>
#include <string>
#include "exercise.h"
using namespace std;


PPerson insertPersonData() {
	
	int numberOfPerson = 0;

	cout << "��� ���� �Է����ּ��� : ";
	cin >> numberOfPerson;

	PPerson person = new Person[numberOfPerson];	// ����ü �����Ϳ� ����ü �迭 ���� �Ҵ�

	for (int i = 0; i < numberOfPerson; i++)
	{
		cout << i + 1 << "�� ����� ���̸� �Է��ϼ���     : ";
		cin >> person[i].age;
		cout << i + 1 << "�� ����� �����Ը� �Է����ּ��� : ";
		cin >> person[i].weight;
		cout << i + 1 << "�� ����� Ű�� �Է����ּ���     : ";
		cin >> person[i].height;

		cout << "=========================================\n";
	}

	showPersonData(person, numberOfPerson);

	return person;
}

void showPersonData(PPerson person, int numberOfPerson) {

	for (int i = 0; i < numberOfPerson; i++)
	{
		cout << i + 1 << "�� ����� ����   : "<< person[i].age << " ��\n";
		cout << i + 1 << "�� ����� ������ : "<< person[i].weight << " kg\n";
		cout << i + 1 << "�� ����� Ű     : " << person[i].height <<" cm\n";

		cout << "=========================================\n";
	}
}

void clearMemory(PPerson person) {
	delete[] person;
}

void aging(PPerson person, int numberOfPerson) {
	
	cout << "1���� �������ϴ�. \n";

	for (int i = 0; i < numberOfPerson; i++)
	{
		cout << i + 1 << "�� ����� ����   : " << person[i].age + 1<< " ��\n";
		cout << i + 1 << "�� ����� ������ : " << person[i].weight << " kg\n";
		cout << i + 1 << "�� ����� Ű     : " << person[i].height << " cm\n";

		cout << "=========================================\n";
	}
}

tuple<int, string> testFunc2(int cnt) {
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

	return { val_b, text };
}