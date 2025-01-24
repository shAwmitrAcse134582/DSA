#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    map<char,int>mp;
    for(int i=0;i<s.size();i++){
        mp[s[i]]++;
    }
    for(auto val : mp){
        cout<<val.first<<" "<<':'<<" "<<val.second<<endl;
    }
}