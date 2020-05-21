//nodup Kattis
#include <bits/stdc++.h>
using namespace std;

int main(){

    string s, word;
    unordered_map <string, int>  words;

    while(cin>>word){
        words[word]++;

        if(words[word]>1){
            cout<<"no"<<endl;
            return 0;
        }
    }

    cout<<"yes"<<endl;
    return 0;
}
