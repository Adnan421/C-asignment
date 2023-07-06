//Name  Adnan Hashim.
//Father's Name  Muhammad Hashim.
//Roll Number  BS CS 2022 8. 
#include<stdio.h>
int isPrime(int n); //Declaration of prime function.
int main(){
    int n,i=1;
    int flag=1;
    int number;
    while(i){
        printf("Please enter a positive  integer between 2 and 100\n");
        scanf("%d",&n);
        if((n>2)&&(n<100)){
           number=isPrime(n);  //Calling a prime fuction  to store a return value. 
           if(number==1){
              printf("%d is prime\n",n);
           }
           else{
              printf("%d is not prime\n",n);
           }
           break; //Applied break to throw out of the loop
        }
        else{
            printf("Number is out of range press 1 to try again\n");
            scanf("%d",&i);
            if(i==0){
                i=(!i);
            }
               
        }

    }


    return 0;
}
//Defination of prime function.
int isPrime(int n){
     int i;
     for(i=2;i<n;i++){
        if((n%i)==0){
            return 0;
        }
     }
     return 1;
    
}