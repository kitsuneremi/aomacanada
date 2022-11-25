#include <iostream>
#include <stdio.h>
#include <string>
void test();

int Check() {
    int chieu_cao_hien_co, can_nang_hien_co,chieu_cao_tieu_chuan, can_nang_tieu_chuan;

    printf("nhap vao chieu cao hien tai\n");
    scanf("%d",&chieu_cao_hien_co);
    printf("nhap vao can nang hien tai\n");
    scanf("%d",&can_nang_hien_co);
    printf("nhap vao chieu cao tieu chuan\n");
    scanf("%d",&chieu_cao_tieu_chuan);
    printf("nhap vao can nang tieu chuan\n");
    scanf("%d",&can_nang_tieu_chuan);

    if(chieu_cao_hien_co < chieu_cao_tieu_chuan || can_nang_hien_co > can_nang_tieu_chuan){
        printf("rat tiec\n");
        return 0;
    }else{
        printf("ok \n");
        return 1;
    }
}

int Say() {
    int value;
    printf("thanh cong-0 hay that bai-1\n");
    scanf("%d",&value);
    return value;
}

void Break() {
    printf("hahahahahhahahahah\n");
}

void Love() {
    printf("chuc mung chuc mung\n");
}

// bài 1
int main() {
    int check = Check();
    int say = 0;
    if(check == 1){
        say = Say();
    }
    if(say == 0){
        Love();
    }else if(say == 1){
        Break();
    }
}









