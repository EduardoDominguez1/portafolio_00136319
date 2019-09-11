#include <iostream>
using namespace std;

struct Tpila{
float elements[100];
int top;
};
typedef struct Tpila Pila;

void initialize(Pila *s){
s->top = -1;
}

bool empty(Pila *s){
return s->top < 0;
}

void push(Pila *s, float e){
if(s->top < 99){
(s->top)++;
s->elements[s->top] = e;
}
}

void pop(Pila *s, float *e){
if(s->top >= 0){
*e = s->elements[s->top];
(s->top)--;
}
}

float ultimoElto(Pila *s){
float variable = -1;
while (!empty(s)){
pop(s, &variable);
}
return variable;
}

int main(void){

Pila unaPila;
initialize(&unaPila);

push(&unaPila, 5.5);
push(&unaPila, 7.4);
push(&unaPila, 2.1);

float variable = ultimoElto(&unaPila);
cout<<"El ultimo valor es: "<<variable<<endl;
}
