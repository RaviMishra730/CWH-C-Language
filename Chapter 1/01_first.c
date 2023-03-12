// #include<stdio.h>
// /*
// This is our first c program
// which is awesome!
// */
// int main(){
//     int tom;
//     int Tom;
//     // Declaring variables to store error codes
//     int error_code;
//     // 'J' --> a character
//     printf("Hello I am learning C with Harry");
//     return 0;
// }


#include <stdio.h>

int main(){

    int N;

    printf("Enter the value of N");
    printf("\n");

    scanf("%d",&N);

    while(N < 100000){
        printf("Executing the While Loop !");
        printf("\n");
        N *= 100;
    }

    printf("Exited the Loop!\n");
}

