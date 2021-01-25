#include <bits/stdc++.h>
//#define int long long int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--)
    {

        int n,z;
        cin>>n;
        map<int,int>v;
        map<int,int>nv;
        for(int i=1;i<=n;i++)
        {

            cin>>z;
            v[i]=z;
            nv[i]=0;
        }
        int res=-1;
    //    vector<int>nv(n,0);

        for(int i=n;i>0;i--)
        {
            int loc=v[i]+i;
           if(loc>n)
           {

               nv[i]= v[i];
           }
           else{
            nv[i]=v[i]+nv[loc];
           }
           res=max(res,nv[i]);

        }
        cout<<res<<endl;
    }
    return 0;
}
