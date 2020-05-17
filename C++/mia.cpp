//kattis mia
#include <iostream>
using namespace std;

int main() {
  int p11,p12,p21,p22,p1cat,p2cat;//category
  int max1,max2, min1,min2;//for category 2

  while(1){
    cin>>p11>>p12>>p21>>p22;
    if(p11==0 && p12 == 0 && p21==0 &&p22==0)break;

    if(p11+p12==3) p1cat=0;
    else if(p11==p12) p1cat=1;
    else p1cat = 2;

    if(p21+p22==3) p2cat=0;
    else if(p21==p22) p2cat=1;
    else p2cat = 2;

    if(p1cat<p2cat) cout<<"Player 1 wins."<<endl;
    else if(p1cat>p2cat)cout<<"Player 2 wins."<<endl;
    else if(p1cat==1){
      if(p11>p21)cout<<"Player 1 wins."<<endl;
      else if(p21>p11)cout<<"Player 2 wins."<<endl;
      else cout<<"Tie."<<endl;
    }
    else if(p1cat==2){
      if (p11>p12)max1=p11, min1=p12;
      else max1=p12, min1=p11;

      if (p21>p22)max2=p21, min2=p22;
      else max2=p22, min2=p21;

      if(max1>max2)cout<<"Player 1 wins."<<endl;
      else if(max1<max2)cout<<"Player 2 wins."<<endl;
      else if(max1==max2){
        if (min1>min2)cout<<"Player 1 wins."<<endl;
        else if (min1<min2)cout<<"Player 2 wins."<<endl;
        else cout<<"Tie."<<endl;
      }

    }
    else cout<<"Tie."<<endl;
  }
  return 0;
}
