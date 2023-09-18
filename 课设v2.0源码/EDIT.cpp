#include"stu.h"

void edit(List& ps)
{
	//清屏
	Sleep(100);
	system("cls");

	//判断线性表是否为空
	if (!Is_empty(ps))
	{
		cout << "没有数据，无法修改！" << endl;
		return;
	}

	//修改位置
	int postion;
	cout << "请输入要修改的位置：";
	cin >> postion;
	while (1)
	{
		if (postion > ps.current_size + 1 || postion < 1)
		{
			cout << "无法修改该位置！" << "请重新输入要修改的位置：";
			cin >> postion;
		}
		else
			break;
	}

	//选择修改的信息
	int choice = 1;
	while (choice)
	{
		choice = edit_main_menu();
		switch (choice)
		{
		case 1:
			edit_name(ps,postion);
			break;
		case 2:
			edit_age(ps,postion);
			break;
		case 3:
			edit_sex(ps,postion);
			break;
		case 4:
			edit_ID(ps,postion);
			break;
		case 0:
			cout << "正在返回..." << endl;
			Sleep(100);
			system("cls");
			break;
		default:
			cout << "没有此项修改方式！" << endl;
			break;
		}
	}
}

void edit_name(List& ps, int postion)
{
	char tmp[20] = { 0 };
	cout << "请输入修改后的名字：";
	cin >> tmp;
	cout << "修改中..." << endl;
	Sleep(300);
	strncpy_s(ps.students[postion-1].name,tmp,sizeof(tmp)-1);
	cout << "修改成功" << endl;
}

void edit_age(List& ps, int postion)
{
	int tmp =0 ;
	cout << "请输入修改后的年龄：";
	cin >> tmp;
	cout << "修改中..." << endl;
	Sleep(300);
	ps.students[postion].age = tmp;
	cout << "修改成功" << endl;

}

void edit_sex(List& ps, int postion)
{
	char tmp[2] = { 0 };
	cout << "请输入修改后的性别：";
	cin >> tmp;
	cout << "修改中..." << endl;
	Sleep(300);
	strncpy_s(ps.students[postion-1].sex,tmp, sizeof(tmp)-1);
	cout << "修改成功" << endl;

}

void edit_ID(List& ps, int postion)
{
	char tmp[14] = { 0 };
	cout << "请输入修改后的学号：";
	cin >> tmp;
	cout << "修改中..." << endl;
	Sleep(300);
	strncpy_s(ps.students[postion-1].ID,tmp, sizeof(tmp)-1);
	cout << "修改成功" << endl;

}