//凑硬币
/*#include<stdio.h>
int main()
{
    int x;
    int one, two, five;
    int exit = 0;

    scanf_s("%d", &x);
    for (one = 1; one <= x * 10; one++) {
        for (two = 1; two <= x * 10 / 2; two++) {
            for (five = 1; five <= x * 10 / 5; five++) {
                if (one + two * 2 + five * 5 == x * 10) {
                    printf("可以用%d个1角加%d个2角加%d个5角得到%d元\n", one, two, five, x);
                    exit = 1;
                    break;
                }
            }
            if (exit == 1) break;
        }
        if (exit == 1) break;
    }
    return 0;
}
*/
//方法二

#include<stdio.h>
int main()
{
    int x;
    int one, two, five;
    int exit = 0;

    scanf_s("%d", &x);
    for (one = 1; one <= x * 10; one++) {
        for (two = 1; two <= x * 10 / 2; two++) {
            for (five = 1; five <= x * 10 / 5; five++) {
                if (one + two * 2 + five * 5 == x * 10) {
                    printf("可以用%d个1角加%d个2角加%d个5角得到%d元\n", one, two, five, x);
                    exit = 1;
                    goto out;
                }
            }
            if (exit == 1) break;
        }
        if (exit == 1) break;
    }
    out://标号
    return 0;
}
