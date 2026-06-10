#ifndef PUTVOXEL_H
#define PUTVOXEL_H

#include "figurageometrica.h"
#include "sculptor.h"

// PutVoxel herda publicamente de FiguraGeometrica
class PutVoxel : public FiguraGeometrica {
    int x, y, z;
public:
    // Construtor que recebe as coordenadas e as propriedades de cor
    PutVoxel(int x, int y, int z, float r, float g, float b, float a);
    
    // Destrutor
    ~PutVoxel();
    
    // O método que de fato fará o desenho na matriz
    void draw(Sculptor &t);
};

#endif // PUTVOXEL_H