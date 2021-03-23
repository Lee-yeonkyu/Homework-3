/*
 * padding.c
 *
 *  Created on: 2021. 3. 22.
 *      Author: Yaan
 */


#include <stdio.h>

struct student {
	char lastName[13];  //13bytes
	int studentId;		//4bytes
	short grade;		//2bytes
};

int main()
{
	struct student pst; //pst변수 선언.

	printf("-----[이 연규]  [2018038038]-----\n\n");

	printf("size of student - %ld\n",sizeof(struct student)); //lastName과 studentId,grade를 다 합쳐도 19바이트지만 padding을 해서 24바이트가 나온다.
	printf("size of int = %ld\n",sizeof(int)); //int형의 사이즈는 4bytes이다.
	printf("size of short = %ld\n",sizeof(short)) ; //short형의 사이즈는 2bytes이다.

	return 0;
}
