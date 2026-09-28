#include<stdio.h> //We use this to include the input, output libraries that contain printf() and scanf() functions

int main(){//This is the main function where the programs begin execution
double a,b,answer;//Declare three variables a , b and answer in double type
char symbol;//Declare a character variable called symbol
printf("Please enter the symbol any of the symbols +, -, / ,* to use for your calculation: ");
scanf("%c",&symbol);//scanf() is used to receive input from the user
//Ukifika hapa unishow I explain kama uko interested ju I feel comments wont be enough
switch(symbol){
case '+':
    printf("Enter the two values for your calculation: ");
    scanf("%lf %lf",&a ,&b);
    answer = a + b;
    break;

case '-':
    printf("Enter the two values for your calculation: ");
    scanf("%lf %lf",&a ,&b);
    answer = a - b;
    break;

case '/':
    printf("Enter the two values for your calculation: ");
    scanf("%lf %lf",&a ,&b);
    answer = a/b;
    break;

case '*':
    printf("Enter the two values for your calculation: ");
    scanf("%lf %lf",&a ,&b);
    answer= a*b;
    break;

default:
    printf("Invalid Symbol.Please try again");
}
printf("Answer=%.2lf",answer);
return 0;
}
