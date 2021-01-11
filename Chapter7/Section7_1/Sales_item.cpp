#include<iostream>
#include<string>
#include"Sales_item.h"

using std::cout;
using std::string;
using std::endl;

Sales_item::Sales_item(string isbnInputted){
    /*
    arguments:
        isbnInputted(std::string): the isbn of this book
    */
    isbn = isbnInputted;
    revenue = 0;
    sales = 0;
    avgPrice = 0;
}

Sales_item::Sales_item(string isbnInputted, int salesInputted, float revenueInputted, float avgPriceInputted){
    /*
    arguments:
        isbnInputted(string): the isbn of this object
        salesInputeed(int): the sales to init this object
        revenueInputted(float): the revenue to init this object
        avgPriceInputted(float): the avg price to inti this object
    */
    isbn = isbnInputted;
    sales = salesInputted;
    revenue = revenueInputted;
    avgPrice = avgPriceInputted;
}

Sales_item Sales_item::combine(const Sales_item item1){
    if(isbn != item1.getISBN()){
        std::cerr << "The isbns of this two objects are different!" << endl;
        return *this;
    }
    revenue = revenue + item1.getRevenue();
    sales = sales + item1.getSales();
    avgPrice = revenue / sales;

    return *this;
}

//get methods
string Sales_item::getISBN() const{
    return isbn;
}

int Sales_item::getSales() const{
    return sales;
}

float Sales_item::getAvgPrice() const{
    return avgPrice;
}

float Sales_item::getRevenue() const{
    return revenue;
}

//set methods
void Sales_item::setSales(int salesInputted){
    sales = salesInputted;
}

void Sales_item::setRevenue(float revenueInputted){
    revenue = revenueInputted;
}

void Sales_item::setAvgPrice(float avgPriceInputted){
    avgPrice = avgPriceInputted;
}

//other methods
Sales_item add(const Sales_item item1, const Sales_item item2){
    Sales_item itemTotal = item1;
    itemTotal.combine(item2);
    return itemTotal;
}

std::istream &read(std::istream &is, Sales_item &item){
    float revenue;
    int sales;
    is >> revenue >> sales;

    item.setRevenue(revenue);
    item.setSales(sales);
    item.setAvgPrice(revenue / sales);

    return is;
}

std::ostream &print(std::ostream &os, Sales_item item){
    os << "ISBN: " << item.getISBN() << ", Average Price: " << item.getAvgPrice()
       << ", Revenue: " << item.getRevenue() << ", Sales: " << item.getSales();

    return os;
}