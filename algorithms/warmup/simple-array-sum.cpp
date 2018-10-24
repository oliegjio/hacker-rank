#include <iostream>
#include <vector>
#include <string>

using namespace std;

int simple_array_sum(const vector<int> &array) {
    int sum = 0;
    for (const auto &element : array) {
        sum += element;
    }
    return sum;
}

vector<string> split_string(const string &str, const char &delimiter = ' ') {
    vector<string> result;
    string::const_iterator start, stop;
    start = stop = str.begin();
    for (const auto &ch : str) {
        if (ch != delimiter) {
            stop++;
        } else {
            result.emplace_back(string(start, stop++));
            start = stop;
        }
    }
    result.emplace_back(string(start, stop++));
    return result;
}

int main() {
//    size_t input_size;
//    cin >> input_size;
//
//    vector<int> input(input_size);

    string input_string;
    cin.ignore(0);
    getline(cin, input_string);

    auto split = split_string(input_string);
    for (const auto &s : split) {
        cout << s << endl;
    }
    cout << "END" << endl;


//    for (const auto &c : input_string) {
//        if (c != ' ') {
//            input.push_back(c - '0');
//        }
//    }
//
//    cout << simple_array_sum(input) << endl;

    return 0;
}