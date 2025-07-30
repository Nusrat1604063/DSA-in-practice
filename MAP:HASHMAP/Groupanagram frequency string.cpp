//
// Created by Tabassum Akter Nusrat on 29/7/25.
//
#include<unordered_map>
#include <iostream>
#include<vector>
using namespace std;

int main() {
    vector<vector<string>> ans;
    unordered_map<string, vector<string>> mp;
    int n;
    cin>>n;
    vector<string> v;
    string p;
    for(int i=0;i<n;i++){
        cin>>p;
        v.push_back(p);
    }

    for (int i=0;i<n;i++) {
        string p = v[i];
        int k[26] = {0};
        string key = "#";
        for(char c: p) {

            k[c-'a']++;
        }

        for(int j=0; j<26;j++) {
            key+=to_string(k[j]) ;


        }
        mp[key].push_back(v[i]);

    }

    for(auto x: mp) {
        ans.push_back(x.second);
    }

    for(auto x: ans) {
        for(auto y: x) {
            cout<<y<<" ";
        }
        cout<<"\n";
    }



}