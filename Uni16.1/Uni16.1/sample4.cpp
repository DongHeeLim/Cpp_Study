#include <iostream>
using namespace std;

int main()
{
	for (int i = 1; i <= 10; i++)
	{
		cout.width(3);
		cout.fill('^');	// ���� �Ѱ��� ����
		cout << i;

	}
	cout << "\n";


	return 0;
}