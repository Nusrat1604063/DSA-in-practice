#include <iostream>
using namespace std;
//1st approch is running m*n and then runing another loop filling all the
//matrix[i][x] with zero and matrix[x][j] with zero


// This is Brute force 2nd approch using extra memory of r, and c
// time complexity 0(m*n)
//Space complexity 0(2n) = 0(n)


class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();

        vector<int> r(m,1);
        vector<int> c(n, 1);

        for(int i=0;i<m;i++) {
            for(int j=0;j<n; j++) {
                if(matrix[i][j] == 0) {
                    r[i] = 0;
                    c[j] = 0;
                }
            }
        }

        for(int i=0;i<m;i++) {
            for(int j = 0;j<n ; j++) {
                if(r[i] == 0 || c[j] == 0) {
                    matrix[i][j] = 0;
                }
            }
        }


    }
};

//Most optimized approach
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();

        bool firstRow = false;
        bool firstcol = false;

        for(int i=0;i<m;i++) {
            for(int j=0;j<n; j++) {
                if(matrix[i][j] == 0) {
                    if(i == 0 ) {
                        firstRow = true;

                    }
                    if(j == 0 ) {
                        firstcol = true;

                    }
                    matrix[0][j] = 0;
                    matrix[i][0] = 0;
                }
            }
        }

        for(int i = 1;i<m;i++) {
            for(int j = 1;j<n ; j++) {
                if(matrix[0][j] == 0 || matrix[i][0] == 0) {
                    matrix[i][j] = 0;
                }
            }
        }

        if(firstRow) {
            for(int j =0; j<n; j++) {
                matrix[0][j] = 0;
            }
        }

        if(firstcol) {
            for(int i =0; i<m; i++) {
                matrix[i][0] = 0;
            }
        }

    }
};
