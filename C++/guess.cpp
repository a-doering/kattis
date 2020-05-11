//guess the number
#include <bits/stdc++.h>
using namespace std;

//essentially binary search
int main(){
    //searches between 1 and 1000
    int m=0;
    int M=1001;
    int n=M/2;
    cout<<n<<endl;
    cout.flush();
    string answer;

    while(true){
        cin>>answer;
        //if(!answer.compare("lower")){
        if(answer=="lower"){
            M=(M+m)/2;
            cout<<(M+m)/2<<endl;
            cout.flush();
        }
        else if (!answer.compare("higher")){
            m=(M+m)/2;
            cout<<(M+m)/2<<endl;
            cout.flush();
        }
        else if (!answer.compare("correct"))break;
    }
    return 0;
}
