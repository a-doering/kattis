//kattis symmetricorder
#include <iostream>
#include <deque>
using namespace std;

int main(){
  string name;
  int n, num = 1;

  while(cin>>n && n){
    cout<<"SET "<<num<<endl;
    deque <string> names;

    for(int i=0; i<n; i++){
        cin>>name;
        if(i%2==0){
            cout<<name<<endl;
        }
        else{
          names.push_front(name);
        }
    }

    for(int i=0; i<names.size(); i++){
        cout<<names[i]<<endl;
    }

  num++;
  }
  return 0;
}
