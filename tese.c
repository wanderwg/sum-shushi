#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
//��װһ������func()ʵ��Sn=a+aa+aaa+aaaa+aaaaa
int func(int a) {
	int sn = 0;
	int tmp = 0;
	for (int i = 0; i < 5; ++i) {
		tmp += a*pow(10, i);
		sn += tmp;
	}
	return sn;
}
int main() {
	int a;
	int sn;
	int tmp = 0;
	printf("������һ��0~9֮�������a��\n");
	printf("����0ʱ�˳�����\n");
	while (1) {
		//������Ч��һֱִ�м���
		if (scanf("%d", &a)) {
			//�ж������Ƿ������������㣬������������ѭ��
			if (a > 0 && a < 10) {
				sn = func(a);
				printf("sn=a+aa+aaa+aaaa+aaaaa=%d\n", sn);
			}
			else if (a == 0) {
				break;
			}
			else if(a>9){
				printf("�����������������\n"); continue;
			}
		}
	}
}


