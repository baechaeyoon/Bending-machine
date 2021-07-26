#include <stdio.h>
#include <string.h>

#define _CRT_SECURE_NO_WARNINGS

int main(void)
{
	int drink;
	char select;
	int sum = 0;
	
	
	printf("♡♥♡♥♡♥♡♥♡♥♡♥♡♥♡♥♡♥♡♥♡♥♡♥♡♥\n");
	printf("♡♥♡♥♡♥♡♥♡YOON'S 자판기♡♥♡♥♡♥♡♥♡♥\n");
	printf("♡♥♡♥♡♥♡♥♡♥♡♥♡♥♡♥♡♥♡♥♡♥♡♥♡♥\n");
	printf("\n");
	printf("----------------------------------------------------\n");
	printf("\n");
	printf("    | ◎1.코카콜라 ◎2.칠성사이다 ◎3.포카리스웨트 |\n");
	printf("    |  [1000원]      [900원]         [800원]       |\n");
	printf("    | ◎4.2프로    ◎5.데미소다   ◎6.식혜         |\n");
	printf("    |  [800]         [1000원]        [900원]       |\n");
	printf("    | ◎7.박카스   ◎8.오로나민씨 ◎9.레드불       |\n");
	printf("    |  [600원]       [900원]           [1200원]    |\n");
	printf("    | ◎10.환타    ◎11.T.O.P     ◎12.밀키스      |\n");
	printf("    |  [600원]       [1000원]          [800원]     |\n");
	printf("    | ◎13.삼다수  ◎14.레쓰비    ◎15.썬키스트    |\n");
	printf("    |  [700원]       [500원]           [1000원]    |\n");
	printf("\n");
	printf("----------------------------------------------------\n");
	printf("        금액을 투입하고 번호를 선택해주십시오.\n");
	printf("----------------------------------------------------\n");
	printf("              【현재 투입된 금액:%d】\n",sum);
	printf("----------------------------------------------------\n");
	printf("    | ￢ a<A>  :   100원 동전 투입                 |\n");
	printf("    | ￢ b<B>  :   500원 동전 투입                 |\n");
	printf("    | ￢ c<C>  :   1000원 동전 투입                |\n");
	printf("    | ￢ d<D>  :   투입 중지                       |\n");
	printf("----------------------------------------------------\n");
	printf("    | ￢ q<Q>  :   동전 반환                       |\n");
	printf("    | ￢ w<W>  :   자판기 판매 매출 보기           |\n");
	printf("    | ￢ e<E>  :   자판기 판매 매출 초기화         |\n");
	printf("----------------------------------------------------\n");
	printf("    | ￢ x<X>  :   프로그램 종료                   |\n");
	printf("----------------------------------------------------\n");
	printf("              돈을 투입하세요:\n");
	while (1)
		
	{
		scanf("%c", &select);
		if (select == 'a' || select == 'A')
		{
			sum +=100;
			continue;
		}
		else if (select == 'b' || select == 'B')
		{
			sum += 500;
			continue;
		}
		else if (select == 'c' || select == 'C')
		{
			sum += 1000;
			continue;
		}
		else if (select == 'd' || select == 'D')
		{
			break;
			
		}
		
		
		else
		{
			printf("a,b,c,d중 하나만 선택하십시오\n");
			continue;

		}
		
		
	}
	printf("￢ 음료번호 선택:\n"); 
	scanf("%d", &drink);
	
	if (drink == 1)
	{
		if (sum >= 1000)
		{
			printf("코카콜라가 나왔습니다.\n");
			
		}
		else 
		{
			printf("잔액이 부족합니다.\n");
		}
	}
	else if (drink == 2)
	{
		if (sum >= 900)
		{
			printf("칠성사이다가 나왔습니다.\n");
		}
		else
		{
			printf("잔액이 부족합니다.\n");
		}
	}

	else if (drink == 3)
	{
		if (sum >= 800)
		{
			printf("포카리스웨트가 나왔습니다.\n");
		}
		else
		{
			printf("잔액이 부족합니다.\n");
		}
	}
	else if (drink == 4)
	{
		if (sum >= 800)
		{
			printf("2프로가 나왔습니다.\n");
		}
		else
		{
			printf("잔액이 부족합니다.\n");
		}
	}
	else if (drink == 5)
	{
		if (sum >= 1000)
		{
			printf("데미소다가 나왔습니다.\n");
		}
		else
		{
			printf("잔액이 부족합니다.\n");
		}
	}
	else if (drink == 6)
	{
		if (sum >= 900)
		{
			printf("식혜가 나왔습니다.\n");
		}
		else
		{
			printf("잔액이 부족합니다.\n");
		}
	}
	else if (drink == 7)
	{
		if (sum >= 600)
		{
			printf("박카스가 나왔습니다.\n");
		}
		else
		{
			printf("잔액이 부족합니다.\n");
		}
	}
	else if (drink == 8)
	{
		if (sum >= 900)
		{
			printf("오로나민씨가 나왔습니다.\n");
		}
		else
		{
			printf("잔액이 부족합니다.\n");
		}
	}
	else if (drink == 9)
	{
		if (sum >= 1200)
		{
			printf("레드불이 나왔습니다.\n");
		}
		else
		{
			printf("잔액이 부족합니다.\n");
		}
	}
	else if (drink == 10)
	{
		if (sum >= 600)
		{
			printf("환타가 나왔습니다.\n");
		}
		else
		{
			printf("잔액이 부족합니다.\n");
		}
	}
	else if (drink == 11)
	{
		if (sum >= 1000)
		{
			printf("T.O.P가 나왔습니다.\n");
		}
		else
		{
			printf("잔액이 부족합니다.\n");
		}
	}
	else if (drink == 12)
	{
		if (sum >= 800)
		{
			printf("밀키스가 나왔습니다.\n");
		}
		else
		{
			printf("잔액이 부족합니다.\n");
		}
	}
	else if (drink == 13)
	{
		if (sum >= 700)
		{
			printf("삼다수가 나왔습니다.\n");
		}
		else
		{
			printf("잔액이 부족합니다.\n");
		}
	}
	else if (drink == 14)
	{
		if (sum >= 500)
		{
			printf("레쓰비가 나왔습니다.\n");
		}
		else
		{
			printf("잔액이 부족합니다.\n");
		}
	}
	else if (drink == 15)
	{
		if (sum >= 1000)
		{
			printf("썬키스트가 나왔습니다.\n");
		}
		else
		{
			printf("잔액이 부족합니다.\n");
		}
	}
	else
	{
		printf("번호를 잘못 입력하셨습니다.\n");
	}
	
	return 0;
}