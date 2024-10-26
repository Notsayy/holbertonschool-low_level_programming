#include "main.h"
/**
 * times_table - prints the multiplication table up to 9.
 */
void times_table(void)
{
int ligne, colonne, produit;

for (ligne = 0; ligne <= 9; ligne++)
{
_putchar('0');
for (colonne = 1; colonne <= 9; colonne++)
{
_putchar(',');
_putchar(' ');

produit = ligne * colonne;

if (produit <= 9)
_putchar(' ');
else
_putchar((produit / 10) + '0');
_putchar((produit % 10) + '0');
}
_putchar('\n');
}
}
