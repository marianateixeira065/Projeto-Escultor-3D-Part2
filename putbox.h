#ifndef PUTBOX_H
#define PUTBOX_H

#include "figurageometrica.h"

/**
 * @brief Classe concreta para desenhar um paralelepípedo (caixa) maciço.
 */
class PutBox : public FiguraGeometrica {
private:
    int x0; /**< @brief Coordenada X inicial */
    int x1; /**< @brief Coordenada X final */
    int y0; /**< @brief Coordenada Y inicial */
    int y1; /**< @brief Coordenada Y final */
    int z0; /**< @brief Coordenada Z inicial */
    int z1; /**< @brief Coordenada Z final */

public:
    /**
     * @brief Construtor da classe PutBox.
     * * @param x0 Coordenada X inicial do intervalo.
     * @param x1 Coordenada X final do intervalo.
     * @param y0 Coordenada Y inicial do intervalo.
     * @param y1 Coordenada Y final do intervalo.
     * @param z0 Coordenada Z inicial do intervalo.
     * @param z1 Coordenada Z final do intervalo.
     * @param r Cor vermelha.
     * @param g Cor verde.
     * @param b Cor azul.
     * @param a Transparência.
     */
    PutBox(int x0, int x1, int y0, int y1, int z0, int z1, float r, float g, float b, float a);

    /**
     * @brief Destrutor da classe PutBox.
     */
    ~PutBox() {}

    /**
     * @brief Desenha a caixa na matriz tridimensional.
     * * @param t Referência para o objeto Sculptor.
     */
    void draw(Sculptor &t);
};

#endif // PUTBOX_H
