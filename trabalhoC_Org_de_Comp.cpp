#include<stdio.h>
#include<windows.h>
/****************************************************************************************/
//Estrutura do produto
struct produto{
	int codigo;
	int quantidade;
};
typedef struct produto PROD;

/****************************************************************************************/
//Funções
void insereProdutos(produto estoque[]);
int obtemquant(produto estoque[], int codigo);

/****************************************************************************************/
//Principal
main(){
	
	PROD estoque[5000];//vetor de produtos do tipo PROD(struct produto)
	
	insereProdutos(estoque); //cadastrar produtos automaticamente para teste
	
	int cod;
	int opcao;
	int quant;
	
	do{
		system("cls");
		printf("DIGITE O CODIGO DO PRODUTO A BUSCAR A QUANTIDADE: ");
		scanf("%d",&cod);
	
		quant = obtemquant(estoque, cod);
		
		if(quant == -1){
			printf("PRODUTO NAO ENCONTRADO!!\n\n");
		}else{
			printf("PRODUTO ENCONTRADO\nQUANTIDADE: %d \n\n", quant);
		}
		
		printf("\n\nSAIR DO PROGRAMA? 0(zero) SAIR || (outro valor) NOVA PESQUISA: >>");
		scanf("%d",&opcao);
	}while(opcao != 0);
	
	
}

/****************************************************************************************/
//Função obtem a quantiodade de produtos no estoque (TAREFA: PASSAR ESSA FUNÇÃO PARA MIPS)
int obtemquant(produto estoque[], int codigo){
	  	int i = 0; 
  		int achou = 0; 
  		int quantidade; 
  		
  while ((i < 5000) && (achou==0)) { 
    	if (estoque[i].codigo == codigo) { 
      			quantidade = estoque[i].quantidade; 
      			achou = 1; 
    	}else{ 
      		i++; 
    	} 
    } 
    
  if (achou != 1) {
  		return(-1);
  }else{
  	return(quantidade); 
  }
    
}

/****************************************************************************************/
//Função para inserir produtos no estoque
void insereProdutos(produto estoque[]){
	
	estoque[0].codigo = 1;
	estoque[0].quantidade = 25;
	
	estoque[1].codigo = 2;
	estoque[1].quantidade = 31;
	
	estoque[2].codigo = 3;
	estoque[2].quantidade = 15;
	
	estoque[3].codigo = 4;
	estoque[3].quantidade = 107;
	
	estoque[4].codigo = 5;
	estoque[4].quantidade = 8;
	
	estoque[5].codigo = 0;
	estoque[5].quantidade = 94;
	
	int i = 6;
	
	while(i<=5000){
		estoque[i].codigo = NULL;
		estoque[i].quantidade = NULL;
		i++;
	}
	
}

