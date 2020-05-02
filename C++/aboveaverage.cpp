//kattis aboveaverage
#include <bits/stdc++.h>
using namespace std;

int main() {
  int cases, numPpl, grade[1000], sum, aboveAvg;
  double avg, percentAboveAvg;

  cin>>cases;

  for(int i=0; i<cases; i++){
    cin>>numPpl;
    sum=0;

    for(int j=0; j<numPpl; j++){
      cin>>grade[j];
      sum+=grade[j];
    }
    avg= (double) sum/numPpl;
    //cout<<avg<<endl;
    aboveAvg=0;

    for(int k=0; k<numPpl; k++){
      if (grade[k]>avg) aboveAvg++;
    }
    percentAboveAvg= (double)aboveAvg/numPpl;
    printf("%.3f", percentAboveAvg*100);
    cout<<"%"<<endl;

  }
  return 0;
}
