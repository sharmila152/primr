#include<iostream>
using namespace std;
long long int N=1000001;
long long int seive[1000001];
void min_prime()
{
    seive[0]=seive[1]=1;
    for(int i=2;i<=N;i++)
    seive[i]=i;
    for(int i=2;i*i<=N;i++)
    {
        if(seive[i]==i)
        {
            for(int j=i*i;j<=N;j+=i)
            {
                if(seive[j]==j)
                {
                    seive[j]=i;
                }
            }
        }
    }
}
int main()
{
    min_prime();
    long long int t,k;
    cin>>t;
    while(t--)
    {
        int x,count=0;
        cin>>x;
        for(k=2;k<=N;k++)
        {
            if(seive[k]=x)
            {
                count=count+1;
            }
        }
       cout<<count; 
         }
    return 0;
}
