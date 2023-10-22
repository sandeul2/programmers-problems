#include <string>
#include <vector>

using namespace std;

vector<int> bestsit(vector<int> lottos, vector<int> win_nums){
    int zero_cnt=0, cnt=0;  int maxnum, minnum; 
     vector<int> best; 
     for(int i=0; i<lottos.size();i++){
        if(lottos[i] == 0){
            zero_cnt++;
            continue;
        }
        for(int j=0; j<win_nums.size();j++){
            if(lottos[i] == win_nums[j]){
                cnt++;
                win_nums.erase(win_nums.begin()+j);
            }
        }
    }
    if(cnt < 2)
        minnum = 6;
    else
        minnum = 6-cnt+1;

    if(zero_cnt+cnt<2)
        maxnum = 6;
    else
        maxnum = 6 -(zero_cnt+cnt) + 1;
    best.push_back(maxnum);
    best.push_back(minnum);
    
    return best;
}

vector<int> solution(vector<int> lottos, vector<int> win_nums) {
    vector<int> answer; 
    answer = bestsit(lottos, win_nums); 

    return answer;
}