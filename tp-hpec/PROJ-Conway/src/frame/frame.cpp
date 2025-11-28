#include "frame.hpp"
#include <iostream>
#include <fstream>
#include <random>


frame::frame() {
    // Builds an empty frame
    this->_width     = 0;
    this->_height    = 0;
    this->map       = nullptr;
}

frame::frame(const char * filename) {
    // This constructor generates a frame instance from a file which
    // name is given as argument


    // Open the file in binary mode for read
    std::ifstream l_file(filename, std::ios::binary);

    // Check if opening file was OK
    if (!l_file) {
        std::cerr << "Error : Can't open file " << filename << std::endl;
        exit(1);
    }

    // check file header
    std::string header;
    l_file >> header;
    if (header != "P4") {
        std::cerr << "Error : Wrong file format." << std::endl;
        exit(1);
    }

    l_file >> this->_width;
    l_file >> this->_height;


    int size = this->_width*this->_height/8;
    //this->map = new char[size];


    char *tmp = new char[size];
    l_file.read(tmp, 1);
    l_file.read(tmp, size);
    this->map = std::shared_ptr<char[]>(tmp, std::default_delete<char[]>());

    l_file.close();
}

frame::frame(const int height, const int width) {

    std::mt19937 gen(std::random_device{}());
    std::uniform_int_distribution<char> dist(-128, 127);
    this->_height = height;
    this->_width  = width;

    int size = width*height/8;
    //this->map = new char[size];
    this->map = std::shared_ptr<char[]>(new char[size], std::default_delete<char[]>());

    for (int i=0; i<size; i+=1) {
        this->map[i] = dist(gen);
    }

}

void frame::store(const char *filename) {
    std::ofstream l_file(filename, std::ios::binary);
    if (!l_file) {
        std::cerr << "Error : Can't create file " << filename << std::endl;
        exit(1);
    }

    // Write header
    l_file << "P4\n";
    l_file << this->_width << " " << this->_height << "\n";

    l_file.write(this->data(), this->_width*this->_height/8);
    l_file.close();
}


void frame::set_w_h(int w, int h) {
    this->_width  = w;
    this->_height = h;
    int size = w*h/8;
    this->map = std::shared_ptr<char[]>(new char[size], std::default_delete<char[]>());
}

int frame::width(){
    return _width;
}
int frame::height(){
    return _height;
}


int frame::cells() {
    return this->_width * this->_height;
}

char *frame::data() {
    return this->map.get();
}

bool frame::operator==(frame other) {
    if (this->_width  != other._width ) return 0;
    if (this->_height != other._height) return 0;
    if (this->map    == other.map   ) return 1;

    long * ptr1 = (long *)this->map.get();
    long * ptr2 = (long *)other.map.get();

    for (int i=0; i< this->_width*this->_height/8; i+=sizeof(long)) {
        if (*ptr1++ != *ptr2++)
            return 0;
    }
    return 1;
}

