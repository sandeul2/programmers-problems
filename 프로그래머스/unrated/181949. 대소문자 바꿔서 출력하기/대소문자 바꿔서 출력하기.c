#include <stdio.h>
//upper, lower 함수를 사용하기 위한 헤더선언
#include <ctype.h> 
//제한사항만큼 문자열 배열을 고정
#define LEN_INPUT 10

int main(void) {
    //입력받을 문자배열 선언
    char s1[LEN_INPUT];
    //문자열 갯수를 Count할 변수 선언
    int i=0;
    //사용자에게 문자열을 입력음
    scanf("%s", s1);
    while (s1[i])
    {
    	// 소문자를 판별하여
        if (isupper(s1[i]))
        {
        	//소문자를 대문자로
            s1[i] = tolower(s1[i]);
        }
        // 대문자를 판별하여
        else if (islower(s1[i]))
        {
        	//대문자를 소문자로
            s1[i] = toupper(s1[i]);
        }
        // 문자열 수만큼 증가하여 위 수식을 반복
        i++;
    }
	//최종 리턴 된 문자열을 화면에 출력
    printf(s1);
    return 0;
}