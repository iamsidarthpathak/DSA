#include<bits/stdc++.h>
using namespace std;
void rotate(vector<vector<int>>&matrix){
    int n = matrix.size();
        //brute force
        // vector<vector<int>>ans(n,vector<int>(n));
        // for(int i=0;i<n;i++){
        //     for(int j=0;j<n;j++){
        //         ans[j][n-i-1]=matrix[i][j];
        //     }
        // }
        // matrix=ans;



        //optimal approach
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                swap(matrix[i][j],matrix[j][i]);
            }
        }
        for(int i=0;i<n;i++){
           reverse( matrix[i].begin(), matrix[i].end());
        }
}
int main() {

    int n;
    cin >> n ;

    vector<vector<int>> matrix(n, vector<int>(n));

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }

    rotate(matrix);
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout<< matrix[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
