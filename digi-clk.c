#include "digi-clk.h"

void loop(){
    int n;
    printf("1. Timer \n2. Stop watch\n3. Exit \n");
    printf("Enter option: "); scanf("%d", &n);
    switch (n)
    {
    case 1:
        timer();
        loop();
        break;
    case 2:
        stop_watch();
        break;
    case 3:
        printf("Bye bye!!!");
        Sleep(1200);
        exit(0);
    }
}

int main(void){
    system("cls");
    loop();
}