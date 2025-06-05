#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int random2();
int random3();
void main(){
    int secim, comp;
    int pc[2]={1,0};
    int player[2]={1,0};
    srand(time(NULL));
    while(1){
        printf("Bilgisayar Mermi:%d SKOR:%d----Oyuncu Mermi:%d SKOR:%d\n",pc[0],pc[1],player[0],player[1]);
        printf("mermi=1 silah=2 kalkan=3 cikis=0\n");
        scanf("%d",&secim);
        if(secim==0) break;
        if(secim==1) player[0]++;
        if(secim==2) player[0]--;
        if(pc[0]==0){
            if(player[0]==0) pc[0]++;
            else{int x=random2();
            if(x==1){ pc[0]++; comp=x;}
            if(x==2) comp=x+1;


            }}

        else{int x=random3();
        if(x==1) pc[0]++;
        else if(x==2) pc[0]--;
        comp=x;



        }

        if(secim==2 && comp!=3){player[1]++;pc[0]=0;player[0]=0;}
        if(comp==2 && secim!=3){pc[1]++;pc[0]=0;player[0]=0;}
        }
        }


int random2(){
    int x=rand()%2+1;
    return x;
    }
int random3(){
    int x=rand()%3+1;
    return x;
    }
