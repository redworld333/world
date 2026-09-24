#include <bits/stdc++.h>
using namespace std;

void clearConsole() {
    cout << "\033[2J\033[1;1H";
}

void greeting() {
    cout<< "Welcome!" << endl;
}

class subject {
        public:
        string subjectName;
        vector <int> mark;
    };
    
int main () {
    clearConsole();
    
    bool isRunning = true;
    while(isRunning = true) {


        greeting();

    int act1;

    cout<< "Choose an action " << endl;
    cout<< "1 - Create school subject" << endl;
    cout<< "2 - Exit" << endl;

    // class grade {
    //     public: 
    //     int mark;   
    // };


    cin>> act1;

    if(act1 == 1){
            clearConsole();
        cout<<"Enter the subject name" << endl;
        subject mySub1;
        getline(cin, mySub1.subjectName);
        cout<< mySub1.subjectName << endl;
        cout<<"Enter your marks" << endl;
        int n;
        cin>>n;
        mySub1.mark.push_back(n);
        
    

    }
        if(act1 == 2){
            isRunning = false;}
        
    }
}