#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{
double n1, n2, BMI,multi,divi;
 
 std::cout<<"VALORES DE BMI\n";;
std::cout<<"Bajo peso: menos de 18.5\n";
std::cout<<"Normal: entre 18.5 y 24.9\n";
std::cout<<"Sobrepeso entre 25 y 29.9\n";
std::cout<<"Obeso: 30 o mas\n";
 
 
 std::cout << "Escriba su altura en metros \n";
    std::cin >> n1;
    
    
std::cout<<"Escriba su peso en kilogramos \n";
    std::cin >> n2;
 	
	
	 multi=n1*n1;
    
	BMI=n2/multi;

	
	
	std::cout<< "Su Altura es "<< n1<< std::endl;
	std::cout<< "Su Peso es "<< n2<< std::endl;
	std::cout<< "Su BMI es "<< BMI<< std::endl;
 
	
	
	
	
	
}
