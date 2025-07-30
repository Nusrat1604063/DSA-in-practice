#include <iostream>
#include  <vector>
#include<map>
using namespace std;
// TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
int main() {

    int n, k;
    cin>>n>>k;
    int p[n];
    vector<int> ans;
    unordered_map<int,int> mp;
    for (int i=0;i<n;i++) {
        cin>>p[i];
        mp[p[i]]++;

    }
    vector<pair<int,int>> items(mp.begin(), mp.end());
    sort(items.begin(), items.end(), [](auto & a, auto & b) {
        return a.second > b.second;
    });

    for (int i=0;i<k;i++) {
        ans.push_back(items[i].first);
    }
    for (int i=0;i<k;i++) {
        cout<<ans[i]<<endl;
    }
    //return ans;

}