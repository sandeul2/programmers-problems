#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int max_Isprime(int a, int b){
	int n;

	while(b!=0){
		n=a%b;
		a=b;
		b=n;
	}
	return a;
}

int min_Multi(int a, int b){
	return a*b / max_Isprime(a, b);
}


vector<int> solution(int n, int m) {
    vector<int> answer;  
    
    int Multinum = min_Multi(n, m);
    int Isprime = max_Isprime(n, m);
    
    answer.push_back(Isprime);
    answer.push_back(Multinum);  

    return answer;
}


    
