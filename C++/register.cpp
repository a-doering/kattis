//register
#include <bits/stdc++.h>
using namespace std;

int main(){
    //primers p are 2,3,5,7,11,13,17,19
    //stores value between 0 and p-1
    int max_op = 9699689, already_op=0;//if all registers are at 0
    int p[8];
    for(int i=0; i<8; i++)cin>>p[i];

    already_op += p[0]+2*p[1]+2*3*p[2]+2*3*5*p[3]+2*3*5*7*p[4]
        + 2*3*5*7*11*p[5]+2*3*5*7*11*13*p[6]+2*3*5*7*11*13*17*p[7];
    cout<<max_op-already_op<<endl;

    return 0;
}
