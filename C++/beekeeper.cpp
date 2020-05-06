//beekeeper
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, maxPairs=-1;//-1 in case there are no words with 2 vowels
    string curr, maxPairsStr;
    cin>>n;

    while(true){
        maxPairs=-1;
        while(n--){

            cin>>curr;
            //check for duplicates
            //insert the duplicates value

            char last = ' ';
            int duplicateVowels=0;
            for(auto itr = curr.begin(); itr != curr.end(); ++itr){
                char c = *itr;
                if(c==last && (c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='y')) duplicateVowels++;
                last = c;
            }
            if (duplicateVowels>maxPairs){
                maxPairs=duplicateVowels;
                maxPairsStr = curr;
            }
       }
       cout<<maxPairsStr<<endl;
       cin>>n;
       if(n==0)break;
    }
    return 0;
}
