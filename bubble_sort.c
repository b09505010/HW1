#include<stdio.h>
#define data_num 10

int buuble_sort();

int main(void){
    int data[data_num];
        for(int i=0;i<data_num;i++)
            scanf("%d", &data[i]);
    bubble_sort(data,data_num);  
}

int bubble_sort(int a[],int b){
    int k=1; //已排好資料數量
    int i; //目前指標位置 
    int temp;
        for(k;k<b;k++){
            i=k;
            for(i;i>0;i--){
                if(a[i]<a[i-1]){
                    temp=a[i];
                    a[i]=a[i-1];
                    a[i-1]=temp;  
                }
                else 
                    break;    
            }
        }
    for(int i=0;i<b;i++)
         printf("%d ", a[i]);
}