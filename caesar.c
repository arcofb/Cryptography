#include <string.h>
#include <stdio.h>
#include <stdlib.h>

char text[255];
char temp;
int kunci,i;
int hasil = 0;

void encrypt(){
    printf("\n===================================\n");
    printf("Plaintext  : ");
    scanf("%c",&temp);
    fgets(text, sizeof(text), stdin);
    printf("Kunci      : ");
    scanf("%d",&kunci);
    printf("Hasil      : ");
    for ( i = 0; i < strlen(text) ; i++)
    {
        hasil = text[i];
        if (text[i] == ' '){
            hasil = ' ';
        }else if(text[i] >= 'A' && text[i] <= 'Z'){
            hasil = (text[i] + kunci - 'A') + 'A';
        }else if(text[i] >= 'a' && text[i] <= 'z'){
            hasil = (text[i] + kunci - 'a') + 'a';
        }
        printf("%c", hasil);
    }
    printf("===================================\n");
}

void decrypt(){
    printf("\n===================================\n");
    printf("Chippertext  : ");
    scanf("%c",&temp);
    fgets(text, sizeof(text), stdin);
    printf("Kunci      : ");
    scanf("%d",&kunci);
    printf("Hasil      : ");
    for ( i = 0; i < strlen(text) ; i++)
    {
        hasil = text[i];
        if (text[i] == ' '){
            hasil = ' ';
        }else if(text[i] >= 'A' && text[i] <= 'Z'){
            hasil = (text[i] - kunci - 'A') + 'A';
        }else if(text[i] >= 'a' && text[i] <= 'z'){
            hasil = (text[i] - kunci - 'a') + 'a';
        }
        printf("%c", hasil);
    }
    printf("===================================\n");
}

int main(){
    int pilih;
    
    while(1){
        printf("Caesar Chipper - Arcofb\n");
        printf("1. Encrypt\n");
        printf("2. Decrypt\n");
        printf("3. Keluar\n");
        printf("Pilih   : ");
        scanf("%d", &pilih);
        switch (pilih)
        {
        case 1: encrypt();
                break;
        case 2: decrypt();
                break;
        case 3: printf("Terima Kasih :)\n");
                exit(0);
        default: printf("Pilih 1 sd 3\n");
        }
    }
    printf("\n");
    return 0;
}
