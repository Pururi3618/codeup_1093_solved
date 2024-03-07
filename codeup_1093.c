#include <stdio.h>
int main() {
    int a[24] = {}, n, t;   //a : 번호의 총 갯수, n : 출석을 부른 횟수, t : 
    scanf("%d", &n);    //출석을 몇 번 부를건지 받기
    for(int i = 1; i <= n; ++i) {   //  n번 만큼 반복
        scanf("%d ", &t);   //출석을 부른 번호 받기
        a[t] = a[t] + 1;    //불린 번호의 자리에 1씩 추가
    }
    for(int i = 1; i <= 23; ++i) {  //총 인원인 23명 만큼 반복
        printf("%d ", a[i]);    //총 출석을 불린 횟수 출력
    }
    return 0;
}