int adjacentElementsProduct(std::vector<int> array) {
    int maxProd = -(pow(2, sizeof(int) * 8)), prod;
    for (int i = 0; i < array.size() - 1; ++i) {
        prod = array[i] * array[i + 1];
        if (prod > maxProd)
            maxProd = prod;
    }
    return maxProd;
}
