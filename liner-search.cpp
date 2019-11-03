#include<iostream>
#include<string>
using namespace std;
void linear_search(int a[], int n, int x);
int main() 
{
	int a[20], n, x;
	cout << "输入数组长度:";
	cin >> n;
	cout << "输入数组:";
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	cout << "输入要查找的元素:";
	cin >> x;
	linear_search(a,n,x);
	return 0;
}
void linear_search(int a[], int n, int x)
{
	
	int answer=-1;
	cout << "查找的元素的位置是:";
	
	for (int i = 0; i < n; i++)
	{
		if (a[i] == x)
		{
			answer = i + 1;
			cout << answer << " ";
		}

	}
	if (answer==-1)
	{
		cout << "not-found";
	}
	/*while (i<n)
	{
		if (a[i]!=x)
		{
			++i;
		}
		a[n] = 0;
		if (i<n||a[n]==x)
		{
			cout << i;
		}
		else
		{
			cout << "not-found";
		}
	}*/
}
