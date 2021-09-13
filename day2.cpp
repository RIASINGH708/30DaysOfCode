#include <iostream>

using namespace std;

/*
 * Complete the 'solve' function below.
 *
 * The function accepts following parameters:
 *  1. DOUBLE meal_cost
 *  2. INTEGER tip_percent
 *  3. INTEGER tax_percent
 */
#include <cmath>
#include <iostream>

using namespace std;

int main() {  
    int tipPercent;
    int taxPercent;
    double mealCost;
    scanf("%lf %d %d", &mealCost, &tipPercent, &taxPercent);
    // OR: cin >> mealCost >> tipPercent >> taxPercent;
    
    double tip = mealCost * tipPercent / 100;
    double tax = mealCost * taxPercent / 100;
    int totalCost = round(mealCost + tip + tax);
    
   cout<<totalCost;
    
    return 0;
}
