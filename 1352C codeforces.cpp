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
    
    tester(){
        int n, m;
        cin >> n >> m;
        int x = m/(n-1);
        if((x+m)%n==0) {
            cout << x+m-1 << endl;
        }
        else {
            cout << x+m << endl;
        }
    }
}

