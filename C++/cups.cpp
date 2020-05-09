//cups
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    map<int, string> cups;
    cin>>n;
    cin.get();//gets \n
    int radius;
    string color;
    while(n--){
        //cout<<"n euals:"<<n<<endl;
        string input;
        getline(cin, input);
        istringstream iss (input);
        if(isdigit(input[0])){
                iss>>radius;
                radius/=2;
                iss>>color;
        }
        else{
            iss>>color;
            iss>>radius;
        }
        cups.insert({radius, color});
    }

    for (auto it = cups.begin(); it != cups.end(); ++it)
        cout<<it->second << endl;
    return 0;
}
