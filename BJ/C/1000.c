/* 
두 정수 A와 B를 입력받은 다음, A+B를 출력하는 프로그램을 작성하시오. 
첫째 줄에 A와 B가 주어진다. (0 < A, B < 10)
*/

#include <stdio.h>

int main(){
    int num1,num2;

    scanf("%d %d", &num1, &num2); 
    printf("%d \n", num1+num2);
    return 0;
}