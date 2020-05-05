//apaxiaaans
#include <bits/stdc++.h>
using namespace std;

int main(){
    string name;
    cin>>name;

    char last = ' ';
    for(auto itr = name.begin(); itr != name.end(); ++itr){
        char c = *itr;

        if (c != last){
            cout << c;
        }
        last = c;
    }

    cout<<endl;
    return 0;
}
