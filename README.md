# <b>AEDS: Funções com Lista</b>

<h3>Problemática</h3>

<p style="text-aling: center; ">Crie uma lista linear que consiga armazenar um conjunto de 100 nomes quaisquer, os quais serão salvos de forma aleatória. Feito a estrutura conduza as seguintes ações: </p>

<div style="margin: 30px 30px 30px 30px;">
	<ul>
		<li>
			<p>Uma função que consiga identificar replicações na lista, ou seja, nomes iguais. Remova
todas as réplicas sem mover os ”ponteiro“.</p></li><li><p>Como você gerenciaria os espaços em branco para novas inserções? Qual seria o custo
dessas novas inserções?</p>
		</li>
	</ul>
</div>

<h3>Solução</h3>

<p>É fato que para solucionar a problemática introduzida neste projeto existem diversar possibilidades. Todavia, foi se escolhida uma estratégia simples que não requisite tempo gasto no estudo de métodos com grau de dificuldade elevado. Nesse contexto, de acordo com as regras, a lógica consiste em tratar um por um dos possíveis caminhos para determinado elemento da matriz.</p> 
<p>Para isso, é preciso compreender que um determinado elemento <i>V</i> pode ser acessador pelos paramentros <i>i</i> e <i>j</i>, bem como seus vizinhos:</p>
<img src="img/Exemplo2.png" style="margin-left: 200px;">
<div style="margin: 30px 30px 30px 30px;"><p>1) - Para que a matriz possa ser alocada dinamicamente de acordo com o parâmetro N digitado pelo usuário foi se construído uma classe;</p>

<div style="margin: 30px 30px 30px 30px;"><p>Tecnologia: C++</p></div>
 
<div style="margin: 30px 30px 30px 30px; font-size: 30px;"><p><b>Feito por Luan Gonçalves Santos</p><b></div>

