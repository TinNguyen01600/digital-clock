#include "digi-clk.h"

void timer(){
    int h,m,s;
    char ch;
    printf("Set time (h/m/s): \n");
    scanf("%d%d%d", &h, &m, &s);
    if(m>60 || s>60){
        printf("ERROR !\n");
        exit(0);
    }
    
    int state = 1;
    while (1){
        if(kbhit()){
            ch = getch();
            if((int)ch == 49) {state = state * -1;}
            if((int)ch == 50) {state = abs(state) - 1;}
        }
        if (state == 0){
            system("cls");  //clear screen
            break;
        }
        if (state == 1){
            system("cls");
            s--;
            if (s<0) {m--; s=59;}
            if (m<0) {h--; m=59;}
            if ((h < 0) || (m < 0) || (s < 0)) {break;}
            printf("\n Timer: %02d:%02d:%02d", h,m,s);
            printf("\n 1-Pause/Continue \n 2-Exit timer \n");
            Sleep(1000);
        }
    }
}