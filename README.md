<!-- Título -->
# Exercício 2 — Constantes

***Conteúdo do Exercício:***

Declare uma variável com o nome `raio` e calcule a área de um círculo.

Sabendo que a fórmula de cálculo da área é igual a `pi * (raio * raio)`.

[Solução.](main.c)

> [!IMPORTANT]\
> **Boas práticas**:
>
> * **Uso de constantes**:
>   * A constante `pi` foi declarada como `const`, o que protege o valor de ser alterado acidentalmente em outras partes do programa.
>
> * **Separação de lógica**:
>   * O código divide as etapas (leitura de entrada, cálculo, e exibição do resultado), o que torna o fluxo mais fácil de entender.
>
> * **Entrada do usuário**: Solicita que o valor do raio seja fornecido, deixando o programa mais interativo e dinâmico.

> [!WARNING]\
> **Sugestões de melhoria**:
>
> * **Substituir `void main()` por `int main()`**:
>   * O padrão em C é que a função principal retorne um valor inteiro para indicar o status de execução.
>
> * **Usar `M_PI` em vez de um valor aproximado de pi**:
>   * O valor de `pi` pode ser obtido de `math.h` (como `M_PI`) para maior precisão em cálculos matemáticos.
>
> * **Validação da entrada do usuário**:
>   * Verificar se o valor inserido pelo usuário é válido (por exemplo, um número positivo para o raio) antes de realizar o cálculo.
>
> * **Melhorar o formato de saída**:
>   * Utilizar um número fixo de casas decimais ao exibir o resultado da área, como `%.2f`.
>
> * **Comentário para cálculo de área**:
>   * Explicitar no comentário que a fórmula `pi * (raio * raio)` é equivalente a `pi * raio²`, já que alguns iniciantes podem ter dúvidas.

> [!NOTE]\
> **Observações**:
>
> * **Precisão de `pi`**:
>   * Usar `3.14` é aceitável em contextos simples, mas pode causar imprecisões em cálculos mais complexos ou críticos.
>
> * **Clareza do programa**:
>   * O código é fácil de entender e adequado para iniciantes que estão aprendendo lógica de programação e manipulação de variáveis.
>
> * **Comportamento de retorno**:
>   * Em sistemas modernos, `void main()` é frequentemente considerado inadequado.
> * Para conformidade com padrões C, a função principal deve ser declarada como `int main()` com um `return 0` no final.

<!-- Informações -->
## &#8505; Informações

![Visitors](https://api.visitorbadge.io/api/visitors?path=Devsgeeknerd%2Fexe-2-con-exe-pra-ope-mat-fun&label=Visitantes&labelColor=%23700070&labelStyle=none&countColor=%23000fff&style=plastic&color=%23ffffff "Total de Visitantes")
&nbsp;
![Followers](https://img.shields.io/github/followers/Devsgeeknerd?style=p&label=Seguidores&labelColor=800080&color=000fff "Total de Seguidores")
&nbsp;
![Watchers](https://img.shields.io/github/watchers/Devsgeeknerd/exe-2-con-exe-pra-ope-mat-fun?style=p&label=Observadores&labelColor=800080&color=000fff "Total de Observadores")
&nbsp;
![Stars](https://img.shields.io/github/stars/Devsgeeknerd/exe-2-con-exe-pra-ope-mat-fun?style=p&label=Estrelas&labelColor=800080&color=000fff "Total de Estrelas")
&nbsp;
![Forks](https://img.shields.io/github/forks/Devsgeeknerd/exe-2-con-exe-pra-ope-mat-fun?style=p&label=Bifurcações&labelColor=800080&color=000fff "Total de Bifurcações")
&nbsp;
![Repo Size](https://img.shields.io/github/repo-size/Devsgeeknerd/exe-2-con-exe-pra-ope-mat-fun?style=p&label=Tamanho&labelColor=800080&color=000fff "Tamanho do Repositório")
&nbsp;
![License](https://img.shields.io/github/license/Devsgeeknerd/exe-2-con-exe-pra-ope-mat-fun?style=p&label=Licença&labelColor=800080&color=000fff "Licença do Repositório")
