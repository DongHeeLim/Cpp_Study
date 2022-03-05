#pragma warning(disable:4996)
#include <iostream>

#define ARRAY_SIZE 5
using namespace std;

template <class T>
class Array {
	
private:
	T data[ARRAY_SIZE];

public:
	void setData(int num, T d);	// �� �ֱ�  ,  num �迭 ��ġ
	T getData(int num);			// �� ��������	

};

template <class T>
void Array<T>::setData(int num, T d)
{
	if (num < 0 || num > 4)
		cout << "�迭 ���̸� �Ѿ���ϴ�.\n";
	else
		data[num] = d;
}

template <class T>
T Array<T>::getData(int num)
{
	if (num < 0 || num > 4) {
		cout << "�迭 ���̸� �Ѿ���ϴ�.\n";
		return data[0];	// ���� Ÿ���� T, ó���� �ѱ��
	}
	else
		return data[num];
}


int main()
{
	cout << "int �� �迭�� �����մϴ�.\n";
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

	cout << "double �� �迭�� �����մϴ�.\n";
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