#include <stdio.h>
#include <ctype.h>

int main() {
    const char *nato[] = {
        "Alfa", "Bravo", "Charlie", "Delta", "Echo", "Foxtrot",
        "Golf", "Hotel", "India", "Juliett", "Kilo", "Lima",
        "Mike", "November", "Oscar", "Papa", "Quebec", "Romeo",
        "Sierra", "Tango", "Uniform", "Victor", "Whiskey",
        "Xray", "Yankee", "Zulu"
    };

    char phrase[64], ch;
    
    printf("Please enter char or phrase: ");
    fgets(phrase, sizeof(phrase), stdin);

    for (int i=0; phrase[i]!='\0'; i++) {
        ch = phrase[i];
        if (isalpha(ch)) {
            ch = toupper(ch);
            printf("%s ", nato[ch - 'A']);
        }
    }
    
    putchar('\n');
    return (0);
}
