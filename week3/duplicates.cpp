#include <bits/stdc++.h>
using namespace std;

// Given an unsorted array containing 0 or more duplicates, find whether 
// there are any duplicates or not
// Time Complexity: O(nlogn), Space Complexity: O(1)

void selectionSort(vector<int> &arr){
    int n = arr.size();
    for(int i=0;i<n;i++){
        int mn = arr[i];
        int mn_id = i;
        for(int j=i+1;j<n;j++){
            if(mn > arr[j]){
                mn = arr[j];
                mn_id = j;
            }
        }
        swap(arr[mn_id], arr[i]);
    }
}


int main(){
    //
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    freopen("inp3.txt", "r", stdin);
    freopen("out3.txt", "w", stdout);
    //

    int t;
    cin >> t;
    while(t--){
        int n, key;
        cin >> n;
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin >> arr[i];
        }
        selectionSort(arr);
        int bro = 0;
        for(int i=0;i<n-1;i++){
            if(arr[i] == arr[i+1]){
                bro = 1;
                break;
            }
        }
        if(bro) cout << "YES\n";
        else cout << "NO\n";
    }

    return 0;
}
