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
    int n,z;
    cin>>n;
    priority_queue<int>pq;

    for(int i=0;i<n;i++)
    {
        cin>>z;


            pq.push(z);
    }
    int sum1=0;
    int sum2=0;
  for(int i=1;i<=n;i++)
  {
      int value=pq.top();
      if(i%2==1)
      {

          if(value%2==0)
          {

              sum1+=value;
          }

      }
      else{

        if(value%2==1)
          {

              sum2+=value;
          }
      }
      pq.pop();

  }

    if(sum1==sum2)
    {

        cout<<"Tie"<<endl;
    }
    else if(sum1>sum2){
        cout<<"Alice"<<endl;
    }
    else{
        cout<<"Bob"<<endl;
    }

    }
    return 0;
}
