#include <bits/stdc++.h>
using namespace std;


int main() {

    int a;
    cin>> a;
    
    for(int i = a; i >= 0; i--) {//i = 100, i - 1 
        
        if(i % 5 == 0 && i % 3 == 0) {
            cout<< "FizzBuzz" << endl;
        }
        else if(i % 5 == 0) {
            cout<< "Buzz" << endl;
        }
       
        else if(i % 3 == 0) {
            cout<< "Fizz" << endl;
        } 
        else {
            cout<< i << endl;
        }
    }
}
// FizzBuzz — вывести числа от 1 до 100, но вместо кратных 3 — "Fizz", кратных 5 — "Buzz", кратных обоим — "FizzBuzz"