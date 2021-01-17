#include <bits/stdc++.h>

using namespace std;


int __gcd(int a,int b)
{
    if(b!=0)
    {
       return __gcd(b,a%b);

    }
    return a;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--)
    {

        string s1,s2;
        int lcm;
        cin>>s1;
        cin>>s2;
        int n1=s1.size();
        int n2=s2.size();
        if(n1!=n2)
        {
            int k=__gcd(n1,n2);
             lcm=(n1*n2)/k;


        string ns1="";
        string ns2="";
        int temp=lcm/n1;
        for(int i=0;i<temp;i++)
        {
            ns1=ns1+s1;

        }
           temp=lcm/n2;
         for(int i=0;i<temp;i++)
        {
            ns2=ns2+s2;

        }
        if(ns1==ns2)
        {
            cout<<ns1<<endl;

        }
        else{
            cout<<-1<<endl;
        }
        }
        else{
             if(s1==s2)
             {
                 cout<<s1<<endl;
             }
             else{
                cout<<-1<<endl;
             }
        }



    }
    return 0;
}
