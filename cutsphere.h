#ifndef CUTSPHERE_H
#define CUTSPHERE_H

#include "figurageometrica.h"

/**
 * @brief Classe concreta para apagar uma esfera maciça.
 */
class CutSphere : public FiguraGeometrica {
private:
    int xcenter; /**< @brief Coordenada X do centro da esfera */
    int ycenter; /**< @brief Coordenada Y do centro da esfera */
    int zcenter; /**< @brief Coordenada Z do centro da esfera */
    int radius;  /**< @brief Raio da esfera a ser apagada */

public:
    /**
     * @brief Construtor da classe CutSphere.
     * * @param xcenter Coordenada X do centro.
     * @param ycenter Coordenada Y do centro.
     * @param zcenter Coordenada Z do centro.
     * @param radius Raio da esfera.
     */
    CutSphere(int xcenter, int ycenter, int zcenter, int radius);

    /**
     * @brief Destrutor da classe CutSphere.
     */
    ~CutSphere() {}

    /**
     * @brief Apaga a esfera na matriz tridimensional.
     * * @param t Referência para o objeto Sculptor.
     */
    void draw(Sculptor &t);
};

#endif // CUTSPHERE_H
