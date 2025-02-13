#include <stdio.h>
int main(){
    int num, reverse = 0, rem, temp = 0;
    
    // Asking for Input
    printf("Enter an Integer: ");
    scanf("%d", &num);
    
    // reversed integer is stored in temp
    temp = num;
    while (temp != 0){
        rem = temp % 10;
        reverse = reverse * 10 + rem;
        temp = temp / 10;
    }
    if (reverse == num){
        printf("%d is a Palindrome.", num);
    }
    else{
        printf("%d is not a Palindrome.", num);
        return 0;
    }
}
