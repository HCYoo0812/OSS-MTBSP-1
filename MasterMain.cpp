#include <stdio.h>
#pragma warning(disable:4996)
#include <windows.h>
#include "user_login.h"
#include "user_membership.h"
#include "user_movie.h"
#include "user_people.h"
#include "user_seat.h"
#include "user_payment.h"
#include "user_ticket.h"
#include "admin_movie.h"
#include "admin_payment.h"



void main()
{
	int select;
	printf("ȸ������ 1�� ȸ���α���2�� ��α���3��\n");
	scanf("%d", &select);
	if (select == 1)
	{
		membership();
	}
	else if (select == 2)
	{
		login_member();
	}
	else if (select == 3)
	{
		login_nonmember();
	}
	return;

}