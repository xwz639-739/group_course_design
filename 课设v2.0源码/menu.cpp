#include"stu.h"

int main_menu()
{
	cout << "****************************" << endl;
	cout << "*** 1. 增添 **** 2. 删除 ***" << endl;
	cout << "*** 3. 查找 **** 4. 修改 ***" << endl;
	cout << "*** 0. 退出 ****************" << endl;
	cout << "请选择功能：";
again:int a;
	cin >> a;
	if (isalnum(a)==0)
		return a;
	else
	{
		while (getchar() != '\n');
		cout << "非法输入！" << "\n" << "请重新输入：";
		goto again;
	}
}

int sea_main_menu()
{
	cout << "****************************************" << endl;
	cout << "*** 1. 按数值搜索 **** 2. 按位置搜索 ***" << endl;
	cout << "*** 0. 返回 ****************************" << endl;
	cout << "请选择搜索方式：";
again:int a;
	cin >> a;
	if (isalnum(a)==0)
		return a;
	else
	{
		while (getchar() != '\n');
		cout << "非法输入！" << "\n" << "请重新输入：";
		goto again;
	}
}

int sea_data_menu()
{
	cout << "************************************" << endl;
	cout << "*** 1. 学生姓名 **** 2. 学生学号 ***" << endl;
	cout << "*** 0. 返回 ************************" << endl;
	cout << "请选择查找对象：";
again:int a;
	cin >> a;
	if(isalnum(a)==0)
	return a;
	else
	{
		while (getchar() != '\n');
		cout << "非法输入！" << "\n" << "请重新输入：";
		goto again;
	}
} 

int del_main_menu()
{
	cout << "************************************" << endl;
	cout << "*** 1. 单个删除 **** 2. 全部删除 ***" << endl;
	cout << "*** 0. 返回 ************************" << endl;
	cout << "请选择删除方式：";
again:int a;
	cin >> a;
	if (isalnum(a)==0)
		return a;
	else
	{
		while (getchar() != '\n');
		cout << "非法输入！" << "\n" << "请重新输入：";
		goto again;
	}
}

int edit_main_menu()
{
	cout << "************************************" << endl;
	cout << "*** 1. 学生姓名 **** 2. 学生年龄 ***" << endl;
	cout << "*** 3. 学生性别 **** 4. 学生学号 ***" << endl;
	cout << "*** 0. 返回 ************************" << endl;
	cout << "请选择修改对象：";
again:int a;
	cin >> a;
	if (isalnum(a)==0)
		return a;
	else
	{
		while (getchar() != '\n');
		cout << "非法输入！" << "\n" << "请重新输入：";
		goto again;
	}
}