//cd
#include <bits/stdc++.h>
using namespace std;

int main(){
    //speed up of cin/cout
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    unordered_set<int> jacks;

    int n,m, curr, duplicates;

    while(cin>>n>>m, (n||m)){//there are several test cases
        duplicates=0;
        jacks.clear();//must clear due to several tc

        while(n--){
            cin>>curr;
            jacks.insert(curr);
        }
        while(m--){
            cin>>curr;
            if(jacks.find(curr)!= jacks.end())duplicates++;
        }
        cout<<duplicates<<endl;
    }
    return 0;
}
