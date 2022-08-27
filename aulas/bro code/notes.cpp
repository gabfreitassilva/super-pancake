#include <iostream>
#include <cmath>

/* typedef
// typedef std::string text_t;
// typedef int number_t;
using text_t = std::string;
using number_t = int;
 
int main() {

    // typedef = reserver keyword used to create an additional name
                 (alias) for another data type.
                 New indentifier for an existing type
                 Helps with readabillity and reduces typos
                 Use when there is a clear benefit
                 Replaced with 'using' (work better w/ templates)
    

    text_t firstName = "Junim";
    number_t age = 25;

    std::cout << firstName << '\n';
    std::cout << age << '\n';

    return 0; 
}*/

/* type conversion
int main() {
    // type conversion = conversion a value of one data type to another
    //                   Implicit = automatic
    //                   Explicit = Precede value with new data type (int)

    int correct = 7;
    int questions = 10;
    double score = correct/(double)questions * 100;

    std::cout << score << "%";

    return 0;
} */

/* user input
int main() {
    std::string name;
    int age;

    std::cout << "What's your age?: ";
    std::cin >> age;

    std::cout << "What's your full name?: ";
    std::getline(std::cin >> std::ws, name); // std::ws limpa o buffer criado por uma linha nova no primeiro input

    std::cout << "Hello " << name << '\n';
    std::cout << "You are " << age << " years old";

    return 0;
}
*/

/* useful math related functions
int main() {
    double a = 3.999, b = 7, c;
    //c = std::max(a, b);
    //c = std::min(a, b);
    //c = pow(a, 2);
    //c = sqrt(9);
    //c = abs(-5); // devolve o modulo do numero
    //c = round(a); // arredondamento
    //c = ceil(a); // retorna o menor valor inteiro possivel, maior ou igual ao meu valor a
    c = floor(a); // retorna o maior valor inteiro possivel, menor ou igual ao meu valor a

    std::cout << c;

    return 0;
}
*/

/* if statements
int main() {
    // if statements = do something if a condidtion is true.
    //                 if not, then don't do it.

    int age;

    std::cout << "Enter your age: ";
    std::cin >> age;

    if(age >= 18) {
        std::cout << "Welcome to the site!";
    } else if(age < 18 && age >= 1) {
        std::cout << "You are not old enough to enter!";
    } else {
        std::cout << "You haven't been born yet!";
    }


    return 0;
}
*/

/* switch
int main() {
    // switch = alternative to using many "else if" statements
    //          compare one value against matching cases

    int month;

    std::cout << "Enter the month (1-12): ";
    std::cin >> month;

    switch(month) {
        case 1:
            std::cout << "It is January";
            break;
        case 2:
            std::cout << "It is February";
            break;
        case 3:
            std::cout << "It is March";
            break;
        case 4:
            std::cout << "It is April";
            break;
        case 5:
            std::cout << "It is May";
            break;
        case 6:
            std::cout << "It is June";
            break;
        case 7:
            std::cout << "It is July";
            break;
        case 8:
            std::cout << "It is August";
            break;
        case 9:
            std::cout << "It is September";
            break;
        case 10:
            std::cout << "It is October";
            break;
        case 11:
            std::cout << "It is November";
            break;
        case 12:
            std::cout << "It is December";
            break;
        default:
            std::cout << "Please enter it only numbers (1-12)";
            break;
    }

    return 0;
}
*/

/* ternary operator
int main() {
    // ternary operator ?: = replacement to an if/else statement.
    // condition ? expresion1 : expresion2;

    //double score = 8.9;
    //score < 7 ? std::cout << "You fail!" : std::cout << "You pass!";

    //int number = 7;
    //(number % 2) ? std::cout << "ODD" : std::cout << "EVEN";

    bool hungry = true;
    //hungry ? std::cout << "You are hungry" : std::cout << "You are full";
    std::cout << (hungry ? "You are hungry" : "You are full");

    return 0;
}
*/

/* logical operators
int main() {
    
    // && (and) = check if two conditions are true
    // || (or) = check if at least one of two conditions is true
    // ! (not) = reverses the logical state of its operand

    int temp;
    bool sunny = false;

    std::cout << "Enter the temperature: ";
    std::cin >> temp;

    if(temp <= 0 || temp >= 30) {
        std::cout << "The temperature is bad!\n";
    }
    else {
        std::cout << "The temperature is good!\n";
    }

    if (!sunny) {
        std::cout << "It is cloudy outside!";
    }
    else {
        std::cout << "It is sunny outside!";
    }

    return 0;
}
*/

