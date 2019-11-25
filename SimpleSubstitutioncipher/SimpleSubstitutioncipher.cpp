// SimpleSubstitutioncipher.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include<string>
using namespace std;
string SimpleCipher(string output, int key, int flag)
{
	char temp;
	if (flag == 1) {    //flag=1,加密
		for (int i = 0; i < output.length(); i++)
		{
			temp = output[i];
			if (temp >= 'a' && temp <= 'z')
			{
				temp = 97 + (temp + key - 97) % 26;
				output[i] = temp;
			}
			else if (temp >= 'A' && temp <= 'Z')
			{
				temp = 65 + (temp + key - 65) % 26;
				output[i] = temp;
			}
		}
	}
	else if (flag == 2)   //flag=2,解密
	{
		for (int i = 0; i < output.length(); i++)
		{
			temp = output[i];
			if (temp >= 'a' && temp <= 'z')
			{
				temp = 97 + (temp - key - 97) % 26;
				output[i] = temp;
			}
			else if (temp >= 'A' && temp <= 'Z')
			{
				temp = 65 + (temp - key - 65) % 26;
				output[i] = temp;
			}
		}
	}
	return output;
}
int main()
{
	int key;
	cout<<"input key:";
	cin >> key;
	string input ="I need an apple";
	string input1="Vhqg ph d kxqguhg pruh vroglhuv";
	string M = SimpleCipher(input, key, 1);
	string M1 = SimpleCipher(input1, key, 2);
	cout << "encode:" << M << endl;
	cout << "decode:" << M1 << endl;
	return 0;
}
