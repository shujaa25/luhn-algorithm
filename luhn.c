#include<stdio.h>

int main(){
    int length;
    printf("Please enter the length of credit/debit card number: ");
    scanf("%d", &length);

    if(length < 13){
        printf("Invalid card length\n");
        return -1;
    }

    char cc_num[length];
    printf("Enter number: ");
    scanf("%s", &cc_num);

    int sum = 0;
    for(int i=0;i<length;i++){
        if(i%2 == 0){
            sum += cc_num[length-1-i]-48;
        }else{
            int x = (cc_num[length-1-i]-48)*2;
            if(x>9){
                sum+=x%10;
                x/=10;
                sum+=x;
            }else{
                sum+=x;
            }
        }
    }
    
    if(sum%10==0) printf("valid\n");
    else printf("invalid\n");
    return 0;
}