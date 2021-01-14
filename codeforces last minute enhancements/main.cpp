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
      vector<int>v;
      for(int i=0;i<n;i++)
      {

          int x;
          cin>>x;
          v.push_back(x);
      }

      set<int>s;
      for(int i=0;i<n;i++)
      {
          if(s.find(v[i])!=s.end() && s.find(v[i]+1)==s.end())
          {
              s.insert(v[i]+1);

          }
          else{
            s.insert(v[i]);
          }
      }
      cout<<s.size()<<endl;
    }
    return 0;
}
