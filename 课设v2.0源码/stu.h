#pragma once

#ifndef _STU_H_


#include<iostream>
#include<stdlib.h>
#include<Windows.h>
#include<stdio.h>
#include<string.h>
#include<ctype.h>
using namespace std;

#define MAX 200

typedef struct student {
	char name[20];
	int age;
	char sex[2];
	char ID[14];
}student;

typedef struct List {
	student* students;
	int current_size;
}List;

enum {
	EXIT,
	ADD,
	DEL,
	SEA,
	EDIT
};

//�˵���������
int main_menu();

//��Ӳ�������
void add(List& ps);

//ɾ����������
void del(List& ps);
int del_main_menu();
void del_single(List& ps);
void del_all(List& ps);

//���Ҳ�������
void sea(List& ps);
int sea_main_menu();
int sea_data_menu();
void search_by_data(List& ps);
void search_by_postion(List& ps);
void search_by_name(List& ps);
void search_by_ID(List& ps);

//�޸Ĳ�������
void edit(List& ps);
int edit_main_menu();
void edit_name(List& ps,int postion);
void edit_age(List& ps,int postion);
void edit_sex(List& ps,int postion);
void edit_ID(List& ps,int postion);

//�˳���������
void exit();

//��ʼ�����Ա�
void InitList(List& ps);

//��������
int Is_empty(List& ps);
int Is_full(List& ps);

#endif