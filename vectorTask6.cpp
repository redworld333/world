#include <bits/stdc++.h>
using namespace std;

int main() {

    vector <int> Benjiro {1, 4, 6, 5, 11, 99, 0, 2};
    int i;

    for(i = 0; i < Benjiro.size(); i++){
        int b;
        b = Benjiro[i];
        cout<< b << " ";
    }

    cout<< endl << "which number to delete? " << endl;

    int a;
    cin>> a;

    for(i = 0; i < Benjiro.size(); i++){
        if(Benjiro[i] == a){
            Benjiro.erase(Benjiro.begin() + i);
            break;
        }
    }

    for(i = 0; i < Benjiro.size(); i++){
        int b;
        b = Benjiro[i];
        cout<< b << " ";
    }
}