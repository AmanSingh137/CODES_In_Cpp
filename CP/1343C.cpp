#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define mod 10001
#define tester() int t; cin >> t; while(t--)

int scheck(int n){
    if(n<0) return -1;
    return 1;
}

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
        int sum = 0;
        for (int i = 0; i < n; ++i)
        {
            int cur = a[i];
            int j = i;
            while(j < n and scheck(a[i])==scheck(a[j])) {
                cur = max(cur, a[j]);
                j++;
            }
            sum += cur;
            i = j-1;
        }
        cout << sum << endl;
    }
}


