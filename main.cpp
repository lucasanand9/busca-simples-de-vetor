#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    int inteiros;

    vector<int> numero(n);
    vector<int> frequencia(10);

    for (int i = 0; i < n; i++)
    {
        cin >> numero[i];
    }

    for (int i = 0; i < n; i++)
    {
      while (numero[i] > 0)
      {
        //pegando o ultimo algarismo
       frequencia[numero[i]%10]++ ;
       //dividindo por 10 para ir para o proximo algarismo
       numero[i] /= 10;
      }
        
    }

    for (int i = 0; i < 10; i++)
    {
        cout << i << " - " << frequencia[i] << endl;
    }
    
    // algarismos[0] = {2, 2, 4}
    // algarismos[0][0] = 2
    // algarismos[0][2] = 4

}