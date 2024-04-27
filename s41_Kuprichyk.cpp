#include <iostream> 
 using namespace std;

int squared_sum(int a, int b) { 
  return (a+b)*(a+b); 
} 
 
int main() { 
  cout << squared_sum(12, 6) <<"\n"; 
  cout << squared_sum(12, -6) <<"\n"; 

  return 0; 
}