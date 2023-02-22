#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

typedef int SLData;
#define INIT_Capacity 4
//动态顺序表
typedef struct SLList
{
	SLData* a;
	int size;
	int capacity;
}SL;

//增删查改
//初始化
void SLInit(SL* ps);
// 销毁
void SLDestroy(SL* ps);
//增
void SLpushBack(SL*ps,SLData x);//尾插
void SLpushFront(SL* ps, SLData x);//头插
void SLpopBack(SL* ps);//尾删
void SlpopFrint(SL* ps);//头删
//删
void SLPrint(SL* ps);
