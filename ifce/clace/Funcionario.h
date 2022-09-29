using std::string;

class Funcionario {
    private:
        int funcionarioID;
        double salario;
        string nome;
    public:
        void setDados(int _funcionarioID, double _salario, string _nome); // criação da função
        void getDados(void); // criação da função
};