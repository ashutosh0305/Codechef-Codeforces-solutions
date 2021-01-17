#include<bits/stdc++.h>
using namespace std;


int main() {
	// your code goes here
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int t;
	cin>>t;
	while(t--)
	{
     string temp;
     cin>>temp;
     set<string>s;
     int n=temp.length();
     for(int i=0;i<n;i++)
     {
         for(int j=i;j<=n;j++)
         {

                 if(j-i+1<=n)
                 {


                  string news=temp.substr(i,j-i+1);

	              string rnews=news;
	              reverse(rnews.begin(),rnews.end());

	              s.insert(news);
	              s.insert(rnews);
                 }
         }
     }

	              set<string>::iterator it=s.begin();
	              for(it=s.begin();it!=s.end();it++)
	              {
	                  int count=0;
	                  int nl=(*it).length();
	                  for(int k=0;k<nl;k++)
	                  {
	                      string nt=*it;
	                      if(nt[k]=='1')
	                      {
	                          count++;
	                      }
	                  }
	                  if(count%2)
	                  {
	                      s.erase(it);
	                  }
	              }
	              cout<<s.size()<<endl;
	              s.clear();

	}
	return 0;
}

