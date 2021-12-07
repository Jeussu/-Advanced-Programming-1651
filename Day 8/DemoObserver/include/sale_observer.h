#ifndef _SALE_OBSERVER_H_
#define _SALE_OBSERVER_H_

#include "sale_data.h"

class SaleObserver
{
    protected:
        SaleData* data;
    public:
        virtual void update() = 0; // abstract method
        void set_data(SaleData *data);
};

class SaleChart : public SaleObserver
{
    public:
        void update(); // override from SaleObserver
    private:
        void draw_chart(vector<string> salers, vector<int> sales);
        void draw_bar(const int &value);
};

class SaleTable : public SaleObserver
{
    public:
        void update(); // override from SaleObserver
    private:
        void draw_table(vector<string> salers, vector<int> sales);
};

#endif