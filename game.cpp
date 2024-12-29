#include<iostream>
#include<stdlib.h>
#include"header/pendu.h"

const char pendu[15] = "PROGRAMMATION";
char devine[15];
char devine_carac;

int main(){
    bool running = true;
    int choix = 0, position = 0, vie = 6, state = 0;

    InitialiserMot(pendu, devine);
    AfficherMot(devine);

    while(running)
    {  
        
        std::cout << std::endl;
        std::cout << "Vous avez "<<vie<<" vies\n";
        
        std::cout << "Entrez un caractere :";
        std::cin >> devine_carac;
        position = EntrerLettre(pendu, devine, devine_carac);
        if(position == -1)
        {
            std::cout << "Ce caractere n'existe pas dans le mot a deviner\n";
            vie--;
        }else
        {
            if(pendu[position] ==(devine_carac-32))
            {
                devine[position] = devine_carac - 32;
            }else
            {
                devine[position] = devine_carac;
            }
        }
        switch(vie)
        {
            case 0 :
            {
                std::cout << "Vous avez perdu\n";
                drawHead();
                goto Quit;
            }
            case 1 :
            {
                drawTronc();
                break;
            }
            case 2 :
            {
                drawLeftArm();
                break;
            }
            case 3 :
            {
                drawRightArm();
                break;
            }
            case 4 :
            {
                drawLeftLeg();
                break;
            }
            case 5 :
            {
                drawRightLeg();
                break;
            }

        }

        while(devine[choix] != '\0')
        {
            if(devine[choix] == '_')
            {
                state = 1;
                break;
            }else
            {
                state = 0;
            }
            choix++;
        }

        if(state == 0)
        {
            goto Win;
        }

        AfficherMot(devine);
    }

    Win:
        std::cout << std::endl;
        AfficherMot(devine);
        std::cout << std::endl;
        std::cout << "VOUS AVEZ GAGNE\n";
        system("pause");
        return 0;

    Quit:
        std::cout << std::endl;
        system("pause");
        return 0; 
}