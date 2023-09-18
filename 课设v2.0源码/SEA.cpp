#include"stu.h"

void sea(List& ps)
{
	//清屏
	Sleep(100);
	system("cls");
	int choice = 1;
	while (choice)
	{
		choice = sea_main_menu();
		switch (choice)
		{
		case 1:
			search_by_data(ps);
			break;
		case 2:
			search_by_postion(ps);
			break;
		case 0:
			cout << "正在返回..." << endl;
			Sleep(100);
			system("cls");
			break;
		default:
			cout << "没有此项搜索方式！" << endl;
			break;
		}
	}
}

//按值搜索
void search_by_data(List& ps)
{
	//判断线性表是否为空
	if (!Is_empty(ps))
	{
		cout << "没有数据，无法查找！" << endl;
		return;
	}

	int choice = 1;
	while (choice)
	{
		choice = sea_data_menu();
		switch (choice)
		{
		case 1:
			search_by_name(ps);
			break;
		case 2:
			search_by_ID(ps);
			break;
		case 0:
			cout << "正在返回..." << endl;
			Sleep(100);
			system("cls");
			break;
		default:
			cout << "没有此项搜索方式！" << endl;
			break;
		}
	}

}

//按位置搜索
void search_by_postion(List& ps)
{
	//判断线性表是否为空
	if (!Is_empty(ps))
	{
		cout << "没有数据，无法查找！" << endl;
		return;
	}

	//输入查询位置
	int postion;
	cout << "请输入要查找的位置：";
	cin >> postion;
	while (1)
	{
		if (postion > ps.current_size + 1 || postion < 1)
		{
			cout<<"无法查询该位置！"<<"请重新输入要查找的位置：";
			cin >> postion;
		}
		else
			break;
	}
	/*cout << "\t学生姓名\t\t\t" << "学生年龄\t\t\t" << "学生性别\t\t\t" << "学生学号" << endl;
	printf("\t%s\t\t\t\t\t%d\t\t\t\t\t%s\t\t\t\t%s\n", ps.students[postion - 1].name,
		ps.students[postion - 1].age,
		ps.students[postion - 1].sex,
		ps.students[postion - 1].ID);*/
	cout << "学生姓名："<<ps.students[postion-1].name
		<<"\n学生年龄："<< ps.students[postion - 1] .age
		<<"\n学生性别："<< ps.students[postion - 1].sex
		<<"\n学生学号："<< ps.students[postion - 1] .ID<<endl;
	Sleep(3000);
}

void search_by_name(List& ps)
{
	char tmp[20] = { 0 };
	cout << "请输入学生姓名：";
	cin >> tmp;
	for(int j=0;j<=ps.current_size;j++)
	{
		if (strcmp(ps.students[j].name, tmp) == 0)
		{
			cout << "学生姓名：" << ps.students[j].name
				<< "\n学生年龄：" << ps.students[j].age
				<< "\n学生性别：" << ps.students[j].sex
				<< "\n学生学号：" << ps.students[j].ID << endl;
			break;
		}
		else if (j == ps.current_size)
			cout << "没有找到该学生的信息！"<<endl;
	}
	Sleep(3000);
}

void search_by_ID(List& ps)
{
	char tmp[14] = { 0 };
	cout << "请输入学生学号：";
	cin >> tmp;
	for (int j = 0; j <= ps.current_size; j++)
	{
		if (strcmp(ps.students[j].ID, tmp) == 0)
		{
			cout << "学生姓名：" << ps.students[j - 1].name
				<< "\n学生年龄：" << ps.students[j - 1].age
				<< "\n学生性别：" << ps.students[j - 1].sex
				<< "\n学生学号：" << ps.students[j - 1].ID << endl;
			break;
		}
		else if (j == ps.current_size)
			cout << "没有找到该学生的信息！" << endl;
	}
	Sleep(3000);
}