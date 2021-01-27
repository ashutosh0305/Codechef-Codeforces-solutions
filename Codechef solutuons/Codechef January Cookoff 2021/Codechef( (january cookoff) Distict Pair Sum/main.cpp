#include <bits/stdc++.h>

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
     cin>>n>>z;

   /*  set<int>v;
     for(int i=n;i<=z;i++)
     {


         v.insert(i);

     }*/
     if(z-n==0)
     {
         cout<<1<<endl;
     }
     else{
     int s=z-n+1;
     int ans=s+s-1;
     cout<<ans<<endl;
     }
    //  if(z-n==1)
    //  {
    //      cout<<ans<<endl;
    //  }
    //  else{

    //  cout<<ans-1<<endl;
    //  }
    //  }
 }
    return 0;
}
