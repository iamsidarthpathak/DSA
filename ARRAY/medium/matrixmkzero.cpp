//in this queston we have to make elements of each row and column in which even one  zero is present...
#include <bits/stdc++.h>
 using namespace std;
void make_zero(vector<vector<int>>&matrix){
//     //brute force
//     int m = matrix.size();//rows
//     int n =matrix[0].size();//columns
//         for(int i=0;i<m;i++){
//         for(int j=0;j<n;j++){
//             if(matrix[i][j]==0){
//                 for(int k=0;k<m;k++){//update rows
//                     if(matrix[k][j]!=0){
//                     matrix[k][j]=-1;
//                     }

//                 }
//                 for(int l=0;l<n;l++){
//                     //update coln
//                     if(matrix[i][l]!=0){
//                         matrix[i][l]=-1;
//                     }
//                 }

//             }
//         }
       
//     } for(int i=0;i<m;i++){
//             for(int j=0;j<n;j++){
//                 if(matrix[i][j]==-1){
//                     matrix[i][j]=0;
//                 }
//             }
//         }
//         //better approach to avoid t(c)of(m*n)*(m+n)


int m = matrix.size();
int n = matrix[0].size();
    // vector<int>rows(m);
    // vector<int>column(n);
    // for(int i=0;i<m;i++){
    //     for(int j=0;j<n;j++){       
    //         if(matrix[i][j]==0){
    //             rows[i]=1;
    //             column[j]=1;
    //         }
    //     }
    // }
    // for(int i=0;i<m;i++){
    //     for(int j=0;j<n;j++){
    //         if(rows[i]==1||column[j]==1){
    //             matrix[i][j]=0;
    //         }
    //     }
    // }
            //optimal approach to rempve s(c) of O(m+n) and t(c) of (m*n ) would remain same
        
        bool firstRowZero = false;
        bool firstColZero = false;

        // Check first row
        for(int j = 0; j < n; j++) {
            if(matrix[0][j] == 0) {
                firstRowZero = true;
                break;
            }
        }

        // Check first column
        for(int i = 0; i < m; i++) {
            if(matrix[i][0] == 0) {
                firstColZero = true;
                break;
            }
        }

        // Mark rows and columns
        for(int i = 1; i < m; i++) {
            for(int j = 1; j < n; j++) {
                if(matrix[i][j] == 0) {
                    matrix[i][0] = 0;
                    matrix[0][j] = 0;
                }
            }
        }

        // Set zeroes using markers
        for(int i = 1; i < m; i++) {
            for(int j = 1; j < n; j++) {
                if(matrix[i][0] == 0 || matrix[0][j] == 0) {
                    matrix[i][j] = 0;
                }
            }
        }

        // Set first row
        if(firstRowZero) {
            for(int j = 0; j < n; j++) {
                matrix[0][j] = 0;
            }
        }

        // Set first column
        if(firstColZero) {
            for(int i = 0; i < m; i++) {
                matrix[i][0] = 0;
            }
        }
    }




int main() {

    int n, m;
    cin >> n >> m;

    vector<vector<int>> matrix(n, vector<int>(m));

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> matrix[i][j];
        }
    }

    make_zero(matrix);
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cout<< matrix[i][j];
        }
        cout<<endl;
    }

    return 0;
}
