#include <iostream>
using namespace std;
void QuickSort(int arr[], int p, int r);
int main()
{
	int A[] = { 12,9,7,22,4,7,15,6,13,6,14 };
	int len = sizeof(A) / sizeof(*A);
	cout << "��������֮ǰ:" << endl;
	for (int i = 0; i < len; i++)
	{
		cout << A[i] << " ";
	}
	QuickSort(A, 0, len - 1);
	cout << endl;
	cout << "��������֮��:" << endl;
	for (int i = 0; i < len; i++)
	{
		cout << A[i] << " ";
	}
	return 0;
}

void QuickSort(int arr[], int p, int r)
{
	if (p < r)
	{
		int i = p;
		int j = r;
		int key = arr[p];
		while (i < j)
		{   //��������Ѱ�ҵ�һ����keyС��Ԫ���±�
			while (i < j && arr[j] >= key)
			{
				--j;
			}
			if (i < j)
			{
				arr[i] = arr[j];
				++i;
			}
			//��������Ѱ�ҵ�һ����key���Ԫ���±�
			while (i < j && arr[i] < key)
			{
				++i;
			}
			if (i < j)
			{
				arr[j] = arr[i];
				--j;
			}
			arr[i] = key;
			QuickSort(arr, p, i - 1);
			QuickSort(arr, i+1, r);
		}
	}
}