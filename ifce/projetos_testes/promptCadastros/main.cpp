#include <iostream>
#include <fstream>
#include <string>
#include <vector>

struct Pessoa {
    std::string nome;
    std::string senha;
};

void salvarUsuarios(const std::vector<Pessoa>& usuarios) {
    std::ofstream arquivo("usuarios.txt");
    if (arquivo.is_open()) {
        for (const auto& usuario : usuarios) {
            arquivo << usuario.nome << " " << usuario.senha << std::endl;
        }
        arquivo.close();
    } else {
        std::cerr << "Erro ao salvar usuarios no arquivo.\n";
    }
}

void carregarUsuarios(std::vector<Pessoa>& usuarios) {
    std::ifstream arquivo("usuarios.txt");
    if (arquivo.is_open()) {
        std::string nome, senha;
        // maneira eficaz de ler o arquivo e guardar as variaveis
        // o operador >> vai extrair os dados do arquivo e guardas nas variaveis desejadas
        // até encontrar um espaço em branco, uma nova linha ou o fim do arquivo
        while (arquivo >> nome >> senha) {
            Pessoa pessoa;
            pessoa.nome = nome;
            pessoa.senha = senha;
            usuarios.push_back(pessoa);
        }
        arquivo.close();
    } else {
        std::cerr << "Arquivo de usuários nao encontrado. Criando novo arquivo.\n";
    }
}

bool verificarNomeUsuarioExistente(const std::vector<Pessoa>& usuarios, const std::string& nome) {
    for (const auto& usuario : usuarios) {
        if (usuario.nome == nome) {
            return true; // Nome de usuário já existe
        }
    }
    return false; // Nome de usuário não existe
}

bool fazerLogin(const std::vector<Pessoa>& usuarios, std::string nome, std::string senha) {
    for (const auto& usuario : usuarios) {
        if (usuario.nome == nome && usuario.senha == senha) {
            return true;
        }
    }
    return false;
}

int main() {
    std::vector<Pessoa> usuarios;
    carregarUsuarios(usuarios);

    int escolha;
    std::cout << "Bem-vindo!\n";
    std::cout << "1. Fazer login\n";
    std::cout << "2. Criar novo cadastro\n";
    std::cout << "Escolha uma opcao: ";
    std::cin >> escolha;

    if (escolha == 1) {
        std::string nome, senha;
        std::cout << "Digite o nome de usuario: ";
        std::cin >> nome;
        std::cout << "Digite a senha: ";
        std::cin >> senha;

        if (fazerLogin(usuarios, nome, senha)) {
            std::cout << "Login bem-sucedido. Bem-vindo, " << nome << "!\n";
        } else {
            std::cout << "Login falhou. Nome de usuario ou senha incorretos.\n";
        }
    } else if (escolha == 2) {
        std::string nome, senha;
        bool nomeExistente;

        do {
            std::cout << "Digite o nome de usuario desejado: ";
            std::cin >> nome;
            nomeExistente = verificarNomeUsuarioExistente(usuarios, nome);

            if (nomeExistente) {
                std::cout << "Nome de usuario ja em uso. Escolha outro nome de usuario.\n";
            }

        } while (nomeExistente);

        std::cout << "Digite a senha desejada: ";
        std::cin >> senha;

        Pessoa novaPessoa;
        novaPessoa.nome = nome;
        novaPessoa.senha = senha;
        usuarios.push_back(novaPessoa);
        salvarUsuarios(usuarios);

        std::cout << "Cadastro bem-sucedido. Bem-vindo, " << nome << "!\n";
    } else {
        std::cout << "Opcao invalida. Encerrando o programa.\n";
    }

    return 0;
}