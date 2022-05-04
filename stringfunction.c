

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
        strlen_str_function();
        char name[1000]="Debasish Ray";
        str_length=strlen(name);
        printf("%d",str_length);
        
    }
    
    else if (x==6){
        strcat_str_function();
        char str_1[200]="Hi, My name is:";
        char str_2[200]="Debasish Ray";
        strcat(str_1,str_2);
        puts(str_1);
        
    }
    
    else if (x==7){
        strcmp_str_function();
        char a_1[100]="DEBASISH";
        char a_2[100]="debasish";
        int comp_length=strcmp(a_1,a_2);
        
        if (comp_length==0){
            printf("Both the strings ASCII value is equal.");
        }
        
        else if (comp_length>0){
            printf("The first string is greater in ASCII value as compared to the second string and hence returns the +ve value.");
        }
        
        else if (comp_length<0){
            printf("The second string is greater in ASCII value as compared to the first string and hence returns the -ve value.");
        }
        
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
    printf("printf function used to take the input from the user according to format specifier specified by user.\n);
}

void atoi_str_function(){
    printf("atoi function is used to convert the string numbers into integer value.\n")
    printf("Not the american-code form.\n");
}

void strlen_str_function(){
    printf("strlen function is used to count the number of character including the spaces and whitespaces.\n");
    printf("It return the integer value, the length of the string.");
}

void strcat_str_function(){
    printf("In strcat string function, the second string get append at the first string.\n The two strings gets joined and gets saved into the first string.\n");
}

void strcmp_str_function(){
    printf("In strcmp string function,the function takes two string as parameters and returns the integer value.\n It requires to initialize empty variable where it returns the (+ve) value where the first string is greater in ASCII character to the second string.\n(-ve) when the second string is greater in ASCII value as compared to the first string.\n (0) value when the first string ASCII value is equal to the ASCII value of the second string.");
}

void sprintf_str_function(){
    printf("In sprintf string function, the function sends the formatted output to the string blank declared.\n For this, we need to assign blank character array in which the output can be saved as string format whatever the output is.\n ");
}

  
           
           


