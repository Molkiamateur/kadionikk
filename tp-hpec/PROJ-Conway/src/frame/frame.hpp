#ifndef __FRAME__
#define __FRAME__
#include <memory>

class frame {
    private:
        int _width;
        int _height;
        std::shared_ptr<char[]> map;

    public:
        frame();
        frame(const char*);
        frame(const int height, const int width);

        void store(const char *);
        void set_w_h(int, int);
        int width();
        int height();
        int cells();
        char *data();

        bool operator==(frame other);
};

#endif