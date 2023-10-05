class Shape
{
public:
    virtual void draw(I_Draw* draw) = 0;
    virtual double area() = 0;
};


class I_Draw
{
private:
public:
    virtual void I_draw() = 0;
};



class LinuxI_Draw : I_Draw
{
private:
public:
    LinuxI_Draw(Shape* shape);
    ~LinuxI_Draw();
};


class Rectangle : public Shape {
private:
    double width;
    double height;
public:
    void draw(I_Draw* draw);
    Rectangle(double width, double height);
    double area() override;
};

class Circle : public Shape {
private:
    double radius;
public:
    Circle(double radius);
    void draw(I_Draw* draw);
    double area() override;
};
class Triangle : public Shape {
private:
    double base;
    double height;
public:
    Triangle(double base, double height);
    void draw(I_Draw* draw);
    double area() override;
};