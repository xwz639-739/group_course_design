#include"stu.h"

void InitList(List& ps)
{
	ps.students = (student*)malloc(sizeof(student) * MAX);
	if (ps.students == nullptr) perror("��ʼ��ʧ�ܣ�");
	ps.current_size = 0;
}

int Is_empty(List& ps)
{
	//�ж����Ա��Ƿ�Ϊ��
	return ps.current_size;
}

int Is_full(List& ps)
{
	return ps.current_size == MAX;
}

