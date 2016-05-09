/****************************************************/
/* 과목 : 프로그래밍 기초 및 실습					*/
/* 내용	: 수치를 입력받아 볼링 점수게산				*/
/* 학과 : 소프트웨어 가반							*/
/* 학번 : 20160325									*/
/* 이름	: 전 연 준									*/
/* 작성일: 2016년 04월 24일							*/
/****************************************************/

#include<stdio.h>
int main(void)
{
	int pin = 0, pin2 = 0, pin3 = 0, prame = 1, score = 0, spare =0, strike = 0;
	while (prame < 10)
	{
		printf("%d번째 프레임 1번째 처리 핀 수: ",prame);
	    scanf("%d", &pin);
        if (pin == 10)
		{
			score += 10;
			
		    if (spare == 1)
			{
				score += 10;
				spare --;
			}
			if (strike == 1)
			{
				score += 10;
			}
			if (strike == 2)
			{
				score += 10;
				score += 10;
				strike--;
			}
		    strike++;	
		}
		if (pin < 10)
		{
			if (strike == 0 && spare == 0)
			{
				score += pin;
			     
			}
		    if (spare == 1)
			{
				score += pin;
				score += pin;
				spare--;
			} 
			if (strike == 1)
			{
				score += pin;
				score += pin;
			}
			if (strike == 2)
			{
				score += pin;
				score += pin;
				score += pin;
				strike--;
			}
		    printf("**** 현재까지 점수 :%d\n", score);
		    printf("%d번째 프레임 2번째 처리 핀 수: ",prame);
            scanf("%d", &pin2);
            if( strike == 0)
			{
			    score += pin2;
			}
			if ( strike == 1)
			{
				score += pin2;
				score += pin2;
				strike--;
			}
			if (pin + pin2 == 10)
			{
				spare++;
			}
		 }
		printf("**** 현재까지 점수 :%d\n", score);
	    prame++;
	}
    if( prame == 10)
      { 
		printf("10번째 프레임 1번째 처리 핀 수: ");
        scanf("%d", &pin);
		score += pin;
		printf("**** 현재까지 점수 :%d\n", score);
		printf("10번째 프레임 2번째 처리 핀 수: ");
        scanf("%d", &pin2);
			score += pin2;
		if ( pin != 10 && pin2 != 10 && pin+pin2 == 10 )
		printf("**** 최종점수  :%d\n", score);
		if ( pin == 10 || pin2 == 10 || pin+pin2 == 10)
		printf("10번째 프레임 3번째 처리 핀 수: ");
        scanf("%d", &pin3);
			score += pin3;
		printf("**** 최종점수  :%d\n", score);


			
      }
	return 0;
}
