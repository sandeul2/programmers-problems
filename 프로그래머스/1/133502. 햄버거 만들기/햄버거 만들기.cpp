#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(vector<int> ingredient) {
    int answer = 0;  int l = ingredient.size();

    vector<int> bugger;

    for(int i=0;i<l;i++){
        bugger.push_back(ingredient[i]);
        int l = bugger.size();
        if(l >= 4 && bugger[l-4] == 1 && bugger[l-3] == 2 && bugger[l-2] == 3 && bugger[l-1] == 1){
            answer++;
                
            for(int j=0; j<4; j++){
                bugger.pop_back();
            }
        }
    }
  
   return answer;
}