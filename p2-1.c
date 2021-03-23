/*
 * p2-1.c
 *
 *  Created on: 2021. 3. 23.
 *      Author: Yaan
 */
#include <stdio.h>
#include <stdlib.h>


#define MAX_SIZE 100

float sum(float list[], int);
float input[MAX_SIZE], answer;
int i;
int main()
{
	printf("-----[이 연규]  [2018038038]-----\n\n");

	for(i=0; i <MAX_SIZE; i++) // input에 i가 MAX_SIZE보다 작을때까지 i의 값을 넣는다.
		input[i]=i;
	printf("address of input = %p\n",input);//input의 주소 출력
	answer=sum(input,MAX_SIZE); //sum함수에 input의 주소와 MAX_SIZE를 보낸다.
	printf("\nThe sum is: %f\n",answer);
}
float sum(float list[],int n)
{
	printf("value of list = %p\n",list); // input의 주소값이 list의 내용으로 이동
	printf("address of list = %p\n",&list); //list의 주소값 출력
	int i;
	float tempsum = 0;
	for(i=0;i<n; i++) // tempsum에 list[0]부터 list[n]까지의 값을 모두 더해준다.
		tempsum +=list[i];
	return tempsum; // tempsum 값을 반환한다.
}
