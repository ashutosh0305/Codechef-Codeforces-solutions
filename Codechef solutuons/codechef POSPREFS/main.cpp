#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int t;
	cin>>t;
	while(t--)
	{
	    int n,k;
	    cin>>n>>k;
	    vector<int>v;
	    int temp=n-k;
	    for(int i=1;i<=n;i++)
	    {
	        if(temp<i)
	        {
	            v.push_back(i);

	        }
	        else
	        {
	            int g=i*(-1);

	        v.push_back(g);
	        }
	    }
	    for(int i=0;i<n;i++)
	    {
	        cout<<v[i]<<" ";
	    }
	    cout<<endl;
	}
	return 0;
}
