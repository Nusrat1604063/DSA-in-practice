//
// Created by Tabassum Akter Nusrat on 6/8/25.
//

#include <iostream>
using namespace std;

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        int n = numRows;
        vector<vector<int>> ans;
        for(int j= 0; j<n;j++) {
            ans.push_back(vector<int>(j+1));
            for(int i =0; i<=j; i++) {
                if(i==0 || i==j) {
                    ans[j][i] = 1;
                }
                else {
                    ans[j][i] = ans[j-1][i-1] + ans[j-1][i];
                }
            }
        }
        return ans;
    }
};
