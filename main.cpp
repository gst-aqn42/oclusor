#include <iostream>

int main(){
  char entrada;
  while(std::cin >> entrada){
    //
    switch (entrada){
      case 'a':{
        int id; int prioridade; std::string nome;
        std::cin >> id; 
        std::cin >> nome;
        std::cin >> prioridade;
        listProc.adicionar_processo(Processo(id, nome, prioridade));
        break;
      }
      case 'm':{
        listProc.remover_processo_maior_prioridade();
        break;
      }
      case 'r':{
        int id;
        std::cin >> id;
        listProc.remover_processo_por_id(id);
        break;
      }
      case 'n':{
        listProc.remover_processo_menor_prioridade();
        break;
      }
      case 'p':{
        listProc.imprimir_lista();
        break;
      }
      case 'b':{
        avaliacao_basica();
        break;
      }
    }
  
  }
  
  
  return 0;
}











#include <iostream>
#include <string>
#include <sstream>
#include <fstream>




int main(){
  
  
  
  std::string line;
  
  //Loop para ler o arquivo
  
  while(std::getline(std::cin,line)){
    std::istringstream iss(line)

        switch ('')
        {
        case constant expression:
            /* code */
            break;
        
        default:
            break;
        }

        //O seu formato é O <objeto> <x> <y> <largura>.
        //M <tempo> <objeto> <x> <y>
        //C <tempo>

    }
}

        /*Objeto A linha do tipo objeto se inicia com O e contem o identificador do objeto,
        a sua posição inicial (que é o centro do objeto) e a largura do mesmo.
        */
        //O seu formato é O <objeto> <x> <y> <largura>.
        
        /*Movimento: A linha do tipo movimento se inicia com M e contém uma marca de 
        tempo (um inteiro positivo), o identificador do objeto e a nova posição dele.
        */
        //M <tempo> <objeto> <x> <y>

        /*Cena: A linha do tipo cena se inicia com C e contem apenas uma marca de tempo.
        O seu formato é C <tempo>.*/
        //C <tempo>