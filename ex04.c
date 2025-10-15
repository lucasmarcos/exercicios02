/*

\subsection{EX-04 (Médio)}

\textbf{Divisão com resto usando ponteiros}

Desenvolva uma função que realize a divisão inteira de dois números e retorne tanto o quociente quanto o resto da divisão através de ponteiros. A função deve validar a entrada e tratar casos especiais.

\textbf{Especificações:}

A função deve ter a assinatura \texttt{int dividir(int dividendo, int divisor, int *quociente, int *resto)} e retornar 0 para sucesso e -1 para divisão por zero. O quociente deve ser armazenado na variável apontada por \texttt{quociente} e o resto deve ser armazenado na variável apontada por \texttt{resto}, tratando corretamente divisões com números negativos. No programa principal, solicite ao usuário o dividendo e o divisor, chame a função e trate o código de erro, exiba o quociente e o resto da divisão, permita ao usuário realizar múltiplas divisões e valide que o resultado está correto usando a fórmula $dividendo = quociente \times divisor + resto$.

\textbf{Casos de Teste:}

\textbf{Caso de Teste 1}
\begin{itemize}
    \item Entrada: Dividendo: 17, Divisor: 5
    \item Saída: Quociente: 3, Resto: 2
    \item Validação: $17 = 3 \times 5 + 2$ (código de retorno: 0)
\end{itemize}

\textbf{Caso de Teste 2}
\begin{itemize}
    \item Entrada: Dividendo: 20, Divisor: 4
    \item Saída: Quociente: 5, Resto: 0
    \item Validação: $20 = 5 \times 4 + 0$ (código de retorno: 0)
\end{itemize}

\textbf{Caso de Teste 3}
\begin{itemize}
    \item Entrada: Dividendo: 7, Divisor: 10
    \item Saída: Quociente: 0, Resto: 7
    \item Validação: $7 = 0 \times 10 + 7$ (código de retorno: 0)
\end{itemize}

\textbf{Caso de Teste 4}
\begin{itemize}
    \item Entrada: Dividendo: 15, Divisor: 0
    \item Saída: Erro: Divisão por zero (código de retorno: -1)
\end{itemize}

\textbf{Caso de Teste 5}
\begin{itemize}
    \item Entrada: Dividendo: -17, Divisor: 5
    \item Saída: Quociente: -3, Resto: -2
    \item Validação: $-17 = -3 \times 5 + (-2)$ (código de retorno: 0)
\end{itemize}

\textbf{Caso de Teste 6}
\begin{itemize}
    \item Entrada: Dividendo: 17, Divisor: -5
    \item Saída: Quociente: -3, Resto: 2
    \item Validação: $17 = -3 \times (-5) + 2$ (código de retorno: 0)
\end{itemize}

\textbf{Caso de Teste 7}
\begin{itemize}
    \item Entrada: Dividendo: 100, Divisor: 7
    \item Saída: Quociente: 14, Resto: 2
    \item Validação: $100 = 14 \times 7 + 2$ (código de retorno: 0)
\end{itemize}

*/

#include <stdio.h>

int dividir(int dividendo, int divisor, int *quociente, int *resto)
{
  if (divisor == 0) {
    return -1;
  }

  *quociente = dividendo / divisor;
  *resto = dividendo % divisor;

  return 0;
}

void validar_resultado(int dividendo, int divisor, int quociente, int resto)
{
  int validacao = quociente * divisor + resto;

  if (resto >= 0) {
    printf("Validacao: %d = %d x %d + %d\n", dividendo, quociente, divisor, resto);
  } else {
    printf("Validacao: %d = %d x %d + (%d)\n", dividendo, quociente, divisor, resto);
  }
}

int main(int argc, char *argv[])
{
  int dividendo, divisor;
  int quociente, resto;
  int codigo_retorno;

  scanf("%d", &dividendo);

  scanf("%d", &divisor);

  codigo_retorno = dividir(dividendo, divisor, &quociente, &resto);

  if (codigo_retorno == 0) {
    printf("Quociente: %d, Resto: %d\n", quociente, resto);
    validar_resultado(dividendo, divisor, quociente, resto);
    printf("(codigo de retorno: %d)\n", codigo_retorno);
  } else {
    printf("Erro: Divisao por zero (codigo de retorno: %d)\n", codigo_retorno);
  }

  return 0;
}
