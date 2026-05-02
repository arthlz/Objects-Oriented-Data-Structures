#include <string>
class Article{
    private:
        long number;
        std::string name;
        double price;

        static int articleCount;


    public:
        Article(long number = 0.0, std::string name="", double price = 0.0);

        Article(const Article& original); // Copy Constructor

        ~Article();

        void print() const;

        long getNumber(){
            return number;
        }

        std::string getName(){
            return name;
        }
        
        double getPrice(){
            return price;
        }

        void setNumber(long number){
            this->number=number;
        }

        void setName(std::string name){
            this->name=name;
        }

        void setPrice(double price){
            this->price = (price < 0.0) ? 0.0 : price;
        }
        
        static int getCount(){
            return articleCount;
        }


};