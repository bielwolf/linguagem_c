struct mapa {
    char** matriz;
    int linhas, colunas;
};

typedef struct mapa MAPA;

struct posicao {
    int x, y;
};
 
typedef struct posicao POSICAO;


void liberamapa(MAPA* m);
void lemapa(MAPA* m);
void alocamapa(MAPA* m);
void imprimemapa(MAPA* m);
void encontramapa(MAPA* m, POSICAO* p, char c);



