#include <bits/stdc++.h>
using namespace std;


void insertionSort(vector<int> &arr, int &comps, int &shifts){
    int n = arr.size();
    for(int i=0;i<n;i++){
        
        for(int j=i-1;j>=0;j--){
            comps++;
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
                shifts++;
            }else{
                break;
            }
        }
    }
}

int main(){
    //
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    freopen("inp1.txt", "r", stdin);
    freopen("out1.txt", "w", stdout);
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
        int comps = 0, shifts = 0;
        insertionSort(arr, comps, shifts);
        for(auto x: arr){
            cout << x << ' ';
        }
        cout << '\n';
        cout << "Comparisions: " << comps << '\n';
        cout << "Shifts: " << shifts << '\n';
            
    }

    return 0;
}
