#include<bits/stdc++.h>
using namespace std;

int main()
{
  ///////
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  #ifndef ONLINE_JUDGE
  freopen("in.txt", "r", stdin);
  freopen("out.txt", "w", stdout);
  #endif
  ///////
  int t;
  cin>>t;
  while(t--)
  {
  int n;
    int flag=0;
    cin>>n;
    int a[n];
    int key;
    cin>>key;
    int c=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        
        if(a[i]==key)
        {
            flag=1;
            break;
        }
        
    }
    if(flag==1)
    {
        cout<<"number "<<key<<" is present and number of comparisons performmed are "<<c<<endl;
    }
    else if(flag==0){
        cout<<"number is not present";
    }
  }
}
