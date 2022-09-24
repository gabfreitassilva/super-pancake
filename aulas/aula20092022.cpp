#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::cin;

class GradeBook {
    private:
        string courseName;

    public:
        GradeBook (string name) {
            setCourseName(name);
        }

        void setCourseName (string name) {
            courseName = name;
        }

        string getCourseName () {
            return courseName;
        }

        void displayMessage () {
            cout << "Bem-vindo ao livro de notas de \n";
            cout << getCourseName() << "!" << '\n';
        }
};

int main() {
    GradeBook gradeBook1 ("Ling de Programacao");
    GradeBook gradeBook2 ("Algoritmos");

    cout << "gradeBook1 criado para a disciplina: ";
    cout << gradeBook1.getCourseName() << '\n';
    cout << "gradeBook2 criado para a disciplina: ";
    cout << gradeBook2.getCourseName() << '\n';

    return 0;
}