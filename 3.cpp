#include <iostream>
using namespace std;
    int a;
void func(int a){
    if(a%2 == 0){
     std::cout << "o numero e par: " << a;
    }else{
     std::cout << "\nnumero e impar: " << a;
    }
   
}
int main() {

    std::cout << "\nDigite o numero: ";
    std::cin >> a;
    func(a);
    return 0;
}