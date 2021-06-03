#ifndef __ESTUDIANTE_H__
#define __ESTUDIANTE_H__

#include <string>
#include <iostream>

class Estudiante {

        std::string nombre;
        int CUI;
        int edad;
        char sexo;
        std::string semestre;
    public:
        Estudiante();
        Estudiante(std::string, int, int, char, std::string);
        void setNombre(std::string);
        std::string getNombre()const;
        void setCUI(int);
        int getCUI()const;
        void setEdad(int);
        int getEdad()const;
        void setSexo(char);
        char getSexo()const;
        void setSemestre(std::string);
        std::string getSemestre()const;

        friend std::ostream& operator<<(std::ostream &out, const Estudiante &p)
        {
            out<<p.getNombre()<<std::endl;
            out<<p.getCUI()<<std::endl;
            out<<p.getEdad()<<std::endl;
            out<<p.getSexo()<<std::endl;
            out<<p.getSemestre()<<std::endl;

            return out;
        }
};

Estudiante::Estudiante(){
    this->nombre = "";
    this->CUI = 0;
    this->edad = 0;
    this->sexo = NULL;
    this->semestre = "";
}

Estudiante::Estudiante(std::string nombre, int cui, int edad, char sexo, std::string semestre){
    this->nombre = nombre;
    this->CUI = cui;
    this->edad = edad;
    this->sexo = sexo;
    this->semestre = semestre;
} 

void Estudiante::setNombre(std::string nombre){
    this->nombre=nombre;
    }
std::string Estudiante::getNombre()const{
    return nombre;
    }
void Estudiante::setCUI(int CUI){
    this->CUI=CUI;
    }
int Estudiante::getCUI()const{
    return CUI;   
    }
void Estudiante::setEdad(int edad){
    this->edad = edad;
    }
int Estudiante::getEdad()const{
    return edad;
    }
void Estudiante::setSexo(char sexo){
    this->sexo = sexo;
    }
char Estudiante::getSexo()const{
    return sexo;
    }
void Estudiante::setSemestre(std::string semestre){
    this->semestre=semestre;
    }
std::string Estudiante::getSemestre()const{
    return semestre;
    }

#endif