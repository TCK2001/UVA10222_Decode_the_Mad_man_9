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
	while(getline(cin,input)) //공백도 쳐리해야 하므로 getline으로 처리; 
	{
		for(int i=0;i<input.length();i++)
		{
			if(input[i]>='A'&&input[i]<='Z') //대문자 입력시 소문자로 변환; 
			{
				input[i]=input[i]+32;	
			}
			for(int j=0;j<kb.length();j++)
			{
				if(input[i]==kb[0]) //있어도 없어도 별 차이 안나는듯; 
				{
					cout<<" ";
					break;
				}
				else if(input[i]==kb[j]) //같으면은 2번쨰 전거 출력; 
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

