bool isLowerTriangularMatrix(std::vector<std::vector<int>> matrix) {
    for (int i = 0; i < matrix.size(); ++i)
        for (int j = i + 1; j < matrix[0].size(); ++j)
            if (matrix[i][j])
                return false;
    return true;
}
