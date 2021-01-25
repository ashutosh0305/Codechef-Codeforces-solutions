#include <iostream>

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

         int x,y,z;
         cin>>x>>y>>z;
         int countx=1;
         int county=1;
         while(x%2==0)
         {



                    countx=countx*2;
                    x=x/2;


         }
         while(y%2==0)
         {

             county=county*2;
             y=y/2;
         }
         int total=countx*county;
         if(total>=z)
         {

             cout<<"YES"<<endl;
         }
         else
         {

             cout<<"NO"<<endl;
         }
     }
    return 0;
}
