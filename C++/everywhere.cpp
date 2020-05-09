#include <bits/stdc++.h>
using namespace std;

int main(){
    int t,n;
    string input;
    unordered_map<string, int> cities;
    cin>>t;

    while(t--){
        cities.clear();
        cin>>n;
        while(n--){
            cin>>input;
            //this way we could count freq of visits to each city
            cities[input]++;
        }
        //amount of elements in unordered_map
        cout<<distance(cities.begin(), cities.end())<<endl;
    }
    return 0;
}
