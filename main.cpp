#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "sculptor.h"
#include "figurageometrica.h"
#include "putvoxel.h"
#include "cutvoxel.h"
#include "putbox.h"
#include "cutbox.h"
#include "putsphere.h"
#include "cutsphere.h"
#include "putellipsoid.h"
#include "cutellipsoid.h"

using namespace std;

int main() {
    // Abre o ficheiro de texto para leitura
    ifstream fin("escultura.txt");
    if (!fin.is_open()) {
        cout << "Erro ao abrir o ficheiro escultura.txt" << endl;
        return 1;
    }

    // Cria a lista de "pincéis" polimórficos
    vector<FiguraGeometrica*> figuras;
    Sculptor *cena = nullptr;
    string comando;

    // Lê o ficheiro palavra por palavra até chegar ao fim
    while (fin >> comando) {
        if (comando == "dim") {
            int nx, ny, nz;
            fin >> nx >> ny >> nz;
            // Aloca a tela de pintura com os tamanhos lidos
            cena = new Sculptor(nx, ny, nz);
        } 
        else if (comando == "putvoxel") {
            int x, y, z; float r, g, b, a;
            fin >> x >> y >> z >> r >> g >> b >> a;
            figuras.push_back(new PutVoxel(x, y, z, r, g, b, a));
        }
        else if (comando == "cutvoxel") {
            int x, y, z;
            fin >> x >> y >> z;
            figuras.push_back(new CutVoxel(x, y, z));
        }
        else if (comando == "putbox") {
            int x0, x1, y0, y1, z0, z1; float r, g, b, a;
            fin >> x0 >> x1 >> y0 >> y1 >> z0 >> z1 >> r >> g >> b >> a;
            figuras.push_back(new PutBox(x0, x1, y0, y1, z0, z1, r, g, b, a));
        }
        else if (comando == "cutbox") {
            int x0, x1, y0, y1, z0, z1;
            fin >> x0 >> x1 >> y0 >> y1 >> z0 >> z1;
            figuras.push_back(new CutBox(x0, x1, y0, y1, z0, z1));
        }
        else if (comando == "putsphere") {
            int x, y, z, radius; float r, g, b, a;
            fin >> x >> y >> z >> radius >> r >> g >> b >> a;
            figuras.push_back(new PutSphere(x, y, z, radius, r, g, b, a));
        }
        else if (comando == "cutsphere") {
            int x, y, z, radius;
            fin >> x >> y >> z >> radius;
            figuras.push_back(new CutSphere(x, y, z, radius));
        }
        else if (comando == "putellipsoid") {
            int x, y, z, rx, ry, rz; float r, g, b, a;
            fin >> x >> y >> z >> rx >> ry >> rz >> r >> g >> b >> a;
            figuras.push_back(new PutEllipsoid(x, y, z, rx, ry, rz, r, g, b, a));
        }
        else if (comando == "cutellipsoid") {
            int x, y, z, rx, ry, rz;
            fin >> x >> y >> z >> rx >> ry >> rz;
            figuras.push_back(new CutEllipsoid(x, y, z, rx, ry, rz));
        }
    }

    // Se o Sculptor foi criado com sucesso na instrução "dim"
    if (cena != nullptr) {
        // Polimorfismo: passa por toda a lista e pede para cada um se desenhar
        for (int i = 0; i < figuras.size(); i++) {
            figuras[i]->draw(*cena);
        }

        // Exporta o resultado para o visualizador 3D
        cena->writeOFF("saida_leitor.off");
        cout << "Arquivo .off gerado com sucesso atraves da leitura do texto!" << endl;

        // Limpa a memória das figuras (evitando Memory Leak)
        for (int i = 0; i < figuras.size(); i++) {
            delete figuras[i];
        }
        delete cena;
    }

    return 0;
}
