#include <string>
#include <vector>

using namespace std;

vector<int> solution(int brown, int yellow) {
    vector<int> answer;
    
    for(int i=1; i<=5000; i++){
        for(int j=1; j<=i; j++){
            if(2 * i + 2 * j - 4 == brown){
                if(i * j - brown == yellow){
                    answer.push_back(i);
                    answer.push_back(j);
                    return answer;
                }
            }
        }
    }
}


/*
    가로 a, 세로 b일 때
    테두리의 타일 개수: 2 * a + (b-2) * 2 = 2 *a + 2 * b - 4 = brown
    가운데 노란색의 타일 개수 = a * b - brown = yellow
    i * b - (2*i + 2*b -4) = yellow
    (i - 2) * b = yellow + 2*i -4
    */