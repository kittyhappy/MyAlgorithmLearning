#include<iostream>
using namespace std;
void mergeArray(int A[], int first, int mid, int last, int temp[])
{
	int i = first;
	int j = mid + 1;
	int m = mid;
	int n = last;
	int k = 0;
	while (i <= m && j <= n)
	{
		if (A[i] <= A[j])
			temp[k++] = A[i++];
		else
			temp[k++] = A[j++];
	}
	while (i <= m)
		temp[k++] = A[i++];
	while (j <= n)
		temp[k++] = A[j++];
	for (i = 0; i < k; i++)
		A[first + i] = temp[i];
}
void merger_sort(int A[], int first, int last, int temp[])
{
	if (first < last)
	{
		int mid = (first + last) / 2;
		merger_sort(A, first, mid, temp);
		merger_sort(A, mid + 1, last, temp);
		mergeArray(A, first, mid, last, temp);
	}
}
bool mergeSort(int A[], int len)
{
	int *p = new int[len];
	if (NULL == p)
		return false;
	merger_sort(A, 0, len - 1, p);
	delete[] p;
	return true;
}
int main() 
{
	int A[] = { 12,9,3,7,14,11,6,2,10,5 };
	int len = sizeof(A) / sizeof(int);
	mergeSort(A, len);
	cout << "Output:" << endl;
	for (int i = 0; i <10; i++)
	{
		cout << A[i] << " ";
	}
	return 0;
}