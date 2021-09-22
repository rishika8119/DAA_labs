#include <bits/stdc++.h>
using namespace std;

// Given an unsorted array, sort the array using selection sort
// Time Complexity: O(n^2), Space Complexity: O(1)

void selectionSort(vector<int> &arr, int &comps, int &swaps){
    int n = arr.size();
    for(int i=0;i<n;i++){
        int mn = arr[i];
        int mn_id = i;
        for(int j=i+1;j<n;j++){
            comps++;
            if(mn > arr[j]){
                mn = arr[j];
                mn_id = j;
            }
        }
        if(mn_id != i){
            swap(arr[mn_id], arr[i]);
            swaps++;
        }
    }
}

int main(){
    //
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    freopen("inp2.txt", "r", stdin);
    freopen("out2.txt", "w", stdout);
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
        int comps = 0, swaps = 0;
        selectionSort(arr, comps, swaps);
        for(auto x: arr){
            cout << x << ' ';
        }
        cout << '\n';
        cout << "Comparisions: " << comps << '\n';
        cout << "Swaps: " << swaps << '\n';
            
    }

    return 0;
}
