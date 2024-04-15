#include <iostream>
void practice(exercise_1(string s1));
#include <iostream>
#include <string>
#include <vector>

std::vector<int> encontrar_indices(const std::string & texto) {
    std::vector<int> indices;
    int indice = 0;

    for (char c : texto) {
        if (c == ' ') {

            indices.push_back(indice);
        }
        indice++;
    }

    indices.push_back(indice);

    return indices;
}

int main() {
    std::string texto;
    std::cout << "Ingrese una línea de texto:" << std::endl;
    std::getline(std::cin, texto);

    std::vector<int> indices = encontrar_indices(texto);

    for (int indice : indices) {
        std::cout << indice << std::endl;
    }

    return 0;
}