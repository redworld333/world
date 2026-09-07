#include <bits/stdc++.h>
using namespace std;

    bool isPalindrom(){
        int x;
        cin>> x; // 123
        
        string num = to_string(x); // string num = "123"

        reverse(begin(num), end(num)); // string num = "321"

        int n = stoi(num); // = 321



        if(x == n){
            return true;
        }
        else {
            return false;
        }

        
        
    }

int main(){

    cout<< isPalindrom();

}