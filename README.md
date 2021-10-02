## UVA10222_Decode_the_Mad_man_9
+ website : https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=14&page=show_problem&problem=1163
------
```c++
if(input[i]>='A'&&input[i]<='Z') //대문자 입력시 소문자로 변환; 
{
  input[i]=input[i]+32;	
}
```
#### First we have to change the A...Z to a...z,so we plus 32;
```c++
else if(input[i]==kb[j]) //같으면은 2개 전꺼 출력; 
{
  cout<<kb[j-2];
  break;
}	
```
#### else -> print previous 2 letter;
----
