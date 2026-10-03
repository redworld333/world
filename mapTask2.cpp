#include <bits/stdc++.h>
using namespace std;
int main(){
    map <string, string> numberBook;
    numberBook["Vanya"] = "+4952352543234";
    numberBook["Tsykov"] = "+498237427983";
    numberBook["Timoha"] = "+491827528092";
    numberBook["Gleb"] = "+4982328394922";

    string nameToFind;
    cout<<"Write a name to get his contact: ";
    cin>> nameToFind;

    if(numberBook.count(nameToFind) > 0){
        cout<< numberBook[nameToFind] << endl;
    }
    else{
        cout<<"No such a name was find " << endl;
    }

    string something;
    cout<<"Write something to get all rest info" << endl;
    cin>> something;

    for(auto& pair : numberBook){
        cout<< pair.first << ": "<< pair.second << endl;
    }
}
// output of a name