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
void SLDestroy(SL* ps)//����
{
	free(ps->a);
	ps->a = NULL;
	ps->capacity = ps->size = 0;
}
void SLpushBack(SL* ps, SLData x)//β��
{
	//Ҫ����ԭ��������С������Խ��---����
	if (ps->size == ps->capacity)
	{
		SLData* new = (SLData*)realloc(ps->a, sizeof(SLData) * ((ps->capacity) * 2));
		if (new == NULL)
		{
			perror("realloc");
			 return;
		}
		ps->a = new;//Ҫ��realloc�¿��ٵĿռ��ٸ���a//�ռ���ܻ���ԭ�ȵĵط�ֻ������С����ˡ�
		//���߱����һ���ռ䡣
		//realloc����ԭ������Ҳ�����������
		printf("���ݳɹ�\n");
		ps->capacity *= 2;
	}
	ps->a[ps->size] = x;
	ps->size++;
}
void SLpopBack(SL* ps)//βɾ
{//���鶯̬���ٵĿռ䲻��һ��һ��Ԫ�أ����֣��ͷţ�����ռ��ڶ��������룬ֻ��һ���ͷŲ��ܵ����ͷš�
	//�������
	assert(ps->size > 0);
	//�ºͼ��
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