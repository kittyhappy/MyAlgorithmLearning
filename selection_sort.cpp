#include<iostream>
using namespace std;
/*
输出非递减的数组
*/
void selection_sort(int A[],int n) {
	int smallest,temp;
	for (int i = 0; i < n-1; i++)
	{
		smallest = i;
		for (int j = i+1; j < n; j++)
		{
			if (A[j]<=A[smallest])
			{
				smallest = j;
			}
		}
		temp = A[i];
		A[i] = A[smallest];
		A[smallest] = temp;
	}
	for (int i = 0; i < n; i++)
	{
		cout << A[i]<<" ";
	}
}
int main()
{
	int a[20], n;
	//n<=20
	cout << "输入数组长度:";
	cin >> n;
	cout << "输入数组:";
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	cout << "输出选择排序后的数组:";
	selection_sort(a, n);
	return 0;
}