Difference(std :: vector<int> z) : elements(z) {}

    void computeDifference() {
        int max = elements.at(0), min = max;

        for(int i = 0; i < elements.size(); i++) {
            max = elements.at(i) > max ? elements.at(i) : max;
            min = elements.at(i) < min ? elements.at(i) : min;
        }

        maximumDifference = max - min;
    }
