#include <bits/stdc++.h>
#define int long long int
using namespace std;


int maxfact(int g,int n)
{
    int maxfactor=0;
    for(int i=1;i<=g;i++)
    {
        if(g%i==0 )
        {
            if(i<=n)
            {
                maxfactor=max(maxfactor,i);
            }
            if(g/i<=n)
            {
                maxfactor=max(maxfactor,g/i);
            }

        }

    }
    return maxfactor;
}
int gcd(int a,int b)
{

    if(b==0)
    {
        return a;
    }
    return gcd(b,a%b);
}
int32_t main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(0);
 int t;
 cin>>t;
 while(t--)
 {
     int n,m,k;
     cin>>n>>m;

     vector<int>s2;
     for(int j=0;j<m;j++)
     {
         cin>>k;
         s2.push_back(k);

     }

     int g=s2[0];

     for(int i=1;i<m;i++)
     {


     g=gcd(g,s2[i]);
     }
     int ans=maxfact(g,n);
     cout<<n-ans<<endl;






















     /*

     int kill=0;
     int p=n;
    for(int i=0;i<m;i++)
    {


     if(p>=s2[i])
     {

         kill+=n-s2[i];
     }


     else
     {
     while((s2[i]%p)!=0)
     {

         p--;
         kill++;

     }
     kill+=n-p;


    }


 }



     cout<<kill<<endl;
*/
 }
 return 0;
}
