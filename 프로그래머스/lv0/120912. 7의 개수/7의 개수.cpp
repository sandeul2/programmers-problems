#include <string>
#include <vector>

using namespace std;

int solution(vector<int> array) {
    int answer = 0; int n;
    
    for(int i=0; i<array.size(); i++){
        n = array[i];
        while(n>0){
            if(n%10 == 7)
                answer++;
            n /=10;
        }
    }
    return answer;
}
