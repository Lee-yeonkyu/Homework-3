/*
 * ap2.c
 *
 *  Created on: 2021. 3. 22.
 *      Author: Yaan
*/


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
	printf("address of list \t= %p\n",list); //list의 주소와 list[0]의 주소와 list+0의 주소는 같다.
	printf("address of list[0] \t= %p\n",&list[0]);
	printf("address of list + 0 \t= %p\n",list+0);
	printf("address of list + 1\t= %p\n",list+1); //list[0]의 주소에서 4바이트 증가한 주소값이 나온다.
	printf("address of list + 2\t= %p\n",list+2); //list[1]의 주소에서 4바이트 증가한 주소값이 나온다.
	printf("address of list + 3\t= %p\n",list+3); //list[2]의 주소에서 4바이트 증가한 주소값이 나온다.
	printf("address of list + 4\t= %p\n",list+4); //list[3]의 주소에서 4바이트 증가한 주소값이 나온다.
	printf("address of list[4] \t= %p\n",&list[4]);

}

