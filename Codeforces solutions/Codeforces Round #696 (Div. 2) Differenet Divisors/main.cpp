#include <bits/stdc++.h>
/*
using namespace std;
int gcd(int a,int b)
{

    if(b==0)
    {
        return a;
    }
    return gcd(b,a%b);
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


     int a=1+(2*d);
     int b=1+d;

     int g=gcd(a,b);
     int lcm=(a*b)/g;

     if(a==lcm)
     {

         lcm=2*lcm;
          cout<<lcm<<endl;
     }
     else{
        cout<<lcm<<endl;
     }

 }
}
*/

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
