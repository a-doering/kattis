//numberfun
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    double result,a,b,c;
    cin>>n;
    while(n--){
        cin>>a>>b>>c;
        if(a+b==c)cout<<"Possible"<<endl;
        else if(a-b==c)cout<<"Possible"<<endl;
        else if(a*b==c)cout<<"Possible"<<endl;
        else if(a/b==c)cout<<"Possible"<<endl;
        else if(b-a==c)cout<<"Possible"<<endl;
        else if(b/a==c)cout<<"Possible"<<endl;
        else cout<<"Impossible"<<endl;
    }

    return 0;
}
