/*
#include <bits/stdc++.h>
#define int long long int
using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        int n,temp;
        cin>>n;
        if(n==1)
        {
            cin>>temp;
            cout<<temp<<endl;

        }
        else{

        vector<int>v1;
        vector<int>v;
        for(int i=0;i<n;i+=1)
        {
            cin>>temp;
           v.push_back(temp);

        }
        int i=0,j=n-1;
        while(i<=j)
        {
            v1.push_back(v[i]);
            v1.push_back(v[j]);
            i++;
            j--;

        }

        for(int i=0;i<n;i++)
        {

            cout<<v1[i]<<" ";
        }
        cout<<endl;
    }
    }
    return 0;
}*/




















#include<bits/stdc++.h>
using namespace std;
int sod(int k)
{
    int temp=0;
    while(k>0)
    {
        temp+=k%10;
        k=k/10;


    }
    return temp;
}
int unique(int k)
{
    map<int,int>v;
    int temp;
    while(k>0)
    {
        temp=k%10;
        k=k/10;
        v[temp]++;
    }
    map<int,int>::iterator it=v.begin();
    while(it!=v.end())
    {
        if(it->second>1)
        {
            return 0;
        }

    }
    return 1;

}
int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(0);
   cout.tie(0);
   int t;
   cin>>t;
   while(t--)
   {
       int n;
       cin>>n;
       int i=1;
      while(sod(i)!=n && i<1000 && unique(i))
      {
          i++;
      }
      cout<<i<<endl;
   }
   return 0;
}








