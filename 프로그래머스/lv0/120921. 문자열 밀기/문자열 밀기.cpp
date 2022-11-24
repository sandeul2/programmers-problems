#include <string>
#include <vector>

using namespace std;

string substr(){
    
}

int solution(string A, string B) {
    int answer = 0; string tmp; int count = 0;
    for(int i=0; i<A.size(); i++){
        if(A == B)
            return count;
        
        tmp = A.substr(A.length() - 1);
        A.erase(A.length()-1);
        tmp += A;
        A = tmp;
        count++;
    }
    return -1;
}