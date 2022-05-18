#include <iostream>
using namespace std;

int main()
{
	for (int i = 1; i <= 10; i++)
	{
		cout.width(3);
		cout.fill('^');	// 문자 한개만 가능
		cout << i;

	}
	cout << "\n";


	return 0;
}