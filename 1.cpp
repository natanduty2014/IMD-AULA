#include <iostream>
using namespace std;
    int a;
    int b;
void func(int b){
     if(b != 0){
     std::cout << "\nvalor da divisao: " << a << "/" << b << " = " << a/b;
    }else{
     std::cout << "\no divisor tem que ser diferente de '0'";
     std::cout << "\nnumero divisor: ";
     std::cin >> b;
     func(b);
    }
   
}
int main() {

    std::cout << "\nnumero a ser dividido: ";
    std::cin >> a;
    std::cout << "\nnumero divisor: ";
    std::cin >> b; 
    func(b);
    return 0;
}