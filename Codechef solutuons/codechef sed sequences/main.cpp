#include <bits/stdc++.h>

using namespace std;

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(0);
int t;
cin>>t;
while(t--)
{

    int n,m;
    cin>>n>>m;
    vector<int>v(n,0);
    int sum=0;
    for(int i=0;i<n;i++)
    {

        int g;
        cin>>g;
        v[i]=g;
        sum+=v[i];
    }
    if(sum%m==0)
    {
        cout<<0<<endl;
    }
    else{
        cout<<1<<endl;

    }

}
}
