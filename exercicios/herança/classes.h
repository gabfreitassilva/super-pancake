class Veiculos {
    private:
        int rodas, passageiros;
    public:
        void fixaRodas(int valor);
        int obtemRodas();
        void fixaPassageiros(int valor);
        int obtemPassageiros();
};

class Caminhao : public Veiculos {
    private:
        int carga;
    public:
        void fixaCarga(int valor);
        int obtemCarga();
        void exibir();
};

enum tipo {carro, furgao, perua};
class Automovel : public Veiculos {
    private:
        enum tipo tipoCarro;
    public:
        void fixaTipo(enum tipo t);
        enum tipo obtemTipo();
        void exibir();
};

enum tipoMoto {scooter, custom, offroad};
class Motocicleta : public Veiculos {
    private:
        enum tipoMoto t_moto;
    public:
       void fixaTipoMoto(enum tipoMoto t);
       enum tipoMoto obtemTipoMoto();
       void exibir();
};

enum tipoAviao {jato, monomotor, comercial};
class Aviao : public Veiculos {
    private:
        enum tipoAviao modelo;
    public:
        void fixaTipoAviao(enum tipoAviao t);
        enum tipoAviao obtemTipoAviao();
        void exibir();
};