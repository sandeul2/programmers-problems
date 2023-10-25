#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(int n) {
    vector<int> pibonachi; int answer = 0;
    pibonachi.push_back(0);
    pibonachi.push_back(1);
    
    for(int i = 0; i < n+1 ; i++){
        if(i >= 2){
            pibonachi.push_back((pibonachi[i-1]+pibonachi[i-2])%1234567);   
        }
        
            answer =pibonachi[n];
    }

    return answer;
}