#include <iostream>
using namespace std;

int main()
{
	for (int i = 0; i <= 10; i++)
	{
		// ��� ���� 3ĭ
		cout.width(3);
		cout << i;
	}

	cout << "\n";

	return 0;
}