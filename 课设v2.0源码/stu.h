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

//菜单部分声明
int main_menu();

//添加部分声明
void add(List& ps);

//删除部分声明
void del(List& ps);
int del_main_menu();
void del_single(List& ps);
void del_all(List& ps);

//查找部分声明
void sea(List& ps);
int sea_main_menu();
int sea_data_menu();
void search_by_data(List& ps);
void search_by_postion(List& ps);
void search_by_name(List& ps);
void search_by_ID(List& ps);

//修改部分声明
void edit(List& ps);
int edit_main_menu();
void edit_name(List& ps,int postion);
void edit_age(List& ps,int postion);
void edit_sex(List& ps,int postion);
void edit_ID(List& ps,int postion);

//退出部分声明
void exit();

//初始化线性表
void InitList(List& ps);

//其他功能
int Is_empty(List& ps);
int Is_full(List& ps);

#endif