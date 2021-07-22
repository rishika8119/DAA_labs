#include<bits/stdc++.h>
using namespace std;
int search(int key,vector<int> v,int last)
{
    int mid,start=0,comp=0;
    last=last-1;
     
    while(start<=last)
    {
      mid=(start+last)/2;
      ++comp;
        if(v[mid]==key)
        {
            cout<<"key present , number of comparison are"<<comp<<endl;
            return 1;
        }
        else if(v[mid]<key)
        {
          start=mid+1;
        }
        else
        {
          last=mid-1;
        }
      
    }
    cout<<"key not present"<<endl;
    return 0;
}

int main()
{
  
    int n;
    int key;
    cout<<"enter the value to be serached"<<endl;
    cin>>key;
    cout<<"enter the size of array"<<endl;
    cin>>n;
    vector<int> v(n);
    cout<<"enter values in the array"<<endl;
    for(int i=0;i<n;i++)
    {
      cin>>v[i];
    }
   search(key,v,n);
  
  return 0;
}
