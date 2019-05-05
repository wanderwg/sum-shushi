#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
//封装一个函数func()实现Sn=a+aa+aaa+aaaa+aaaaa
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
	printf("请输入一个0~9之间的整数a：\n");
	printf("输入0时退出程序\n");
	while (1) {
		//输入有效则一直执行计算
		if (scanf("%d", &a)) {
			//判断输入是否合理，合理则计算，否则跳出本次循环
			if (a > 0 && a < 10) {
				sn = func(a);
				printf("sn=a+aa+aaa+aaaa+aaaaa=%d\n", sn);
			}
			else if (a == 0) {
				break;
			}
			else if(a>9){
				printf("输入错误，请重新输入\n"); continue;
			}
		}
	}
}


