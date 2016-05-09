#include <QString>
#ifndef CIPHER_H
#define CIPHER_H
class Cipher{
    QString text;
    int shift;
public:
    Cipher(QString text = "" , int shift = 5);
    void putText(QString text);
    void setShift(int shift);
    void convertPlain();
    void convertCipher();
    QString goCaesar();
};
#endif // CIPHER_H
