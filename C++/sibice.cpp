//Sibice
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, w,h,l;
    cin>>n>>w>>h;
    double max = sqrt(w*w + h*h);
    while(n--){
        cin>>l;
        if(l<=max)cout<<"DA"<<endl;
        else cout<<"NE"<<endl;
    }

    return 0;
}
