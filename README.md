# LI2-PL3-G5
## Jogo Rastros para projeto de LI2

Desenvolvido por:
  
- [**Marco André Pereira da Costa**](https://github.com/Mapc1) a93283
- [**Alexandre Eduardo Vieira Martins**](https://github.com/Alexmartins01) a93242
- [**Luis Manuel Peixoto Silva**](https://github.com/LuisMPSilva01) a93293

## Resumo do trabalho

Nesta primeira semana criamos três módulos cada um com um ficheiro .h.

### Interface:

Neste módulo implementamos o interpretador e uma função que mostra o tabuleiro no terminal.

### Lógica:

Aqui existe uma única função, a função "jogar", que através de uma função auxiliar presente nos **dados**, chama a função "substitui_peca_branca" coloca a peça **BRANCA** na **CASA** jogada. (Esta função ainda não verifica se a **COORDENADA** que recebe é adjacente ou não)

A função "substitui_peca_branca", referida anteriormente, está presente nos **dados** e procura no tabuleiro a peça **BRANCA** substituindo o seu estado para **PRETA**

### Dados:

Neste módulo estão funções que alteram o estado do jogo tal como as funções que inicializam o estado do jogo.

***PS: O facto pelo qual o Alexandre só tem 5 commits deve-se ao facto que eu (Marco Costa) sem saber fiz a minha parte e a dele. Assim quando ele ia começar a trabalhar, na quarta-feira, já praticamente não havia nada para fazer.***
