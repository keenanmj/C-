//
//  hourglass.cpp
//  
//
//  Created by Michael Keenan on 9/4/18.
//

#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

// Complete the hourglassSum function below.
int hourglassSum(vector<vector<int>> arr) {
    int currentHourglass = 0;
    int maxHourglass = (arr[0][0] + arr[0][1] + arr[0][2] + arr[1][1] + arr[2][0] + arr[2][1] + arr[2][2]);
    
    for(int i = 0; i <= 3; i++){
        for(int j = 0; j <= 3; j++){
            currentHourglass = 0;
            currentHourglass = (arr[i][j] + arr[i][j+1] + arr[i][j+2] + arr[i+1][j+1] + arr[i+2][j] + arr[i+2][j+1] + arr[i+2][j+2]);
            
            maxHourglass = max(maxHourglass, currentHourglass);
        }
    }
    
    return maxHourglass;
}

int main()
{
    vector<vector<int>> arr(6);
    
    for (int i = 0; i < 6; i++) {
        arr[i].resize(6);
        
        for (int j = 0; j < 6; j++) {
            cin >> arr[i][j];
        }
        
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    
    int result = hourglassSum(arr);
    
    fout << result << "\n";
    
    fout.close();
    
    return 0;
}

