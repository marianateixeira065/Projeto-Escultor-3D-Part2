#include "putvoxel.h"

// O construtor repassa as propriedades para as variáveis da classe
PutVoxel::PutVoxel(int x, int y, int z, float r, float g, float b, float a) {
    this->x = x;
    this->y = y;
    this->z = z;
    this->r = r;
    this->g = g;
    this->b = b;
    this->a = a;
}

PutVoxel::~PutVoxel() {
    // Como não alocamos memória dinâmica (new) diretamente dentro do PutVoxel,
    // o destrutor pode ficar vazio.
}

// O método draw instrui o próprio objeto a se desenhar na tela 't'
void PutVoxel::draw(Sculptor &t) {
    // Configura a cor da tela baseada na cor guardada dentro da figura
    t.setColor(r, g, b, a);
    
    // Usa o método da tela para ativar o bloco
    t.putVoxel(x, y, z);
}