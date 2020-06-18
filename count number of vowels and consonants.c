#include<stdio.h>
int main()
{
      int i,vowels,consonants;
      char str[100];
      i=0,vowels=0,consonants=0;
      printf("enter the string:\n");
      scanf("%s",&str[i]);
      while(str[i]!='\0')
      {
            if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
            {
                  vowels++;
            }
            else
            {
                  consonants++;
            }
            i++;
      }
      printf("number of vowels is %d\n",vowels);
      printf("number of consonants is %d\n",consonants);
      return 0;
}