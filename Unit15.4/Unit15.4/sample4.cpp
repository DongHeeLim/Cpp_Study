#pragma warning(disable:4996)
#include <iostream>

#define ARRAY_SIZE 5
using namespace std;

template <class T>
class Array {
	
private:
	T data[ARRAY_SIZE];

public:
	void setData(int num, T d);	// 값 넣기  ,  num 배열 위치
	T getData(int num);			// 값 가져오기	

};

template <class T>
void Array<T>::setData(int num, T d)
{
	if (num < 0 || num > 4)
		cout << "배열 길이를 넘어섰습니다.\n";
	else
		data[num] = d;
}

template <class T>
T Array<T>::getData(int num)
{
	if (num < 0 || num > 4) {
		cout << "배열 길이를 넘어섰습니다.\n";
		return data[0];	// 리턴 타입이 T, 처음값 넘기기
	}
	else
		return data[num];
}


int main()
{
	cout << "int 형 배열을 생성합니다.\n";
	Array<int> i_array;
	i_array.setData(0, 80);
	i_array.setData(1, 75);
	i_array.setData(2, 65);
	i_array.setData(3, 55);
	i_array.setData(4, 45);
	
	for (int i = 0; i < ARRAY_SIZE; i++)
	{
		cout << i_array.getData(i) << '\n';
	}

	cout << "double 형 배열을 생성합니다.\n";
	Array<double> d_array;
	d_array.setData(0, 80.4);
	d_array.setData(1, 75.4);
	d_array.setData(2, 65.4);
	d_array.setData(3, 55.4);
	d_array.setData(4, 45.4);

	for (int j = 0; j < ARRAY_SIZE; j++)
	{
		cout << d_array.getData(j) << '\n';
	}

	return 0;
}