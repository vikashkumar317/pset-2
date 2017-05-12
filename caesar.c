#include<cs50.h>
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

int main(int argc, string argv[])

{
    int i=0,n,l;
    
     if (argc != 2)
    {
        printf("Usage: \n");
        return 1;
    }
     int k = atoi(argv[1]);
     
    {
    printf ("plaintext:");
    string s=get_string();
    printf ("ciphertext:");
    while (s[i]!='\0')
    {
        
        if  (!((s[i]>=65&&s[i]<=90)||(s[i]>=97&&s[i]<=122)))
        {
            printf ("%c",s[i]);
        }
        
        l=k%26;
        n=s[i]+l;
        
        if ((n>=65&&n<=90)||(n>=97&&n<=122))
        printf ("%c",s[i]+l);
        
        else if ((n>=90&&n<=90+l)||(n>=122&&n<=122+l))
        {
        printf ("%c",s[i]-26+l);
        }
        
        
        i++;
    }
    }
    printf ("\n");
    return 0;
}