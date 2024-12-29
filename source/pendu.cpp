#include<iostream>
#include"../header/pendu.h"

void InitialiserMot(const char *pendu,char *chaine)
{
    int i = 0, longueur = 0;
    while(pendu[i] != '\0')
    {
        longueur++;
        i++;
    }

    for(i = 0; i < longueur; i++)
    {
        chaine[i] = '_';
    }
    chaine[longueur+1] = '\0';
}

void AfficherMot(char *chaine)
{
    int longueur = 0, i = 0;

    while(chaine[i] != '\0')
    {
        longueur++;
        i++;
    }

    for(i = 0; i < longueur; i++)
    {
        std::cout << chaine[i] ;
    }
}

int EntrerLettre(const char *pendu, char *chaine, char caractere)
{
    int position = -1, i = 0;

    while(pendu[i] != '\0')
    {
        if(pendu[i] == caractere || pendu[i] ==(caractere-32))
        {
            position = i;       
            if(chaine[position] == caractere ||  chaine[position] == (caractere-32))
            {
                i = 0;
                while(pendu[i] != '\0')
                {
                    if(pendu[i] == caractere || pendu[i] ==(caractere-32))
                    {
                        position = i;
                        return position;
                    }  
                    i++;
                } 
            }
        }
        i++;
    }

    return position;    
}

void drawHead()
{
    std::cout << std::endl;
    std::cout << " *****\n";
    std::cout << "*******\n";
    std::cout << " *****\n";
}

void drawTronc()
{
    std::cout << std::endl;
    std::cout << "**\n"<< "**\n"<< "**\n"<< "**\n"<< "**\n"<< "**\n";
}

void drawLeftArm()
{
    std::cout << std::endl;
    std::cout << "    **\n";
    std::cout << "   **\n";
    std::cout << "  **\n";
    std::cout << " **\n";
    std::cout << "**\n";
    std::cout << "**\n";
    std::cout << "**\n";
}

void drawRightArm()
{
    std::cout << std::endl;
    std::cout << "**\n";
    std::cout << " **\n";
    std::cout << "  **\n";
    std::cout << "   **\n";
    std::cout << "    **\n";
    std::cout << "    **\n";
    std::cout << "    **\n";
}

void drawLeftLeg()
{
    std::cout << std::endl;
    std::cout << "    **\n";
    std::cout << "   **\n";
    std::cout << "  **\n";
    std::cout << " **\n";
    std::cout << " **\n";
    std::cout << " **\n";
    std::cout << "***\n";
}

void drawRightLeg()
{
    std::cout << std::endl;
    std::cout << "**\n";
    std::cout << " **\n";
    std::cout << "  **\n";
    std::cout << "   **\n";
    std::cout << "    **\n";
    std::cout << "    **\n";
    std::cout << "    ***\n";
}