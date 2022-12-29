#include<iostream>
#include<vector>
using namespace std;

long long solve(long long a[], long long b[], long long index, long long  flag, long long n, vector<vector<long long >> &dp)
{

    //BASE CASE

    if(index>=n) return 0;

    if(dp[index][flag]!=-1) return dp[index][flag];


    if(flag==2)
    {
        return dp[index][flag]=max(a[index]+ solve(a,b,index+1,0,n,dp), max(b[index]+ solve(a,b,index+1,1,n,dp), solve(a,b,index+1,flag,n,dp)));
    }

    else if(flag==0)
    {
        return dp[index][flag]=max(b[index]+ solve(a,b, index+1, 1,n,dp), solve(a,b, index+1, flag,n,dp));
    }
    else if(flag==1)
    {
        return dp[index][flag]=max(a[index]+ solve(a,b,index+1, 0,n,dp), solve(a,b, index+1, flag,n,dp));
    }
}
int main()
{
    long long n;
    cin>>n;

    long long a[100001];

    for(long long i=0;i<n;i++)
    {
        cin>>a[i];
    }

    long long b[100001];
    for(int i=0;i<n;i++)
    {
        cin>>b[i];
    }

    long long index=0;
    long long flag=2;
    vector<vector<long long>> dp(n+1, vector<long long>(3, -1));
    cout<<solve(a,b,index, flag,n, dp)<<endl;
}