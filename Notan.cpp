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
    vector <int> marks_vec;
public:
    subject(string nameSJ){
        name = nameSJ;
    }
    void subjectINFO(){
        cout<<"________________________"<< endl;
        cout<<"Subject - " << name << endl;
        for(int i = 0; i< marks_vec.size(); i++){
            cout<< marks_vec[i] << " ";
        }
        cout<< endl;
    }
    string getName(){
        return name;
    }
    void addMark(int newMarkS){
        marks_vec.push_back(newMarkS);
    }
    void delMark(int markToDelete){
        for(int i = 0; i < marks_vec.size(); i++){
            if(markToDelete == marks_vec[i]){
                marks_vec.erase(marks_vec.begin() + i);
                break;
            }
        }
    }
    int getMarksAmount(){
        return marks_vec.size();
    }
    int getSum(){
        int sum = 0;
        for(int i = 0; i < marks_vec.size(); i++){
            sum += marks_vec[i];
        }
        return sum;
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
    vector <int> avgMarks;

    while(isBenjik == true){
        clearConsole();
        greeting();

        string dec1;
        cin>> dec1;
        if(dec1 == "1"){
            clearConsole();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            string nameSUBJECT;
            cout<<"Write Subject's name: ";
            getline(cin, nameSUBJECT);

            subject Benjiro52(nameSUBJECT);
            Notan.push_back(Benjiro52);
        }
        if(dec1 == "2"){
            clearConsole();
            double marksSum = 0;
            double marksAmount = 0;
            if(!Notan.empty()){

                for(int i = 0; i < Notan.size(); i++){
                    marksSum += Notan[i].getSum();
                    marksAmount += Notan[i].getMarksAmount();
                }
                if(marksAmount > 0){
                double Avg = marksSum / marksAmount;
                cout<< "Average Grade: " << Avg << endl;
                }
            }

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
                if(nameToDelete1 == Notan[i].getName()){
                    Notan.erase(Notan.begin() + i);
                    break;
                }
            }
        }
        if(dec1 == "4"){
            clearConsole();
            cout<<"In which subject a new mark to add: ";
            string nameToDelete1;
            cin>> nameToDelete1;
            
            cout<<"Which mark to add: ";
            int newMark;
            cin>> newMark;
            
            for(int i = 0; i < Notan.size(); i++){
                if(nameToDelete1 == Notan[i].getName()){
                    Notan[i].addMark(newMark);
                }
            }
        }
        if(dec1 == "5"){
            clearConsole();
            cout<<"In which subject the mark to delete: ";
            string nameToDelete1;
            cin>> nameToDelete1;

            cout<<"Mark to delete: ";
            int deleteMark;
            cin>> deleteMark;

            for(int i = 0; i < Notan.size(); i++){
                if(nameToDelete1 == Notan[i].getName()){
                    Notan[i].delMark(deleteMark);
                }
            }
        }
        if(dec1 == "6"){
            isBenjik = false;
        }
    }
}