#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

typedef int SLData;
#define INIT_Capacity 4
//��̬˳���
typedef struct SLList
{
	SLData* a;
	int size;
	int capacity;
}SL;

//��ɾ���
//��ʼ��
void SLInit(SL* ps);
// ����
void SLDestroy(SL* ps);
//��
void SLpushBack(SL*ps,SLData x);//β��
void SLpushFront(SL* ps, SLData x);//ͷ��
void SLpopBack(SL* ps);//βɾ
void SlpopFrint(SL* ps);//ͷɾ
//ɾ
void SLPrint(SL* ps);
