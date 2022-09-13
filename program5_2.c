#include<stdio.h>
int main() {
    char str[100],*p;
    int voWel[5] = {0,0,0,0,0};
    scanf("%s",str);
    p = str;
    while(*p != '\0'){
        if(*p == 'a' || *p == 'A'){
            voWel[0] += 1;
        }
        if(*p == 'e' || *p == 'E'){
            voWel[1] += 1;
        }
        if(*p == 'i' || *p == 'I'){
            voWel[2] += 1;
        }
        if(*p == 'o' || *p == 'O'){
            voWel[3] += 1;
        }
        if(*p == 'u' || *p == 'U'){
            voWel[4] += 1;
        }
        p++;
    }
    if(voWel[0] != 0){
        printf("a = %d\n",voWel[0]);
    }
    if(voWel[1] != 0){
        printf("e = %d\n",voWel[1]);
    }
    if(voWel[2] != 0){
        printf("i = %d\n",voWel[2]);
    }
    if(voWel[3] != 0){
        printf("o = %d\n",voWel[3]);
    }
    if(voWel[4] != 0){
        printf("u = %d\n",voWel[4]);
    }
}