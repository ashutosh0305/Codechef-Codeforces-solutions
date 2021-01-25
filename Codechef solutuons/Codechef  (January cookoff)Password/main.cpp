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

            if(islower(s[i]))
            {

                flaglo=1;
            }
            if(i>0 && i<n-1)
            {
            if(isupper(s[i]))
            {

                flagup=1;

            }
            if(s[i]=='@'||s[i]=='#'||s[i]=='%'||s[i]=='&'||s[i]=='?')
            {

                flagch=1;

            }

            if(s[i]=='0' ||s[i]=='1' || s[i]=='2'||s[i]=='3'|| s[i]=='4'||s[i]=='5'|| s[i]=='6' || s[i]=='7'||s[i]=='8'|| s[i]=='9')
            {

                   flagdi=1;

            }
            }

        }
        if(flagup==1 && flagch==1 && flaglo==1 && flagdi==1)
        {

            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
