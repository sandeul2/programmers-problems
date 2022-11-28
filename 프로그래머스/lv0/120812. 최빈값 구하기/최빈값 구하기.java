class Solution {
    public int solution(int[] array){
        int answer = 0;
        int[] ary = new int[1001];
  
    for(int i=0; i<array.length; i++){
        ary[array[i]]++;
  }
    int max = 0;
    int max_index = 0;
    
    for(int i =0; i<ary.length; i++){
        if(ary[i]>max){
            max = ary[i];
            max_index = i;
        }
    }
    int count = 0;
    for(int i =0; i<ary.length; i++){
        if(ary[i] == max)
            count++;
    }
    
    if(count > 1)
        return -1;
    answer = max_index;
    return answer;
    }
}   