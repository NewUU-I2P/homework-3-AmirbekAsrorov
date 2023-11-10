#include <string>

std::string problemSolution3(float height, char S) {
    // write your code here
    std::string result;
    if (S == 'M') {
        if (height < 1.7) {
            result = "Short";
        } else if (height >= 1.7 && height < 1.85) {
            result = "Normal";
        } else if (height >= 1.85) {
            result = "Tall";
        }
    } else if (S == 'F') {
        if (height < 1.6) {
            result = "Short";
        } else if (height >= 1.6 && height < 1.75) {
            result = "Normal";
        } else if (height >= 1.75) {
            result = "Tall";
        }
    }

    // use return to return your result
    return result;
    // make use of control flow statements
}
