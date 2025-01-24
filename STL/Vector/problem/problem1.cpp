#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>v1(n),v2(n),v3;
    for(int i=0;i<n;i++){
        cin>>v1[i];
    }
    for(int i=0;i<n;i++){
        cin>>v2[i];
    }
   for(int i=0;i<n;i++){
    v3.push_back(v2[i]);
   }
    for(int i=0;i<n;i++){
    v3.push_back(v1[i]);
   }
   for(auto val:v3){
    cout<<val<<" ";
   }
}