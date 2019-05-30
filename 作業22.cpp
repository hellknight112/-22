#include<stdio.h>

struct Sertivor{
    char id[20];//identify
    char name[20];//use_name
    unsigned int  wage;//時薪
    unsigned int  work_hours;//工作時數
    unsigned int  pay;//薪水

};
int salc(struct Sertivor *);  //計算薪資 
void show(struct Sertivor *); //列出結果 
int main(void){

    int number;
    int i;

    struct Sertivor sertivor[4]; 

    printf("有幾位工讀生?:");
    scanf("%d", &number);

    for(i=0;i<number;++i){
        printf("這是第%d筆資料\n\n", i+1);
        printf("請輸入員工編號:");
        scanf("%s", sertivor[i].id);
        printf("請輸入員工姓名:");
        scanf("%s", sertivor[i].name);
        printf("請輸入員工時薪: ");
        scanf("%d", &sertivor[i].wage);
        printf("請輸入工作時數:");
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

    printf("\n\n%s的資料---------\n",show->name);
    printf("ID:%s\n",show->id);
    printf("NAME:%s\n",show->name);
    printf("WAGE:%d\n",show->wage);
    printf("WORK_HOURS:%d\n",show->work_hours);
    printf("PAY:%d\n",show->pay);
    printf("-------------\n");
}
