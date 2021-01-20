#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main()
{
ios_base::sync_with_stdio(false);
 cin.tie(0);
 cout.tie(0);
 int  t;
 cin>>t;
 while(t--)
 {/*
     int n;
     cin>>n;
     int k,y=n-1;
     cin>>k;
   //  int count=0;

     vector<int>v(n,0);
     while(k>0)
     {

       //  count++;

         int x=k%10;
        // v.insert(v.begin(),x);
         v[y]=x;
         k=k/10;
         y--;

     }

     int rn=n-count;
     while(rn!=0)
     {
         v.insert(v.begin(),0);
         rn--;

     }

     int i;



     vector<int>nv(n,0);
    // nv.push_back(1);


   int temp=-1;
     for(i=0;i<n;i++)
     {
         if(v[i]==1)
         {

           if(temp==2)
            {

                temp=1;

            }
            else{
                nv[i]=1;
                temp=2;
            }
                    }
         else{
           // nv.push_back(0);

         if(temp==1)
         {

             nv[i]=0;
             temp=0;
         }
         else{
                nv[i]=1;
            temp=1;
         }
         }
         cout<<nv[i];
     }

     for(i=0;i<n;i++)
     {
         cout<<nv[i];

     }
     cout<<endl;

*/


int n;
string a;
cin>>n>>a;
int last=-1;
string b;
for(int i=0;i<n;i++)
{

    if(a[i]=='1')
    {

        if(last==2)
        {

            b.push_back('0');
            last=1;
        }
        else{
            b.push_back('1');
            last=2;
        }
    }
    else{
        if(last==1)
        {

            b.push_back('0');
            last=0;
        }
        else{
            b.push_back('1');
            last=1;
        }
    }
}

cout<<b<<endl;
 }
    return 0;
}
