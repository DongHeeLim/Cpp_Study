#include <iostream>
using namespace std;

int main()
{
	char ch;

	cout << "영문자를 입력하세요 : ";

	while (cin.get(ch))
	{
		cout.put(ch);
	}

	return 0;
}