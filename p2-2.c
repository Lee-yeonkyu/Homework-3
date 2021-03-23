/*
 * 4.c
 *
 *  Created on: 2021. 3. 22.
 *      Author: Yaan
 */


#include <stdio.h>

void print1 (int *ptr, int rows);

int main()
{
	int one[]= {0,1,2,3,4};
  printf("-----[이 연규]  [2018038038]-----\n\n");
	printf("one		= %p\n",one); //one의 주소값 출력.
	printf("&one 		= %p\n",&one); //&one의 값은 one의 주소값과 같다.
	printf("&one[0] 	= %p\n",&one[0]); //&one[0]의 값도 one의 주소값과 같다.
	printf("\n");

	print1(&one[0],5); //print1 함수에 one의 주소값과 5를 보내고 실행시킨다.

	return 0;
}

void print1(int *ptr, int rows)
{
	int i;
	printf("Address \t Contents\n");
	for(i=0; i<rows;i++) //i가 row보다 커지기 전까지 for함수를 실행한다.
		printf("%p \t  %5d\n",ptr+i,*(ptr+i)); //받은 one배열의 값을 1씩 늘려가면서 주소값과 내용을 출력한다.
	printf("\n");
}
