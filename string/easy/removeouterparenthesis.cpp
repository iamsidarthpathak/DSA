#include<bits/stdc++.h>
using namespace std;
string removeparenthesis(string s){
    int n =s.size();
    string ans="";
    int level =0;
    for(int i=0;i<n;i++){
        if(s[i]=='('){
            
            if(level>0){
                ans.push_back(s[i]);
            }
            level++;
        }
        if(s[i]==')'){
            level--;
            if(level>0){
                ans.push_back(s[i]);
            }
        }
    }
    return ans;
}
int main(){
    string s;
    cin>>s;
    string res =removeparenthesis(s);
    cout<<res;
}