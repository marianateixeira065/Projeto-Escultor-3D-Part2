#include "cutvoxel.h"

// O construtor guarda a posição do bloco que queremos apagar
CutVoxel::CutVoxel(int x, int y, int z) {
    this->x = x;
    this->y = y;
    this->z = z;
}

// O método draw aplica a borracha na matriz 3D
void CutVoxel::draw(Sculptor &t) {
    t.cutVoxel(x, y, z);
}
