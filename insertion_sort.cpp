#include<iostream>
using namespace std;
//������������ǵݼ�������
void insertion_sort(int A[],int n) {
	int key, i, j;
	//�������򣬵�2��Ԫ�ؿ�ʼ���ҵ���keyС������Ԫ�ص��±�j
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
	cout << "��������ĳ���:";
	cin >> n;
	cout << "���������Ԫ��:";
	for (int i = 0; i <n ; i++)
	{
		cin >> A[i];
	}
	cout << "Output:";
	insertion_sort(A,n);
	return 0;
}