#include <bits/stdc++.h>

using namespace std;

typedef vector<pair<pair<int, int>, int>> pairv;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int n;
    cin >> n;
    int st[n], et[n];
    for (int i = 0; i < n; ++i)
        cin >> st[i];
    for (int i = 0; i < n; ++i)
        cin >> et[i];
    pairv activity;
    for (int i = 0; i < n; ++i)
        activity.push_back(make_pair(make_pair(et[i], st[i]), i + 1));
    sort(activity.begin(), activity.end());
    int count = 0, presentEnd = -1;
    vector<int> selected;
    for (int i = 0; i < n; ++i)
    {
        if (activity[i].first.second > presentEnd)
        {
            count++;
            presentEnd = activity[i].first.first;
            selected.push_back(activity[i].second);
        }
    }
    cout << "No. of non-conflicting activities: " << count << endl;
    int l = selected.size();
    cout << "List of selected activities: " << selected[0];
    for (int i = 1; i < l; ++i)
        cout << ", " << selected[i];
    return 0;
}
