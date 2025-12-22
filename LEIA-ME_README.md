# 🌍 Super Trunfo em C - Projeto Estácio

> Projeto desenvolvido para a disciplina de Introdução à Programação (Ciências da Computação).
> **Autor:** Vinícius Silva

Este projeto é uma implementação em linguagem C do clássico jogo de cartas **Super Trunfo**. O sistema permite o cadastro de cartas de países e realiza comparações complexas baseadas em atributos como População, PIB, Área e Densidade Demográfica.

---

## 🚀 Funcionalidades do Nível Mestre

Além do cadastro básico e comparação simples, esta versão inclui:

- **Comparação Multiatributo:** O jogador escolhe **dois** atributos diferentes para somar forças.
- **Menus Dinâmicos:** O sistema é inteligente! Se você escolher "População" como 1º atributo, essa opção desaparece no menu do 2º atributo para evitar repetição.
- **Lógica de Densidade Invertida:** O jogo respeita a regra de que, para Densidade Demográfica, **o menor valor vence** (invertendo a lógica de pontuação automaticamente).
- **Tratamento de Empates:** Lógica robusta para detectar e anunciar empates na soma dos atributos.

---

## 🛠️ Tecnologias Utilizadas

- **Linguagem:** C (Padrão ANSI)
- **Estruturas:** `if/else`, `switch/case` aninhados.
- **Conceitos:** Variáveis auxiliares, Operador Ternário, Ponteiros de String, Manipulação de Buffer.

---

## 💻 Como Compilar e Executar

Para rodar este jogo no seu computador, você precisará de um compilador C (como GCC).

### 1. Compilando o código
Abra o terminal na pasta do projeto e digite:

```bash
gcc SuperTrunfoemC.c -o supertrunfo
```
2. Executando o jogo

Após compilar, inicie o programa:

No Windows:

```bash
./supertrunfo.exe
```

No Linux/Mac:

```bash
./supertrunfo
```
---
## 📖 Guia de Uso

Ao iniciar o programa, siga os passos abaixo:

### Passo 1: Cadastro das Cartas
O sistema pedirá os dados da **Carta 1** e da **Carta 2**.

> ⚠️ **Atenção:** Ao digitar nomes de Cidades ou Países, **NÃO use espaços**.
> *   Errado: `Estados Unidos`
> *   Correto: `Estados-Unidos` ou `EUA` ou `EstadosUnidos`

### Passo 2: Menu de Comparação
Você verá 3 opções de jogo:
1.  **Comparação Geral:** Exibe quem vence em cada atributo individualmente.
2.  **Comparação Específica:** Verifica combos lógicos (Ex: É um "País Gigante"?).
3.  **Comparação de Dois Atributos (Nível Mestre):** O modo avançado.

### Passo 3: O Modo Mestre (Opção 3)
1.  Escolha o **Primeiro Atributo** (ex: População).
2.  O sistema pedirá o **Segundo Atributo**. Note que a opção "População" não estará mais disponível.
3.  O sistema somará os valores dos dois atributos escolhidos para ambas as cartas.
4.  O vencedor será anunciado com base na maior soma (lembrando que Densidade soma o inverso).

---

## 📝 Exemplo de Saída (Log)
```text
--- Comparação de Dois Atributos ---
País 1: Brasil | País 2: Argentina
------------------------------------------
Atributo 1 (População): 214000000.00 VS 45000000.00
Atributo 2 (PIB): 1600.00 VS 400.00
------------------------------------------
SOMA CARTA 1: 214001600.00
SOMA CARTA 2: 45000400.00
------------------------------------------
# CAMPEÃO: Carta 1!
```
---

## ⚖️ Regras de Negócio

1.  **Vitória Padrão:** Para População, Área, PIB, Pontos Turísticos e PIB per Capita, vence a carta com o **MAIOR** valor.
2.  **Vitória Invertida:** Para Densidade Populacional, vence a carta com o **MENOR** valor.
    *   *Implementação:* O código calcula `1.0 / Densidade` para somar pontos. Quanto menor a densidade, maior a pontuação.

---

<div align="center">
  <h3>🏁 Divirta-se jogando!</h3>
  <p>Desenvolvido por <strong>Vinícius Silva</strong> durante a jornada de CS.</p>
</div>

---