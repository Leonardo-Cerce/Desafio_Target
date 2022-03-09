#include <stdio.h>
#include <string.h>

int main ()
{
  int tam, i, aux;
  char inv[50] = "inverter";  /* string a ser invertida */
  tam = strlen (inv);
  printf ("String normal: %s\n", inv);

  for (i = 0; i < tam / 2; i++)
    {
      aux = inv[i];
      inv[i] = inv[tam - 1 - i]; /* salva o char em uma variavel auxiliar, e troca o atual pelo correspondente inverso */
      inv[tam - 1 - i] = aux;

    }
  printf ("String invertida: %s", inv);
  return 0;
}
