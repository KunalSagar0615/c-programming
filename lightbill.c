#include <stdio.h>
int main()
{
int unit, amt = 0;
printf("Enter the Units :");
scanf("%d",&unit);

    if (unit >= 100)
        amt = amt * 8;
        unit = unit - 100;
        if (unit >= 100){
            amt = amt + (amt * 10);
            unit = unit - 100;
            if (unit >= 100){
                amt = amt + (amt * 12);
                unit = unit - 100;
                if (unit >= 0){
                    amt = amt + (amt * 15);
                    unit = unit - 100;
                    
                         if (unit > 0){
                        amt = amt + (amt * 17);
                        }
                        else
                          amt= amt+(unit*15);
                }
                else
                    amt= amt+(unit*12);
            }
            else
                amt= amt+(unit*10);
        }
        else
            amt= amt+(unit*8);

printf("Your amount is %d",amt);
return 0;
}