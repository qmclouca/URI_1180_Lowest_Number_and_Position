#include <iostream>
using namespace std;

int main() {
    int N=0, X[1000], menor=99999999, position=0;
    std::cin >> N;
    for (int aux = 0; aux<N; aux++){
        X[aux] = 9999999;
        std::cin >> X[aux];
    }
    rerun:
    for (int aux = 0; aux<N; aux++){
        if (X[aux] < menor){
            menor = X[aux];
            position = aux;
            goto rerun;
        }
    }
    std::cout << "Menor valor: " << menor << std::endl;
    std::cout << "Posicao: " << position << std::endl;
    return 0;
}
