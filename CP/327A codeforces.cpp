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
    int a1=0, a0=0, am=0;
    for (int i = 0; i < n; ++i)
    {
        if(a[i]==1){
            a1++;
            if(a0>0){
                a0--;
            }
        }
        if(a[i]==0){
            a0++;
            am = max(a0, am);
        }
    }
    if(a1==n) {
        cout << a1 - 1 << endl;
    }
    else 
    cout << am+a1 << endl;
}

