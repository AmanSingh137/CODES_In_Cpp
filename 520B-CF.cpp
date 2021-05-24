//two buttons from codeforces 
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
    
    int n, m;
    cin >> n >> m;
    if(n>m){
        cout << n-m << endl;
        return 0;
    }
    int c = 0;
    while(m>n){
        if(m%2==0){
            m/=2;
            c++;
        }
        else {
            m++;
            c++;
        }
    }
    if(m==n)
    cout << c << endl;
    else cout << c + (n-m) << endl;
}

