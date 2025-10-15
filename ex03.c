/*

\subsection{EX-03 (Médio)}

\textbf{Calculadora com ponteiro para resultado}

Desenvolva uma função que receba dois valores numéricos, um ponteiro para armazenar o resultado e um código de operação que deve ser executado. A função deve realizar a operação especificada e armazenar o resultado na variável apontada pelo ponteiro.

\textbf{Especificações:}

A função deve ter a assinatura \texttt{int calcular(float a, float b, float *resultado, char operacao)} e suportar as operações '+' (soma), '-' (subtração), '*' (multiplicação) e '/' (divisão). A função deve retornar 0 para sucesso, -1 para divisão por zero e -2 para operação inválida. No programa principal, permita ao usuário inserir dois números e escolher a operação, trate adequadamente os códigos de erro retornados pela função e exiba o resultado apenas se a operação for bem-sucedida.

\textbf{Casos de Teste:}

\textbf{Caso de Teste 1}
\begin{itemize}
    \item Entrada: 10.5 + 5.3
    \item Saída: Resultado: 15.8 (código de retorno: 0)
\end{itemize}

\textbf{Caso de Teste 2}
\begin{itemize}
    \item Entrada: 20.0 - 8.5
    \item Saída: Resultado: 11.5 (código de retorno: 0)
\end{itemize}

\textbf{Caso de Teste 3}
\begin{itemize}
    \item Entrada: 7.0 * 3.0
    \item Saída: Resultado: 21.0 (código de retorno: 0)
\end{itemize}

\textbf{Caso de Teste 4}
\begin{itemize}
    \item Entrada: 15.0 / 3.0
    \item Saída: Resultado: 5.0 (código de retorno: 0)
\end{itemize}

\textbf{Caso de Teste 5}
\begin{itemize}
    \item Entrada: 10.0 / 0.0
    \item Saída: Erro: Divisão por zero (código de retorno: -1)
\end{itemize}

\textbf{Caso de Teste 6}
\begin{itemize}
    \item Entrada: 5.0 \% 2.0
    \item Saída: Erro: Operação inválida (código de retorno: -2)
\end{itemize}

\textbf{Caso de Teste 7}
\begin{itemize}
    \item Entrada: -8.0 + 3.0
    \item Saída: Resultado: -5.0 (código de retorno: 0)
\end{itemize}

*/

#include <stdio.h>

int calcular(float a, float b, float *resultado, char operacao) {
  switch (operacao) {
    case '+':
      *resultado = a + b;
      return 0;

    case '-':
      *resultado = a - b;
      return 0;

    case '*':
      *resultado = a * b;
      return 0;

    case '/':
      if (b == 0.0) {
        return -1;
      }
      *resultado = a / b;
      return 0;

    default:
      return -2;
  }
}

int main(int argc, char *argv[]) {
  float num1, num2, resultado;
  char operacao;
  int codigo_retorno;

  scanf("%f", &num1);

  scanf(" %c", &operacao);

  scanf("%f", &num2);

  codigo_retorno = calcular(num1, num2, &resultado, operacao);

  switch (codigo_retorno) {
    case 0:
      printf("Resultado: %.1f (codigo de retorno: %d)\n", resultado, codigo_retorno);
      break;

    case -1:
      printf("Erro: Divisao por zero (codigo de retorno: %d)\n", codigo_retorno);
      break;

    case -2:
      printf("Erro: Operacao invalida (codigo de retorno: %d)\n", codigo_retorno);
      break;
  }

  return 0;
}
