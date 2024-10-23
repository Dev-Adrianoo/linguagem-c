#include <stdio.h>
#include <string.h>

int main(){

    char s[10];

    printf("Digite algo(Leitura pelo gets): \n");
    gets(s);
    getchar();

    puts("Resultado: ");
    puts(s);
    puts("");

    printf("Digite algo (leitura pelo fgets): \n");
    fgets(s, sizeof(s), stdin);
    s [strcspn (s, "\n")] = '\0';
    getchar();

    printf("Resultado: %s\n", s);


  return 0;
}