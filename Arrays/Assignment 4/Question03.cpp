#include <iostream>
#include <vector>
using namespace std;
vector<vector<int>> transpose(vector<vector<int>> &matrix) {
    int r = matrix.size();
    int c = matrix[0].size();

    vector<vector<int>> ans(c, vector<int>(r, 0));

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            ans[j][i] = matrix[i][j];
        }
    }

    return ans;
}