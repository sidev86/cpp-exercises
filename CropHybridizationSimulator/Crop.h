#ifndef CROP_H
#define CROP_H

class Crop
{
public:
    Crop(int height, int yield, int droughtResistance);
    int getHeight() const;
    int getYield() const;
    int getDroughtResistance() const;
    int getScore() const;

    bool operator==(const Crop &other) const;
    bool operator!=(Crop &other) const;
    bool operator<(Crop &other) const;
    bool operator>(Crop &other) const;
    bool operator<=(Crop &other) const;
    bool operator>=(Crop &other) const;
    Crop operator+(Crop &other) const;
    void operator=(Crop &other);

private:
    int height;
    int yield;
    int droughtResistance;
};

#endif