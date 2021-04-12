#include <bits/stdc++.h>
using namespace std;
vector<int> duplicates(int arr[], int n);
int main() {
    int t;
    cin >> t;
    while (t-->0) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        vector<int> ans = duplicates(a, n);
        for (int i : ans) cout << i << ' ';
        cout << endl;
    }
    return 0;
}
typedef map<int,int> m;
vector<int> duplicates(int a[], int n) {
    // code here
    m m1;
    sort(a,a+n);
    vector<int> v;
    for(int i=0;i<n;i++)
    {
        m1[a[i]]++;
    }
    for(auto t:m1)
    {
        if(t.second>1)
        {
            v.push_back(t.first);
        }
    }
    if(!(v.empty()))
    {
       return v; 
    }
    else
    {
        v.push_back(-1);
        return v;
    } 
}
