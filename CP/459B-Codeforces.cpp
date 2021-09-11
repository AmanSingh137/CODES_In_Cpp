#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define mod 10001
#define tester() int t; cin >> t; while(t--)



signed main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r",stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }
    sort(a, a+n);
    int md = a[n-1]-a[0];
    map<int, int> mpp;
    for (int i = 0; i < n; ++i)
    {
        mpp[a[i]]++;
    }
    int n1 = mpp[a[n-1]];
    int n2 = mpp[a[0]];
    if(md!=0)
    cout << md << " " << n1*n2 << endl;
    else cout << md << " " << n*(n-1)/2 << endl;
}

