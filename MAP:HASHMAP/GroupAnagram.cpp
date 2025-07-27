#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;

// sorting with complexity 0(n*logk) where k is the length of largest string
int main() {
    map<string, vector<string>> mp;
    vector<vector<string>> ans;
    int n ;
    string str;
    vector <string> v;
    cin>>n;
   for(int i=0;i<n;i++) {
       cin>>str;
       v.push_back(str);
   }
    for(int i=0;i<v.size(); i++) {
        string p = v[i];
        sort(p.begin(), p.end());
         mp[p].push_back(v[i]);

    }

    for( auto x: mp) {
        for( auto y : x.second) {
            cout<<y<<" ";
        }
        cout<<endl;
    }

    // for(auto x: mp) {
    //     ans.push_back(x.second);
    // }
    // return ans;

   }

