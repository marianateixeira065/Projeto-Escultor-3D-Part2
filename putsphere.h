#ifndef PUTSPHERE_H
#define PUTSPHERE_H

#include "figurageometrica.h"

/**
 * @brief Classe concreta para desenhar uma esfera maciça.
 */
class PutSphere : public FiguraGeometrica {
private:
    int xcenter; /**< @brief Coordenada X do centro da esfera */
    int ycenter; /**< @brief Coordenada Y do centro da esfera */
    int zcenter; /**< @brief Coordenada Z do centro da esfera */
    int radius;  /**< @brief Raio da esfera */

public:
    /**
     * @brief Construtor da classe PutSphere.
     * * @param xcenter Coordenada X do centro.
     * @param ycenter Coordenada Y do centro.
     * @param zcenter Coordenada Z do centro.
     * @param radius Raio da esfera.
     * @param r Cor vermelha.
     * @param g Cor verde.
     * @param b Cor azul.
     * @param a Transparência.
     */
    PutSphere(int xcenter, int ycenter, int zcenter, int radius, float r, float g, float b, float a);

    /**
     * @brief Destrutor da classe PutSphere.
     */
    ~PutSphere() {}

    /**
     * @brief Desenha a esfera na matriz tridimensional.
     * * @param t Referência para o objeto Sculptor.
     */
    void draw(Sculptor &t);
};

#endif // PUTSPHERE_H
