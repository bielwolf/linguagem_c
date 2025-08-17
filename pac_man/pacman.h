#define CIMA 'w'
#define BAIXO 's'
#define ESQUERDA 'a'
#define DIREITA 'd'
#define BOMBA 'b'

void move(char direcao);
int acabou();

int ehdirecao(char direcao);
void fantasma();
int praondefantasmavai(int xatual, int yatual, int* xdestino, int* ydestino);



