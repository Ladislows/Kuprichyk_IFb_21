#include <iostream> 

int main(){
    unsigned int n;
    std::cin>>n;
    for(unsigned int i=1; i<=n;++i){
        for(unsigned int j=1;j<=n;++j)
            std::cout<<i*j<<"\t"; // Табуляция
        std::cout<<std::endl;
    }
    system("pause");
    return 0;  // с клавиатуры надо ввести число, до которого будет строиться квадрат Пифагора
}              // в обычной таблице Пифагора это число 9