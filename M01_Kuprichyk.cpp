#include <iostream> 

int main(){
 int n;
    std::cin>>n;
    for( int i=1; i<=n;++i){
        for( int j=1;j<=n;++j)
            std::cout<<i*j<<"\t"; // Табуляция
        std::cout<<std::endl;
    }
    return 0;  // с клавиатуры надо ввести число, до которого будет строиться квадрат Пифагора
}              // в обычной таблице Пифагора это число 9
