#include <bits/stdc++.h>
using namespace std;
int main(){
    map<string, int> amount;
    
    for(int i = 0; i < 11; i++){
        string word;
        cout<<"Write a word: ";
        cin>> word;
        amount[word]++;
    }
    for(auto& pair : amount){
        cout<< pair.first << " - " << pair.second << endl;
    }
}
// How many times the written words were meet 