//kattis  eligibility
#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin>>n;

  for (int i=0; i<n; i++){

    string  name, enrolled, born;
    int courses, enrl_yr, born_yr;

    cin>>name;
    cout<<name<<" ";
    cin>>enrolled>>born>>courses;
    enrl_yr= 1000*(enrolled[0]-'0')+100*(enrolled[1]-'0')+10*(enrolled[2]-'0')+enrolled[3]-'0';
    born_yr= 1000*(born[0]-'0')+100*(born[1]-'0')+10*(born[2]-'0')+born[3]-'0';

    if(enrl_yr>=2010)cout<<"eligible";
    else if(born_yr>=1991)cout<<"eligible";
    else if (courses<41)cout<<"coach petitions";
    else cout<<"ineligible";

    cout<<endl;
  }
}
