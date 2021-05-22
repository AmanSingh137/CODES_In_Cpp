#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define mod 1000000007
#define tester() lli t; cin >> t; while(t--)

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
    int m;
    cin >> m;
    int b[m];
    for (int i = 0; i < m; ++i)
    {
        cin >> b[i];
    }
    sort(a, a+n);
    sort(b, b+m);
    int c =0;
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            if(abs(a[i]-b[j]) <=1) {
                c++;
                b[j]=1000;
                break;
            }
        }
    }
    cout << c << endl;
}
