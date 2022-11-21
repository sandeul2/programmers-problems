#include <string>
#include <vector>

using namespace std;

vector<int> solution(string s) {
    vector<int> answer;
    int zero = 0, ng = 0;
    
    while(s != "1"){
        string arr = "";
        int size = 0, num;
        ng++;
        
        for(int i = 0; i < s.size(); i++){
            if(s[i] == '0')
                zero++;
            else
                arr += "1";
        }
        
        num = arr.size();
        s = "";
        while(num > 0){
            s += to_string(num % 2);
            num /= 2;
        }
    }
    
    answer.push_back(ng);
    answer.push_back(zero);
    return answer;
}