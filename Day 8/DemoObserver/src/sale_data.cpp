#include "../include/sale_data.h"
#include "../include/sale_observer.h"

void SaleData::add(SaleObserver* observer)
{
    observer->set_data(this);
    observers.push_back(observer);
}
void SaleData::notify()
{
    for (int i = 0; i < observers.size(); i++)
        observers[i]->update();
}
void SaleData::add_sale(const string &saler, const int &sale)
{
    salers.push_back(saler);
    sales.push_back(sale);
}
vector<string> SaleData::get_salers()
{
    return salers;
}
vector<int> SaleData::get_sales()
{
    return sales;
}