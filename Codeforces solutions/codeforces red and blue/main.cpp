/*
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

        int n,m;
        cin>>n;
        int sum=0;
        int ans1=0;
        int value;
        for(int i=0;i<n;i++)
        {
            cin>>value;
            sum+=value;
            ans1=max(sum,ans1);
        }
        int ans2=0;
        cin>>m;
        sum=0;
        for(int i=0;i<m;i++)
        {

            cin>>value;
            sum+=value;
            ans2=max(sum,ans2);
        }

        cout<<ans1+ans2<<endl;

    }
    return 0;
}
*/
#include <bits/stdc++.h>
using namespace std;

int check(vector<vector<int>>nv,int r,int c)
{

    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {

          while(j>=i && i<r-1 && j<c-1)
          {
            if(nv[i][j]!=nv[i+1][j+1])
            {
                return 0;
            }
            i++;
            j++;
          }




         while(j<i && i<r-1 && j<c-1 )
         {
            if(nv[i][j]!=nv[i+1][j+1])
            {

                return 0;
            }
            i++;
            j++;
         }

        }
    }
    return 1;
}





int main() {
	// your code goes here
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int t;
	cin>>t;
	while(t--)
	{
	    int r,c;
	    cin>>r>>c;
	    vector<vector<int>>v(r,vector<int>(c,0));
	    for(int i=0;i<r;i++)
	    {
	        for(int j=0;j<c;j++)
	        {
	            cin>>v[i][j];
	        }
	    }
	    int q;
	    int x,y,val;
	    cin>>q;
	    while(q--)
	    {
	        cin>>x>>y>>val;
	        v[x][y]=val;
	        if(check(v,r,c))
	        {
	            cout<<"Yes"<<endl;
	        }
	        else
	        {
	            cout<<"No"<<endl;
	        }
	    }
	}
	return 0;
}

