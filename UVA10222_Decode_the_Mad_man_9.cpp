/*
Sample Input
k[r dyt I[o
Sample Output
how are you
*/

#include <iostream>
#include <cstdio>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
	string input;
	string kb=" `1234567890-=qwertyuiop[]asdfghjkl;'zxcvbnm,./";
	while(getline(cin,input)) //���鵵 �ĸ��ؾ� �ϹǷ� getline���� ó��; 
	{
		for(int i=0;i<input.length();i++)
		{
			if(input[i]>='A'&&input[i]<='Z') //�빮�� �Է½� �ҹ��ڷ� ��ȯ; 
			{
				input[i]=input[i]+32;	
			}
			for(int j=0;j<kb.length();j++)
			{
				if(input[i]==kb[0]) //�־ ��� �� ���� �ȳ��µ�; 
				{
					cout<<" ";
					break;
				}
				else if(input[i]==kb[j]) //�������� 2���� ���� ���; 
				{
					cout<<kb[j-2];
					break;
				}	
			}
		}
		cout<<endl;
	}
return 0;
}

