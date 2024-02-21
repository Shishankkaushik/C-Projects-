#include <stdio.h>
#include<conio.h>
#include <windows.h>
#include <MMsystem.h>

int main()
{

    long long int a, number;
    do
    {
        printf("Enter 1 to make call and 0 to exit :");
        scanf("%d", &a);
        if (a == 1)
        {
            printf("Enter The Mobile Numbers: ");
            scanf("%lld", &number);

            if (number == 9958371779)
            {
                 PlaySound(TEXT("C:\\Users\\vivek tyagi\\Documents\\Ringtone C programming project\\Music\\song.wav"),NULL,SND_SYNC);
                //		Beep(500,1000);
                printf("\nEnter 1 to cut this phone :");
                scanf("%d", &a);
            }
            else if (number == 9650629551)
            {
                 PlaySound(TEXT("C:\\Users\\vivek tyagi\\Documents\\Ringtone C programming project\\Music\\song1.wav"),NULL,SND_SYNC);
                //			Beep(500,1000);
                printf("\nEnter 1 to cut this phone :");
                scanf("%d", &a);
            }
            else
            {
                printf("Invalid Number: ");
                printf("\nEnter 1 to try again :");
                scanf("%d", &a);
            }
        }
        else
        {
            return 0;
        }
    } while (a == 1);
    return 0;
}
