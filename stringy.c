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

char* mystrncpy (char *dest , char *source , int n) {
	int i; 
	for (i = 0; i < n; i++) {
		dest[i] = source[i]; 
	}
	return dest;
}

char* mystrcat ( char *dest, char *app ){
	int length = mystrlen(dest);
	int copied = 0;
		while ( *app ){
			dest[length+copied] = *app;
			app++;
			copied++;
	}
	return dest;
}

int mystrcmp( char *str1, char *str2){
	while (*str1 == *str2 && *str1 && *str2){
		str1++;
		str2++;
	}
	return *str1 - *str2;
}

char* mystrchr( char *str, char *c ){
	while ( *str != *c )
		str++;
	return str;
}

int main(){
  char s1[20] = "Hello";
  char s2[20] = "";
  char s3[20] = "this is l";
  char len[20] = ", length =";

  printf("=========================== \n");

  printf("%s %s %s %d %s %s %s %d \n\n", 
  	"Before applying functions: \n s1 = ",
  	s1,len,mystrlen(s1),
	"\n s2 =",s2,len,mystrlen(s2));

  mystrncpy( s2, s1, 5 );

  printf("%s %s %s %d %s %s %s %d %s %s %s %d \n\n",
	 "Testing regular functions: \n Copy s1 to s2: s2 = ",
	 s2,len,mystrlen(s2),
	 "\n Cat Man to s2: s2 =", mystrcat(s2,"Man"),len,mystrlen(s2),
	 "\n s1 =",s1,len,mystrlen(s1));

/* TESTING N FUNCTIONS
  printf("%s %s %s %d %s %s %s %d %s %s %s %d \n\n",
	 "Testing n functions: \n s3 =",s3,len,mystrlen(s3),
	 "\n s3 =",mystrncpy(s3,s1,mystrlen(s3)),len,mystrlen(s3),
	 "\n s3 =",mystrcat(s3,"123"),len,mystrlen(s3));
*/

  printf("%s %d %s %d %s %d \n\n", 
  	"Testing strcmp:\n compare ab to abc:",mystrcmp("ab","abc"),
  	"\n compare abc to ab:", mystrcmp("abc","ab"),
  	"\n compare abc to abc:", mystrcmp("abc","abc"));

  printf("%s %s %s %s \n",
  	"Testing strchr: \n Looking for 1 in Hello123:", mystrchr("Hello123", "1"),
  	"\n Looking for 0 in Hello123:", mystrchr("Hello123", "0"));

  return 0;
}

/* OUTPUT!!!
=========================== 
Before applying functions: 
 s1 =  Hello , length = 5 
 s2 =  , length = 0 

Testing regular functions: 
 Copy s1 to s2: s2 =  HelloMan , length = 5 
 Cat Man to s2: s2 = HelloMan , length = 8 
 s1 = Hello , length = 5 

Testing strcmp:
 compare ab to abc: -99 
 compare abc to ab: 99 
 compare abc to abc: 0 
 
Testing strchr: 
 Looking for 1 in Hello123: 123 
 Looking for 0 in Hello123: 0 in Hello123: <<----- IDK WHY IT DOES THIS
*/
