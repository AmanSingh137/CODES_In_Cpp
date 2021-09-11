#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define mod 10001
#define tester() int t; cin >> t; while(t--)

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    int a[n+1], t[n];
    a[0]=0;
    for(int i =1; i <= n; i++){
        cin >> a[i];
        if(a[i] >= a[i-1]) t[i-1]=1;
        else t[i-1]=-1;
    }
    int p = 0, c=0;
    for(int i = 0; i < n; i++){
        if(t[i]==-1){
            c++;
            p=i;
        }
    }
    if(c>1){
        cout << -1 << endl;
        return 0;
    }
    else if (c ==0){
        cout << 0 << endl;
        return 0;
    }
    
    if(a[n] <= a[1]){
        cout << n-p << endl;
    }
    else {
        cout << -1 << endl;
    }

}
