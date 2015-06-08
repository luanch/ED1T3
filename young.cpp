#include "Young.h"

int main(){

	int Menu(){
	    int opcao;
	    
	    cout << "\n\t----------------------------------------------------" << endl;
	    cout << "\t| Selecione uma opcao:                       |" << endl;
	    cout << "\t|.....................................................|" << endl;
	    cout << "\t|                                            |" << endl;
	    cout << "\t| 1. Insere elemento (no. inteiro) no Quadro de Young.      |" << endl;
	    cout << "\t|                                            |" << endl;
	    cout << "\t| 2. Remove menor elemento do Quadro de Young.                                   |" << endl;
	    cout << "\t| 3. Imprime elementos do Quadro de Young. |" << endl;
	    cout << "\t| 											|" << endl;
	    cout << "\t| 0. Fim.									|" << endl;
	    cout << "\t|                                            |" << endl;
	    cout << "\t----------------------------------------------------" << endl;
	    cout << "\t-> Sua opcao: ";
	    cin >> opcao;
	    return opcao;
	}
}
void funcao::carrega(){ //herdado do trabalho anterior, precisa atualizar
    int item;
    int escolha;
    bool sair = false;
    while((sair!=true) && (escolha = Menu())){
        switch(escolha) {
            case '1':
                cout << "\n\tInsira novo elemento no Quadro de Young: ";
                cin >> item;
                if(cin.fail()){
                    cout << "\n\t(!!!) O valor inserido nao eh um numero inteiro. Tente novamente." << endl;
                    cin.clear();
					cin.ignore(256, '\n');
					break;
                } else {
                    L.insere(item); //herdado do outro trabalho, precisa modificar
                }
                break;
            case '2':
            	cout << \n\t"Menor elemento do Quadro de Young removido com sucesso.";
            	break;
            case '3':
            	cout << "\n\tImprimindo os elementos do Quadro de Young...";
            	break;
            case '0':
                sair = true;
                return 0; //sai do programa
                break;
            default:
                cout << "\n\t(!!!) Opcao invalida. Por favor, tente novamente. (!!!)" << endl;
				break;
        }
    }
    d = L.maior_comprimento();
}

//Como ela não passou o codigo dessa funcao, estou dando uma Googlesada. A principio vamos
//nos basear nessa funcao.
void youngify(int mat[][N], int i, int j)
{
    // Find the values at down and right sides of mat[i][j]
    int downVal  = (i+1 < N)? mat[i+1][j]: INF;
    int rightVal = (j+1 < N)? mat[i][j+1]: INF;
 
    // If mat[i][j] is the down right corner element, return
    if (downVal==INF && rightVal==INF)
        return;
 
    // Move the smaller of two values (downVal and rightVal) to 
    // mat[i][j] and recur for smaller value
    if (downVal < rightVal)
    {
        mat[i][j] = downVal;
        mat[i+1][j] = INF;
        youngify(mat, i+1, j);
    }
    else
    {
        mat[i][j] = rightVal;
        mat[i][j+1] = INF;
        youngify(mat, i, j+1);
    }
}
young(int linhas, int colunas){}
~young(){}
bool insere(int valor){}
bool remove(int &elem){}
bool vazio(){}
bool cheio(){}
void imprime(){}