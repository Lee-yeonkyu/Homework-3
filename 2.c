/*
 * 2.c
 *
 *  Created on: 2021. 3. 22.
 *      Author: Yaan



#include <stdio.h>
#include <stdlib.h>

int main()
{
	int list[5];
	int *plist[5];

	list[0] = 10;
	list[1] =11;

	plist[0] = (int*)malloc(sizeof(int));

	printf("list[0] \t= %d\n",list[0]);
	printf("address of list \t= %p\n",list); //list�� �ּҿ� list[0]�� �ּҿ� list+0�� �ּҴ� ����.
	printf("address of list[0] \t= %p\n",&list[0]);
	printf("address of list + 0 \t= %p\n",list+0);
	printf("address of list + 1\t= %p\n",list+1); //list[0]�� �ּҿ��� 4����Ʈ ������ �ּҰ��� ���´�.
	printf("address of list + 2\t= %p\n",list+2); //list[1]�� �ּҿ��� 4����Ʈ ������ �ּҰ��� ���´�.
	printf("address of list + 3\t= %p\n",list+3); //list[2]�� �ּҿ��� 4����Ʈ ������ �ּҰ��� ���´�.
	printf("address of list + 4\t= %p\n",list+4); //list[3]�� �ּҿ��� 4����Ʈ ������ �ּҰ��� ���´�.
	printf("address of list[4] \t= %p\n",&list[4]);

}
*/
