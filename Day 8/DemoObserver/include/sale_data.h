#ifndef _SALE_DATA_H
#define _SALE_DATA_H

#include <iostream>
#include <string>
#include <vector>
using namespace std;

class SaleObserver;   // pre-declare a class SaleObserver

class SaleData
{
    private:
        vector<string> salers;
        vector<int> sales;
        vector<SaleObserver*> observers;
    public:
        void add(SaleObserver* observer);
        void notify();
        void add_sale(const string &saler, const int &sale);
        vector<string> get_salers();
        vector<int> get_sales();
};

#endif