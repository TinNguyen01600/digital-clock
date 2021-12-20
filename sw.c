#include "digi-clk.h"

void stop_watch(){
    int state = -1;
    int h = 0, m = 0, s = 0;
    char ch;
    printf(" Stop watch: %02d:%02d:%02d", h,m,s);
    printf("\n 1-Start/Pause \n 2-Reset \n 3-Exit stop watch \n");
    while (1){
        
        if(kbhit()){
            ch = getch();
            if((int)ch == 49) {state = state * -1;}                 //press 1
            if((int)ch == 50) {state = 2;}                          //press 2
            if((int)ch == 51) {state = 3;}                          //press 3
        }
        if (state == 3){
            system("cls");
            loop();
            break;
        }
        if (state == 2){
            system("cls");
            stop_watch();
        }
        if (state == 1){ 
            system("cls");   
            s++;
            if (s > 59) {m++; s = 0;}
            if (m > 59) {h++; m = 0;}
            if (h>12) {h = 1;}
            system("cls");
            printf(" Stop watch: %02d:%02d:%02d", h,m,s);
            printf("\n 1-Start/Pause \n 2-Reset \n 3-Exit stop watch \n");
            Sleep(1000);
        }
    }
}