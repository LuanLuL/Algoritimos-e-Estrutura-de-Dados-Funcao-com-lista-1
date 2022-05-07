# <b>AEDS: Funções com Lista</b>

<h3>Problemática</h3>

<p style="text-aling: center; ">Crie uma lista linear que consiga armazenar um conjunto de 100 nomes quaisquer, os quais serão salvos de forma aleatória. Feito a estrutura crie as seguintes ações: </p>

<div style="margin: 30px 30px 30px 30px;">
	<ul>
		<li>
			<p>Uma função que consiga identificar replicações na lista, ou seja, nomes iguais. Remova
todas as réplicas sem mover os ”ponteiro“.</p></li><li><p>Como você gerenciaria os espaços em branco para novas inserções? Qual seria o custo
dessas novas inserções?</p>
		</li>
	</ul>
</div>


<p>Elabore um pequeno programa que utilize uma matriz N x N, com o valor de N fornecido como entrada do programa, para executar a seguinte operação:</p>

<div style="margin: 30px 30px 30px 30px;"><p>1) - Preenche a matriz N x N com números inteiros aleatórios de 0 a 99;</p>
<p>2) - Considere a posição Linha 0 e Coluna 0 (0,0) como início;</p>
<p>3) - Considere a posição (N, N) como posição final;</p>
<p>4) - Percorra a matriz a partir do início, somando a cada passo, o próximo maior valor encontrado;</p>
<p>5) - O próximo valor pode ser o que está na mesma linha e imediatamente à direita, imediatamente à esquerda, bem como, o que está na coluna abaixo do numero corrente;</p>
<p>5.1) Há apenas uma exceção de percurso. Ao chegar na última linha deve-se percorre-la até o fim sem realizar mais migrações para colunas acima.</p>
<p>6) - Andando na matriz conforme as regras acima, qual o maior caminho do início até o final, sabendo-se que a soma das posições representa o tamanho do caminho.</p
<p>Observe um exemplo logo abaixo para uma matriz com N = 7.</p></div>

<h3>Solução</h3>
<p>É fato que para solucionar a problemática introduzida neste projeto existem diversar possibilidades. Todavia, foi se escolhida uma estratégia simples que não requisite tempo gasto no estudo de métodos com grau de dificuldade elevado. Nesse contexto, de acordo com as regras, a lógica consiste em tratar um por um dos possíveis caminhos para determinado elemento da matriz.</p> 
<p>Para isso, é preciso compreender que um determinado elemento <i>V</i> pode ser acessador pelos paramentros <i>i</i> e <i>j</i>, bem como seus vizinhos:</p>
<img src="img/Exemplo2.png" style="margin-left: 200px;">
<div style="margin: 30px 30px 30px 30px;"><p>1) - Para que a matriz possa ser alocada dinamicamente de acordo com o parâmetro N digitado pelo usuário foi se construído uma classe;</p>

<div style="margin: 30px 30px 30px 30px;"><p>Tecnologia: C++</p></div>
 
<div style="margin: 30px 30px 30px 30px; font-size: 30px;"><p><b>Feito por Luan Gonçalves Santos</p><b></div>

