#include <iostream>
#include<cmath>
#include <iomanip>
using namespace std;
int main()
{
	int n;
	cin>>n;
	double max=0;
	float x[1000],y[1000];
	
	for(int k=0;k<n;k++)
	{
	cin>>x[k]>>y[k];
	}
	
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			 double dis=sqrt ((x[j]-x[i])*(x[j]-x[i])+(y[j]-y[i])*(y[j]-y[i]));
				 if (dis>max)
				 max=dis;
	}
	}
	cout << fixed << setprecision(4) << max << endl;
	return 0;
}
				
