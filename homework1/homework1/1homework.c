#include <stdio.h> //printf �Լ��� ����ִ� stdio ��� �ҷ�����

int main(void) {

	char name[20], class[30];
	/*
	�̸��� �а��� �ѱ۷� �Է��� ���ε� �ѱ��� �� ���� �� 2����Ʈ���̹Ƿ�
	���ڴ� ����а��� 8����Ʈ�� ��������� ����ø����б����� ���� �� �а�����
	����������ǻ�Ͱ��к�(�� 10����)�� ���� �˳���� 30����Ʈ���� ���
	�̸��� �ѱ��� ���� �ƹ��� ������ 20����Ʈ�� ����ϴٰ� ����
	���� �̸��� �а��� ���� �ڷ����� ���ڿ� char[]�̹Ƿ� �Ѳ����� ó��
	������ ���� ������ �̸� �������� �ʰ� ����ڷκ��� �Է¹�������
	*/
	int code, birth;
	// �� ���� �й��� ��������� �Է��� ���������� ���� �ڷ����̹Ƿ� �Ѳ����� ó��

	printf("�̸� �Է� : ");
	/*
	printf �Լ��� �̿��� �̸� �Է� : �� ����� ���� scanf �Լ��� �̿��� ��, ���� �ٿ� ����
	*/
	scanf_s("%s", name, sizeof(name));
	/*
	scanf �Լ��� �̿��� �̸� �Է����� �ʰ� ����ڿ��� ���� ������ �Է¹��� �� ����
	���ڿ��̹Ƿ� %s�� name�� ������ ����
	scanf_s�� ���� ������� ũ�⸦ �߰��� �������־�� �ϹǷ� sizeof(name)���� �Է�����
	*/
	printf("�������(8�� ����) �Է� : ");
	/*
	���������� ��������� 2000�� 2�� 29�� �� ���� ���ڿ� �ѱ��� ���� ����
	���������� ó���� �ڷ��� int�� ��߳��Ƿ� 8���� ���ڸ� �̿��϶�� ����
	*/
	scanf_s("%d", &birth);
	/*
	scanf_s �Լ��� �̿��� ����ڿ��� ���� ������ �Է¹��� �������� �������̹Ƿ�
	���� ������ %d�� ����
	*/
	printf("�й� �Է� : ");
	scanf_s("%d", &code);
	// ������� �Է°� ���������� ���
	printf("�а��� �Է� : ");
	scanf_s("%s", class, sizeof(class));
	// �̸� �Է°� ���������� ���

	printf("\n�̸� : %s\n", name);
	/*
	�Է¹��� �������� printf�Լ��� �޾Ƽ� ���������� ���ڿ� %s�� �޾Ƽ� ���
	*/
	printf("������� : %d\n", birth); //������������ ���������� �޾����Ƿ� %d�� �޾� ���
	printf("�й� : %d\n", code);
	printf("�а��� : %s", class);

}