#include <bits/stdc++.h>
using namespace std;

double calvin (double cel) {
    
    double cal = cel + 273.15;
        return cal;    
}
double farenheit(double cel) {

    double far = cel * 1.8 + 32;
        return far;
}
double celcia(double cel){
    return cel;
}


int main() {

    int temp;
    cout<< "Введите температуру в Цельсиях - ";
    cin>> temp;
    cout<< endl << "Температура в Цельсиях = " << celcia(temp) << endl;
        cout<< "Температура в Фаренгейтах = " << farenheit(temp) << endl;
            cout<< "Температура в Келвинах = " << calvin(temp) << endl;
   

}