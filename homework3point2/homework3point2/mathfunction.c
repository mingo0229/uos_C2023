// 2020580003 ����а� ��μ�
#include <stdio.h>

// �ּ� ����� �Լ�
int LCM(int a, int b) {
    int max; // max��� ������ ���������� ����
    max = a > b ? a : b;
    /*
    ���� �����ڸ� �̿��Ͽ� ���ǽ��� a>b�� ���̸� a����,
    �����̸� b���� max ������ ������
    */
    while (1) { // ������ ��(1)�� ���� �ݺ�
        // && �����ڴ� �� ���ǽ� ��� ���� �� ����
        // ���� a�� b�� �������� �� �������� ��� 0�� ���� ã�ƾ���
        if (max % a == 0 && max % b == 0) {
            printf("�ּҰ����: %d\n", max);
            return max; // ������Ű�� max���� ����Ǹ� return���� ���� ��ȯ�Ͽ� �Լ��� ����
        }
        max++; // ������Ű�� max���� ������� �ʴ´ٸ� 1��ŭ �����༭ �ٽ� ����
    }
    /*
    max�� 1���� ���� ���ϰ� ���� a�� b�� ū ������ ���� ������
    ���� ��� a=4, b=2�� ���� ��쿡�� ū ���� ã�Ƴ��� ������ �ּҰ������ ã�Ƴ� ���� �ְ�
    max�� 1���� �����ϴ� �ͺ��� a�� b �� ū ���������� �����ϴ� ���� �� ȿ�����̶�� �����߱� ����
    �ֳ��ϸ� �ּҰ������ ��� a�� b���ٴ� ũ�ų� ���� ���� ���̱� ����
    */
}

// �ִ� ����� �Լ�
int GCD(int a, int b) {
    int min; // ���������� min�̶�� ������ ������ ����
    min = a < b ? a : b;
    /*
    ���� �����ڸ� �̿��Ͽ� ���ǽ��� a<b�� ���̸� a����,
    �����̸� b���� max ������ ������
    */
    for (int i = min; i > 0; i--) { // i�� min ������ ������ 1�� ���ҽ�Ű�鼭 ���� ����
        if (a % i == 0 && b % i == 0) { // ���� && �����ڸ� �̿��� a�� b���� ������ ��� �������� 0�� ���� ������
            printf("�ִ�����: %d\n", i); // 1�� ���ҽ��״� �� ���� i�� �ִ������� �����ϰ�
            return i; //return�� ���� ���������� �Լ��� ����
        }
    }
}
    /*
    ���������� �ִ������� a�� b���ٴ� �۰ų� ���� ���̹Ƿ�
    min�� a�� b�� ���� ������ �����鼭 �����ϴ� ���� �� ȿ�����̶�� �����߱⿡
    1�� �ٿ����鼭 ����ǵ��� �Լ� �ۼ�
    */

// �Ҽ� �Ǻ� �Լ�
int prime(int n) {
    if (n < 2) { // n�� 1�̸� �Ҽ��� �ƴϹǷ� 0�� ��ȯ�ϴ� ���ǹ�
        printf("%d��(��) �Ҽ��� �ƴմϴ�.\n", n);
        return 0;
    }
    for (int i = 2; i<= n; i++) {
        // i�� 2���� �����ؼ� 1��, n���� ������Ű�鼭 Ȥ�ó� n�� i�� �������� �� �������� 0��,
        // �� ���μ��� �� �� �ִ� ���� �ִ��� Ȯ��
        if (n % i == 0) { // �׷��ٸ� �Ҽ��� �ƴϹǷ� 0�� ��ȯ�ϴ� ���ǹ� �ۼ�, %d�� n�� �޾���
            printf("%d��(��) �Ҽ��� �ƴմϴ�.\n", n);
            return 0;
        }
    }
    printf("%d��(��) �Ҽ��Դϴ�.\n", n); // ���� �ռ� �� ���� ���ǽ��� �������� �ʴ´ٸ� n�� 1�� �ڱ��ڽŸ��� ����� ������ �Ҽ�
    return 1; // ���� 1�� ��ȯ�ϸ鼭 �Լ� ����
}

