#include <iostream>

using namespace std;

int main() {

    char palavra[30], letra[1], secreta[30];
    bool acerto = false;
    int i = 0, tam = 0, vida = 4, acertos = 0;

    cout << "Digite a palavra que secreta: ";
    cin >> palavra;

    while (palavra[i] != '\0') {
        i++;
        tam++;
    }

    for(i = 0; i < 30; i++) {
        secreta[i] = '_';
    }
    
    while((vida > 0) && (acertos < tam)) {
        cout << "\nVoce tem " << vida << " vidas." << "\n";
        cout << "\nPalavra secreta: ";
        for(i = 0; i < tam; i++) {
            cout << secreta[i];
        }

        cout << "\n\nDigite uma letra: ";
        cin >> letra[0];

        for(i = 0; i < tam; i++) {
            if (letra[0] == palavra[i]) {
                secreta[i] = palavra[i];
                acerto = true;
                acertos++;
            }
        
        }

        if (acerto == false) {
            vida--;
        }
        
        acerto = false;

    }

    if (acertos == tam) {
        cout << "\nVoce venceu!";
    } else {
        cout << "\nVoce perdeu!";
    }
    

    
    

    

    

    



    


    return 0;
}