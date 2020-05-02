//acm
#include <bits/stdc++.h>
using namespace std;

int main(){

  unordered_map <char, int> freq_table;//second value is unsuccessful attempts
  int time, tot_time = 0, num_solved = 0;
  char c; string correctness;

  while(cin>>time, time != -1){
    cin>>c>>correctness;
    //if c is not in hash table f (short for freqTable) before, then f[c] == 0 and f[c]++ will make it 1
    // if c is already in hash table f, then f[guests]++ will increment the previous value of f[c] by 1
    if(correctness == "wrong")freq_table[c]++;
    else if (correctness  == "right"){

      tot_time+= time;
      num_solved++;
      if(freq_table.find(c) != freq_table.end())tot_time += (20*freq_table.find(c)->second);
      freq_table.erase(c);
      //add time, then check for attempts
      //pop attempts
    }
  }

  if(num_solved==0)tot_time=0;
  cout<<num_solved<<" "<<tot_time<<endl;
  return 0;
}
