#include <iostream>
/*Povrch krychle
Objem koule
Výpočet rychlosti (dráha, čas)
Výpočet výrazu
*/
int main()
{
    std::cout << "\nVyber si jednu moznost:\n1 - Povrch Krychle\n2 - Objem koule"
                 "\n3 - Vypocet rychlosti(Draha, cas)\n4 - Vypocet vyrazu\n0 - Konec"
                 "\nZadej hodnotu: ";
    short int choice;
    std::cin >> choice;
    while (choice != 0)
    {
        if (choice == 1)
        {
            //Povrch krychle S= 6*a*a
            std::cout<<"\nVybral jsi si povrch krychle\nZadej stranu a: ";
            double a =0;
            double povrch=0;
            std::cin >> a;
            povrch =6*a*a;
            std::cout<<"\nPovrch krychle je: "<< povrch;
        }
        else if (choice == 2)
        {
        //Objem koule V = 4/3 π r³
            std::cout<<"\nVybral jsi si objem koule\nZadej polomeer r: ";
            double r=0;
            double objem=0;
            double pi = 3.14;
            std::cin >> r;
            objem = (4/3)*pi*r*r*r;
            std::cout<<"\nObjem koule je: " <<objem;
        }
        else if (choice == 3)
        {

        }
        else if (choice == 4)
        {

        }
        std::cout << "\nVyber si jednu moznost:\n1 - Povrch Krychle\n2 - Objem koule"
                 "\n3 - Vypocet rychlosti(Draha, cas)\n4 - Vypocet vyrazu\n0 - Konec"
                 "\nZadej hodnotu: ";
        std::cin >> choice;
    }
    return 0;
}
