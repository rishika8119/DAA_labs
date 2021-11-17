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
    int duration[n], deadLine[n], maxD = -1;
    for (int i = 0; i < n; ++i)
        cin >> duration[i];
    for (int i = 0; i < n; ++i)
    {
        cin >> deadLine[i];
        maxD = max(deadLine[i], maxD);
    }
    pairv job;
    for (int i = 0; i < n; ++i)
        job.push_back(make_pair(make_pair(deadLine[i], duration[i]), i + 1));
    sort(job.begin(), job.end());
    int available[maxD], visited[maxD] = {0}, count = 0;
    for (int i = 0; i < maxD; ++i)
        available[i] = i + 1;
    vector<int> selected;
    for (auto i : job)
    {
        int du = i.first.second, de = i.first.first - 1, ind = i.second;
        if (available[de] >= du)
        {
            for (int j = maxD - 1; j > de; --j)
                available[j] -= du;
            int x = 0;
            while (x != du)
            {
                available[de] -= du - x;
                if (available[de] > 0 && !visited[de])
                    ++x;
                --de;
            }
            ++count;
            selected.push_back(ind);
            visited[de] = 1;
        }
    }
    cout << "Max Number of Tasks: " << count << endl;
    cout << "Selected Task Numbers: ";
    cout << selected[0];
    int l = selected.size();
    for (int i = 1; i < l; ++i)
    {
        cout << ", " << selected[i];
    }
    return 0;
}
