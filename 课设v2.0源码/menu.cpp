#include"stu.h"

int main_menu()
{
	cout << "****************************" << endl;
	cout << "*** 1. ���� **** 2. ɾ�� ***" << endl;
	cout << "*** 3. ���� **** 4. �޸� ***" << endl;
	cout << "*** 0. �˳� ****************" << endl;
	cout << "��ѡ���ܣ�";
again:int a;
	cin >> a;
	if (isalnum(a)==0)
		return a;
	else
	{
		while (getchar() != '\n');
		cout << "�Ƿ����룡" << "\n" << "���������룺";
		goto again;
	}
}

int sea_main_menu()
{
	cout << "****************************************" << endl;
	cout << "*** 1. ����ֵ���� **** 2. ��λ������ ***" << endl;
	cout << "*** 0. ���� ****************************" << endl;
	cout << "��ѡ��������ʽ��";
again:int a;
	cin >> a;
	if (isalnum(a)==0)
		return a;
	else
	{
		while (getchar() != '\n');
		cout << "�Ƿ����룡" << "\n" << "���������룺";
		goto again;
	}
}

int sea_data_menu()
{
	cout << "************************************" << endl;
	cout << "*** 1. ѧ������ **** 2. ѧ��ѧ�� ***" << endl;
	cout << "*** 0. ���� ************************" << endl;
	cout << "��ѡ����Ҷ���";
again:int a;
	cin >> a;
	if(isalnum(a)==0)
	return a;
	else
	{
		while (getchar() != '\n');
		cout << "�Ƿ����룡" << "\n" << "���������룺";
		goto again;
	}
} 

int del_main_menu()
{
	cout << "************************************" << endl;
	cout << "*** 1. ����ɾ�� **** 2. ȫ��ɾ�� ***" << endl;
	cout << "*** 0. ���� ************************" << endl;
	cout << "��ѡ��ɾ����ʽ��";
again:int a;
	cin >> a;
	if (isalnum(a)==0)
		return a;
	else
	{
		while (getchar() != '\n');
		cout << "�Ƿ����룡" << "\n" << "���������룺";
		goto again;
	}
}

int edit_main_menu()
{
	cout << "************************************" << endl;
	cout << "*** 1. ѧ������ **** 2. ѧ������ ***" << endl;
	cout << "*** 3. ѧ���Ա� **** 4. ѧ��ѧ�� ***" << endl;
	cout << "*** 0. ���� ************************" << endl;
	cout << "��ѡ���޸Ķ���";
again:int a;
	cin >> a;
	if (isalnum(a)==0)
		return a;
	else
	{
		while (getchar() != '\n');
		cout << "�Ƿ����룡" << "\n" << "���������룺";
		goto again;
	}
}