#include<stdio.h>
int main() {
    char str[100],*p;
    int voWel = 0;
    scanf("%s",str);
    p = &str[0];
    while(*p != '\0'){
        if(*p == 'a' || *p == 'A'){
            voWel += 1;
        }
        p++;
    }
    p = &str[0];
    printf("a = %d\n",voWel);
    voWel = 0;
    while(*p != '\0'){
        if(*p == 'e' || *p == 'E'){
            voWel += 1;
        }
        p++;
    }
    p = &str[0];
    printf("e = %d\n",voWel);
    voWel = 0;
    while(*p != '\0'){
        if(*p == 'i' || *p == 'I'){
            voWel += 1;
        }
        p++;
    }
    p = &str[0];
    printf("i = %d\n",voWel);
    voWel = 0;
    while(*p != '\0'){
        if(*p == 'o' || *p == 'O'){
            voWel += 1;
        }
        p++;
    }
    p = &str[0];
    printf("o = %d\n",voWel);
    voWel = 0;
    while(*p != '\0'){
        if(*p == 'u' || *p == 'U'){
            voWel += 1;
        }
        p++;
    }
    printf("u = %d\n",voWel);
}