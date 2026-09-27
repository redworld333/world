#include <bits/stdc++.h>
using namespace std;
class something {
    private:
        string name;
        int points;
    public: something(string name1, int point1){
        name = name1; points = point1;
    }
    void info(){
        cout<< "________________" << endl;
        cout<< "name - " << name << endl;
        cout<< "points - " << points << endl << endl;
    };
    int avgNum(){
        return points;   
    }
};
int main(){
    vector <something> dataBase;
    bool isBenjiro = true;

    while(isBenjiro == true){
    
    string dec;
    cout<<"type 1 to create something " << endl << "type 2 to check info" << endl << "type 3 to exit" << endl;
    cin>> dec;
    if(dec == "1"){
            string nameSM;
            cout<<"write a name " << endl;
            cin>> nameSM;

            int pointsSM;
            cout<<"write points amount " << endl;
            cin>> pointsSM;

            something zxc(nameSM, pointsSM);
            dataBase.push_back(zxc);
        }
    if(dec == "2"){
        if(!dataBase.empty()){
            for(int i = 0; i < dataBase.size(); i++){
                dataBase[i].info();
      
        }
    }
        if(!dataBase.empty()){
            int sum5 = 0;
            int h = 0;
            for(h = 0; h < dataBase.size(); h++){
               sum5 += dataBase[h].avgNum();
            }
            int sumAVG = 0;
            sumAVG = sum5 / h;
            cout<< "Average points - " << sumAVG << endl;
        }    
        if(dataBase.empty()){
        cout<<"Nothing is created " << endl;
            }
        cout<< endl << "Type smth to leave the lobby " << endl;
        string sf;
        cin>> sf;
            }
        if(dec == "3"){
            return 0;
        }
    }
}