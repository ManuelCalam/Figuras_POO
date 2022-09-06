#include <iostream>
//#include "Shape.h"
using namespace std;

class Romboide: public Shape{

    private:
        int rhomboidSize, x, y;

    public:
        
        void Clear() {
            cout << "\x1B[2J\x1B[H";
        }

        void setRhomboidSize(int size){
            rhomboidSize = size;
        }
        int getRhomboidSize(){
            if (rhomboidSize < 3){
                rhomboidSize = 3;
            }
            return rhomboidSize;
        }

        void setX(int x){
            this->x = x;
        }
        int getX(){
            if(x < 1){
                x = 2;
            }
            return x;
        }

        void setY(int y){
            this->y = y;
        }
        int getY(){
            if(y < 1){
                y = 2;
            }
            return y;
        }


        void draw(){
            
            char movement;
            while((movement = cin.get())  != 'e'){

                Clear();
                cout <<"Romboide de dimension: "<<rhomboidSize<<endl;
                cout <<"Cordenadas x: "<< getX()<<endl;
			    cout <<"Cordenadas y: "<< getY()<<endl;
                cout <<"[e] Salir"<<endl;
                if (movement == 'a') {
                    x--;
                }
                else if (movement == 's') {
                    y++;
                }
                else if (movement == 'w') {
                    y--;
                }
                else if (movement == 'd') {
                    x++;
                }
                for (int c = 0; c < y; c++) {
				cout << endl;

			    }

                for(int i=0; i < rhomboidSize; i++){
                    for (int z = 0; z < x; z++) {
					        cout << " ";
				    }
                    for(int j=0; j <= 2*(rhomboidSize-1); j++){
                        if(j >= rhomboidSize-i-1 && j <= 2*(rhomboidSize-1)-i){
                            cout <<("*");
                        }
                        else{
                            cout <<("  ");
                        }
                    }
                cout<< endl;
                }
            }
        }
};
      