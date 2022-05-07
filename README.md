# <b>AEDS: Funções com Lista</b>

<h3>Problemática</h3>

<p style="text-aling: center;">Crie uma lista que consiga armazenar um conjunto de 100 nomes quaisquer, os quais serão salvos de forma aleatória. Feito a estrutura conduza as seguintes ações: </p>

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

<p style="text-aling: center;">Tendo em vista a problemática, a estrutura selecionada para sua resolução foi a lista encadeada simples. Contextualizando, uma lista encadeada simples é uma sequência de células; cada célula contém um objeto (todos os objetos são do mesmo tipo) e o endereço da célula seguinte.  Nesse contexto, é empregado o Item nas células sendo que cada objeto é um registro que pode ser definido assim:</p> 

<div style="margin: 30px 30px 30px 30px;">
	<code>
	  	Class Item{
      string value; 
      Item *prox;
   };
   		
	</code>
	  
</div>

<div style="margin: 30px 30px 30px 30px;"><p>Tecnologia: C++</p></div>
 
<div style="margin: 30px 30px 30px 30px; font-size: 30px;"><p><b>Feito por Luan Gonçalves Santos</p><b></div>

