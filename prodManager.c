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
    gets(p->name);
	printf("��ǰ ����: ");
    gets(p->info);
	printf("��ǰ ����: ");
	scanf("%d",p->price);
	printf("��ǰ ����: ");
	scanf("%d",&p->remain);
    p->totalSales = 0;
	printf("\n�߰� �Ϸ�!\n\n");
    return 0;
}

//�Ѱ����� ���δ�Ʈ ������ ����Ѵ� (�ڼ���).
/* ����:
***********************************
��ǰ��: �̴� ũ�οͻ�
200��
10�� ����

��ǰ ����: ũ�οͻ󺸴� ���� ũ�οͻ�
***********************************
*/
int readproduct(product p){

    if (p.name[0] == '\0' || p.price < 0) {
    printf("������ üǰ�Դϴ�!");
    return 0;
    } //check for empty
    printf("\n***********************************\n");
    printf("��ǰ��: %s\n%d��\n",p.name,p.price);
    printf("%d�� ���� \n",p.remain);
    printf("\n��ǰ ����: %s",p.info);
	printf("\n***********************************\n\n");
	return 0;
}

//��� ���δ�Ʈ�� ������ ����Ѵ�(�����ϰ�).
void listproduct(product p[],int count){

}


int main(){
    return 0;
}
