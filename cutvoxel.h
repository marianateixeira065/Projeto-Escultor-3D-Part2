#ifndef CUTVOXEL_H
#define CUTVOXEL_H

#include "figurageometrica.h"

/**
 * @brief Classe concreta para apagar (desativar) um único voxel.
 */
class CutVoxel : public FiguraGeometrica {
private:
    int x; /**< @brief Coordenada X do voxel a ser apagado */
    int y; /**< @brief Coordenada Y do voxel a ser apagado */
    int z; /**< @brief Coordenada Z do voxel a ser apagado */

public:
    /**
     * @brief Construtor da classe CutVoxel.
     * * @param x Coordenada X do bloco.
     * @param y Coordenada Y do bloco.
     * @param z Coordenada Z do bloco.
     */
    CutVoxel(int x, int y, int z);

    /**
     * @brief Destrutor da classe CutVoxel.
     */
    ~CutVoxel() {}

    /**
     * @brief Apaga o voxel na matriz tridimensional (modifica show para false).
     * * @param t Referência para o objeto Sculptor.
     */
    void draw(Sculptor &t);
};

#endif // CUTVOXEL_H
