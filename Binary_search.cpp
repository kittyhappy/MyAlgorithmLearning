#include<iostream>
using namespace std;
/*
   非递减的数组A[n]
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
	int A[10]= { 1,3,4,7,10,14,17,20,22,25 };//非递减的数组
	int x;//查找的元素x
	cout << "输入要查找的元素:";
	cin >> x;
	cout << "元素所在位置是:";
	binary_search(A, x);
	return 0;
}