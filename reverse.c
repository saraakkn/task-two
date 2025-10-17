#include <stdio.h>
#include <string.h>
int main()
{
  char s[199]; int i,len=0;
  printf("Enter a word:\n");
  scanf("%s",s);
  while(s[len] != '\0'){
    len++;
  }
  printf("Reversed word:\n");
  for(i=len-1;i>=0;i--){
    printf("%c",s[i]);
  }
  printf("\n");
  return 0;
}

