#include <bits/stdc++.h>
using namespace std;

void greeting() {
    cout<< "Welcome!" << endl;
}

void clearConsole() {
    cout << "\033[2J\033[1;1H";
}

class student {
private:
    string name;
    int age;
    string leistungsKurs;
public:
    student(string nameS, int ageS, string leistungsKurses){
        name = nameS; age = ageS; leistungsKurs = leistungsKurses;
    }
    void printInfo(){
        cout<< "_________________" << endl;

        cout<< "Name: " << name << endl << "Age: " << age << endl << "LK: " << leistungsKurs << endl << "_________________" << endl;
    }
};

int main() {
    bool isRunning = true;
    vector <student> schoolBook;
    
while(isRunning == true) {
    clearConsole();

    string act1;
       
    cout<< "Choose an action " << endl;
    cout<< "1 - Create student info" << endl;
    cout<< "2 - Check students info" << endl;
    cout<< "3 - Exit" << endl;

        cin>> act1;

    if(act1 == "1"){
        string Name;
        cout<<"Enter student's name - ";
        cin>> Name;

        int Age;
        cout<<"Enter student's age - ";
        cin>> Age;

        string LeistungsKurs;
        cout<<"Enter student's LeistungsKurs - ";
        cin>> LeistungsKurs;

        student St(Name, Age, LeistungsKurs);
        schoolBook.push_back(St);
        
      }

    if(act1 == "2"){
        clearConsole();
        if (!schoolBook.empty()) {
        cout << "Students list: " << endl;
        for (int i = 0; i < schoolBook.size(); i++) {
                schoolBook[i].printInfo();
                }
            }    
        if (schoolBook.empty()) {
                cout<< "There are no students here " << endl;
        }
        string leave;
        cout<< endl << "Write something to leave this lobby " << endl;
    
        cin>> leave;
      
    }

    
    if(act1 == "3"){
        isRunning = false;
    }
  }
}