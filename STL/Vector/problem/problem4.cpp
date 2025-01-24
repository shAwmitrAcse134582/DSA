#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    int cnt=0;
    sort(v.begin(),v.end());
    for(int i=0;i<n-1;i++){
        int x=v[i]+1;
        for(int j=1;j<n;j++){
              if(x==v[j]){
                cnt++;
                  break;
              }
            
        }
    }
    cout<<cnt<<endl;
}