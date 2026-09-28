#include<stdio.h> //We use this to include the input, output libraries that contain printf() and scanf() functions

int main(){//This is the main function where the programs begin execution
double a,b,answer;//Declare three variables a , b and answer if integer type
char symbol;//Declare a character variable called symbol
printf("Please enter the symbol any of the symbols +, -, / ,* to use for your calculation: ");
scanf("%c",&symbol);//scanf() is used to receive input from the user
/*We use conditional statements in the next lines like if statements and else if statements
which enables the computer to make logical decisions based on the input received from the user*/
if(symbol == '+'){
    printf("Enter the two values for your calculation: ");
    scanf("%lf %lf",&a ,&b);
    answer = a + b;

}
else if(symbol == '-'){
    printf("Enter the two values for your calculation: ");
    scanf("%lf %lf",&a ,&b);
    answer = a - b;

}
else if(symbol == '/'){
    printf("Enter the two values for your calculation: ");
    scanf("%lf %lf",&a ,&b);
    answer = a/b;

}
else{
    printf("Enter the two values for your calculation: ");
    scanf("%lf %lf",&a ,&b);
    answer= a*b;

}
printf("Answer=%.2lf",answer);//The %.2lf means the answer returned by the program will be written to 2 decimal places
return 0;//It indicates a success of the program and returns control to the OS
}
