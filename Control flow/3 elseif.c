#include <stdio.h>

int main(void)
{
    int edad = 70;
    printf("edad %d\n", edad);
    if (edad >= 60)
    {
        printf("Senior kana \n");
    }
    else if (edad >= 18)
    {
        printf("Matanda kana \n");
    }
    else
    {
        printf("Bata kapa \n");
    }
    return 0;
}

// Sa lesson na ito ang else if: para sa mahigit dalawang daan
// binabasa mula itaas pababa, ang UNANG totoong condition ang tatakbo, laktaw na ang iba
// edad 70: totoo ang >= 70, kaya "Senior" lang ang lumabas
// mahalaga ang pagkakasunod-sunod: kapag nauna ang >= 18, hindi na aabot sa Senior

// Sa lesson na ito ang else if: para sa mahigit dalawang daan
// binabasa mula itaas pababa, ang UNANG totoong condition ang tatakbo, laktaw na ang iba
// edad 70: totoo ang >= 60, kaya "Senior" lang ang lumabas
// mahalaga ang pagkakasunod-sunod: kapag nauna ang >= 18, hindi na aabot sa Senior
// subukan palagi ang mga numero sa hangganan (60, 59, 18, 17)