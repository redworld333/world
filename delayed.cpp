#include <bits/stdc++.h>
using namespace std;
void clearConsole() {
    cout << "\033[2J\033[1;1H";
}
void loading() {
    vector <string> text1 {"Loading. ", "Loading.. ", "Loading... "};
    for(int elTexto = 0; elTexto < text1.size(); elTexto++) {
        cout<< text1[elTexto] << endl;

        this_thread::sleep_for(chrono::milliseconds(3500));
    }
}
void Result(){

    clearConsole();
    cout<<"You are gay!";
    this_thread::sleep_for(chrono::milliseconds(3000));
}

int main(){
    clearConsole();
     loading();
      Result();
}