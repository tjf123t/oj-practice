#include<stdio.h>
#include<string.h>
#define N 55

int main(void){
    char ch[N];
    fgets(ch,N,stdin);
    ch[strcspn(ch,"\n")] = '\0';
    int len = strlen(ch);
    for(int i=0;i<len;i++){
        if(ch[i]>='a' && ch[i]<='z'){
            if(ch[i]=='x') ch[i]='a';
            else if(ch[i]=='y') ch[i]='b';
            else if(ch[i]=='z') ch[i]='c';
            else ch[i] = ch[i]+3;
        }
        else
            if(ch[i]>='A' && ch[i]<='Z'){
                if(ch[i]=='X') ch[i]='A';
                else if(ch[i]=='Y') ch[i]='B';
                else if(ch[i]=='Z') ch[i]='C';
                else ch[i] = ch[i]+3;
        }
    }
    char temp;
    for(int i=0;i<len/2;i++){
        temp = ch[i];
        ch[i] = ch[len-i-1];
        ch[len-i-1] = temp;
    }
    for(int i=0;i<len;i++){
        if(ch[i]>='A' && ch[i]<='Z')
            ch[i]= ch[i] -'A'+'a';
        else
            if(ch[i]>='a' && ch[i]<='z')
                ch[i]= ch[i] -'a'+'A';
    }
    puts(ch);
    return 0;
}
