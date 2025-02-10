#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
    ll n, q;
    cin >> n >> q;
    
    vector<ll> a(n);
    for (ll i = 0; i < n; i++) {
        cin >> a[i];
    }

   
    vector<ll> pre(n);
    pre[0] = a[0];

    for (ll i = 1; i < n; i++) {
        pre[i] = a[i] + pre[i - 1];
    }

//    printing prefix sum

    // for (ll i = 0; i < n; i++) {
    //     cout << pre[i] << " ";
    // }
   
   
    while (q--) {
        ll l, r;
        cin >> l >> r; 
        l--; r--; 
         ll sum=0;
         if(l==0){
            sum+=pre[r];
         }
         else{
              sum+=pre[r]-pre[l-1];
         }
         
        cout<<sum<<endl;    
    }

    return 0;
}
