#include <iostream>

using namespace std;

int main (){

 int temp_serv;
 float sal_a, sal_f;

 cout<<"Digite seu tempo de serviço dentro da empresa:"<<endl;
 cin>>(temp_serv);

 cout<<"Digite seu salario atual:"<<endl;
 cin>>(sal_a);

 if(temp_serv < 10){
    sal_a = sal_a *1.08;
 }else{
    sal_a = sal_a * 1.10;
 }
 cout<<"O seu salario atual sera de:"<<sal_a<<endl;

 return 0;



}
