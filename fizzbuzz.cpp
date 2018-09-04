//
//  fizzbuzz.cpp
//  
//
//  Created by Michael Keenan on 9/4/18.
//

using namespace std;

#include <stdio.h>
#include <iostream>

void calculate(int number){
    for(int i = 0; i <= number; i++){
        if(i == 0){
            cout << i << endl;
        }else if(i % 3 == 0 && i % 5 == 0){
            cout << "FizzBuzz" << endl;
        }else if(i % 3 == 0){
            cout << "Fizz" << endl;
        }else if(i % 5 == 0){
            cout << "Buzz" << endl;
        }else{
            cout << i << endl;
        }
    }
}


int main(){
    int number;
    
    cout << "Enter a number to be calculated to: " << endl;
    cin >> number;
    
    calculate(number);
    
    cout << "Enter any value and press enter to end." << endl;
    cin >> number;
    
    return 0;
}
