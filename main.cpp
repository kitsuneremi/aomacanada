#include <iostream>
#include <stdio.h>
// bài 1
int main (){
    int n;
    printf ("nhap so nguyen : ");scanf("%d",&n);
    if (n<0){
        if(n%2==0){
            printf ("\nsố vừa nhập là số chẵn");
            printf ("\nsố vừa nhập là số nguyên âm");
        }else{
            printf ("\nsố vừa nhập là số lẻ");
            printf ("\nsố vừa nhập là số nguyên âm");
        }
    }else{
        if(n%2==0){
            printf ("\nsố vừa nhập là số chẵn");
            printf ("\nsố vừa nhập là số nguyên dương");
        }else{
            printf ("\nsố vừa nhập là số lẻ");
            printf ("\nsố vừa nhâp là số nguyên dương");
        }
    }
}

// bài 2
void bai2 (){
    float a,b;
    printf("Nhap vao so a:");scanf("%f", &a);
    printf("Nhap vao so b:");scanf("%f", &b);
    if (a>b){
        printf ("a > b");
    }else if(a < b) {
        printf("a < b");
    }else if(a == b){
        printf("a = b");
    }
}


// bài 3
void bai3 (){
    float a,b,c,d;
    printf("Nhap vao so a:");scanf("%f", &a);
    printf("Nhap vao so b:");scanf("%f", &b);
    printf("Nhap vao so c:");scanf("%f", &c);
    printf("Nhap vao so d:");scanf("%f", &d);
    if (a>b,a>c,a>d){
        printf ("so lon nhat la %f",a);
    }else if(b>a,b>c,b>d){
        printf ("so lon nhat la %f",b);
    }else if(c>a,c>b,c>d){
        printf ("so lon nhat la %f",c);
    }else if (d>a,d>b,d>c){
        printf ("so lon nhat la %f",d);
    }
}
