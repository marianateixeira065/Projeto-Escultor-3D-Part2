#ifndef PUTELLIPSOID_H
#define PUTELLIPSOID_H

#include "figurageometrica.h"

/**
 * @brief Classe concreta para desenhar um elipsoide maciço.
 */
class PutEllipsoid : public FiguraGeometrica {
private:
    int xcenter; /**< @brief Coordenada X do centro do elipsoide */
    int ycenter; /**< @brief Coordenada Y do centro do elipsoide */
    int zcenter; /**< @brief Coordenada Z do centro do elipsoide */
    int rx;      /**< @brief Raio do elipsoide no eixo X */
    int ry;      /**< @brief Raio do elipsoide no eixo Y */
    int rz;      /**< @brief Raio do elipsoide no eixo Z */

public:
    /**
     * @brief Construtor da classe PutEllipsoid.
     * * @param xcenter Coordenada X do centro.
     * @param ycenter Coordenada Y do centro.
     * @param zcenter Coordenada Z do centro.
     * @param rx Raio no eixo X.
     * @param ry Raio no eixo Y.
     * @param rz Raio no eixo Z.
     * @param r Cor vermelha.
     * @param g Cor verde.
     * @param b Cor azul.
     * @param a Transparência.
     */
    PutEllipsoid(int xcenter, int ycenter, int zcenter, int rx, int ry, int rz, float r, float g, float b, float a);

    /**
     * @brief Destrutor da classe PutEllipsoid.
     */
    ~PutEllipsoid() {}

    /**
     * @brief Desenha o elipsoide na matriz tridimensional.
     * * @param t Referência para o objeto Sculptor.
     */
    void draw(Sculptor &t);
};

#endif // PUTELLIPSOID_H
