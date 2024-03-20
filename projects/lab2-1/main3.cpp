#include <iostream>
#include <vector>
#include "storage.h"

float calculateTotalCost(const Storage& item) {
    float total_cost = item.cost + (item.cost * item.markup_percentage / 100);
    return total_cost * item.quantity;
}

int main() {
    std::vector<Storage> storage_items = {
        {"Еда", "Хлеб", 100, 1.5, 10},
        {"Одежда", "Футболка", 50, 25, 15},
        {"Техника", "Смартфон", 10, 500, 5}
    };

    std::cout << "Перечень товаров с общей стоимостью с учетом торговой надбавки:" << std::endl;
    for (const auto& item : storage_items) {
        float total_cost = calculateTotalCost(item);
        std::cout << item.product_name << " (" << item.type << "): " << total_cost << std::endl;
    }

    return 0;
}