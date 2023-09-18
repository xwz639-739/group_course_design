#include"stu.h"

void add(List& ps)
{
	//清理屏幕
	Sleep(100);
	system("cls");

	//判断线性表是否已满
	if (Is_full(ps))
	{
		cout << "线性表已满！" << endl;
		return;
	}

	//询问、查找位置
	int postion;
	cout << "请输入要插入的位置：";
	cin >> postion;
	while(1)
	{
		if (postion > ps.current_size+1 || postion < 1)
		{
			cout << "无法插入到该位置！！！" << "\n" << "请重新输入：";
			cin >> postion;
		}
		else
			break;
	}
	//位置移动
	for (int j = ps.current_size - 1; j >= postion - 1; j--)
		ps.students[j + 1] = ps.students[j];
	cout << "请输入学生姓名：";
	cin >> ps.students[postion - 1].name;
	cout << "请输入学生年龄：";
	while (scanf_s("%d", &ps.students[postion - 1].age) != 1)
	{
		while (getchar() != '\n');
			cout << "请输入正确的年龄：";
	}
	cout << "请输入学生性别：";
	cin >> ps.students[postion-1].sex+'\0';
	cout << "请输入学生学号：";
    cin>>ps.students[postion-1].ID+'\0';

	cout << "输入完成！" << endl;
	while (getchar() != '\n');
	ps.current_size++;
}