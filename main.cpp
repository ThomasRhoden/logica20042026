#include<iostream>
#include<string>

int main(){

    std::string nomes[3] = {"Joao", "Paula", "Murilo"};
    int idades[3] = {27, 31, 20};
    int x, y, z;


    std::cout<<"Digite 0, enter, 1, enter, 2, enter!"<<std::endl;

    std::cin>>x;
    std::cin>>y;
    std::cin>>z;

    std::cout<<nomes[x]<<" tem "<<idades[x]<<" anos."<<std::endl;
    std::cout<<nomes[y]<<" tem "<<idades[y]<<" anos."<<std::endl;
    std::cout<<nomes[z]<<" tem "<<idades[z]<<" anos."<<std::endl;
    
    return 0;
}