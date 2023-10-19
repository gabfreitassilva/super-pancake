#include <string>
#include <random>
#include <fstream>

std::string palavra() {
    std::string arquivo_palavras, palavra;
    int contar_palavras, posicao_palavra, numero_aleatorio;

    std::fstream fs;
    //fs.open("C:\\Users\\conta\\Documents\\aprendendo\\palavras.txt", std::fstream::in); // abre o arquivo desejado em modo de leitura somente.
    fs.open("C:\\Users\\Gabriel Freitas\\Documents\\Codes\\cpp\\forca\\palavras.txt", std::fstream::in); // abre o arquivo desejado em modo de leitura somente.

    if(fs.is_open()) { 
        // se o arquivo estiver aberto, o programa continua
    } else {
        return "erro na abertura do arquivo";
    } // caso ele não esteja aberto, o programa termina e retorna a mensagem acima

    std::getline(fs, arquivo_palavras); // faz a leitura de uma única linha do arquivo e guarda a informação na variável informada.

    fs.close(); // fecha o arquivo.

    contar_palavras = (arquivo_palavras.size() / 5) - 1; // efetua a contagem de palavras contidas no arquivo, porém o resultado deve ser subtraído por 1.

    // aqui faremos a geração do número aleatório entre 0 e a quantidade de palavras guardada.
    // antes fizemos a subtração de uma unidade, pois a contagem de vetores
    // sempre inicia pelo número 0.
    std::random_device rd;
    std::mt19937 mt(rd());
    std::uniform_int_distribution<int> dist(0, contar_palavras);
    numero_aleatorio = dist(mt);

    // aqui fazemos com que o número aleatório gerado seja sempre um múltiplo de 5
    // assim sempre vamos ter número de 5 em 5, indicando onde a nossa palavra
    // vai estar começando.
    posicao_palavra = numero_aleatorio * 5;

    for(int i = posicao_palavra; i < (posicao_palavra + 5); i++) {
        palavra += arquivo_palavras[i]; // de acordo com a posição da palavra, guardaremos a mesmo em uma variável separada.
    }

    return palavra; // aqui retornaremos a palavra escolhida aleatoriamente.
}