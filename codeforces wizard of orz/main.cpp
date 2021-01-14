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
        cout<<9;
        for(int i=0;i<n-1;i++)
        {

            cout<<(8+i)%10;
        }
    /*    int tdiff=n-1;
        int sk=tdiff%10;
        int endv=9-sk;
        int i=1;

           int start;
        while(i<n)
        {
            start=endv;
            int k=abs(n-i)%10;
          int j=1;
          while(j<=k)
          {

              if(start==9)
              {

                  start=-1;
              }
              start++;
              j++;
          }
          cout<<start;
          i++;

        }
        cout<<endv<<endl;
        */
        cout<<endl;
    }
    return 0;
}
