#ifndef YOUNG_H
#define YOUNG_H
#include <iostream>
using namespace std;

class young{
protected:
	int m, n, ** y;
	void youngify(int i, int j);
public:
	young(int linhas, int colunas);
	~young();
	bool insere(int valor);
	bool remove(int &elem);
	bool vazio();
	bool cheio();
	void imprime();
};

#endif