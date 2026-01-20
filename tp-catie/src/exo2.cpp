#include "exo2.hpp"

Counter::Counter(PinName pin) : _interrupt(pin){
    _interrupt.rise(callback(this, &Counter::go));
    _interrupt.fall(callback(this, &Counter::stop));
}

void Counter::go(){
    timer.reset();
    timer.start();
}

void Counter::stop(){
    timer.stop();
    done = 1;
}

int Counter::read(){
    return duration_cast<milliseconds>(timer.elapsed_time()).count();
}

void polling()
{
    int state = btn.read();
    if(state){
        printf("chui debout");
        myled = 1;
    }
    else{
        printf("chui assis");
        myled = 0;
    }
}
void interrupt(){
    while (btn.read())
    {
        myled = 1;
    }
    
    myled = 0;
}

void compteur(){
    printf("POV : tu es un compteur : %d ms\n", counter.read());
}