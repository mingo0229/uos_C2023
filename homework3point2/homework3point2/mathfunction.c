// 2020580003 통계학과 김민섭
#include <stdio.h>

// 최소 공배수 함수
int LCM(int a, int b) {
    int max; // max라는 변수를 정수형으로 받음
    max = a > b ? a : b;
    /*
    삼항 연산자를 이용하여 조건식인 a>b가 참이면 a값을,
    거짓이면 b값을 max 변수에 대입함
    */
    while (1) { // 조건이 참(1)인 동안 반복
        // && 연산자는 두 조건식 모두 참일 때 참임
        // 따라서 a와 b로 나누었을 때 나머지가 모두 0인 것을 찾아야함
        if (max % a == 0 && max % b == 0) {
            printf("최소공배수: %d\n", max);
            return max; // 만족시키는 max값이 도출되면 return으로 값을 반환하여 함수를 종료
        }
        max++; // 만족시키는 max값이 도출되지 않는다면 1만큼 더해줘서 다시 수행
    }
    /*
    max를 1부터 시작 안하고 굳이 a나 b중 큰 값으로 받은 이유는
    예를 들어 a=4, b=2와 같은 경우에는 큰 값만 찾아내면 빠르게 최소공배수를 찾아낼 수도 있고
    max가 1부터 시작하는 것보다 a와 b 중 큰 값에서부터 시작하는 것이 더 효율적이라고 생각했기 때문
    왜냐하면 최소공배수는 적어도 a나 b보다는 크거나 같은 값일 것이기 때문
    */
}

// 최대 공약수 함수
int GCD(int a, int b) {
    int min; // 마찬가지로 min이라는 변수를 정수로 받음
    min = a < b ? a : b;
    /*
    삼항 연산자를 이용하여 조건식인 a<b가 참이면 a값을,
    거짓이면 b값을 max 변수에 대입함
    */
    for (int i = min; i > 0; i--) { // i를 min 값부터 시작해 1씩 감소시키면서 루프 실행
        if (a % i == 0 && b % i == 0) { // 역시 && 연산자를 이용해 a와 b에서 나누어 모두 나머지가 0인 것이 나오면
            printf("최대공약수: %d\n", i); // 1씩 감소시켰던 그 때의 i를 최대공약수로 설정하고
            return i; //return을 쓰며 마찬가지로 함수를 종료
        }
    }
}
    /*
    마찬가지로 최대공약수는 a나 b보다는 작거나 같은 값이므로
    min를 a나 b중 작은 값으로 받으면서 시작하는 것이 더 효율적이라고 생각했기에
    1씩 줄여가면서 진행되도록 함수 작성
    */

// 소수 판별 함수
int prime(int n) {
    if (n < 2) { // n이 1이면 소수가 아니므로 0을 반환하는 조건문
        printf("%d는(은) 소수가 아닙니다.\n", n);
        return 0;
    }
    for (int i = 2; i<= n; i++) {
        // i를 2부터 시작해서 1씩, n까지 증가시키면서 혹시나 n을 i로 나누었을 때 나머지가 0인,
        // 즉 소인수가 될 수 있는 값이 있는지 확인
        if (n % i == 0) { // 그렇다면 소수가 아니므로 0을 반환하는 조건문 작성, %d로 n을 받아줌
            printf("%d는(은) 소수가 아닙니다.\n", n);
            return 0;
        }
    }
    printf("%d는(은) 소수입니다.\n", n); // 만약 앞선 두 개의 조건식을 충족하지 않는다면 n은 1과 자기자신만을 약수로 가지는 소수
    return 1; // 따라서 1을 반환하면서 함수 종료
}

// 여기서부터는 상당수의 주석이 앞서 나왔던 내용과 일치하므로, 이를 고려해주시면 감사하겠습니다.
// 수를 입력받는 함수(최소공배수)
int sLCM() {
    int a, b;
    printf("최소공배수 판독기\n두 수를 입력하세요: \n");
    scanf_s("%d %d", &a, &b); // scanf_s함수를 이용하면서 a와 b의 값이 정수이므로 %d로 받음

    int max; // max라는 변수를 정수형으로 받음
    max = a > b ? a : b;
    /*
    삼항 연산자를 이용하여 조건식인 a>b가 참이면 a값을,
    거짓이면 b값을 max 변수에 대입함
    */
    while (1) { // 조건이 참(1)인 동안 반복
        // && 연산자는 두 조건식 모두 참일 때 참임
        // 따라서 a와 b로 나누었을 때 나머지가 모두 0인 것을 찾아야함
        if (max % a == 0 && max % b == 0) {
            printf("최소공배수: %d\n", max);
            return max; // 만족시키는 max값이 도출되면 return으로 값을 반환하여 함수를 종료
        }
        max++; // 만족시키는 max값이 도출되지 않는다면 1만큼 더해줘서 다시 수행
    }
}

// 수를 입력받는 함수(최대공약수)
int sGCD() {
    int a, b;
    printf("최대공약수 판독기\n두 수를 입력하세요: \n");
    scanf_s("%d %d", &a, &b); // scanf_s함수를 이용하면서 a와 b의 값이 정수이므로 %d로 받음
    
    int min; // 마찬가지로 min이라는 변수를 정수로 받음
    min = a < b ? a : b;
    /*
    삼항 연산자를 이용하여 조건식인 a<b가 참이면 a값을,
    거짓이면 b값을 max 변수에 대입함
    */
    for (int i = min; i > 0; i--) { // i를 min 값부터 시작해 1씩 감소시키면서 루프 실행
        if (a % i == 0 && b % i == 0) { // 역시 && 연산자를 이용해 a와 b에서 나누어 모두 나머지가 0인 것이 나오면
            printf("최대공약수: %d\n", i); // 1씩 감소시켰던 그 때의 i를 최대공약수로 설정하고
            return i; //return을 쓰며 마찬가지로 함수를 종료
        }
    }
}

// 수를 입력받는 함수(소수 판별)
int sprime() {
    int n;
    printf("소수 판독기\n수를 입력하세요: \n");
    scanf_s("%d", &n);  // scanf_s함수를 이용하면서 n의 값이 정수이므로 %d로 받음

    if (n < 2) { // n이 1이면 소수가 아니므로 0을 반환하는 조건문
        printf("%d는(은) 소수가 아닙니다.\n", n);
        return 0;
    }
    for (int i = 2; i <= n; i++) {
        // i를 2부터 시작해서 1씩, n까지 증가시키면서 혹시나 n을 i로 나누었을 때 나머지가 0인,
        // 즉 소인수가 될 수 있는 값이 있는지 확인
        if (n % i == 0) { // 그렇다면 소수가 아니므로 0을 반환하는 조건문 작성, %d로 n을 받아줌
            printf("%d는(은) 소수가 아닙니다.\n", n);
            return 0;
        }
    }
    printf("%d는(은) 소수입니다.\n", n); // 만약 앞선 두 개의 조건식을 충족하지 않는다면 n은 1과 자기자신만을 약수로 가지는 소수
    return 1; // 따라서 1을 반환하면서 함수 종료
}