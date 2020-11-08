#define _CRT_SECURE_NO_WARNINGS 1

#include "contact.h"

void menu(void)
{
	printf("*****************************\n");
	printf("***  1.add       2.del    ***\n");
	printf("***  3.search    4.modify ***\n");
	printf("***  5.sort      6.show   ***\n");
	printf("***********0.exit************\n");
	printf("*****************************\n");
}

void test(void)
{
	int input = 0;
	Contact con = { {0},0 };

	do
	{
		menu();
		printf("��ѡ��>");
		scanf("%d", &input);
		switch (input)
		{
		case ADD:
			add_contact(&con);
			break;
		case DEL:
			del_contact(&con);
			break;
		case SEARCH:
			search_contact(&con);
			break;
		case MODIFY:
			modify_contact(&con);
			break;
		case SORT:
			sort_contact(&con);
			break;
		case SHOW:
			show_contact(&con);
			break;
		case EXIT:
			printf("�����˳�.\n");
			break;
		default:
			printf("�˵��޸�ѡ�������ѡ��>\n");
			break;
		}
	} while (input);
}

int main(void)
{
	
	test();

	return 0;
}