//
// Created by wwwyu on 4/11/2018.
//

#ifndef INCLASS15_CAR_H
#define INCLASS15_CAR_H

class car {
public:
    void setmpg();
    void setyeare();
    void setairbag();

private:
    int mpg;
    int year;
    bool airbag = true;


};

class ford: public car{
public:
    void cartype();
private:
    int price;
};

class hyundai: public car{
public:
    void cartype();
private:
    int price;

};

#endif //INCLASS15_CAR_H
