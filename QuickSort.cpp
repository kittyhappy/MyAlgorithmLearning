#include <iostream>
using namespace std;
void QuickSort(int arr[], int p, int r);
int main()
{
	int A[] = { 12,9,7,22,4,7,15,6,13,6,14 };
	int len = sizeof(A) / sizeof(*A);
	cout << "快速排序之前:" << endl;
	for (int i = 0; i < len; i++)
	{
		cout << A[i] << " ";
	}
	QuickSort(A, 0, len - 1);
	cout << endl;
	cout << "快速排序之后:" << endl;
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
		{   //从右往左寻找第一个比key小的元素下标
			while (i < j && arr[j] >= key)
			{
				--j;
			}
			if (i < j)
			{
				arr[i] = arr[j];
				++i;
			}
			//从左往右寻找第一个比key大的元素下标
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