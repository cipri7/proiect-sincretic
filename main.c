#include<stdio.h>
#include<stdlib.h>

void Hanoi(int n, char source, char aux, char destination){
    if(n == 1){
        printf("Move disk 1 from %c to %c \n", source, destination);
        return;
    }

    Hanoi(n-1, source, destination, aux);
    printf("Move disk %d from %c to %c \n", n, source, destination);
    Hanoi(n-1, aux, source, destination);
}

int main(){
    int n;
    printf("\nHanoi Towers\nSet number of disks: ");

    do{
        scanf("%d", &n);
    }while(!(n>0 && n<8));
    
    printf("\n");

    Hanoi(n, 'A', 'B', 'C');


    return 0;
}