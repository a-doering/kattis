//integerlists
#include <bits/stdc++.h>
using namespace std;

int main(){
    //speeds up cin/cout
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int tc,n;
    cin>>tc;
    string cmd, input;
    while(tc--){
        cin>>cmd>>n>>input;

        deque<int> dq;
        istringstream iss (input);
        iss.ignore();//consumes[
        int val;

        //takes input and puts all integers in dq
        while(n--){
            iss>>val;
            dq.push_back(val);
            iss.ignore();//ignores the comma and the ]
        }


        bitset<1>reg_dir;//regular direction;
        reg_dir.set();

        bool error = false;
        for(int i=0; cmd[i]; i++){
            if(cmd[i]=='R')reg_dir.flip();
            else{//drop
                if(dq.empty()){
                    error=true;
                    break;
                }
                else{
                    if(reg_dir.test(0))dq.pop_front();
                    else dq.pop_back();
                }
            }
        }
        //reversing
        if(!reg_dir.test(0))reverse(dq.begin(), dq.end());
        //printing
        if(!error){
            cout<<"[";
            int i=0;
            for(int &d : dq){
                if(i)cout<<",";
                i++;
                cout<<d;
                //printf("%d", d);
            }
            cout<<"]"<<endl;
        }
        else cout<<"error"<<endl;
    }
    return 0;
}
