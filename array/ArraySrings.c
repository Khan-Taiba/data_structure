#include<stdio.h>
#include<string.h>

void string_function(char *str){
    int length = strlen(str);
    char str2[5];
    printf("The length of the string is = %d\n",length);
    strcpy(str2, str);
    printf("Copying the string to string2 gives = %s\n",str2);
}

int main(){
    char str[5];
    printf("Enter The string\n");
    gets(str);
    printf("The string is --> %s\n",str);
    string_function(str);
    return 0;

}