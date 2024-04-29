#include <stdio.h>
main()
{
    int a, b, c,d;
    printf("Press 1 for English\n");
    printf("Press 2 for Hindi\n");
    printf("Press 3 for Gujrati\n");
    printf("Enter your choice:");
    scanf("%d", &a);
    switch (a)
    {
    case 1:
        printf("Press 1 for Internet Recharge\n");
        printf("Press 2 for Top-up Recharge\n");
        printf("Press 3 for Special Recharge\n");
        printf("Enter your choice:");
        scanf("%d", &b);

        switch (b)
        {
        case 1:
            printf("You have successfully done Internet Recharge.");
            break;
        case 2:
            printf("You have successfully done Top-up Recharge.");
            break;
        case 3:
            printf("You have successfully done Special Recharge.");
            break;

        default:
            break;
        }
        break;
    case 2:
        printf("इंटरनेट रिचार्ज के लिए 1 दबाएँ\n");

        printf("टॉप-अप रिचार्ज के लिए 2 दबाएँ\n");
        printf("विशेष रिचार्ज के लिए 3 दबाएँ\n");
        printf("अपनी पसंद दर्ज करें:");
        scanf("%d", &c);
        switch (c)
        {
        case 1:
            printf("आपने सफलतापूर्वक इंटरनेट रिचार्ज कर लिया है।");

            break;
        case 2:
            printf("आपने सफलतापूर्वक टॉप-अप रिचार्ज कर लिया है।");
            break;
            case 3:
            printf("आपने सफलतापूर्वक विशेष रिचार्ज कर लिया है.");
            break;

        default:
            break;
        }
        break;
        case 3:
        printf("ઈન્ટરનેટ રિચાર્જ માટે 1 દબાવો\n");
        printf("ટોપ-અપ રિચાર્જ માટે 2 દબાવો\n");
        printf("વિશેષ રિચાર્જ માટે 3 દબાવો\n");
        printf("Enter your choice:");
        scanf("%d",&d);
        switch (d)  
        {
        case 1:
        printf("તમે સફળતાપૂર્વક ઈન્ટરનેટ રિચાર્જ કર્યું છે.");
            break;
        case 2:
        printf("તમે સફળતાપૂર્વક ટોપ-અપ રિચાર્જ કર્યું છે.");
        break;
        case 3:
        printf("તમે સફળતાપૂર્વક સ્પેશિયલ રિચાર્જ કર્યું છે.");
        default:
            break;
        }
        break;
    default:
        break;
    }
}