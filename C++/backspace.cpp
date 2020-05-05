//backspace
#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    char a;
    deque<char> correct;

    while(cin.get(a), a!='\n'){
        if(a=='<')correct.pop_back();
        else correct.push_back(a);
    }
    for (auto it = correct.begin(); it != correct.end(); ++it)
        cout<<*it;
    cout<<endl;

    return 0;
}
