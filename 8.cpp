#include <iostream>

using namespace std;

float umidade, temperatura;

int main()
{
    std::cout << "Valor da umidade: ";
    std::cin >> umidade;
    std::cout << "\nValor da temperatura: ";
    std::cin >> temperatura;

    if(temperatura == 30){
        std::cout << "12v 100 porcento da bomba";
    }else if (temperatura <= 29){
        //temperatura de 29 graus
        //umidade alta
       if((umidade/100) <= 90){
           std::cout << "\n60 porcento da capacidade, tensao: " << 0.60*12 << "V\n umidade: " << umidade/100 << "porcento";

        //umidade baixa
       }else if((umidade/100) <= 70){
            std::cout << "\n80 porcento da capacidade, tensao: " << 0.80*12 << "V\n umidade: " << umidade/100 << "porcento";
       }else{
           std::cout << "Erro!";
       }
    //temperatura de 19 graus
    }else if (temperatura <= 19){
        //umidade for alta
        if((umidade/100) <= 90){
            std::cout << "\n30 porcento da capacidade, tensao: " << 0.30*12 << "V\n umidade: " << umidade/100 << "porcento";

        //umidade diferente de alta
        }else{
             std::cout << "\n50 porcento da capacidade, tensao: " << 0.50*12 << "V\n umidade: " << umidade/100 << "porcento";
        }
    // abaixo de 10
    }else if (temperatura < 10){
             std::cout << "\n15 porcento da capacidade, tensao: " << 0.15*12 << "V \n umidade: " << umidade/100 << "porcento";
    }else{
        std::cout << "Erro!";
    }
    return 0;
}


















