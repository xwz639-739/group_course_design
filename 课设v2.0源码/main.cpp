#include"stu.h"

int main()
{
	List stu_list;
	InitList(stu_list);
	int choice = 1;
	while (choice)
	{
		choice = main_menu();
		switch (choice)
		{
		case ADD:
			add(stu_list);
			break;
		case DEL:
			del(stu_list);
			break;
		case SEA:
			sea(stu_list);
			break;
		case EDIT:
			edit(stu_list);
			break;
		case EXIT:
			free(stu_list.students);
			stu_list.students = nullptr;
			exit();
			break;
		default:
			cout << "没有此项功能，请重新选择！";
			Sleep(1000);
			system("cls");
			break;
		}
	}
}