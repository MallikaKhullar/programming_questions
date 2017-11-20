#include <stdio.h>

int bitwise_and(int n1, int n2){
    return n1 & n2;
}

int bitwise_or(int n1, int n2) {
    return n1 | n2;
}

int bitwise_xor(int n1, int n2) {
    return n1 ^ n2;
}

int bitwise_not(int n) {
    return ~n;
}



int main(void) {

    char selection, c;
    int n1, n2;
    do {
        printf("\n----------");
        printf("\n1 =>  \t&");
        printf("\n2 =>  \t|");
        printf("\n3 =>  \t^");
        printf("\n4 =>  \t~");
        printf("\nOther => Exit");
        printf("\n----------\nChoice: ");
        scanf("%c", &selection);
        while ((c = getchar()) != '\n' && c != EOF);


        switch(selection){
            case '1': 
                printf("Inputs: ");
                scanf("%d%d", &n1, &n2);
                printf("Bitwise & resut: %d", bitwise_and(n1,n2));
                break;
            case '2': 
                printf("Inputs: ");
                scanf("%d%d", &n1, &n2);
                printf("Bitwise | resut: %d", bitwise_or(n1,n2));
                break;
            case '3': 
                printf("Inputs: ");
                scanf("%d%d", &n1, &n2);
                printf("Bitwise ^ result: %d", bitwise_xor(n1,n2));
                break;
            case '4': 
                printf("Input: ");
                scanf("%d", &n1);
                printf("Bitwise ~ result: %d", bitwise_not(n1));
                break;
        }

        while ((c = getchar()) != '\n' && c != EOF);

    } while (selection == '1' || selection == '2' || selection == '3' || selection == '4');
    

    printf("\n");
    return 0;
}




// int main () {
//  char ans;
//  do {
//      int opt, n1, n2;
//      printf("\n-------------\nMENU:\n1:&\n2:|\n3:^\n4:~\n--------------\nYour choice: ");
//      int status = scanf("%d", &opt);
//      while(status != 1) {
//         printf("\n-------------\nMENU:\n1:&\n2:|\n3:^\n4:~\n--------------\nYour choice: ");
//         status = scanf("%d", &opt);
//      }
//      printf("You entered %d", opt);
//      switch(opt){
//          case 1: 
//              printf("Enter inputs:");
//              scanf("%d%d", &n1, &n2);
//              printf("Bitwise &: %d", bitwise_and(n1,n2));
//              break;
//          case 2: 
//              printf("Enter inputs:");
//              scanf("%d%d", &n1, &n2);
//              printf("Bitwise |: %d", bitwise_or(n1,n2));
//              break;
//          case 3: 
//              printf("Enter inputs:");
//              scanf("%d%d", &n1, &n2);
//              printf("Bitwise ^: %d", bitwise_xor(n1,n2));
//              break;
//          case 4: 
//              printf("Enter input:");
//              scanf("%d", &n1);
//              printf("Bitwise ~: %d", bitwise_not(n1));
//              break;
//          default: 
//              printf("Sorry, invalid option.\n"); 
//              continue;
//      }

//      char ch;
//      printf("\nThanks! Try again? [y/n]: ");
//      scanf("%c", &ch);
//      if(ch == 'n') {
//         printf("\nBye!\n"); break; }


//  }while(1);

//     return 0;
// }
