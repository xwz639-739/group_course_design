#include"stu.h"

void edit(List& ps)
{
	//����
	Sleep(100);
	system("cls");

	//�ж����Ա��Ƿ�Ϊ��
	if (!Is_empty(ps))
	{
		cout << "û�����ݣ��޷��޸ģ�" << endl;
		return;
	}

	//�޸�λ��
	int postion;
	cout << "������Ҫ�޸ĵ�λ�ã�";
	cin >> postion;
	while (1)
	{
		if (postion > ps.current_size + 1 || postion < 1)
		{
			cout << "�޷��޸ĸ�λ�ã�" << "����������Ҫ�޸ĵ�λ�ã�";
			cin >> postion;
		}
		else
			break;
	}

	//ѡ���޸ĵ���Ϣ
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
			cout << "���ڷ���..." << endl;
			Sleep(100);
			system("cls");
			break;
		default:
			cout << "û�д����޸ķ�ʽ��" << endl;
			break;
		}
	}
}

void edit_name(List& ps, int postion)
{
	char tmp[20] = { 0 };
	cout << "�������޸ĺ�����֣�";
	cin >> tmp;
	cout << "�޸���..." << endl;
	Sleep(300);
	strncpy_s(ps.students[postion-1].name,tmp,sizeof(tmp)-1);
	cout << "�޸ĳɹ�" << endl;
}

void edit_age(List& ps, int postion)
{
	int tmp =0 ;
	cout << "�������޸ĺ�����䣺";
	cin >> tmp;
	cout << "�޸���..." << endl;
	Sleep(300);
	ps.students[postion].age = tmp;
	cout << "�޸ĳɹ�" << endl;

}

void edit_sex(List& ps, int postion)
{
	char tmp[2] = { 0 };
	cout << "�������޸ĺ���Ա�";
	cin >> tmp;
	cout << "�޸���..." << endl;
	Sleep(300);
	strncpy_s(ps.students[postion-1].sex,tmp, sizeof(tmp)-1);
	cout << "�޸ĳɹ�" << endl;

}

void edit_ID(List& ps, int postion)
{
	char tmp[14] = { 0 };
	cout << "�������޸ĺ��ѧ�ţ�";
	cin >> tmp;
	cout << "�޸���..." << endl;
	Sleep(300);
	strncpy_s(ps.students[postion-1].ID,tmp, sizeof(tmp)-1);
	cout << "�޸ĳɹ�" << endl;

}