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
    printf("Hanoi Towers\n");

    Hanoi(3, 'A', 'B', 'C');


    return 0;
}