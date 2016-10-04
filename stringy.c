//Celine Yan Pd 5 9/28

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int mystrlen(char *s){
  int len = 0;
  while ( *s ){
    len++;
    s++;
  }
  return len;
}

char mystrcpy( char *dest, char *source){
  while (*source){
    *dest = *source;
    dest++;
    source++;
  }
  return dest;
}


int main(){
  char s1[10] = "Hello";
  char s2[] = "";
  char s3[15] = "this is l";
  char len[] = ", length =";
  
  printf("%s %s %s %d %s %s %s %d \n\n",
	 "Before applying functions: \n s1 = ",s1,len,mystrlen(s1),
	 "s2 =",s2,len,mystrlen(s2));
  printf("%s %s %s %d \n\n",
	 "Testing regular functions: \n Copy s1 to s2: s2 = ",
	 s1,len);
  printf("%s %s %s %d %s \n",
	 "Testing n functions: \n s3 =",s3,len,mystrlen(s3),
	 "\n s3 =");


  
  /*
  printf("\n\n\n%d \n", mystrlen(s1));
  char a[20];
  mystrcpy (a, "helloitsme");
  printf("%s \n", a);
  */
  return 0;
}
