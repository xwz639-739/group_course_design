#include"stu.h"

void del(List& ps)
{
	//����
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
			cout << "���ڷ���..." << endl;
			Sleep(100);
			system("cls");
			break;
		default:
			cout << "û�д���ɾ����ʽ��" << endl;
			break;
		}
	}
}

void del_single(List& ps)
{
	if (!Is_empty(ps))
		cout << "�޿�ɾ�������ݣ�" << endl;

	//����λ��
	int postion;
	cout << "������Ҫɾ����λ�ã�";
	cin >> postion;
	while (1)
	{
		if (postion<1 || postion>ps.current_size)
		{
			cout << "����λ�ô��󣡣���" << "\n" << "���������룺";
			cin >> postion;
		}
		else
			break;
	}

	//�ƶ�λ��
	for (int j = postion; j <= ps.current_size - 1; j++)
		ps.students[ps.current_size - 1] = ps.students[ps.current_size];
	ps.current_size--;
}

void del_all(List& ps)
{
	if (!Is_empty(ps))
		cout << "���ǿձ�����ɾ����" << endl;
	else
		ps.current_size = 0;
}