// ���⼭���ʹ� ������ �ּ��� �ռ� ���Դ� ����� ��ġ�ϹǷ�, �̸� �������ֽø� �����ϰڽ��ϴ�.
// ���� �Է¹޴� �Լ�(�ּҰ����)
int sLCM() {
    int a, b;
    printf("�ּҰ���� �ǵ���\n�� ���� �Է��ϼ���: \n");
    scanf_s("%d %d", &a, &b); // scanf_s�Լ��� �̿��ϸ鼭 a�� b�� ���� �����̹Ƿ� %d�� ����

    int max; // max��� ������ ���������� ����
    max = a > b ? a : b;
    /*
    ���� �����ڸ� �̿��Ͽ� ���ǽ��� a>b�� ���̸� a����,
    �����̸� b���� max ������ ������
    */
    while (1) { // ������ ��(1)�� ���� �ݺ�
        // && �����ڴ� �� ���ǽ� ��� ���� �� ����
        // ���� a�� b�� �������� �� �������� ��� 0�� ���� ã�ƾ���
        if (max % a == 0 && max % b == 0) {
            printf("�ּҰ����: %d\n", max);
            return max; // ������Ű�� max���� ����Ǹ� return���� ���� ��ȯ�Ͽ� �Լ��� ����
        }
        max++; // ������Ű�� max���� ������� �ʴ´ٸ� 1��ŭ �����༭ �ٽ� ����
    }
}

// ���� �Է¹޴� �Լ�(�ִ�����)
int sGCD() {
    int a, b;
    printf("�ִ����� �ǵ���\n�� ���� �Է��ϼ���: \n");
    scanf_s("%d %d", &a, &b); // scanf_s�Լ��� �̿��ϸ鼭 a�� b�� ���� �����̹Ƿ� %d�� ����
    
    int min; // ���������� min�̶�� ������ ������ ����
    min = a < b ? a : b;
    /*
    ���� �����ڸ� �̿��Ͽ� ���ǽ��� a<b�� ���̸� a����,
    �����̸� b���� max ������ ������
    */
    for (int i = min; i > 0; i--) { // i�� min ������ ������ 1�� ���ҽ�Ű�鼭 ���� ����
        if (a % i == 0 && b % i == 0) { // ���� && �����ڸ� �̿��� a�� b���� ������ ��� �������� 0�� ���� ������
            printf("�ִ�����: %d\n", i); // 1�� ���ҽ��״� �� ���� i�� �ִ������� �����ϰ�
            return i; //return�� ���� ���������� �Լ��� ����
        }
    }
}

// ���� �Է¹޴� �Լ�(�Ҽ� �Ǻ�)
int sprime() {
    int n;
    printf("�Ҽ� �ǵ���\n���� �Է��ϼ���: \n");
    scanf_s("%d", &n);  // scanf_s�Լ��� �̿��ϸ鼭 n�� ���� �����̹Ƿ� %d�� ����

    if (n < 2) { // n�� 1�̸� �Ҽ��� �ƴϹǷ� 0�� ��ȯ�ϴ� ���ǹ�
        printf("%d��(��) �Ҽ��� �ƴմϴ�.\n", n);
        return 0;
    }
    for (int i = 2; i <= n; i++) {
        // i�� 2���� �����ؼ� 1��, n���� ������Ű�鼭 Ȥ�ó� n�� i�� �������� �� �������� 0��,
        // �� ���μ��� �� �� �ִ� ���� �ִ��� Ȯ��
        if (n % i == 0) { // �׷��ٸ� �Ҽ��� �ƴϹǷ� 0�� ��ȯ�ϴ� ���ǹ� �ۼ�, %d�� n�� �޾���
            printf("%d��(��) �Ҽ��� �ƴմϴ�.\n", n);
            return 0;
        }
    }
    printf("%d��(��) �Ҽ��Դϴ�.\n", n); // ���� �ռ� �� ���� ���ǽ��� �������� �ʴ´ٸ� n�� 1�� �ڱ��ڽŸ��� ����� ������ �Ҽ�
    return 1; // ���� 1�� ��ȯ�ϸ鼭 �Լ� ����
}