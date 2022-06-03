#pragma once

typedef struct _Person {
	int age;
	double weight;
	double height;
}Person, *PPerson;

PPerson insertPersonData();
void showPersonData(PPerson person, int numberOfPerson);
void clearMemory(PPerson person);
void aging(PPerson person);

//typedef std::tuple<int, string> testFunc2;

