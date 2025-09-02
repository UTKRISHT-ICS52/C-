
// C Programming code 
#include<stdio.h>
int main(){
int a[5]= {2,3,4,5,6} ;
for(int i=0;i<5; i++){
printf(" a[%d]=%d\n", i, a[i]);
}
return 0;
}

#include <stdio.h>

int main() {
    float fahrenheit, celsius;
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);
    celsius = (fahrenheit - 32) * 5 / 9;
    printf("Temperature in Celsius: %.2f\n", celsius);
    return 0; 
}

#include <stdio.h>
#include <math.h> 
int main() {
    int number, isPrime = 1; 
    printf("Enter a positive integer: ");
    scanf("%d", &number);
    if (number <= 1) {
        isPrime = 0; 
    } else if (number == 2) {
        isPrime = 1; 
    } else if (number % 2 == 0) {
        isPrime = 0; 
    } else {
        
        for (int i = 3; i <= sqrt(number); i += 2) {
            if (number % i == 0) {
                isPrime = 0; 
                break;       
            }
        }
    }
    if (isPrime) {
        printf("%d is a prime number.\n", number);
    } else {
        printf("%d is not a prime number.\n", number);
    }

    return 0;
}  

#include <stdio.h>
int main() {
int n1 = 0, n2 = 1, nextTerm, i;
printf("Fibonacci Series from 1 to 10: \n");
for (i = 1; i <= 10; ++i) {
printf("%d ", n2);
nextTerm = n1 + n2;
n1 = n2;
n2 = nextTerm;
}
return 0;
}


#include <stdio.h>

long long factorial_iterative(int n) {
    long long result = 1;
    if (n < 0) {
        printf("Factorial of a negative number does not exist.\n");
        return -1; 
    } else if (n == 0) {
        return 1; 
    } else {
        for (int i = 1; i <= n; i++) {
            result *= i;
        }
        return result;
    }
}

int main() {
    int number;
    printf("Enter a non-negative integer: ");
    scanf("%d", &number);

    long long fact = factorial_iterative(number);
    if (fact != -1) { 
        printf("Factorial of %d is: %lld\n", number, fact);
    }
    return 0;
}



#include<stdio.h>
int main(){
int a;
printf("Write any day");
scanf("%d",&a);
switch(a){
case 1:
printf("Monday");
break;
case 2:
printf("Tuesday");
break;
case 3:
printf("Wednesday") ;
break;
case 4:
printf("Thursday");
break;
case 5:
printf("Friday");
break;
case 6:
printf("Saturday");
break;
case 7:
printf("Sunday");
break;
default:
printf("invalid input");
break;
}



