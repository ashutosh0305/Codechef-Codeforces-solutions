#include <bits/stdc++.h>

using namespace std;
/*
int findnextprime(int te){
if(te%i==1
int __gcd(int a,int b)
{

    if(b==0)
    {
        return a;
    }
    return __gcd(b,a%b);
}
*/
bool isprime(int next)
{
    int sqnext=sqrt(next);
    for(int i=2;i<=sqnext;i++)
    {
        if(next%i==0)
        {

            return false;
        }

    }
    return true;
}
int main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(0);
 cout.tie(0);
 int  t;
 cin>>t;
 while(t--)
 {

     int d;
     cin>>d;
int ans=1,nvalue=0;

  //   int a=1+(2*d);
  //   int b=1+d;
     for(int i=0;i<2;i++)
     {
         nvalue=ans+d;
         bool flag=true;
          while(flag)
          {

              if(isprime(nvalue))
              {

                  ans*=nvalue;
                  break;
              }
              else{
                nvalue++;
              }
          }
     }
     cout<<ans<<endl;
     /*
     int g=__gcd(a,b);
     int l=(a*b)/g;

     if(a==l)
     {

         l=2*l;
          cout<<l<<endl;
     }
     else{
        cout<<l<<endl;
     }
     */

 }
 return 0;
}

/*
#include<cmath>
using namespace std;

bool isPrime(int num){
	int root = sqrt(num);
	for(int i=2;i<=root;i++)
	{
		if(num%i==0)
		{
			return false;
		}
	}
	return true;
}

void solve()
{
	int d;
	cin>>d;
	int res=1,next=0;
	for(int i=0;i<2;i++)
	{
		next=res+d;

		bool flag = true;
		while(flag)
		{
			if(isPrime(next))
			{
				res*=next;
				break;
			}else{
				next++;
			}
		}
	}
	cout<<res<<'\n';
}

int main() {
	int t;
	cin>>t;
	while(t--)
	{
		solve();
	}
	return 0;
}
*/
