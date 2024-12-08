#ifndef CONTAINER_HPP
#define CONTAINER_HPP

class Container {
public:
    Container(int heights[], int size);
    int maxArea() const;

private:
    int* heights;
    int size;
};

#endif 

