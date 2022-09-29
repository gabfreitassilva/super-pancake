using std::string;

class Aviao {
    private:
        int maxSpeed;
        string tipo;
    public:
        void talvezFunciona(int modelo);
        void setModelo(int maxSpeed, string tipo);
        void getModelo(void);
};