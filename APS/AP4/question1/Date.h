#ifndef Date_h
#define Date_h

class Date{
    public:
        int day;
        int month;
        int year;

    void init(int day, int month, int year);
    void init(void);
    void print(void);
};

#endif