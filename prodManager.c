#include <stdio.h>
#include "prodManager.h"


//��ǰ�� �߰��Ѵ�



int updateproduct(product *p){
    int decision=0;
    printf("�̸� ����: ");
    printf("�����Ͻ÷��� 1���� �����ּ���");
    getchar();
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
        printf("8. ���� ���� ���\n");
        printf("0. ����\n");
        printf("========================\n\n");
        scanf("%d",&menu);
        printf("\n");
       return menu;
}
//��ǰ�� �߰��Ѵ� 
int createproduct(product *p){

  printf("\n��ǰ��: ");
  getchar();
  gets(p->name);
  printf("��ǰ ����: ");
  gets(p->info);
  printf("��ǰ ����: ");
  scanf("%d",&p->price);
  printf("��ǰ ����: ");
  scanf("%d",&p->remain);
  p->totalSales = 0;
  printf("\n�߰� �Ϸ�!\n\n");
  return 0;
}

//�Ѱ����� ���δ�Ʈ ������ ����Ѵ� (�ڼ���).
/* ����:

��ǰ��: �̴� ũ�οͻ�
200��
10�� ����

��ǰ ����: ũ�οͻ󺸴� ���� ũ�οͻ�

*/
int readproduct(product p){

    if (p.name[0] == '\0' || p.price < 0 || p.remain < 1) {
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
    printf("\n***********************************\n\n");
    for (int i = 0; i < count; i++)
    {
        if (p[i].name[0] == '\0' || p[i].price < 0 || p[i].remain<1) continue;//check for empty
       
        printf("��ǰ��: %s\n ����:%d\t ���:%d\n",p[i].name,p[i].price,p[i].remain);
    }
    printf("\n***********************************\n\n");
    
}

void addcart(product*p, int *cart[], int count){
  listproduct(p,count);
  int num;
  do{
  printf("�߰��� ��ǰ�� ��ȣ�� �Է��Ͻÿ�: ");
  scanf("%d",&num);
  }while(num>count||num<0);
  cart[0] = num;
  do{
  printf("��� �����ðڽ��ϱ�?: ");
  scanf("%d",&num);
  } while((num<p[num].remain));

 }


int main(){
    product p[10];
    int temp; //selectmenu�� ����
    int result;
    int count=0;
    int choice;
    while(1){
        temp=selectMenu();
        if(temp==0) break;
        if(temp==1){//�߰�
            result=createproduct(&p[count]);
                if(result==0){
                    printf("�����");
                    count++;
                }
            }
        else if(temp==2){//���
            if(count==0){
                printf("������ ����");
                continue;;
            }
            listproduct(p,count);
            if(result==0){
                printf("������ ���\n");
            }
        }
        else if(temp==3){//������Ʈ
            if(count==0){
                printf("������ ����");
                continue;;
            }
            printf("�� �� ������");
            scanf("%d",&choice);
            result=updateproduct(&p[choice]);
            if(result==1) printf("�����!");
        }
        else if(temp==4){//����
            if(count==0){
                printf("������ ����");
                continue;;
            }
            printf("�� �� ������");
            scanf("%d",&choice);
            result=deleteProduct(&p[choice]);
            if(result==1) printf("������!");
        }
        else if(temp==7){//���� ����
            if(count==0){
                printf("������ ����");
                continue;
            }
            result=printRemain(p,count);
        }
    }
    return 0;
}

