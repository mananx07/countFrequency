#include<bits/stdc++.h>
using namespace std;
int main() {

    string para = "this is para this para says manan upmanyu is a student";

    int i=0;
    unordered_map<string,int> m;
    string word = "";
    for(int i=0; i<=para.length(); i++ ){

        char ch = para[i];
        if(ch != ' ' && ch != '\0') {
            word.push_back(para[i]);
        }

        if(ch == ' ' || ch == '\0'){
            m[word]++;
            word = "";
        }

    }


    for(auto i: m) {
        cout << i.first << " - " << i.second <<endl;
    }

    return 0;
}




