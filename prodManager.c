#include <stdio.h>
#include "prodManager.h"

//��ǰ�� �߰��Ѵ�
int createproduct(product *p){

	printf("\n��ǰ��: ");
    getchar();
	fgets(p->name,sizeof(p->name),stdin);
	printf("��ǰ ����: ");
	getchar();
	fgets(p->info,sizeof(p->info),stdin);
	printf("��ǰ ����: ");
	scanf("%d",p->price);
	printf("��ǰ ����: ");
	scanf("%d",&p->remain);
    p->totalSales = 0;
	printf("\n�߰� �Ϸ�!\n\n");
}


int main(){
    return 0;
}
