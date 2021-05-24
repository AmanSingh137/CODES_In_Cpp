#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define mod 1000000007
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
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
        }
        if(n==1){
            cout << 1 << endl;
            continue;
        }
        int b[n];
        b[0]=1;
        for (int i = 1; i < n; ++i)
        {
            if(a[i]>=a[i-1]){
                b[i] = b[i-1]+1;
            }
            else {
                b[i]=1;
            }
        }
        int sum = 0;
        for (int i = 0; i < n; ++i)
        {
            sum += b[i];
        }
        cout << sum << endl;
    }
}

