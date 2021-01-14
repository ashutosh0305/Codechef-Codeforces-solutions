#include <bits/stdc++.h>
using namespace std;

/*int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	   string s;
	   cin>>s;
	   stack<char>st;
	   int n=s.size();
	   st.push(s[0]);
	   for(int i=1;i<n;i++)
	   {
	       //if(s[i]==')' || s[i]==']'|| s[i]=='}')
	       //{
	           if(st.top()=='{' && s[i]=='}')
	           {
	               st.pop();
	           }
	           else if(st.top()=='[' && s[i]==']')
	           {
	               st.pop();
	           }
	           else if(st.top()=='(' && s[i]==')')
	           {
	               st.pop();
	           }
	           else
	           {
	               st.push(s[i]);
	           }
	    }
	    if(st.empty())
	    {
	        cout<<"balanced";
	    }
	    else
	    {
	        cout<<"not balanced";
	    }

	}

	return 0;
}
*/

/*
#include <bits/stdc++.h>
using namespace std;

int main() {
	//code

	int t;
	cin>>t;
	while(t--)
	{
	    vector<int>v;
	    int n;
	    int z;
	    cin>>n;
	    for(int i=0;i<n;i++)
	    {
	        cin>>z;
	        v.push_back(z);
	    }
	    vector<int>v1(n,-1);
	   // for(int i=n-2;i>=0;i--)
	   // {
	   //    // if(v[i+1]>v[i])
	   //    // {
	   //    //     v1[i]=v[i+1];
	   //    // }
	   //    // else{
	   //    //     v1[i]=v1[i+1];
	   //    // }
	   // }

	   for(int i=0;i<n-1;i++)
	   {
	       for(int j=i+1;j<n;j++)
	       {
	           if(v[j]>v[i])
	           {
	               v1[i]=v[j];
	               break;
	           }
	       }
	   }
	 for(int i=0;i<n;i++)
	 {
	     cout<<v1[i]<<" ";
	 }
	 cout<<endl;
	}
	return 0;
}
*/









class stackqueue{
private:
    stack<int>s1;
    stack<int>s2;
public:
    void push(int a);
    void pop();


};

void stackqueue::push(int a)
{
   while(!s1.empty())
   {
       s2.push(s1.top());
       s1.pop();

   }
   s1.push(a);
   while(!s2.empty())
   {

       s1.push(s2.top());
       s2.pop();
   }
}
void stackqueue::pop()
{
    int z=s1.top();
    s1.pop();
    cout<<z<<" ";
}
int main()
{

    stackqueue s;
    s.push(6);
    s.push(9);
    s.push(5);
    s.push(8);
    s.pop();
    s.pop();
    return 0;

}






















