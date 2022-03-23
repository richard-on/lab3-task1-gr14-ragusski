/* main.c */
#include <stdio.h>
#include <string.h>

#define MAXLEN 300

void printSymbolCodes(char* str) {
  for(int i = 0; i < strlen(str); i++){
    printf("%c%d", str[i], str[i]);
  }
}

int main(int argc, char *argv[]) {
  if(argc != 2){
    printf("incorrect number of arguments");
    return 1;
  }

  char* str = argv[1];
  printSymbolCodes(str);

	return 0;
}
