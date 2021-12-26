#ifndef CUBE_H
#define CUBE_H

#include <iostream>
#include <string>
#include <vector>

namespace Constants {

    const char up = 'U';
    const char down = 'D';
    const char left = 'L';
    const char right = 'R';
    const int cube_vertex = 8;
}

class Cube {
public:
    void incode(std::string input_str);
    std::string code();
    std::string decode(const std::string & key);

private:
    void rotate_up(int current_cube); 
    void rotate_down(int current_cube);
    void rotate_left(int current_cube);
    void rotate_right(int current_cube);

private:
    std::vector<std::string> separator;
};

#endif //CUBE_H