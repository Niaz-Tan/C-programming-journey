#include <stdio.h>

int main(){
    int H, C;
    int pot = 0;

    printf("Please Enter number of Herbs (H): ");
    scanf("%d", &H);

    printf("Please Enter number of Crystals (C): ");
    scanf("%d", &C);

    while (H >= 3 && C >= 2)
    {
        pot++;

        H -= 3;
        C -=2;

        printf("Potion-%d created\n", pot);
        printf("Remaining Herbs: %d, Remaining Crystals: %d\n", H, C);
    }
    
    pot % 2 == 0 ? printf("Stable Elixir\n") :  printf("Volatile Brew\n");
}