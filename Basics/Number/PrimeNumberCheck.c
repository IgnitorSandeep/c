#include<stdio.h>
#include<time.h>
int isPrimeNumber(int);

int main(void){

    int number;
    int result;
    clock_t t;

    printf("Enter the Numnber to be checked for prime:\n");

    scanf("%d",&number);

    t = clock();

    result = isPrimeNumber(number);

    t = clock() - t;

    double time_taken = ((double)t)/CLOCKS_PER_SEC;

    printf("isPrimeNumber() took %f seconds to execute \n", time_taken);

    if(result){
         printf("%d is a prime number.",number);
    }
    else {
         printf("%d is not a prime number.",number);
    }

    return 0;
}

int isPrimeNumber(int number){

    int i=2;

    while(i<number-1){
        if(number%i==0){
        return 0;
    }
    i++;
    }

    if(i==number){
    return 1;
    }

}
