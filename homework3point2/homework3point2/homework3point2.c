// 2020580003 통계학과 김민섭
#include <stdio.h>
#include "mathfunction.h"

int main(void) {
	// 최소 공배수 함수
	LCM(6, 8);

	// 최대 공약수 함수
	GCD(6, 8);

	// 소수 판별 함수
	prime(6);

	// 수를 입력받는 함수(최소공배수)
	sLCM();

	// 수를 입력받는 함수(최대공약수)
	sGCD();

	// 수를 입력받는 함수(소수 판별)
	sprime();
}