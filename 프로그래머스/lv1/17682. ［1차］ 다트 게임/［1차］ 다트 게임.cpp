#include <string>
#include <vector>
#include <cmath>

using namespace std;

int solution(string dartResult) {
	int answer = 0;
	int index = 0;
	vector <int> scores;

	for (int i = 0; i < dartResult.length(); i++) {
		if (dartResult[i] == 'S') {
            scores[index - 1] = pow(scores[index - 1], 1);
        }
        
		else if (dartResult[i] == 'D') {
			scores[index - 1] = pow(scores[index - 1], 2);
		}
        
		else if (dartResult[i] == 'T') {
			scores[index - 1] = pow(scores[index - 1], 3);
		}
        
		else if (dartResult[i] == '*') {
			scores[index - 1] = scores[index - 1] * 2;
			if (index > 1)
				scores[index - 2] = scores[index - 2] * 2;
		}
        
		else if (dartResult[i] == '#') {
			scores[index - 1] = scores[index - 1] * -1;
		}
        
		else { //숫자
			if (dartResult[i + 1] == '0') {
				scores.push_back(10);
				i++;
			}	
            
			else 
				scores.push_back(dartResult[i] - '0');
			index++;
		}
	}

	for (int i = 0; i < scores.size(); i++)
		answer += scores[i];
	return answer;
}