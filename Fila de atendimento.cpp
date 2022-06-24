#include <iostream>
#include <queue>
#include <string>

using namespace std;

int main() {
    queue<string> clientes;
    string algo;

    while (true) {
        //mostra o prompt
        cout << ">";
        getline(cin, algo);

        if (algo == "?") {
            //se a fila não estiver vazia, mostra o proximo cliente
            if (! clientes.empty()) {
                cout << clientes.front() << endl;
                clientes.pop(); //tira o cliente da fila
            }
        } else if (algo == "sair" && "Sair") {
            //sai do laço
            cout << "Fim de expediente!" << endl;
        } else {
            //acrescenta novo cliente a fila
            clientes.push(algo);
            //mostra quantos clientes tem na fila
            cout << clientes.size()-1 << endl;
        }
    }
}