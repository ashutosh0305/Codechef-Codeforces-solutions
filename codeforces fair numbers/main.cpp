#include <bits/stdc++.h>
# define int int64
_t

using namespace std;
/*
int gcd(int a,int b)
{

    if(b==0)
    {return a;
    }

    return gcd(b,a%b);
}
*/
int check(int n)
{
     /* set<int>::iterator it;



      for(it=l.begin();it!=l.end();it++)
      {
       // m=(m*(*it))/gcd(m,(*it));
       if((kj%(*it))!=0)
       {
           return 0;
       }

      }
      return 1;
*/

      while(true)
      {

          int n1=n;
          while(n1>0)
          {

              int r=n1%10;
              if(r!=0 && n%r!=0)
              {

                  break;
              }
              n1/=10;

          }
          if(n1==0)
          {

              return n;
              break;
          }
          n++;
      }

}
int32_t main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  int t;
  cin>>t;

  while(t--)
  {

      int n;
      cin>>n;


      //set<int>l;
      /*
      for(int i=0;i<k;i++)
      {

          if(s[i]!='0')
          {
              int j=stoi(s[i]);
              l.push_back(j);

          }

      }
      sort(l.begin(),l.end());
      */
      /*
      int x;
      while(d>0)
      {
          x=d%10;
          d/=10;
          if(x!=0)
          {

             l.insert(x);

          }

      }
      for(auto it=l.begin();it!=l.end();it++)
      {

          cout<<*it<<" ";
      }
      cout<<endl;
      while(check(l,n)==0)
      {
          n++;
      }
      cout<<n<<endl;
      */

      int ans=check(n);
      cout<<ans<<endl;

/*

      int nn=n%m;
      if(nn==0)
      {

          cout<<n<<endl;
      }
      else{
        int f=m-nn;
        int ans=n+f;
        cout<<ans<<endl;
      }
*/
  }
  return 0;
}
