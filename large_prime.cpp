#include<iostream>
using namespace std;
long long int N=1000001;
long long int seive[1000001];
void large_prime()
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
    large_prime();
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        while(n!=1)
        {
             n=n/seive[n];
             if(n==seive[n])
             break;
        }
        cout<<n;
          
         }
    return 0;
}
