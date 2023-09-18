#include"stu.h"

void del(List& ps)
{
	//清屏
	Sleep(100);
	system("cls");

	int choice = 1;
	while (choice)
	{
		choice = del_main_menu();
		switch (choice)
		{
		case 1:
			del_single(ps);
			break;
		case 2:
			del_all(ps);
			break;
		case 0:
			cout << "正在返回..." << endl;
			Sleep(100);
			system("cls");
			break;
		default:
			cout << "没有此项删除方式！" << endl;
			break;
		}
	}
}

void del_single(List& ps)
{
	if (!Is_empty(ps))
		cout << "无可删除的数据！" << endl;

	//输入位置
	int postion;
	cout << "请输入要删除的位置：";
	cin >> postion;
	while (1)
	{
		if (postion<1 || postion>ps.current_size)
		{
			cout << "输入位置错误！！！" << "\n" << "请重新输入：";
			cin >> postion;
		}
		else
			break;
	}

	//移动位置
	for (int j = postion; j <= ps.current_size - 1; j++)
		ps.students[ps.current_size - 1] = ps.students[ps.current_size];
	ps.current_size--;
}

void del_all(List& ps)
{
	if (!Is_empty(ps))
		cout << "已是空表，无需删除！" << endl;
	else
		ps.current_size = 0;
}