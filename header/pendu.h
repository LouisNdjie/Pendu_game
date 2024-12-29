#ifndef PENDU_H_INCLUDED
#define PENDU_H_INCLUDED

void InitialiserMot(const char *pendu,char *chaine);
void AfficherMot(char *chaine);
int EntrerLettre(const char *pendu, char *chaine, char caractere);
void drawHead();
void drawTronc();
void drawLeftArm();
void drawRightArm();
void drawLeftLeg();
void drawRightLeg();
#endif