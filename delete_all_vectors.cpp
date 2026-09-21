#include <bits/stdc++.h>
using namespace std;
int main(){
    
    vector <int> vec {1, 3, 2, 4, 6, 5, 9};

    while(!vec.empty()){
    for(int i = 0; i < vec.size(); i++){
        cout<< vec[i] << " ";
    }

    cout<< endl;
    int a;
    cin>> a;

    for(int i = 0; i < vec.size(); i++){
        if(vec[i] == a) {
            vec.erase(vec.begin() + i);
            }
        }
    }
    cout << endl << "Well done!";
}