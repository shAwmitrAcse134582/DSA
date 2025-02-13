#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define get_out return 0
#define fast ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

int main() {
    fast;
    
    ll n, t;
    cin >> n >> t;
    
    vector<ll> v(n);
    for (ll i = 0; i < n; i++) {
        cin >> v[i];
    }

    sort(v.begin(), v.end()); 

    ll l = 0, r = n - 1;
    bool ok = false;
    ll index=0;
    while (l <= r) {
        ll mid = (l + r) / 2;
          index=mid;
        if (v[mid] == t) {
            ok = true;
            index=mid;
            break;
        } 
        else if (v[mid] > t) {
            r = mid - 1;  
        } 
        else {
            l = mid + 1;  
        }
        if(v[mid]<t && v[mid+1]>t){
            cout<<"hi"<<endl;
             index=mid+1;
        }
    }

    // if (ok) {
    //     cout << index << endl;  
    // } else {
    //     cout << index+1<< endl; 
    // }
    cout<<index<<endl;

    get_out;
}
