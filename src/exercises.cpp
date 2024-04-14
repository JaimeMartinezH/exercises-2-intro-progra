
#include <cmath>
#include <iostream>

using namespace std;

void exercise_1(string s1) {
<<<<<<< HEAD
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
}

void exercise_2(string s1) {
  // TODO: YOUR CODE HERE
}

void exercise_3(string s1) {
  // TODO: YOUR CODE HERE
}

void exercise_4(int n) {
  // TODO: YOUR CODE HERE
}

void exercise_5(int n, int k) {
  // TODO: YOUR CODE HERE
}

int exercise_6(int n) {
  // TODO: YOUR CODE HERE
  return 0;
}

void exercise_7(int n) {
  // TODO: YOUR CODE HERE
}

void exercise_8(string s) {
  // TODO: YOUR CODE HERE
}

void exercise_9(string s) {
  // TODO: YOUR CODE HERE
}

int exercise_10(int a, int b) {
  // TODO: YOUR CODE HERE
  return 0;
}

void exercise_11() {
  // TODO: YOUR CODE HERE
}

void exercise_12() {
  // TODO: YOUR CODE HERE
}

long exercise_13(int n, int k) {
  // TODO: YOUR CODE HERE
  return 0;
}

string exercise_14(int n) {
  // TODO: YOUR CODE HERE
  return "";
}

void exercise_15(int decimal) {
  // TODO: YOUR CODE HERE
}

void exercise_16(int divident, int divider) {
  // TODO: YOUR CODE HERE
}

void exercise_17(int n) {
  // TODO: YOUR CODE HERE
}

void exercise_18_19(int debut, int fin) {
  // TODO: YOUR CODE HERE
}