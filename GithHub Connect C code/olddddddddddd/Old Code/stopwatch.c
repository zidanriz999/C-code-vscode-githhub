#include <stdio.h>
#define CYCLE 60

#ifdef _WIN32
#include <conio.h>
#include <windows.h>
#define sleep(x) Sleep(x*1000)
void clrscr() {
    system("cls");
}
#else
#include <unistd.h>
#define clrscr() printf("\e[1;1H\e[2J")
#endif

int main() {
    int hour, minute, second;
    printf("Plz Enter Hour : Minute : Second: ");
    scanf("%d%d%d", &hour, &minute, &second);
    clrscr();
    
    int h = 0, m = 0, s = 0;
    while (1) {
        printf("\n\n####### WELCOME TO MY STOP WATCH By ZIDAN ########\n\n\n");
        printf("         %.2d:%.2d:%.2d\n", h, m, s);
        printf("\n\n###########################\n\n\n");
        if (h == hour && m == minute && s == second) {
            break;
        }
        sleep(1);
        clrscr();
        
        s++;
        if (s == CYCLE) {
            m++;
            s = 0;
        }
        if (m == CYCLE) {
            h++;
            m = 0;
        }
    }

 return 0;
}
