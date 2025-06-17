#include<stdio.h>
void main()
{
    int unit,amt=0;
    printf("enter units=");
    scanf("%d",&unit);
    if(unit>=100)
    {
        amt=amt+(100*8);
        unit=unit-100;
    if(unit>=100)
    {
        amt=amt+(100*10);
        unit=unit-100;
        if(unit>=100)
        {
            amt=amt+(100*12);
            unit=unit-100;
            if(unit>=100)
            {
                amt=amt+(100*15);
                unit=unit-100;
                if(unit>=100)
                    amt=amt+(unit*17);
            }
            else
                amt=amt+(unit*15);
        }
        else
            amt=amt+(unit*12);
    }
    else
        amt=amt+(unit*10);
    }
    else
    amt=amt+(unit*8);
    printf("lightbill=%d",amt);
}
