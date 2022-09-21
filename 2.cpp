#include <iostream>
using namespace std;
    int a;
    int b;
    int maior;
    int menor;
void ordernar(int a, int b){
    if(a > b){
      maior = a;
      menor = b;
      std::cout << menor << ", " << maior;
    }else if(a < b){
      maior = b;
      menor = a;
      std::cout << menor << ", " << maior;
    }else{
        std::cout << "\nos numeros sao iguais. Erro!";
        std::cout << "\nprimeiro numero: ";
        std::cin >> a;
        std::cout << "\nsegundo numero: ";
        std::cin >> b; 
        ordernar(a, b);
    }
}
int main() {
    std::cout << "\nprimeiro numero: ";
    std::cin >> a;
    std::cout << "\nsegundo numero: ";
    std::cin >> b; 
    //
    ordernar(a, b);
    return 0;
}