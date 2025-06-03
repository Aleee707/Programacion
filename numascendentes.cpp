/// Nombre:Alessandra Torres Hernandez

#include <iostream>  
#include <vector>   
#include <algorithm> 
#include <iomanip>  

int main() {
    std::vector<double> misNumeros(10);

    std::cout << "Ordenador de Numeros Decimales" << std::endl;
    std::cout << "ingresa 10 numeros, uno por uno:" << std::endl;

    for (int i = 0; i < 10; ++i) {
        std::cout << "Ingresa el numero " << (i + 1) << ": "; 
        std::cin >> misNumeros[i];
    }
    
    std::sort(misNumeros.begin(), misNumeros.end());
    std::cout << "\n--- Tus numeros ordenados de menor a mayor son: ---" << std::endl;
    std::cout << std::fixed << std::setprecision(2);

    for (int i = 0; i < 10; ++i) {
        std::cout << misNumeros[i] << std::endl; 
    }
    
    return 0;
}
