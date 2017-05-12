#include <cs50.h>
#include <stdio.h>

int main()
{ 
    
     int i=1;
     string s=get_string();
     
     if (s[0]>=65&&s[0]<=90)
     printf ("%c",s[0]);
     
     if (s[0]>=90&&s[0]<=122)
     printf ("%c",s[0]-32);
     
     while (s[i]!='\0')
     {
          
         if (s[i]==32)
         {
              
              if (s[i+1]>=65&&s[i+1]<=90)
         printf ("%c",s[i+1]);
         
         else if (s[i+1]>=97&&s[i+1]<=122)
         printf ("%c",s[i+1]-32);
         
         }
         
         else
         ;
         
         i++;
     }
     
     printf ("\n");
     
}