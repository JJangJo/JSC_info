#include <stdio.h>
#include "prodManager.h"


int updateproduct(product *p){
    int decision=0;
    printf("�̸� ����: ");
    printf("�����Ͻ÷��� 1���� �����ּ���");
    scanf("%d",&decision);
    if(decision==1){
        printf("�̸� �Է�: ");
        gets(p->name);
    }
    printf("���� ����: ");
    printf("�����Ͻ÷��� 1���� �����ּ���");
    scanf("%d",&decision);
    if(decision==1){
        printf("���� �Է�: ");
        gets(p->info);
    }
    printf("���� ����: ");
    printf("�����Ͻ÷��� 1���� �����ּ���");
    scanf("%d",&decision);
    if(decision==1){
        printf("���� �Է�: ");
        scanf("%d",p->price);
    }
    printf("���� ����: ");
    printf("�����Ͻ÷��� 1���� �����ּ���");
    scanf("%d",&decision);
    if(decision==1){
        printf("���� �Է�: ");
        scanf("%d",p->remain);
    }

}

int printRemain(product *p,int count){
    for(int i=0;i<count;i++){
        if(p[i].price==-1) continue;
        printf("%s: %d�� ���ҽ��ϴ�.\n",p[i].name,p[i].remain);
    }
}
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
    return 0;
}




int main(){
    return 0;
}
