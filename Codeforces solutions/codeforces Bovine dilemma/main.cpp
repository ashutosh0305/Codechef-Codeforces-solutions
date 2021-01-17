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
        vector<int>v;
        for(int i=0;i<n;i++)
        {

            int z;
            cin>>z;
            v.push_back(z);
        }


        float total;
        set<float>s;
        for(int i=0;i<n-1;i++)
        {
            float initial=0.5*(v[i]-0);

            for(int j=i+1;j<n;j++)
            {

                total=0.5*v[j];
                float diff=total-initial;
                s.insert(diff);
            }
        }
        cout<<s.size()<<endl;

    }
    return 0;
}
