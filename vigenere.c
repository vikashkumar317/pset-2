#include<cs50.h>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>

int getK(int letterCipher, string k);

int main(int argc, string argv[])

{
     if (argc != 2)
    {
        printf("Invalid\n");
        return 1;
    }
    string k =argv[1];
    
     for (int i=0,length=strlen(k); i<length;i++)
     {
         if (!isalpha(k[i]))
         {
             printf ("Invalid\n");
             return 1;
         }
     }
     
     printf ("plaintext: ");
     string s= GetString();
    printf ("ciphertext: ");
     
     int letterCipher = 0;
     
     for (int i=0,length =strlen(s); i< length; i++)
     {
         char c=s[i];
         
         if (isupper(c))
         {
             char newC =(((c-65)+ getK (letterCipher,k)) %26 ) +65;
             printf ("%c", newC);
             letterCipher++;
         }
         
         else if (islower(c))
         {
             char newC =(((c-97)+ getK(letterCipher,k))%26) +97;
             printf ("%c", newC);
             letterCipher++;
         }
         else 
         {
             printf("%c",c);
         }
     }
   printf ("\n");
     
     return 0;
}

int getK(int letterCipher, string k)
{
    int length= strlen(k);
    return tolower(k[letterCipher % length]) -97;
}

     