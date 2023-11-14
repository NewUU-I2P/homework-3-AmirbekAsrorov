float problemSolution1(float consumed_water) {
    float cost;
    // write your code here

    if (consumption <= 30.0) {
        cost += consumption * 0.4;
    } else if (consumption <= 50.0) {
        cost += 30.0 * 0.4 + (consumption - 30.0) * 0.12;
    } else if (consumption <= 60.0) {
        cost += 30.0 * 0.4 + 20.0 * 0.12 + (consumption - 50.0) * 1.4;
    } else {
        cost += 30.0 * 0.4 + 20.0 * 0.12 + 10.0 * 1.4 + (consumption - 60.0) * 1.5;
    }

    return cost;
}

int main() {
    double consumption =0;
    cin>>consumption;
    double totalCost = calculateWaterCost(consumption);
    cout << "The total cost for a water consumption of " << consumption << " cubic meters is: " << totalCost << endl;

    return 0;
}

