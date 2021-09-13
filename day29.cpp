#include <bits/stdc++.h>

using namespace std;

int bitwiseAnd(int n ,int k){
    int count = 0;
    for(int a=1;a<n;a++)
    {
        for(int b=a+1;b<=n;b++)
        {
            int n = a & b;
            if(n<k && n>count)
            {
                count=n;
            }
        }
        
    }
    return count;
}

int main()
{
    int n,k,t;
    cin>>t;
    for(int i = 0 ;i<t;i++)
    {
        cin>>n>>k;
        cout<<bitwiseAnd(n,k)<<endl;
    }
    return 0;
}
