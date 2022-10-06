#include <iostream>

#include <string>

using namespace std;

int userInput(int, int sistemasOp[], int);

int main() {
  float porcentagem[7] = {
    0
  };
  int sistemasOp[7] = {
    0
  };
  int valor = -1;
  int total = 0;
  int i = 1;
  string nomesSO[7] = {
    "Windows Server",
    "Unix",
    "Linux",
    "Netware",
    "Mac OS",
    "Outro",
  };
  cout << "Digite qual Sistema Operacional você mais gosta?" << endl;
  cout << " 1 - Windows Server" << endl;
  cout << " 2 - Unix" << endl;
  cout << " 3 - Linux" << endl;
  cout << " 4 - Netware" << endl;
  cout << " 5 - Mac OS" << endl;
  cout << " 6 - Outro" << endl;
  cout << " 0 - Finalizar " << endl;
  cout << "=====================================================" << endl;

  userInput(valor, sistemasOp, i);
  valor = 0;

  if (valor == 0) {
    cout << "Sistema Operacional Votos %" << endl;
    for (int i = 0; i < 7; ++i) {
      total += sistemasOp[i];

    }

    for (int x = 0; x < 7; ++x) {
      porcentagem[x] = (float) sistemasOp[x] / (float) total;
      cout << nomesSO[x] << " " << sistemasOp[x] << " " << porcentagem[x] * 100 << "% ";
    }

    cout << "\nTotal " << total << endl;
  }

  return 0;
}

int userInput(int valor, int sistemasOp[], int i) {
  while (valor != 0) {
    cout << "Usuário " << i << ":";
    cin >> valor;
    if (valor < 7 && valor > -1) {
      for (int j = 0; j < 7; j++) {
        if (valor == j + 1) {
          sistemasOp[j]++;
        }

      }

    } else {
      cout << "ERRO! Valor digitado fora do escopo! Tente Novamente" << endl;
    }
    i++;
  }

  return valor;

}