float problemSolution2(float i, float j, float k) {
    float result;
    // write your code here;
    i > j && i > k ? result = i : j > i && j > k ? result = j : result = k;

    return result;
}
