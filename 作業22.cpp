#include<stdio.h>

struct Sertivor{
    char id[20];//identify
    char name[20];//use_name
    unsigned int  wage;//���~
    unsigned int  work_hours;//�u�@�ɼ�
    unsigned int  pay;//�~��

};
int salc(struct Sertivor *);  //�p���~�� 
void show(struct Sertivor *); //�C�X���G 
int main(void){

    int number;
    int i;

    struct Sertivor sertivor[4]; 

    printf("���X��uŪ��?:");
    scanf("%d", &number);

    for(i=0;i<number;++i){
        printf("�o�O��%d�����\n\n", i+1);
        printf("�п�J���u�s��:");
        scanf("%s", sertivor[i].id);
        printf("�п�J���u�m�W:");
        scanf("%s", sertivor[i].name);
        printf("�п�J���u���~: ");
        scanf("%d", &sertivor[i].wage);
        printf("�п�J�u�@�ɼ�:");
        scanf("%d", &sertivor[i].work_hours);

        salc(&sertivor[i]);
    }
    for(i=0;i<number;++i){
    	show(&sertivor[i]);
	}
	
	return 0;

}
int salc(struct Sertivor *ser){ 

    (ser->pay)=(ser->wage)*(ser->work_hours);

    return ser->pay;
}
void show(struct Sertivor *show){ 

    printf("\n\n%s�����---------\n",show->name);
    printf("ID:%s\n",show->id);
    printf("NAME:%s\n",show->name);
    printf("WAGE:%d\n",show->wage);
    printf("WORK_HOURS:%d\n",show->work_hours);
    printf("PAY:%d\n",show->pay);
    printf("-------------\n");
}
