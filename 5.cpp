#include <iostream>
using namespace std;
    int a;
void func(int a){
    if(a%2 == 0){
     if(a < 0){
          std::cout << "o numero e par negativo: " << a;
     }else{
          std::cout << "o numero e par positivo: " << a;
     }
    }else{
     if(a < 0){
          std::cout << "\nnumero e impar negativo: " << a;
     }else{
          std::cout << "\nnumero e impar positivo: " << a;
     }
    }
   
}
int main() {
    std::cout << "\nDigite o numero: ";
    std::cin >> a;
    func(a);
    return 0;
}