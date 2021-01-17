#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int t;
	cin>>t;
	while(t--)
	{

	map<int,pair<int,int>>m;
	string s;
	cin>>s;
	int count=0;
	int n=s.length();
	for(int i=0;i<n;i++)
	{
	    if(m[s[i]].first!=0 &&  (m[s[i]].second+1)!=i)
	    {
	        int temp=i-m[s[i]].second;
	        count+=temp;
	    }
	    else
	    {
	        m[s[i]].first++;
	        m[s[i]].second=i;
	    }

	}
	cout<<count<<endl;
	}
	return 0;
}

