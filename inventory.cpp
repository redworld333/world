#include <bits/stdc++.h>
using namespace std;

void clearConsole() {
    cout << "\033[2J\033[1;1H";
}

class item {
private:
    string name;
    int amount;
    double weight;
public:
    item(string Name, int Amount, double Weight){
        name = Name; amount = Amount; weight = Weight;
    }
    string theNameOfItemInInventory(){
        return name;
    }
void itemInfo(){
    cout<< "_________________" << endl;
    cout<<"Item's name: " << name << endl;
    cout<<"Item's amount: " << amount << endl;
    cout<<"Item's weight(in Kg): " << weight << "kg" << endl << "_________________" << endl;
}
    
};

int main() {
    vector <item> bag;
    bool isRunning = true;

    while(isRunning == true) {
        clearConsole();

        string act1;
       
    cout<< "Choose an action " << endl;
    cout<< "1 - Add an item" << endl;
    cout<< "2 - Check inventory" << endl;
    cout<< "3 - Delete an item" << endl;
    cout<< "4 - Exit" << endl;

        cin>> act1;

    if(act1 == "1"){
        clearConsole();

        string nameI;
        cout<<"Write the name of item " << endl;
        cin>> nameI;

        int amountI;
        cout<<"Write an amount of items " << endl;
        cin>> amountI;

        double weightI;
        cout<<"Write weight of an item " << endl;
        cin>> weightI;

        item anItem(nameI, amountI, weightI);
        bag.push_back(anItem);
    }

    if(act1 == "2"){
        clearConsole();
        if(!bag.empty()){
            cout<<"Your inventory: " << endl;
            for(int i = 0; i < bag.size(); i++){
                bag[i].itemInfo();
            }
        }
        if(bag.empty()){
            cout<<"There are no items yet...";

            }
        cout<< endl << "Write anything to leave in main menu " << endl;
        string leaveBenjiro52;
        cin>> leaveBenjiro52;
        }
    if(act1 == "3"){
        clearConsole();

        if(bag.empty()){
            cout<<"You have no items brah " << endl << endl << "Write anything to leave in the main menu" << endl;
            string benjiro52;
            cin>> benjiro52;
        }

        if(!bag.empty()){
        cout<<"Write the name of an item to delete " << endl;

        string itemToDelete;
        cin>> itemToDelete;

        for(int benjiro = 0; benjiro < bag.size(); benjiro++){
            if(itemToDelete == bag[benjiro].theNameOfItemInInventory()) {
                bag.erase(bag.begin() + benjiro);

            }
        }
    }  
}

    if(act1 == "4"){
        isRunning = false;
        }
    }
}