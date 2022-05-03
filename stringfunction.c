

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void gets_str_function();
void puts_str_function();
void getchar_str_function();
void putchar_str_function();
void printf_str_function();
void atoi_str_function();
void strlen_str_function();
void strcat_str_function();
void strcmp_str_function();
void sprintf_str_function();
void sscanf_str_function();
void strrev_str_function();
void strcpy_str_function();
void strstr_str_function();
void strtok_str_function();

int main(){
    int x;
    printf("[1]=gets() and puts() usage\n[2]=getchar() and putchar() usage\n[3]=printf() usage\n[4]=atoi() usage\n[5]=strlen() usage\n[6]=strcat() usage\n[7]=strcmp() usage\n[8]=sprintf() usage\n[9]=sscanf() usage\n[10]=strrev() usage \n[11]=strcpy() usage\n[12]=strstr() usage\n[13]=strtok() usage\n");
    printf("Enter the number:");
    scanf("%d",&x);
    
    if (x==1){
        gets_str_function();
        puts_str_function();
        char str1[200];
        printf("Enter the string:\n");
        gets(str1);        //gets() usage.
        puts(str1);        //puts() usage.
    }
    
    else if (x==2){
        getchar_str_function();
        putchar_str_function();
        char str2;
        str2=getchar();
        putchar(str2);
    }
    
    else if (x==3){
        
    }
    
    else if (x==4){
        
    }
    
    else if (x==5){
        
    }
    
    else if (x==6){
        
    }
    
    else if (x==7){
        
    }
    
    else if (x==8){
        
    }
    
    else if (x==9){
        
    }
    
    else if (x==9){
        
    }
    
    else if (x==10){
        
    }
    
    else if (x==11){
        
    }
    
    else if (x==12){
        
    }
    
    else if (x==13){
        
    }
    
    else{
        printf("You have not selected from the given numbers.\nPlease enter the correct number.");
    }
    
    return 0;
}

void gets_str_function(){
    printf("In gets function,the string function takes the string or character as input instead of using the scanf() function.\n");
}

void puts_str_function(){
    printf("In puts function, the string function gives the output as string or character when taken input from the user , instead of using printf() function.\n");
}

void getchar_str_function(){
    printf("In getchar function, the function takes the input from the user only the character which in 1 byte.\n");
}

void putchar_str_function(){
    printf("In putchar function, the function prints the output which is character only specified by the user.\n");
}

void printf_str_function(){
    printf("printf() function used to take the input from the user according to format specifier specified by user.\n);
}

void atoi_str_function(){
    printf("atoi() function is used to convert the string numbers into integer value.\n")
    printf("Not the american-code form.\n");
}

void strlen_str_function(){
    printf("strlen() function is used to ");
}


