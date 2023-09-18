#include"stu.h"

void InitList(List& ps)
{
	ps.students = (student*)malloc(sizeof(student) * MAX);
	if (ps.students == nullptr) perror("初始化失败：");
	ps.current_size = 0;
}

int Is_empty(List& ps)
{
	//判断线性表是否为空
	return ps.current_size;
}

int Is_full(List& ps)
{
	return ps.current_size == MAX;
}

