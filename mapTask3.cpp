#include <bits/stdc++.h>
using namespace std;
int main(){
    map <string, string> phoneNumber;
    phoneNumber["Ivan"] = "01234-5678-9";
    phoneNumber["Timoha"] = "8437-5954-8";
    phoneNumber["Veduta"] = "348922-982";
    phoneNumber["Benjiro"] = "38-35345-345";

    for(auto& pair : phoneNumber){
        cout<< pair.first << " - " << pair.second << endl;
    }

    cout<<"Write a name to delete: " << endl;
    string name;
    cin>> name;
    if(phoneNumber.count(name) > 0){
        phoneNumber.erase(name);
    }

    for(auto& pair : phoneNumber){
        cout<< pair.first << " - " << pair.second << endl;
    }
    return 0;
}