#ifndef PUTVOXEL_H
#define PUTVOXEL_H

#include "figurageometrica.h"

/**
 * @brief Classe concreta para ativar e colorir um único voxel.
 */
class PutVoxel : public FiguraGeometrica {
private:
    int x; /**< @brief Coordenada X do voxel */
    int y; /**< @brief Coordenada Y do voxel */
    int z; /**< @brief Coordenada Z do voxel */

public:
    /**
     * @brief Construtor da classe PutVoxel.
     * * @param x Coordenada X do bloco.
     * @param y Coordenada Y do bloco.
     * @param z Coordenada Z do bloco.
     * @param r Cor vermelha.
     * @param g Cor verde.
     * @param b Cor azul.
     * @param a Transparência.
     */
    PutVoxel(int x, int y, int z, float r, float g, float b, float a);

    /**
     * @brief Destrutor da classe PutVoxel.
     */
    ~PutVoxel() {}

    /**
     * @brief Desenha o voxel na matriz tridimensional.
     * * @param t Referência para o objeto Sculptor.
     */
    void draw(Sculptor &t);
};

#endif // PUTVOXEL_H
