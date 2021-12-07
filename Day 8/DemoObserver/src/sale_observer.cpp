#include "../include/sale_observer.h"
#include "../include/sale_data.h"

/// Implement SaleObserver
void SaleObserver::set_data(SaleData *data)
{
    this->data = data;
}

/// Implement SaleTable
void SaleTable::update()
{
    cout << "Sale Table" << endl;
    vector<string> salers = data->get_salers();
    vector<int> sales = data->get_sales();
    draw_table(salers, sales);
}

void SaleTable::draw_table(vector<string> salers, vector<int> sales)
{
    printf("+----------+----------+\n");
    printf("|%10s|%10s|\n", "Saler", "Sale");
    printf("+----------+----------+\n");
    for (int i = 0; i < salers.size(); i++)
    {
        printf("|%10s|%10d|\n", salers[i].c_str(), sales[i]);   
    }
    printf("+----------+----------+\n");
}

/// Implement SaleTable
void SaleChart::update()
{
    cout << "Sale Chart" << endl;
    vector<string> salers = data->get_salers();
    vector<int> sales = data->get_sales();
    draw_chart(salers, sales);
}

void SaleChart::draw_chart(vector<string> salers, vector<int> sales)
{
    for (int i = 0; i < salers.size(); i++)
    {
        printf("%10s:", salers[i].c_str());
        draw_bar(sales[i]);
        printf("\n");
    }
}

void SaleChart::draw_bar(const int &value)
{
    int length = value / 10;
    cout << "[";
    for (int i = 0; i < length; i++) cout << "=";
    cout << "]";
}