#include <string>
#include <vector>
#include <unordered_set>

using namespace std;

vector<int> solution(int n, vector<string> words) {
    vector<int> answer (2, 0);
    unordered_set<string> record; // 이전 단어들 저장해둘 set
    
    for(int i = 0; i < words.size(); i++)
    {
        if (i % n == 0) answer[1]++; // 턴 카운트
        
        bool loseCondition1 = words[i].length() == 1;  // 탈락 조건 1. 한 글자
        bool loseCondition2 = i > 0 && words[i].front() != words[i - 1].back(); // 탈락 조건 2. 이전 문자의 마지막 글자와 현재 문자의 첫 문자 다름
        bool loseCondition3 = i > 0 && record.find(words[i]) != record.end(); // 탈락 조건 3. 이전 문자에 중복 (record 에 없어서 end()가 나와야 중복이 없다는 것)
        
        if (loseCondition1 || loseCondition2 || loseCondition3)
        {
            answer[0] = i % n + 1;
            return answer; // 탈락자 발생
        }
            
        record.insert(words[i]); // 탈락되지 않은 단어니 set에 저장. 
    }
    
    answer[1] = 0;
    return answer; // 탈락자 아무도 없음 {0, 0} 리턴
}