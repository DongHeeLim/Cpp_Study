#include <iostream>
using namespace std;

class Base1 {

protected:
	int bs1;

public:
	Base1(int b1 = 0) { bs1 = b1; }
	void showBs1();

};

class Base2 {
	
protected:
	int bs2;

public:
	Base2(int b2 = 0) { bs2 = b2; }
	void showBs2();

};

// 다중 상속
class Derived : public Base1, public Base2 {
	
protected:
	int dr;

public:
	Derived(int d = 0) { dr = d; }
	void showDr();

};


void Base1::showBs1()
{
	cout << "bs1은 " << bs1 << "입니다.\n";
}


void Base2::showBs2()
{
	cout << "bs2은 " << bs2 << "입니다.\n";
}

void Derived::showDr()
{
	cout << "dr은 " << dr << "입니다.\n";
}


int main() 
{
	Derived drv;

	drv.showBs1();
	drv.showBs2();
	drv.showDr();

	return 0;

}