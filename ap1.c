/*
 * 123.c
 *
 *  Created on: 2021. 3. 22.
 *      Author: Yaan
 */



#include <stdio.h>
#include <stdlib.h>

int main()
{
	int list[5];
	int *plist[5] = {NULL,};

	plist[0]=(int *)malloc(sizeof(int)); //plist의 값을 초기화

	list[0] = 1;
	list[1]=100;

	*plist[0] = 200;

	printf("-----[이 연규]  [2018038038]-----\n\n");

	printf("value of list[0] = %d\n", list[0]); //list[0]의 값
	printf("address of list[0]		= %p\n", &list[0]);//list[0]의 주소
	printf("value of list			= %p\n", list); //list의 값
	printf("address of list(&list)	= %p\n", &list); //list의 주소


	printf("--------------------------------------------------\n\n");
	printf("value of list[1] 	= %d\n", list[1]); //list[1]의 값
	printf("address of list[1]	= %p\n", &list[1]); //list[1]의 주소값 list[0]보다 4가 더 크다.
	printf("value of *(list+1)	= %d\n", *(list+1)); //list[1]의 값
	printf("address of list+1	= %p\n", list+1); //list[1]의 주소값


	printf("--------------------------------------------------\n\n");


	printf("value of *plist[0]) = %d\n",*plist[0]);
	printf("&plist[0]=%p\n", &plist[0]); //plist의 주소값
	printf("&plist=%p\n", &plist[0]); //plist의 주소값
	printf("plist=%p\n", &plist); //plist의 주소값
	printf("plist[0]=%p\n", plist[0]); // *plist[0]가 가르키는 값의 주소값
	printf("plist[1]=%p\n", plist[1]); // null
	printf("plist[2]=%p\n", plist[2]);// null
	printf("plist[3]=%p\n", plist[3]);// null
	printf("plist[4]=%p\n", plist[4]);// null


	free(plist[0]);


}







