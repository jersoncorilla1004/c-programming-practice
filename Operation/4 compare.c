#include <stdio.h>

int main(void)
{
    int a = 5;
    int b = 3;

    printf("%d\n", a > b);
    printf("%d\n", a < b);
    printf("%d\n", a == b);


    printf("%d\n", a != b);
    printf("%d\n", a >= b);
    printf("%d\n", a <= b);
    return 0;

}
// Sa lesson na ito ang comparison operators: > < ==
// ang resulta ay 1 kapag TOTOO at 0 kapag MALI
// 5 > 3 ay 1, 5 < 3 ay 0, 5 == 3 ay 0
// = ay maglagay ng halaga, == ay magtanong kung pareho

// Sa lesson na ito ang comparison operators: > < == != >= <=
// ang resulta ay 1 kapag TOTOO at 0 kapag MALI
// a = 5 at b = 3: a > b ay 1, a < b ay 0, a == b ay 0
// != ay hindi pareho, >= ay mas malaki o pareho, <= ay mas maliit o pareho
// = ay maglagay ng halaga, == ay magtanong kung pareho