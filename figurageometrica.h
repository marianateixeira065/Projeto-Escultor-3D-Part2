#ifndef FIGURAGEOMETRICA_H
#define FIGURAGEOMETRICA_H

#include "sculptor.h"

class FiguraGeometrica {
protected:
    // Propriedades protegidas para que as classes filhas (PutBox, PutSphere...) 
    // consigam acessar e modificar essas variáveis diretamente.
    float r, g, b, a; 

public:
    // Destrutor virtual: é uma boa prática essencial em C++ quando usamos polimorfismo
    // para garantir que a memória das classes filhas seja liberada corretamente.
    virtual ~FiguraGeometrica() {}

    // A função virtual pura (indicada pelo "= 0"). 
    // Isso é o que transforma esta classe em uma Classe Abstrata.
    virtual void draw(Sculptor &t) = 0; 
};

#endif // FIGURAGEOMETRICA_H