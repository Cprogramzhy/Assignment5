#include <iostream>
using namespace std;
int main()
{
int N,nu=0;
cin>>N;
{
if(N%3==0) nu++; 
if(N%5==0) nu++; 
if(N%7==0) nu++; 
switch(nu) 
{ 
case 0:cout<<"n"<<endl;break; 

case 1:
if(N%3==0) cout<<"3"<<endl;
if(N%5==0) cout<<"5"<<endl;
if(N%7==0) cout<<"7"<<endl; 
break;
 
case 2:
if(N%3==0) cout<<"3 "; 
if(N%5==0) cout<<"5 "; 
if(N%7==0) cout<<"7 "; 
break;
 
case 3:cout<<"3"<<" "<<"5"<<" "<<"7"<<endl;
break;
} 
}
}
