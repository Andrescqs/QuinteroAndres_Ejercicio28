#include <iostream>
#include <cmath>
using namespace std;

float Y(float v, float Dt, float g);

float X(float v, float Dt);

float rk4(float x, float t, float Dt, float v);


int main(){
    
    float g = -9.8;
    int v_x0 = 10;
    int v_y0 = 10;
    float k = 0.7;
    int N = 100;
    
    float Dt = 0;
    
    
    
    for(int i=0; i <N; i+=0.5){
         
        cout << X(v_x0, Dt) << " " << Y(v_y0, Dt, g) << endl;
        Dt += i;
    }
    
    return 0;
}



float rk4(float x, float t, float Dt, float v){
    float k1 = Dt * v;
}

float X(float v, float Dt){
    float x = v*Dt;
    return x;    
}

float Y(float v, float Dt, float g){
    float y = v*Dt + (1/2)*g*pow(Dt,2);
    
    return y;
}

