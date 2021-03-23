/*
 * struct.c
 *
 *  Created on: 2021. 3. 22.
 *      Author: Yaan
 */

#include <stdio.h>
#include <string.h>

#define FALSE 0
#define TRUE 1
struct student1 { //구조체 student1 선언
	char lastName;
	int studentId;
	char grade;
};

typedef struct { //구조체 student2 선언
	char* lastName;
	int studentId;
	char grade;
}student2;
int humansEqual (student2 st2,student2 st3); //st2과 st3이 같은지 비교하는 함수.
int main()
{

	struct student1 st1 = {'A',100,'A'}; //st1 변수 선언

	printf("-----[이 연규]  [2018038038]-----\n\n");

	printf("st1.lastName = %c\n",st1.lastName);
	printf("st1.studentId = %d\n",st1.studentId);
	printf("st1.grade = %c\n",st1.grade);

	student2 st2 = {"A",200, 'B'}; //st2 변수 선언

	printf("\nst2.lastName = %s\n",st2.lastName);
	printf("st2.studentId = %d\n",st2.studentId);
	printf("st2.grade = %c\n",st2.grade);

	student2 st3; //st3 변수 선언

	st3 = st2; // st2값을 st3로 넣어준다.

	printf("\nst3.lastName = %s\n",st3.lastName);
	printf("st3.studentId = %d\n",st3.studentId);
	printf("st3.grade = %c\n",st3.grade);

	if (humansEqual(st3,st2)) // 반환 값이 FALSE으면 다르고 TRUE면 같다.
		printf("equal\n");
	else
		printf("not equal\n");


	return 0;
}
int humansEqual (student2 st2,student2 st3)
{
	if (strcmp(st2.lastName, st3.lastName)!= 0) //st2.lastName과 st3.lastName이 같으면 0이 되므로 서로 다른 경우 FALSE값 반환
		return FALSE;
	if (st2.grade != st3.grade) //같지 않을경우 참으로되서 FALSE값 반환
		return FALSE;
	if (st2.studentId != st3.studentId) //같지 않을경우 참으로되서 FALSE값 반환
		return FALSE;

	return TRUE; // 모두 다 틀리면 TRUE값 반환
}
