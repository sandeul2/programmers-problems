#include <string>
#include <vector>

using namespace std;

int solution(vector<int> arr) {
    int answer = 0; bool ch=false;

    while(true){
        ch=false;
        for(int i=0;i<arr.size();i++){
            if(arr[i]>=50&&arr[i]%2==0){
                arr[i]/=2;
                ch=true;
            }
            else if(arr[i]<50&&arr[i]%2==1){
                arr[i]*=2;
                arr[i]++;
                ch=true;
            }
        }
        if(ch==false)
            break;
        answer++;
    }
    
    return answer;
}