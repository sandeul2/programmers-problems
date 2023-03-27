function solution(array, n) {
    var answer = 0;
    let array_Filter = array.filter((item) => item === n)
    answer = array_Filter.length

    return answer;
}