#include "Cipher.h"
Cipher::Cipher(QString text  , int shift)
{
    this->text = text;
    this-> shift = shift;
}
void Cipher::putText(QString text)
{
    this->text = text;
}
void Cipher::setShift(int shift)
{
    this->shift = shift;
}
void Cipher::convertPlain()
{
    for (int i = 0; i < text.length(); i++)
    {
        if((text[i] < 'A' || text[i] > 'Z') && (text[i] < 'a' || text[i] > 'z'))
                    continue;
        if((text[i] >=  'A' && text[i] <= 'Z') || (text[i] >=  'a' && text[i] <= 'z'))
            text[i] = QChar(text[i].toLatin1() + shift); //toLatin1 returns ascii value and QChar returns ascii character..this is done QString doesn't allow adding char and int
        if(text[i] > 'Z' && text[i] < 'a' || text[i] > 'z')
            text[i] = QChar(text[i].toLatin1() - 26);
    }
}
void Cipher::convertCipher()
{
    for (int i = 0; i < text.length(); i++)
    {
        if((text[i] < 'A' || text[i] > 'Z') && (text[i] < 'a' || text[i] > 'z'))
                    continue;
        if((text[i] >=  'A' && text[i] <= 'Z') || (text[i] >=  'a' && text[i] <= 'z'))
            text[i] = QChar(text[i].toLatin1() -  shift);
        if(text[i] < 'A'   || text[i] < 'a' && text[i] > 'Z')
            text[i] = QChar(text[i].toLatin1() + 26);
    }
}
QString Cipher::goCaesar()
{
    return text;
}
