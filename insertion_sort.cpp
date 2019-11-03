#include<iostream>
using namespace std;
//插入排序，输出非递减的数组
void insertion_sort(int A[],int n) {
	int key, i, j;
	//插入排序，第2个元素开始，找到比key小的数组元素的下标j
	for (int i = 1; i < n; i++)
	{
		key = A[i];
		j = i - 1;
		while (j>=0&&A[j]>=key)
		{
			A[j + 1] = A[j];
			--j;
		}
		A[j + 1] = key;
	}
	for (int i = 0; i < n; i++)
	{
		cout << A[i] << " ";
	}
}
int main() {
	int A[20],n;
	cout << "Input:"<<endl;
	cout << "输入数组的长度:";
	cin >> n;
	cout << "输入数组的元素:";
	for (int i = 0; i <n ; i++)
	{
		cin >> A[i];
	}
	cout << "Output:";
	insertion_sort(A,n);
	return 0;
}