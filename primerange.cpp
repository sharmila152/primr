#include <iostream>
 
using namespace std;
 
int main() {
	int num,i,j,flag;
	cin >> num;	
	for(i=2;i<=num;i++)
	{	flag=0;
		for(j=2;j<=i;j++)
		{
			if(i%j==0)
				flag++;
 
		}
		if(flag==1)
			cout<<i<<" ";
	}
 
	
}
