#pragma warning(disable:4996)

#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int num;
	vector<int> vt;
	cout << "몇개의 정수 데이터를 입력하시겠습니까?\n";
	cin >> num;

	for (int i = 0; i < num; i++)
	{
		int data;
		cout << "정수를 입력하십시오. \n";
		cin >> data;
		vt.push_back(data); // data를  백터 끝에 추가
	}

	cout << "표시합니다.\n";
	vector<int>::iterator it = vt.begin();	// 앞 데이터 
	while (it != vt.end()) {				// 끝 데이터
		cout << *it;
		cout << "-";
		it++;
	}
	cout << "\n";

	return 0;
}