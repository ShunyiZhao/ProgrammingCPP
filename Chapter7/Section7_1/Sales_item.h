#include<iostream>
#include<string>

using std::string;

struct Sales_item{
private:
    string isbn;
    int sales;
    float avgPrice;
    float revenue;
public:
    Sales_item(string);
    Sales_item(string, int, float, float);
    Sales_item combine(const Sales_item);

    //get methods
    string getISBN() const;
    int getSales() const;
    float getAvgPrice() const;
    float getRevenue() const;

    //set methods
    void setSales(int salesInputted);
    void setAvgPrice(float avgPriceInputted);
    void setRevenue(float revenueInputted);
};

Sales_item add(const Sales_item, const Sales_item);
std::istream &read(std::istream &, Sales_item&);
std::ostream &print(std::ostream &, Sales_item);
