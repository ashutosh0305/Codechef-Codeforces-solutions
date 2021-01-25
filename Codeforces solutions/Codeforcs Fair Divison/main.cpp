#include <iostream>

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

      int k,z;
      cin>>k;
     int count1=0;
      int count2=0;
      for(int i=0;i<k;i++)
      {


          cin>>z;
          if(z==1)
          {

              count1++;
          }
          else{
            count2++;
          }
      }
      int flag=1;
      if(count2%2!=0)
      {
          flag=0;
      }
      if(flag==0)
      {

          if(count1>=2 && count1%2==0)
          {
              cout<<"YES"<<endl;

          }
          else{
            cout<<"NO"<<endl;
          }
      }
      else{
        if(count1%2==0)
        {

            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
      }
  }
    return 0;
}
