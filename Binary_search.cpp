#include<iostream>
using namespace std;
/*
   �ǵݼ�������A[n]
*/
int binary_search(int A[],int x) {
	int  p, r, q,answer;//p=0,r=9
	p = 0;
	r = 9;
	answer = -1;
	while (p <= r)
	{
		q = (int)((p+r)/2);
		if (A[q] == x)
		{
			answer = q + 1;
			cout << answer;
			return 0;
		}
		else if (A[q]>x)
		{
			r = q - 1;
		}
		else
		{
			p = q + 1;
		}
	}
	if (answer==-1)
	{
		cout << "NOT-FOUND";
		return -1;
	}
	
}
int main()
{
	int A[10]= { 1,3,4,7,10,14,17,20,22,25 };//�ǵݼ�������
	int x;//���ҵ�Ԫ��x
	cout << "����Ҫ���ҵ�Ԫ��:";
	cin >> x;
	cout << "Ԫ������λ����:";
	binary_search(A, x);
	return 0;
}