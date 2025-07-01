#include <stdio.h>
#include <string.h>

int main (){
    char string1[50];
    char string2[50];
    printf("Insira o primeiro nome:\n");
    scanf("%s", string1);
    printf("Insira o segundo nome:\n");
    scanf("%s", string2);
    
    int len1 = strlen(string1);
    int len2 = strlen(string2);
    int menorlen = 0;
    if (len1<len2){
        menorlen = len1;
    } 
    else{
        menorlen = len2;
    }
    printf("Em ordem alfabetica: \n");
    for (int i=0;i<menorlen;i++){
        if (string1[i]<string2[i]){
            printf("%s\n%s\n", string1,string2);
            break;
        }
        else if(string2[i]<string1[i]){
            printf("%s\n%s\n", string2,string1);
            break;
        }
    }
    
    return 0;
}
