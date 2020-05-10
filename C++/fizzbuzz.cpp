//fizzbuzz

#include <bits/stdc++.h>
using namespace std;

int main(){
    //speed up of cin/cout
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int x, y, n;
    cin>>x>>y>>n;

    for(int i=1; i<=n; i++){

        if(i%x==0)cout<<"Fizz";
        if(i%y==0)cout<<"Buzz";
        if(!(i%x==0||i%y==0))cout<<i;
        cout<<endl;

    }
    return 0;
}
