#include <iostream>
#include "square.h"
#include "triangle.h"
#include "rhomboid.h"

using namespace std;

void Lienzo(Shape *shape){
    shape->draw();
}

void Clear(){
    cout << "\x1B[2J\x1B[H";
}

class InputManager{
    
    public:
        int menu = 0, squareType, dimensionFigura, X, Y;
        Cuadrado objSquare;
        Triangulo objTriangle;
        Romboide objRhomboid;

        void run(){
            do{

                cout<<"IMPRESIÓN DE FIGURAS"<<endl;
                cout<<"[1] Dibujar cuadrado"<<endl;
                cout<<"[2] Dibujar triangulo"<<endl;
                cout<<"[3] Dibujar romboide"<<endl;
                cout<<"[0] Salir"<<endl;
        
                cin>>menu;
        


                switch (menu){
        
                    case 1:

                        cout<<"CUADRADO"<<endl;
                        cout<<"[1] Cuadrado relleno"<<endl;
                        cout<<"[2] Cuadrado vacio"<<endl;
                        cin>>squareType;
                        
                        cout<<"Dimension minima: 2"<<endl;
                        cout<<"[?] Dimension: ";
                        cin>>dimensionFigura;

                        cout<<"Ingresar coordenada en X: ";
                        cin>>X;
                        cout<<"Ingresar coordenada en Y: ";
                        cin>>Y;

                        objSquare.setSquareType(squareType);
                        objSquare.getSquareType();
                        objSquare.setSquareSize(dimensionFigura);
                        objSquare.getSquareSize();
                        objSquare.setX(X);
                        objSquare.getX();
                        objSquare.setY(Y);
                        objSquare.getY();
                        Lienzo(&objSquare);

                        Clear();        
                        break;

                    case 2:
                    
                        cout<<"TRIANGULO"<<endl;
                        
                        cout<<"Dimension minima: 3"<<endl;
                        cout<<"[?] Dimension: ";
                        cin>>dimensionFigura;

                        cout<<"Ingresar coordenada en X: "<<endl;
                        cin>>X;
                        cout<<"Ingresar coordenada en Y: "<<endl;
                        cin>>Y;

                        objTriangle.setTriangleSize(dimensionFigura);
                        objTriangle.getTriangleSize();
                        objTriangle.setX(X);
                        objTriangle.getX();
                        objTriangle.setY(Y);
                        objTriangle.getY();
                        Lienzo(&objTriangle);

                        Clear();
                        break;

                    case 3: 
                    
                        cout<<"ROMBOIDE"<<endl;
                        
                        cout<<"Dimension minima: 3"<<endl;
                        cout<<"[?] Dimension: ";
                        cin>>dimensionFigura;

                        cout<<"Ingresar coordenada en X: "<<endl;
                        cin>>X;
                        cout<<"Ingresar coordenada en Y: "<<endl;
                        cin>>Y;

                        objRhomboid.setRhomboidSize(dimensionFigura);
                        objRhomboid.getRhomboidSize();
                        objRhomboid.setX(X);
                        objRhomboid.getX();
                        objRhomboid.setY(Y);
                        objRhomboid.getY();
                        Lienzo(&objRhomboid);

                        Clear();
                        break;

                    default: 
                        cout<<"Saliendo..."<<endl;
                }
            
            } while (menu != 0);
        
        }
        

   

    

    
};