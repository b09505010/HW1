#include<stdio.h>
#define data_num 10

void insertion_sort();
int main(void){

      int data[data_num];
        for(int i=0;i<data_num;i++)
            scanf("%d", &data[i]);
    insertion_sort(data,data_num);

}

void insertion_sort(int a[],int b){

    int i=1;//已排好的個數
    int k;//指標位置
    int key;//需交換的數字
    int x;//需交換的數字的位置
        for(i;i<b;i++){
            k=i;
            key=a[i];
            for(k;k>0;k--){
                if(key>a[k-1]){
                    x=k-1;
                    break;
                }else{
                    x=0;
                }
            }
            for(int y=i;y>x;y--){
               a[y]=a[y-1];
            } 
            a[x]=key;
        }
        for(int i=0;i<b;i++)
            printf("%d ",a[i]);
}