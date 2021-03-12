#include<stdio.h>
#define data_num 10

void select_sort();
int main(void){

    int data[data_num];
        for(int i=0;i<data_num;i++)
            scanf("%d", &data[i]);
    select_sort(data,data_num);

}

void select_sort(int a[],int b ){

    int i=0;//要調整的位置
    int k;//指標位置
    int x;//更換的位置
    int key,temp;
        for(i;i<b;i++){
            k=i;
            key=a[k];
            x=k;
            for(k;k<b-1;k++){
               if(a[k+1]<key){
                    key=a[k+1];
                    x=k+1;
               }
            }
            a[x]=a[i];
            a[i]=key;
        }
        for(int i=0;i<b;i++)
            printf("%d ",a[i]);
}