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
        string s;
        cin>>s;
        int n=s.length();
        if(n>=10)
        {
        int flagup=0;
        int flagch=0;
        int flaglo=0;
        int flagdi=0;
        for(int i=0;i<n;i++)
        {
            if(isupper(s[i]))
            {
                if(i>0 && i<n-1)
                {
                flagup=1;

                }
                else
                {
                    break;
                }

            }
            if(s[i]=='@'||s[i]=='#'||s[i]=='%'||s[i]=='&'||s[i]=='?')
            {
                flagch=1;
            }
            if(islower(s[i]))
            {

                flaglo=1;
            }
            if(isdigit(s[i]-'0'))
            {
               if(i>0 && i<n-1)
               {
                   flagdi=1;
               }
               else
               {
                   break;
               }

            }

        }
        if(flagup && flagch && flaglo && flagdi)
        {

            cout<<"YES"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
