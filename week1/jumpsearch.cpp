#include<bits/stdc++.h>
using namespace std;
int linearsearch(vector<int> v,int key,int low,int size)
{
    int flag=0;
    for(int i=low;i<size;i++)
    {
        if(v[i]==key)
        {
            flag=1;
            cout<<"key present"<<endl;
        }
    }
    if(flag==0)
    {
        cout<<"key not present"<<endl;
    }
    return 0;
}
int jumpsearch(vector<int>v,int key,int size)
{
    int jump=sqrt(size);
    int low;
    for(int i=0;i<size;i+=jump)
    {
        if(v[i]==key)
            return i;
        if(v[i]<key)
            low=i;
        else
            linearsearch(v,key,low,size);
    }
}
int main()
{
int n;
cin>>n;
  vector<int> v(n);
  for(int i=0;i<n;i++)
  {
      cin>>v[i];
  }
  int key;
  cin>>key;
  jumpsearch(v,key,n);
  return 0;
}
