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
        printf_str_function();
        char statement[1000]="Hi! My name is Debasish Ray. I am currently studying in SRM University, Chennai";
        printf("%s".statement);

    }

    else if (x==4){
        atoi_str_function();
        char n[20]="45";
        int num=atoi(n);
        printf("%s\n",n);     //number have string value.So %s is used.         
        printf("%d",num);     //num have integer value.So %d is used.

    }

    else if (x==5){
        strlen_str_function();
        char na[1000]="Debasish Ray";
        str_length=strlen(na);
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
        sprintf_str_function()
        char data_string;
        char friend_name[200]="Parthajeet Sharma";
        int age;
        printf("Enter the age of %s:\t",friend_name);
        scanf("%d",&age);

        sprintf(data_string,"My friend's name is %s, His age is %d",friend_name,age);
        puts(data_string);

    }

    else if (x==9){
        sscanf_str_function();
        char name[30]="Debasish Ray";
        char car[20];
        int age;
        sscanf(name,"%s%d",name,&age);
        printf("Car: %s\nAge:%d\n",name,age);
    }

    else if (x==10){
        strrev_str_function();
        char my_name[30]="Debasish Ray";
        printf("the given user string is: %s",my_name);
        printf("The input reversed string is: %s",strrev(my_name));

    }

    else if (x==11){
        strcpy_str_function();
        char name11[30]="Vineet Ray";
        char name22[20]="Debasish Ray";
        strcpy(name11,name22);
        printf("%s",name11);
    }

    else if (x==12){
        strstr_str_function();
        char introduction[1000]="Hello! My name is Debasish Ray. I am a college student of SRM, Chennai, Kattankulathur. Basically , i am currently pursuing my B.Tech degree in Computer Science and Engineering.";
        char *name;
        name=strstr(introduction,"Debasish Ray");     // After finding the string, The whole string after the found string will get printed in result.
        printf("%s",name);
    }

    else if (x==13){
        strtok_str_function();
        char tokenization[10000]="The essay comes in many shapes and sizes; it can focus on a personal experience or a purely academic exploration of a topic.  Essays are classified as a subjective writing form because while they include expository elements, they can rely on personal narratives to support the writer’s viewpoint.  The essay genre includes a diverse array of academic writings ranging from literary criticism to meditations on the natural world.  Most typically, the essay exists as a shorter writing form; essays are rarely the length of a novel.  However, several historic examples, such as John Locke’s seminal work “An Essay Concerning Human Understanding” just shows that a well-organized essay can be as long as a novel.";
        const char symbol[2]=".";
        char *token;
    
        token=strtok(tokenization,symbol);    
    
        while(token!=NULL){
            printf("%s\n",token);
            token=strtok(NULL,symbol);
        }
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
    printf("It returns the integer value, the length of the string.");
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

void sscanf_str_function(){
    printf("in sscanf function, it is used to read the formatted input from the buffer/string.\n");
}

void strrev_str_function(){
    printf("In strrev string function, it reverses the string in c language.\n This string in basically not present in standard C library and basically a non-standard function.\n");
}

void strcpy_str_function(){
    printf("In strcpy string function, it cpoies the second  string into the first string as parameters.\n The original content of the data in first string gets deleted and the data of the second string get saved in the first string\n");
}
