#include <bits/stdc++.h>
using namespace std;
void clearConsole(){
    cout<< "\033[2J\033[1;1H"; 
};

void load(){
    cout<<"Loading.";
    this_thread::sleep_for(chrono::milliseconds(900));
    cout<< endl << "Loading..";
    this_thread::sleep_for(chrono::milliseconds(1000));
    cout<< endl << "Loading..." << endl;
    this_thread::sleep_for(chrono::milliseconds(500));
    cout<<"Completed!" << endl;
    this_thread::sleep_for(chrono::milliseconds(500));
};

class subject {
private:
    string name;
    int mark;
public:
    subject(string nameSJ, int markSJ){
        name = nameSJ; mark = markSJ;
    };
    void subjectINFO(){
        cout<<"________________________"<< endl;
        cout<<"Subject - " << name << endl;
    };
    string nameToDelete(){
        return name;
    };
    vector <int> allMarks {mark};
    int avgMark(){
        return mark;
    }
    };
    void greeting(){
        cout<<"Choose an action" << endl;
        cout<<"1 - Add school subject" << endl;
        cout<<"2 - Check info about subjects" << endl;
        cout<<"3 - Delete school subject" << endl;
        cout<<"4 - Add a mark to a school subject" << endl;
        cout<<"5 - Delete certain mark from a school subject" << endl;
        cout<<"6 - Exit" << endl;
    };

int main(){
    clearConsole();
    load();

    bool isBenjik = true;
    vector <subject> Notan;

    while(isBenjik == true){
        clearConsole();
        greeting();

        string dec1;
        cin>> dec1;
        if(dec1 == "1"){
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            string nameSUBJECT;
            cout<<"Write Subject's name: ";
            getline(cin, nameSUBJECT);

            int markSUBJECT;
            cout<<"Add Subject's mark: ";
            cin>> markSUBJECT;
            
            subject Benjiro52(nameSUBJECT, markSUBJECT);

            Notan.push_back(Benjiro52);
        }
        if(dec1 == "2"){
            clearConsole();
            if(!Notan.empty()){
            for(int i = 0; i < Notan.size(); i++){
                Notan[i].subjectINFO();
            }
            
        }
            if(Notan.empty()){
                cout<<"There are no school subjects yet. ";
            }
            string benjiro;
            cout<< endl << "Write something to leave this lobby" << endl;
            cin>> benjiro;
        }
        if(dec1 == "3"){
            clearConsole();
            cout<< endl << "Which subject to delete?" << endl;
            string nameToDelete1;
            cin>> nameToDelete1;

            for(int i = 0; i < Notan.size(); i++){
                if(nameToDelete1 == Notan[i].nameToDelete()){
                    Notan.erase(Notan.begin() + i);
                }
            }
        }
        if(dec1 == "4"){
            clearConsole();
            cout<<"In which subject a new mark to add: ";
            string nameToDelete1;
            cin>> nameToDelete1;
            for(int i = 0; i < Notan.size(); i++){
                if(nameToDelete1 == Notan[i].nameToDelete()){
                    cout<<"Add new mark: ";
                    int newMark;
                    cin>> newMark;
                    Notan[i].allMarks.push_back(newMark);
                    
                }
            }
            string benjiro;
            cout<< endl << "Write something to leave this lobby" << endl;
            cin>> benjiro;
        }
        if(dec1 == "5"){
            clearConsole();
            cout<<"In which subject the mark to delete: ";
            string nameToDelete1;
            cin>> nameToDelete1;
            for(int i = 0; i < Notan.size(); i++){
                if(nameToDelete1 == Notan[i].nameToDelete()){
                    cout<<"Mark to delete: ";
                    int deleteMark;
                    cin>> deleteMark;
                    
                    for(int i = 0; i < Notan[i].allMarks.size(); i++){
                        if(deleteMark == Notan[i].allMarks[i]){
                            Notan[i].allMarks.erase(Notan[i].allMarks.begin() + i);
                        }
                    }
                }
            }
            string benjiro;
            cout<< endl << "Write something to leave this lobby" << endl;
            cin>> benjiro;
        }
        if(dec1 == "6"){
            isBenjik = false;
        }
    }
}