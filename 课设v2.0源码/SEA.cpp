#include"stu.h"

void sea(List& ps)
{
	//����
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
			cout << "���ڷ���..." << endl;
			Sleep(100);
			system("cls");
			break;
		default:
			cout << "û�д���������ʽ��" << endl;
			break;
		}
	}
}

//��ֵ����
void search_by_data(List& ps)
{
	//�ж����Ա��Ƿ�Ϊ��
	if (!Is_empty(ps))
	{
		cout << "û�����ݣ��޷����ң�" << endl;
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
			cout << "���ڷ���..." << endl;
			Sleep(100);
			system("cls");
			break;
		default:
			cout << "û�д���������ʽ��" << endl;
			break;
		}
	}

}

//��λ������
void search_by_postion(List& ps)
{
	//�ж����Ա��Ƿ�Ϊ��
	if (!Is_empty(ps))
	{
		cout << "û�����ݣ��޷����ң�" << endl;
		return;
	}

	//�����ѯλ��
	int postion;
	cout << "������Ҫ���ҵ�λ�ã�";
	cin >> postion;
	while (1)
	{
		if (postion > ps.current_size + 1 || postion < 1)
		{
			cout<<"�޷���ѯ��λ�ã�"<<"����������Ҫ���ҵ�λ�ã�";
			cin >> postion;
		}
		else
			break;
	}
	/*cout << "\tѧ������\t\t\t" << "ѧ������\t\t\t" << "ѧ���Ա�\t\t\t" << "ѧ��ѧ��" << endl;
	printf("\t%s\t\t\t\t\t%d\t\t\t\t\t%s\t\t\t\t%s\n", ps.students[postion - 1].name,
		ps.students[postion - 1].age,
		ps.students[postion - 1].sex,
		ps.students[postion - 1].ID);*/
	cout << "ѧ��������"<<ps.students[postion-1].name
		<<"\nѧ�����䣺"<< ps.students[postion - 1] .age
		<<"\nѧ���Ա�"<< ps.students[postion - 1].sex
		<<"\nѧ��ѧ�ţ�"<< ps.students[postion - 1] .ID<<endl;
	Sleep(3000);
}

void search_by_name(List& ps)
{
	char tmp[20] = { 0 };
	cout << "������ѧ��������";
	cin >> tmp;
	for(int j=0;j<=ps.current_size;j++)
	{
		if (strcmp(ps.students[j].name, tmp) == 0)
		{
			cout << "ѧ��������" << ps.students[j].name
				<< "\nѧ�����䣺" << ps.students[j].age
				<< "\nѧ���Ա�" << ps.students[j].sex
				<< "\nѧ��ѧ�ţ�" << ps.students[j].ID << endl;
			break;
		}
		else if (j == ps.current_size)
			cout << "û���ҵ���ѧ������Ϣ��"<<endl;
	}
	Sleep(3000);
}

void search_by_ID(List& ps)
{
	char tmp[14] = { 0 };
	cout << "������ѧ��ѧ�ţ�";
	cin >> tmp;
	for (int j = 0; j <= ps.current_size; j++)
	{
		if (strcmp(ps.students[j].ID, tmp) == 0)
		{
			cout << "ѧ��������" << ps.students[j - 1].name
				<< "\nѧ�����䣺" << ps.students[j - 1].age
				<< "\nѧ���Ա�" << ps.students[j - 1].sex
				<< "\nѧ��ѧ�ţ�" << ps.students[j - 1].ID << endl;
			break;
		}
		else if (j == ps.current_size)
			cout << "û���ҵ���ѧ������Ϣ��" << endl;
	}
	Sleep(3000);
}