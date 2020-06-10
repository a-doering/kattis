//reversebinary
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, n_bin_reversed=0, curr;
    stack<int>binary;
    cin>>n;

    while(n){
        curr=n%2;
        binary.push(curr);
        n/=2;
    }
    for(int i=0; !binary.empty(); i++){
        if(binary.top()) n_bin_reversed+= pow(2,i);
        binary.pop();
    }
    cout<<n_bin_reversed<<endl;

    return 0;
}
