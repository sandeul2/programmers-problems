#include <string>
#include <vector>
#include <algorithm>

int choose(int number, int center_num){
    int situation ;
    if(center_num - number == 0){
        situation = 0;
    }
    else if((abs(center_num - number) == 1) || (abs(center_num - number) == 3)){
        situation = 1;
    }
    else if((abs(center_num - number) == 2) || (abs(center_num - number) == 4) || 
            (abs(center_num - number) == 6)){
        situation = 2;
    }
    else if((abs(center_num - number) == 5) || (abs(center_num - number) == 7) || 
            (abs(center_num - number) == 9)){
        situation = 3;
    }
    else{
        situation = 4;
    }
    return situation;
}

using namespace std;

string solution(vector<int> numbers, string hand) {
    string answer = ""; 
    replace(numbers.begin(), numbers.end(), 0, 11);
    auto left_now = 10; auto right_now = 12;
    
    for(int number : numbers){
        
        if((number == 1) || (number == 4) || (number == 7)){
            answer.push_back('L');
            left_now = number;
        }
        
        else if((number == 3) || (number == 6) || (number == 9)){
            answer.push_back('R');
            right_now = number;
        }
        
        else{
            int left = choose(left_now, number);
            int right = choose(right_now, number);
            if(left < right){
                answer.push_back('L');
                left_now = number;
            }
            else if(left > right){
                answer.push_back('R');
                right_now = number;
            }
            else if(left == right){
                if(hand.compare("right") == 0){
                    answer.push_back('R');
                    right_now = number;
                }
                else{
                    answer.push_back('L');
                    left_now = number;
                }
            }
    }
    }
    return answer;
}