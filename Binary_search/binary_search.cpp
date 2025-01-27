#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
    ll n, q;
    cin >> n >> q;
    
    vector<ll> v(n);
    for (ll i = 0; i < n; i++) {
        cin >> v[i];
    }
    
   
    sort(v.begin(), v.end());
    
    while (q--) {
        ll x;
        cin >> x;

        ll l = 0, r = n - 1; 
        bool ok = false;   

        while (l <= r) {
            ll mid = (l + r) / 2;
            if (v[mid] == x) {
                ok = true;
                break;
            } else if (v[mid] < x) {
                l = mid + 1; 
            } else {
                r = mid - 1;
            }
        }

        if (ok) {
            cout << "found" << endl;
        } else {
            cout << "not found" << endl;
        }
    }

    return 0;
}
