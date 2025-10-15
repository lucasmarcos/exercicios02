/*

\subsection{EX-01 (Fácil)}

\textbf{Ordenação de três caracteres usando ponteiros}

Escreva uma função que receba três ponteiros para caracteres (\texttt{char}) e ordene os valores apontados por eles em ordem alfabética. A função deve modificar diretamente os valores nas posições de memória apontadas pelos ponteiros.

\textbf{Especificações:}

Você deve implementar uma função auxiliar para trocar valores entre dois ponteiros de \texttt{char}. A função principal deve receber três ponteiros com a assinatura \texttt{char *p1, char *p2, char *p3} e, após a execução, os caracteres devem estar em ordem alfabética crescente. No programa principal, solicite ao usuário três caracteres e exiba os caracteres antes e após a ordenação, considerando tanto letras minúsculas quanto maiúsculas.

\textbf{Casos de Teste:}

\textbf{Caso de Teste 1}
\begin{itemize}
    \item Entrada: c b a
    \item Saída: a b c
\end{itemize}

\textbf{Caso de Teste 2}
\begin{itemize}
    \item Entrada: z x y
    \item Saída: x y z
\end{itemize}

\textbf{Caso de Teste 3}
\begin{itemize}
    \item Entrada: a a a
    \item Saída: a a a
\end{itemize}

\textbf{Caso de Teste 4}
\begin{itemize}
    \item Entrada: m a z
    \item Saída: a m z
\end{itemize}

\textbf{Caso de Teste 5}
\begin{itemize}
    \item Entrada: A b C
    \item Saída: A C b
\end{itemize}

*/

#include <stdio.h>

void trocar(char *a, char *b) {
  char temp = *a;
  *a = *b;
  *b = temp;
}

void ordenar_tres_caracteres(char *p1, char *p2, char *p3) {
  if (*p1 > *p2) {
    trocar(p1, p2);
  }

  if (*p2 > *p3) {
    trocar(p2, p3);
  }

  if (*p1 > *p2) {
    trocar(p1, p2);
  }
}

int main(int argc, char *argv[])
{
  char c1, c2, c3;

  scanf(" %c %c %c", &c1, &c2, &c3);

  ordenar_tres_caracteres(&c1, &c2, &c3);

  printf("%c %c %c\n", c1, c2, c3);

  return 0;
}
