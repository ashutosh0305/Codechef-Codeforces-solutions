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
      int n;
      cin>>n;
      string s;
      cin>>s;

      int i=n-1;
      int count=0;
      while(s[i]==')')
      {

          count++;
          i--;
      }
      int res=n-count;
      if(res<count)
      {

          cout<<"Yes"<<endl;
      }
      else{
        cout<<"No"<<endl;
      }
  }
  return 0;
}
