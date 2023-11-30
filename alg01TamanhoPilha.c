#include <stdio.h>

int pilha[10];
int pos=0; //topo da pilha

void push(int valor) {
pilha[pos]=valor;//empilha um novo elemento no topo da pilha

pos++; 
return;
}
int pop() {
//retorna o elemento do topo da pilha
return (pilha[--pos]);
}
int size() { 
return pos; //retorna o topo da pilha
}
int stacktop() //retorna o elemento do topo da pilha sem desempilhar
{
return pilha[pos];
}
int main( ) {
printf("\nColoca dados na pilha");
push(1);
push(2);
push(3);
push(4);
push(5);
push(6);
printf("\nTamanho da pilha %d", size());
printf("\nPegando dado da pilha: %d", pop());
printf("\nPegando dado da pilha: %d", pop());
printf("\nPegando dado da pilha: %d", pop());
printf("\nTamanho da pilha %d", size());
return 0;
}
