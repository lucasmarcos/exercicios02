/*

\subsection{EX-05 (Difícil)}

\textbf{Manipulação de coordenadas 2D com transformações}

Implemente um sistema que trabalhe com coordenadas bidimensionais usando ponteiros. Crie funções que recebam ponteiros para as coordenadas \texttt{x} e \texttt{y} e realizem operações de translação e rotação sobre elas.

\textbf{Especificações:}

Você deve implementar a função \texttt{void transladar(float *x, float *y, float dx, float dy)} que move o ponto e a função \texttt{void rotacionar(float *x, float *y, float angulo)} que rotaciona o ponto em torno da origem. O ângulo de rotação deve ser em radianos e as fórmulas de rotação são $x' = x \times \cos(\theta) - y \times \sin(\theta)$ e $y' = x \times \sin(\theta) + y \times \cos(\theta)$. No programa principal, permita ao usuário inserir coordenadas iniciais do ponto e escolher entre translação ou rotação. Para translação, o usuário deve inserir os deslocamentos dx e dy, e para rotação deve inserir o ângulo em graus (que será convertido para radianos). O programa deve repetir operações até o usuário escolher sair e exibir as coordenadas após cada transformação.

\textbf{Casos de Teste:}

\textbf{Caso de Teste 1 - Translação}
\begin{itemize}
    \item Entrada: Coordenadas iniciais: x = 5.0, y = 3.0
    \item Operação: Translação
    \item Deslocamentos: dx = 2.0, dy = -1.0
    \item Saída: x = 7.0, y = 2.0
\end{itemize}

\textbf{Caso de Teste 2 - Translação}
\begin{itemize}
    \item Entrada: Coordenadas iniciais: x = 0.0, y = 0.0
    \item Operação: Translação
    \item Deslocamentos: dx = 10.0, dy = 5.0
    \item Saída: x = 10.0, y = 5.0
\end{itemize}

\textbf{Caso de Teste 3 - Rotação 90°}
\begin{itemize}
    \item Entrada: Coordenadas iniciais: x = 1.0, y = 0.0
    \item Operação: Rotação
    \item Ângulo: 90 graus (1.5708 radianos)
    \item Saída: x $\approx$ 0.0, y $\approx$ 1.0
\end{itemize}

\textbf{Caso de Teste 4 - Rotação 180°}
\begin{itemize}
    \item Entrada: Coordenadas iniciais: x = 3.0, y = 4.0
    \item Operação: Rotação
    \item Ângulo: 180 graus (3.14159 radianos)
    \item Saída: x $\approx$ -3.0, y $\approx$ -4.0
\end{itemize}

\textbf{Caso de Teste 5 - Rotação 45°}
\begin{itemize}
    \item Entrada: Coordenadas iniciais: x = 2.0, y = 0.0
    \item Operação: Rotação
    \item Ângulo: 45 graus (0.7854 radianos)
    \item Saída: x $\approx$ 1.414, y $\approx$ 1.414
\end{itemize}

\textbf{Caso de Teste 6 - Múltiplas Operações}
\begin{itemize}
    \item Entrada: Coordenadas iniciais: x = 0.0, y = 0.0
    \item Operação 1: Translação dx = 5.0, dy = 5.0
    \item Operação 2: Rotação 90 graus
    \item Operação 3: Translação dx = -5.0, dy = -5.0
    \item Saída após operação 1: x = 5.0, y = 5.0
    \item Saída após operação 2: x $\approx$ -5.0, y $\approx$ 5.0
    \item Saída após operação 3: x $\approx$ -10.0, y $\approx$ 0.0
\end{itemize}

\textbf{Caso de Teste 7 - Rotação 360°}
\begin{itemize}
    \item Entrada: Coordenadas iniciais: x = 7.5, y = 2.5
    \item Operação: Rotação
    \item Ângulo: 360 graus (6.28318 radianos)
    \item Saída: x $\approx$ 7.5, y $\approx$ 2.5 (volta à posição original)
\end{itemize}

*/

#include <stdio.h>

int main(int argc, char *argv[])
{
  return 0;
}
