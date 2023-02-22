#include "test.h"
void SLInit(SL* ps)
{
	ps->a = (SLData*)malloc(sizeof(SLData) * INIT_Capacity);
	if (ps->a == NULL)
	{
		perror("malloc");
		return;
	}
	ps->size = 0;
	ps->capacity = INIT_Capacity;
}
void SLDestroy(SL* ps)//销毁
{
	free(ps->a);
	ps->a = NULL;
	ps->capacity = ps->size = 0;
}
void SLpushBack(SL* ps, SLData x)//尾插
{
	//要考虑原本容量大小，考虑越界---扩容
	if (ps->size == ps->capacity)
	{
		SLData* new = (SLData*)realloc(ps->a, sizeof(SLData) * ((ps->capacity) * 2));
		if (new == NULL)
		{
			perror("realloc");
			 return;
		}
		ps->a = new;//要将realloc新开辟的空间再赋给a//空间可能还是原先的地方只不过大小变大了。
		//或者变成另一个空间。
		//realloc可能原地扩容也可能异地扩容
		printf("扩容成功\n");
		ps->capacity *= 2;
	}
	ps->a[ps->size] = x;
	ps->size++;
}
void SLpopBack(SL* ps)//尾删
{//数组动态开辟的空间不能一个一个元素（部分）释放，数组空间在堆区上申请，只能一起释放不能单独释放。
	//暴力监测
	assert(ps->size > 0);
	//温和监测
	if (ps->size == 0)
	{
		return;
	}
	//ps->a[ps->size - 1] = 0;
	ps->size--;
}
void SLPrint(SL* ps)
{
	for (int i = 0; i < ps->size; i++)
	{
		printf("%d ", ps->a[i]);
	}
}