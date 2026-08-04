#include<bits/stdc++.h>
using namespace std;
string reverseline(string s){
    int n = s.size();
    vector<string>words;
    string word="";
    string rev="";
    for(int i=0;i<n ;i++){
        if(s[i]!=' '){
            word+=s[i];
        }
        else if(!word.empty()){
            words.push_back(word);
            word="";
        }
    }
    if(!word.empty()){
        words.push_back(word);
    }
    reverse(words.begin(),words.end());
    for(int i=0;i<words.size();i++){
        rev+=words[i];
        if(i<words.size()-1)rev+=' ';
    }
    return rev;
}
int main(){
    string s;
    getline(cin,s);
    string res =reverseline(s);
    cout<<res;
}
