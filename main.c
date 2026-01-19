#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int ekok(int sayi1,int sayi2){
    int kat,max;

    if(sayi1==0 || sayi2==0){
        return 0;
    }

    if(sayi1>sayi2){
        max=sayi1;
    }
    else{
        max=sayi2;
    }

    kat=max;

    for(;;){
        if(kat%sayi1==0 && kat%sayi2==0){
            return kat;
        }

        kat+=max;
    }


}

int main()
{
    printf("%d",ekok(7,4));
}
