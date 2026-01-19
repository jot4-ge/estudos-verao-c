//3-Em Python,podíamos escrever um programa que lia valores inteiros em variáveis x e y 
//e trocava o conteúdo das variáveis sem o auxílio de uma variável auxiliar. Em C isso é possível? Explique.


//Sim, é possível, mas funciona de um jeito bem diferente do Python!

//No Python, quando fazemos x, y = y, x, a linguagem cria uma tupla temporária 
//por baixo dos panos e atribui os valores. É um recurso "chique" da linguagem (açúcar sintático).

//Como o C é uma linguagem mais "raiz" e próxima do hardware, ela não tem esse 
//comando direto. Para trocar sem variável auxiliar (o famoso temp ou aux), precisamos 
//usar truques matemáticos ou lógica binária.

//Em Python, a troca é um recurso da linguagem (x, y = y, x). 
//Em C, a troca sem auxiliar é um algoritmo matemático ou lógico.
//Embora seja possível e legal de saber (cai muito em entrevista de emprego!), 
//no dia a dia de programação em C, a maioria dos programadores prefere usar 
//a variável auxiliar (int aux = x; x = y; y = aux;) porque é mais fácil de ler e entender o que está acontecendo.