#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr, vector<int> delete_list){
    vector<int> answer;

    for(int i=0; i<delete_list.size(); i++)
        for(int j=0; j<arr.size(); j++)
            if(arr[j]==delete_list[i])
                arr.erase(arr.begin()+j);
    answer=arr;

    return answer;
}
