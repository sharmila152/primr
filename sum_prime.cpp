#include<iostream>
using namespace std;
long long int N=1000001;
long long int seive[1000001];
void sum_seive()
{
    seive[0]=seive[1]=1;
    for(int i=2;i<=N;i++)
    seive[i]=i;
    while(N--)
    {
    for(int i=2;i*i<=N;i++)
    {
       if(seive[i]==i)
       {
           for(int j=i*i;j<=N;j+=i)
           {
               if(seive[j]=j)
               {
                   seive[j]=0;
               }     
           }
       }
    }
}
}
int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        int l,r,sum=0;
        cin>>l>>r;
        for(int k=l;k<=r;k++)
        {
            if(seive[k]==k)
            sum=sum+k;
        }
        cout<<sum;
    }
    return 0;
}
