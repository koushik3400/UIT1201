#include <stdio.h>
#include <string.h>
int main(){
  char s[60], w[20], t[60];
  printf("Enter a sentence: ");
  scanf("%[^\n]s",s);
  getchar();
  printf("Enter a sub-string to remove: ");
  scanf("%[^\n]s",w);
  char *r=strstr(s,w);
  if(r!=NULL)
  {
    *r='\0';
    r += strlen(w);
    strncpy(t,r,60);
    strncat(s,t,60);
    printf("Without the sub-string: \"%s\"\n",s);
  }
  else
  {
    printf("\"%s\" not found in \"%s\"..\n",w,s);
  }
  return(0);
}