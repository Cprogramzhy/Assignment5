#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	char str[20],substr[5];
	int len;
		while(cin>>str>>substr)
		{
			int i=0,j=0,m=0,max=0,n=1;
			len=strlen(str);
		    for(j=0;j<len;j++)
			{
				if(str[j]>max)
				{
				 max=str[j];
				 m=j;
				}
			}
			for(i=len+3;i>=m+4;i--)
			{
				str[i]=str[i-3];
			}
			str[m+1]=substr[0];
			str[m+2]=substr[1];
			str[m+3]=substr[2];
			cout<<str<<endl;
		}
	return 0;
}	
