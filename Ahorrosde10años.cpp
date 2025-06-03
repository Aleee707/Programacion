#include <iostream> 
#include <iomanip>  

int main() {
    
    int aniosTotales = 10;
    double aporteMensual = 1000.0;
    double tasaInteresMensual = 0.03; 

    int totalMeses = aniosTotales * 12;

    double totalAhorrado = 0.0;

    std::cout << "Años a ahorrar: " << aniosTotales << std::endl;
    std::cout << "Aporte mensual: $" << std::fixed << std::setprecision(2) << aporteMensual << std::endl;
    std::cout << "Interes mensual: " << tasaInteresMensual * 100 << "%" << std::endl;

    for (int mes = 1; mes <= totalMeses; ++mes) {
       
        totalAhorrado = totalAhorrado + aporteMensual;
        double interesesGanados = totalAhorrado * tasaInteresMensual;
        totalAhorrado = totalAhorrado + interesesGanados;

    }

    std::cout << "\nResultado Final" << std::endl;
    std::cout << "Despues de " << aniosTotales << " anios (o " << totalMeses << " meses)," << std::endl;
    std::cout << "¡Habrias ahorrado un total de: $" << std::fixed << std::setprecision(2) << totalAhorrado << "!" << std::endl;
   
    return 0; 
}
