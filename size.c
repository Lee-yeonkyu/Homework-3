/*
 * size.c
 *
 *  Created on: 2021. 3. 22.
 *      Author: Yaan

*/
#include <stdio.h>
#include <stdlib.h>

int main()
{

    int **x;

	printf("-----[이 연규]  [2018038038]-----\n\n");

	printf("sizeof(x) = %lu\n",sizeof(x)); //주소값이라 4바이트
	printf("sizeof(*x) = %lu\n",sizeof(*x)); //주소값이라 4바이트
	printf("sizeof(**x) = %lu\n",sizeof(**x)); //정수값이라 4바이트

	return 0;
}

