#pragma once
#ifndef MY_HEADER_	//  pragma once 나 ifndef 는 헤더 중복 방지 
#define MY_HEADER_

enum Week { SUN, MON, TUE, WED, THU, FRI, SAT };

struct Car {
	int number;
	double gas;
};

extern int snum;

int max(int x, int y);
void updateScore();
void saveDynamicHeap();
int* func();
void setWeek(Week week);
void insertCarData();
void show(Car* pCar);
void showR(Car& rCar);

#endif