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
    return 1;
}




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
    return 1;

}

int printRemain(product *p,int count){//���� ���� ���
    for(int i=0;i<count;i++){
        if(p[i].remain==0) continue; // ���� delete�� ��ǰ�̶�� �پ�Ѱ� ���
        printf("%s: %d�� ���ҽ��ϴ�.\n",p[i].name,p[i].remain);
    }
    return 1;
}

int deleteProduct(product *p){//��ǰ�� ������ �����Ѵ�.
        p->price=-1;
        p->name[0]='\0';
        p->remain=0;
        return 1;
}


int selectMenu(){//�޴� ���� ���
        int menu;
        printf("\n\n�޴� ����\n");
        printf("================\n");
        printf("1. ��ǰ �߰�\n");
        printf("2. ��ǰ ���� ���\n");
        printf("3. ��ǰ ���� ������Ʈ\n");
        printf("4. ��ǰ ���� ����\n");
        // printf("5. ��ǰ �˻�\n");
        // printf("6. ��ǰ ���� ���� ����\n");
        printf("7. ���� ���� ���\n");
        printf("8. ���� ���� ���");
        printf("0. ����\n");
        printf("========================\n\n");
        scanf("%d",&menu);
        printf("\n");
       return menu;
}




int main(){
    return 0;
}
