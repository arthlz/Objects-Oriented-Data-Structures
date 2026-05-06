#ifndef FLOATARR_H
#define FLOATARR_H

class FloatArr{

    private:
        float *arrPtr;
        int max;

        int cnt;

    public:

        FloatArr(int n = 256);
        FloatArr(int n, float val);
        ~FloatArr();

        int length() const {return cnt;}
        float &operator[](int i);
        float operator[] (int i) const;

        bool append(float val);
        bool remove(int pos);
        
};






#endif