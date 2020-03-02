#include<stdio.h>

int main(){
    char c;
    printf("Enter anything : ");
    scanf("%c", &c);

    /*if(c=='0'|| c=='1'|| c=='2'|| c=='3'|| c=='4'|| c=='5'|| c=='6'|| c=='7'|| c=='8'|| c=='9'){
        printf("%c is a digit.\n", c);
    }*/
    if(c>='0'&& c<='9'){
        printf("%c is a digit.\n", c);
    }
    else{
        printf("%c is not a digit.\n", c);
    }

    return 0;

}

