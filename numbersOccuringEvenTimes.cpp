//
//  numbersOccuringEvenTimes.cpp
//  
//
//  Created by Michael Keenan on 9/5/18.
//

using namespace std;

#include <stdio.h>
#include <map>
#include <iostream>

void findEvenOccuringNumbers(int inputArray[], int size){
    map <int, int> :: iterator it;
    map <int, int> occurences;
    
    for(int i = 0; i < size; i++){
        it = occurences.find(inputArray[i]);
        
        if(it != occurences.end()){
            it->second += 1;
            cout << "Found " << inputArray[i] << endl;
        }else{
            occurences.insert(pair <int, int> (inputArray[i], 1));
            cout << "Inserted " << inputArray[i] << endl;
        }
    }
    
    for(int i = 0; i < occurences.size(); i++){
        it = occurences.find(occurences[i]);
        
        if(it->second % 2 == 0 && it->second != 0){
            cout << it->first << endl;
        }
    }
}

int main(){
    int input [] = {1, 2, 2, 3, 3, 3, 4, 4, 4, 4, 5};
    
    int size = 11;
    
    findEvenOccuringNumbers(input, size);
    
    return 0;
}
