#include"stu.h"

void add(List& ps)
{
	//������Ļ
	Sleep(100);
	system("cls");

	//�ж����Ա��Ƿ�����
	if (Is_full(ps))
	{
		cout << "���Ա�������" << endl;
		return;
	}

	//ѯ�ʡ�����λ��
	int postion;
	cout << "������Ҫ�����λ�ã�";
	cin >> postion;
	while(1)
	{
		if (postion > ps.current_size+1 || postion < 1)
		{
			cout << "�޷����뵽��λ�ã�����" << "\n" << "���������룺";
			cin >> postion;
		}
		else
			break;
	}
	//λ���ƶ�
	for (int j = ps.current_size - 1; j >= postion - 1; j--)
		ps.students[j + 1] = ps.students[j];
	cout << "������ѧ��������";
	cin >> ps.students[postion - 1].name;
	cout << "������ѧ�����䣺";
	while (scanf_s("%d", &ps.students[postion - 1].age) != 1)
	{
		while (getchar() != '\n');
			cout << "��������ȷ�����䣺";
	}
	cout << "������ѧ���Ա�";
	cin >> ps.students[postion-1].sex+'\0';
	cout << "������ѧ��ѧ�ţ�";
    cin>>ps.students[postion-1].ID+'\0';

	cout << "������ɣ�" << endl;
	while (getchar() != '\n');
	ps.current_size++;
}