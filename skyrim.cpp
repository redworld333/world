#include <bits/stdc++.h>
using namespace std;
void clearConsole() {
    cout << "\033[2J\033[1;1H";
}
void creation(){
    cout<<"Hello, create your character! " << endl;
    cout<<"Give your character a name!" << endl;
}
class player {
private:
    string name;
    int hp;
    int damage;
public: player(string nameP, int hpP, int damageP){
    name = nameP; hp = hpP; damage = damageP;    
}
};
class enemy1 {
    public:
    string name2 = "Goblin";
    int hp2 = 50;
    int damage2 = 10;
};

int main(){
    bool isRunning = true;
    bool isCreated = false;
    vector <player> dataBase;
    string dec1;
    clearConsole();
    while(isRunning == true){
        if(isCreated == false){
            creation();
        }
        string nameofP;
        cin>> nameofP;
        
        int hpofP = 100;
        int damageofP = 10;

        player Benjiro(nameofP, hpofP, damageofP);
        dataBase.push_back(Benjiro);
        if(!dataBase.empty()){
            isCreated = true;
            cout<<"Well done, hello, " << nameofP << endl;
        }
        cout<<"Now you have to decide what to do. " << endl;
        cout<<"1 - go to the fight arena" << endl;

        if(dec1 == "1"){
            cout<<"Ok, you are at the fight arena now!" << endl;
            cout<<"Would you like to go back?" << endl;
            cout<<"Write 1 to fight, write something to leave" << endl;

            string dec2;
            cin>> dec2;
            if(dec2 == "1"){
                clearConsole();
                cout<<"You are going to fight with a goblin!";
            }
        }
    }
}
