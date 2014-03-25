#include<iostream>
using namespace std;
main(){

int pessoaSigno1, pessoaSigno2, pessoaIdade1, pessoaIdade2, pessoaNascimento1, pessoaNascimento2;
int chances=0;
char pessoaSexo1, pessoaSexo2;

cout<<"Entre com o sexo do(a) pretendente (M ou F):\n";
cin>>pessoaSexo1;

cout<<"Entre com o ano de nascimento do(a) pretendente(AAAA):\n";
cin>>pessoaNascimento1;
pessoaIdade1 = 2014 - pessoaNascimento1;

cout<<"Entre com o codigo do signo do(a) pretendente(1 a 12):\n";
cin>>pessoaSigno1;

cout << "Entre com o sexo do(a) parceiro(a) (M ou F)\n";
cin>>pessoaSexo2;

cout << "Entre com o ano de nascimento do(a) parceiro(a)(AAAA)\n";
cin>>pessoaNascimento2;
pessoaIdade2 = 2014 - pessoaNascimento2;

cout << "Entre com o codigo do signo do(a) parceiro(a)(1 a 12)\n";
cin>>pessoaSigno2;

if(pessoaSigno1 == pessoaSigno2)
    chances += 50;

if(pessoaSexo1 == pessoaSexo2 && pessoaIdade1 == pessoaIdade2 )
    chances += 25;

int casalDiferencaIdade = 0;
if(pessoaSexo1 == 'm' || pessoaSexo1 == 'M' && pessoaSexo2 =='f' || pessoaSexo2 =='F'){
    casalDiferencaIdade = pessoaIdade1 - pessoaIdade2;
     if(casalDiferencaIdade < -5)
        casalDiferencaIdade = -5;
    if(casalDiferencaIdade > 5)
        casalDiferencaIdade = 5;
    if(casalDiferencaIdade > 0)
    chances += casalDiferencaIdade*5;
    else
        if(casalDiferencaIdade < 0)
        chances -= casalDiferencaIdade*5;
}
if(pessoaSexo1 == 'f' || pessoaSexo1 == 'F' && pessoaSexo2 =='m' || pessoaSexo2 =='M'){
    casalDiferencaIdade = pessoaIdade1 - pessoaIdade2;
    if(casalDiferencaIdade < -5)
        casalDiferencaIdade = -5;
    if(casalDiferencaIdade > 5)
        casalDiferencaIdade = 5;
    if(casalDiferencaIdade < 0)
    chances += casalDiferencaIdade*5;
    else

        if(casalDiferencaIdade > 0)
        chances -= casalDiferencaIdade*5;
}



cout <<"Eles possuem "<< chances << " % de chances de se apaixonarem\n";
}

 return 0;
 }
