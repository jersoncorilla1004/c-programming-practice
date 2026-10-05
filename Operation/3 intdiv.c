#include <stdio.h>

int main(void)
{
    int a = 10;
    int b =4;
    int c = 7;
    int d =3;
    int e =9;
    int f =3;


    printf("%d\n", a / b);
    printf("%d\n", a % b);
    printf("%d\n", c / d);
    printf("%d\n", c % d);
    printf("%d\n", e / f);
    printf("%d\n", e % f);

    return 0;       
}
// Sa lesson na ito ang % (modulo) ay ang SOBRA pagkatapos maghati
// 10 / 4 = 2 (ilang buong grupo), 10 % 4 = 2 (ilan ang natira)
// 7 / 3 = 2 at 7 % 3 = 1
// kapag 0 ang resulta ng %, eksaktong nahati ang numero (9 % 3 = 0)
// kapag int ang gamit sa /, tinatapon ang decimal
// ang % sa loob ng "" ay butas ng printf, ang % sa pagitan ng dalawang numero ay operator