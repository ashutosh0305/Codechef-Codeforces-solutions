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

       string s;
       cin>>s;
       int n=s.length();
/*
       vector<string>st;
       for(int i=0;i<n;i++)
       {
           if(st.empty()&& s[i] == '?')
           {

               st.push_back("(");
           }
           else if(*(st.back()) == "(" && s[i] == ")")
           {
               st.pop_back();
           }
           else if(*(st.back()) == '(' && s[i] == '?'){
            st.pop_back();
           }
           else{
            st.push_back(s[i]);
           }
       }
       if(st.empty())
       {

           cout<<"Yes"<<endl;
       }
       else{
        cout<<"No"<<endl;
       }
*/
int count=0;
if(s[0]==')' || s[n-1]=='(')
{

    cout<<"No"<<endl;
}
else{
    for(int i=0;i<n;i++)
    {

        if(s[i]=='?')
        {

            count++;
        }
    }

if(count%2==0)
{

    cout<<"Yes"<<endl;
}
else{
    cout<<"No"<<endl;
}
}
    }
    return 0;
}
