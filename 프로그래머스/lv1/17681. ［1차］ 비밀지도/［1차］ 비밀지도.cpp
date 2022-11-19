#include <string>
#include <vector>
#include <algorithm>

#include <iostream>

using namespace std;

vector<string> solution(int n, vector<int> arr1, vector<int> arr2) {
    vector<string> answer;

    for(int i=0; i<n; i++) {
        string str = "";
        
        arr1[i] = arr1[i] | arr2[i];
        
        while(str.size() != n) {
            
            if(arr1[i] % 2 == 0) { 
                str.push_back(' '); 
            }
            
            else { 
                str.push_back('#'); 
                 }
            arr1[i] /= 2;
        }
        
        reverse(str.begin(), str.end());
        answer.push_back(str);
    }
    
    return answer;
}