#include <stdio.h>
#include "prodManager.h"




int updateproduct(product *p){
}

int printRemain(product *p,int count){
    for(int i=0;i<count;i++){
        if(p[i].price==-1) continue;
        printf("%s: %d�� ���ҽ��ϴ�.\n",p[i].name,p[i].remain);
    }
}


int main(){
    return 0;
}
