#include <bits/stdc++.h>
using namespace std;
void clearConsole(){

    cout<<"\033[2J\033[1;1H";
}
void greeting(){
    cout<< "What would you like to do?" << endl << endl;
    cout<< "1 - Create bank account" << endl;
    cout<< "2 - Check info about accounts" << endl;
    cout<< "3 - Add balance" << endl;
    cout<< "4 - Withdraw money from bank account" << endl;
    cout<< "5 - Delete an account" << endl;
    cout<< "6 - Exit" << endl;
}
class BankAccount {
    private:
        string name;
        int balance;
        string baID;
    public:
        BankAccount(string nameBA, int balanceBA, string baID1){
             name = nameBA; balance = balanceBA; baID = baID1;
        }
        void bankAccINFO(){
            cout<<"____________________________" << endl;
            cout<<"Bank acc. name: " << name << endl;
            cout<<"Bank acc. balance: " << balance << endl;
            cout<<"Bank acc. ID: " << baID << endl;
        }
        string idToDelete(){
            return baID;
        }
        void addBalance(int amount1){
            balance = balance + amount1;
        }
        void reduceBalance(int amount2){
            balance = balance - amount2;
        }
    };

int main(){
    clearConsole();
    bool isBenjiro = true;
    int Balancio;
    string nameio;
    string baID2;
    vector <BankAccount> DataBase;

    while(isBenjiro == true){
        clearConsole();
        greeting();

        string dec1;
        cin>> dec1;
        if(dec1 == "1"){
            clearConsole();
            cout<<"Enter bank account's name: ";
            cin>> nameio;
            cout<< endl;

            cout<<"Enter bank account's balance: ";
            cin>> Balancio;
            cout<< endl;

            cout<<"Enter bank account's ID: ";
            cin>> baID2;
            cout<< endl;

            BankAccount Benjiro52(nameio, Balancio, baID2);
            DataBase.push_back(Benjiro52);
        }
        if(dec1 == "2"){
            clearConsole();
            if(!DataBase.empty()){
                for(int i = 0; i < DataBase.size(); i++){
                    DataBase[i].bankAccINFO();
                }
                string benjiro645;
                cout<<"Write something to leave this lobby, please." << endl;
                cin>> benjiro645;
            }
            if(DataBase.empty()){
                cout<< "There are no accounts yet." << endl;
                string jahir;
                cout<< "Write something to leave this lobby, please." << endl;
                cin>> jahir;
            }
        }
        if(dec1 == "3"){
            clearConsole();
            cout<< "Write an ID of account, which money you want to add: ";
            string moneyAddID;
            cin>> moneyAddID;
            
            for(int i = 0; i < DataBase.size(); i++){
                 if(moneyAddID == DataBase[i].idToDelete()){
                    cout<<"How much money do you want to add: ";
                    int money;
                    cin>> money;
                    if(money > 0){
                        DataBase[i].addBalance(money);
                    }
                    else{
                        clearConsole();
                        cout<<"Error, you wrote a negative number. " << endl;
                        string benjiro645;
                        cout<<"Write something to leave this lobby, please." << endl;
                        cin>> benjiro645;
                    }
                 }                                                          
            }
        }
        if(dec1 == "4"){
            clearConsole();
            cout<< "Write an ID of account, which money you want to add: ";
            string moneyReduceID;
            cin>> moneyReduceID;

            for(int i = 0; i < DataBase.size(); i++){
                if(moneyReduceID == DataBase[i].idToDelete()){
                    cout<<"How much money you want to withdraw: ";
                    int money2;
                    cin>> money2;
                    if(money2 > 0){
                        DataBase[i].reduceBalance(money2);
                    }
                    else{
                        clearConsole();
                        cout<<"Error, you wrote a negative number. " << endl;
                        string benjiro645;
                        cout<<"Write something to leave this lobby, please." << endl;
                        cin>> benjiro645;
                    }
                }
            }
        }
        if(dec1 == "5"){
            clearConsole();
            cout<< "Which account to delete? Write it's ID " << endl;
            
            string idToDelete2;
            cin>> idToDelete2;
            for(int a = 0; a < DataBase.size(); a++){
                if(idToDelete2 == DataBase[a].idToDelete()){
                    DataBase.erase(DataBase.begin() + a);
                }
            }
        }
        if(dec1 == "6"){
            isBenjiro = false;
        }
    }  
}