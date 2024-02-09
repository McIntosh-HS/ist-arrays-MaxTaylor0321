#include <stdio.h>

int main() {
    char res[20];
here: 
    printf("Will you be my valentine? \n");
    scanf("%s", &res);
    
    if(res[0] == 'y') {
        printf("Yay!\n");
    }
    else if(res[0] == 'n'){
    printf("Ok bye\n");
    }
    else {
    printf("Could you please say that again?\n");
    goto here;
    }

   return 0;
}
