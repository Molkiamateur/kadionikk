#include "exo3.hpp"

Flipper::Flipper(PinName pin) : _interrupt(pin){
    _interrupt.rise(callback(this, &Flipper::go));
    _interrupt.fall(callback(this, &Flipper::stop));
}

void Flipper::go(){
    flipper.detach();
    _count += 0.5;
    if (_count == 5){
        _count = 0.5;
    }
}

void Flipper::stop(){
    flipper.attach(&flip, _count);
}

void flip()
{
    led = !led;
}