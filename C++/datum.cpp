//Datum
#include <bits/stdc++.h>
using namespace std;

int main(){
    int d, m, days=0, weekday;
    cin>>d>>m;//1 1 is Thursday (year 2009)


    int days_per_month[11]={31,28,31,30,31,30,31,31,30,31,30};//jan to nov
    for(int i=0; i<m-1; i++)days+=days_per_month[i];
    days+=d;
    weekday=days%7;

    switch(weekday){
        case 0: cout<<"Wednesday"<<endl;break;
        case 1: cout<<"Thursday"<<endl;break;
        case 2: cout<<"Friday"<<endl;break;
        case 3: cout<<"Saturday"<<endl;break;
        case 4: cout<<"Sunday"<<endl;break;
        case 5: cout<<"Monday"<<endl;break;
        case 6: cout<<"Tuesday"<<endl;break;
    }

    return 0;
}
