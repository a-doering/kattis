#include <bits/stdc++.h>
using namespace std;

int main(){
    //speed up of cin/cout
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int tc;
    cin>>tc;
    cin.get();//takes only char, consumes \n

    while(tc--){
        string line;//all the animal sounds
        getline(cin, line);
        cout<<"---------"<<line<<endl;

        unordered_set<string> other_animal;

        while(true){
            string animal_goes_sound, sound;
            getline(cin, animal_goes_sound);
            if(animal_goes_sound == "what does the fox say?")break;//end of input
            istringstream iss1(animal_goes_sound);
            iss1>>sound;//consumes animal
            iss1>>sound;//consumes goes
            iss1>>sound;//sound

            other_animal.insert(sound);//O(M), M characters
        }
        istringstream iss2(line);
        string sound;
        while(getline(iss2, sound, ' ')){//splits up the line by space, saves part to sound
            //in unordered set it will iterate over the sounds in order
            //if the sound is not found in unordered_set, it will cout it
            if(other_animal.find(sound) != other_animal.end()) continue;
            cout<<sound<<" ";
        }
        cout<<endl;//for tc
    }

    return 0;
}
