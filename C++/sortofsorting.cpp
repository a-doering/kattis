//sortofsorting
#include <bits/stdc++.h>
using namespace std;

int main(){//O(nlogn)
    int n;
    char name[100];
    bool first_tc = true;

    cin>>n;
    while(n){

        vector<string>names;
        if(!first_tc)cout<<endl;//to separate the test cases
        first_tc = false;

        for(int i=0; i<n; i++){
            cin>>name;
            names.push_back(name);
        }

        //stl stable sort with lambda function to sort by
        stable_sort(names.begin(), names.end(), [](string a, string b){
            if(a[0]!=b[0])
                return a[0]<b[0];
            else
                return a[1]<b[1];
        });

        for(auto &word : names)
            cout<<word.c_str()<<endl;
        cin>>n;
    }
    return 0;
}
