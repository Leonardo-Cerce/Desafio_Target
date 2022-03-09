#include <stdio.h>
#define NFib 21 /* numero a ser encontrado */

int main ()
{
  int SeqFib[2] = {0, 1}; /* array com ultimos dois valores da sequencia */
  int aux;

  while (NFib > SeqFib[1])
    {
      aux = SeqFib[0] + SeqFib[1];  /* a sequencia e calculada ate o maior valor ser maior que o buscado */
      SeqFib[0] = SeqFib[1];
      SeqFib[1] = aux;
    }

  if (SeqFib[0] == NFib || SeqFib[1] == NFib)
    {
      printf ("O valor informado pertence a sequencia");  /* verifica se o valor e da sequencia ou nao e imprime a mensagem */
    }
  else
    {
      printf ("O valor informado nao pertence a sequencia");
    }
  return 0;
}
