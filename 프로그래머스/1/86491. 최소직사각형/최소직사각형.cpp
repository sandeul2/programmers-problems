#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<vector<int>> sizes) {
    int answer = 0; vector<int> wallet; vector<int> answer_arr; 
    int right_max = 0; int left_max = 0;
    
    for(int i=0; i<sizes.size(); i++){
       
        if(sizes[i][0] < sizes[i][1]){
            reverse(sizes[i].begin(), sizes[i].end());
        }
        
        if(right_max < sizes[i][0]){
           right_max = sizes[i][0]; 
        }
        
        if(left_max < sizes[i][1]){
           left_max = sizes[i][1]; 
        }
        }
    
    for(int j=0; j<sizes.size(); j++){
        answer_arr.push_back(right_max * left_max);
    }
     
    return answer_arr[0];
    }
      
