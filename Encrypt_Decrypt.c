#include<stdio.h>
#include<string.h>


//Function to encrypt the given message
char encrypt(char message[] , int key)
{
    int i;
    char ch;

    for(i=0; message[i]!='\0';i++){
        ch=message[i];
        if((ch>='a') &&(ch<='z')){
            ch=ch+key;
            if(ch>'z')
                ch=ch-'z'+'a'-1;
            message[i]=ch;
        }

        else{
            if((ch>='A')&&(ch<='Z')){
                ch=ch+key;
                if(ch>'Z')
                    ch=ch-'Z'+'A'-1;
                message[i]=ch;
            }
        }
    }
    return message;

}


//Function to decrypt the given message

char decrypt(char message[],int key)
{
    int i;
    char ch;


    for(i=0;message[i]!='\0';i++){
        ch=message[i];
        if((ch>='a')&&(ch<='z')){
            ch=ch-key;
            if (ch<'a')
                ch=ch+'z'-'a'+1;
            message[i]=ch;
        }
        else{
            if((ch>='A')&&(ch<='Z')){
                ch=ch-key;
                if(ch<'A')
                    ch=ch+'Z'-'A'+1;
                message[i]=ch;
            }
        }
    }
    return message;
}


void main()
{
    char message[100];
    int key;


    printf("\nEnter a message to encrypt : ");
    fgets(message,sizeof(message),stdin);
    printf("\n Enter the key ( a integer value ) : ");
    scanf("%d",&key);

    encrypt(message,key);

    printf("Encrypted message : %s ",message);

    decrypt(message,key);
    printf("Decrypted message : %s ",messages);
}

