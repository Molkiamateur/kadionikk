#include "exo5.hpp"

Mutex mutex;

void ping(){
  for (int i = 0;i<100;i++){
    mutex.lock();
    printf("Ping\n");
    mutex.unlock();
    //ThisThread::sleep_for(PERIOD_MS / 20);
  }
}

void pong(){
  for (int i = 0;i<100;i++){
    mutex.lock();
    printf("Pong\n");
    mutex.unlock();
    //ThisThread::sleep_for(PERIOD_MS / 20);
  }
}

void mainloop(){
  myled = 1;          // set LED1 pin to high
  ThisThread::sleep_for(PERIOD_MS / 20);
  myled.write(0);     // set LED1 pin to low
  
  mutex.lock();
  printf("Rendez les bijoux !!\n");
  mutex.unlock();

  ThisThread::sleep_for(PERIOD_MS / 20);
}

