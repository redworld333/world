#include <bits/stdc++.h>
using namespace std;

void clearConsole() {
    cout << "\033[2J\033[1;1H";
}

class bankAccount {
    public:
    int ballance;
    string name;

    void accInfo() {
    cout<<"_________________________________________" << endl;
    cout<< "Account name - " << name << endl;
    cout<< "Account balance - " << ballance << endl;
    
}

};
void greeting() {
        cout<<"Hello, choose an action " << endl;
        cout<<"Write (1) to create an account " << endl;
        cout<<"Write (2) to check an info about accounts " << endl;
        cout<<"Write (3) to Exit" << endl;
    }

int main() {
    bool isRunning = true;
    bankAccount account1;
   while (isRunning == true) {
    clearConsole();

    greeting();

    int act1;
    cin>> act1;

    if (act1 == 1) {
        clearConsole();
    cout<<"Enter your accounts name - ";
    cin>> account1.name;
    cout<<"Enter your accounts balance - ";
    cin>> account1.ballance;
    }

    if(act1 == 2){
        account1.accInfo();
        int act2;
        cout<<"_________________________________________" << endl << endl;

        cout<<"Write (1 or more) to go to the main menu" << endl;

        cin>> act2;
    }

    if (act1 == 3){
        isRunning = false;
      }
    if (act1 != 1 && 2 && 3){
        isRunning = false;
    }
   }
}