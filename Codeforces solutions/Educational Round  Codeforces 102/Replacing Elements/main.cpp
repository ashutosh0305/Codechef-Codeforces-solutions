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
    int n,d;
    cin>>n>>d;
    int z;
    vector<int>v;
    int small=INT_MAX;
    int count;
    for(int i=0;i<n;i++)
    {
        cin>>z;
        v.push_back(z);
        if(z<small)
        {
            small=z;
            count=i;

        }

    }
    int flag=0;
    int flag2=0;
    int temp=0;
    for(int i=0;i<n;i++)
    {
        if(count!=i && v[i]+small<=d)
        {
            flag=1;
                break;

        }
        if(v[i]>d && temp==0)
        {

            flag2=1;
            temp++;
        }

    }
    if(flag==1 || flag2==0)
    {

        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }

}
return 0;
}

