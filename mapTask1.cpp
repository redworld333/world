#include <bits/stdc++.h>
using namespace std;
int main(){
    map <string, int> age;

    age["Ivan"] = 12;
    age["Tsykov"] = 19;
    age["Timofey"] = 16;

    for (auto& pair : age){
        cout<< pair.first << ": " << pair.second << endl;
    }
}