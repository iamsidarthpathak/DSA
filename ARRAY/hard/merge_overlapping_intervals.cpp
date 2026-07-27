#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> mergedintervals(vector<vector<int>>& intervals){
    int n= intervals.size();
    vector<vector<int>>ans;
    sort(intervals.begin(),intervals.end());
    for(int i=0;i<n;i++){
        if(!ans.empty()&&intervals[i][0]<=ans.back()[1])continue;
        int start=intervals[i][0];
        int end=intervals[i][1];
        for(int j=i+1;j<n;j++){
            if(intervals[j][0]<=end){
                end=max(end,intervals[j][1]);
            }
            else{break;}
        }
        ans.push_back({start,end});

    }
    return ans;
}

int main() {

    int n;
    cin >> n;

    vector<vector<int>> intervals(n, vector<int>(2));

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < 2; j++) {
            cin >> intervals[i][j];
        }
    }

    vector<vector<int>> sol = mergedintervals(intervals);

  for(int i = 0; i < sol.size(); i++) {
    cout << "[" << sol[i][0] << "," << sol[i][1] << "]" << endl;
}
    return 0;
}