#include<iostream>
using namespace std;
/*
����ǵݼ�������
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
	cout << "�������鳤��:";
	cin >> n;
	cout << "��������:";
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	cout << "���ѡ������������:";
	selection_sort(a, n);
	return 0;
}