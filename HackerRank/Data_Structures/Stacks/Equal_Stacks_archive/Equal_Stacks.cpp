#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

/*
 * Complete the equalStacks function below.
 */
int equalStacks(vector<int> h1, vector<int> h2, vector<int> h3) {
    int tmp1 = accumulate(h1.begin(), h1.end(), 0);
    int tmp2 = accumulate(h2.begin(), h2.end(), 0);
    int tmp3 = accumulate(h3.begin(), h3.end(), 0);
    //TODO: use count for vector iter
    int m1, m2, m3;
    vector<int> v1,v2,v3;
    m1 = max({tmp1, tmp2, tmp3});
    if (m1 == tmp1) v1 = h1;
    else if(m1 == tmp2) v1 = h2;
    else v1 = h3;

    m3 = min({tmp1, tmp2, tmp3});
    if (m3 == tmp1) v3 = h1;
    else if (m3 == tmp2) v3 = h2;
    else v3 = h3;

    if (m3 < tmp1 && tmp1 < m1) {m2 = tmp1;}
    else if( m3 < tmp2 && tmp2 < m1) {m2 = tmp2;}
    else m2 = tmp3;
    if (m2 == tmp1) v2 = h1;
    else if (m2 == tmp2) v2 = h2;
    else v2 = h3;
    
    while( m1 != m2 && m1 != m3 ) 
    {
        while (m1 != m2) {
            int top1 = v1.front();
            v1.erase(v1.begin()+0);
            m1 -= top1;
            while (m1 < m2) {
                int top2 = v2.front();
                v2.erase(v2.begin()+0);
                m2 -= top2;
            }
        }
        while (m1 < m3) {
            int top3 = v3.front();
            v3.erase(v3.begin()+0);
            m3 -= top3;
        }
    }
    return m1;
    //int tmp1 = 0, tmp2 = 0, tmp = 0;

}

int main()
{
    //ofstream fout(getenv("OUTPUT_PATH"));
    string name = "/Users/eliotjang/Desktop/Algorithm/HackerRank/Data_Structures/Equal_Stacks_archive/sample_output.txt";
    ofstream fout(name);

    string n1N2N3_temp;
    getline(cin, n1N2N3_temp);

    vector<string> n1N2N3 = split_string(n1N2N3_temp);

    int n1 = stoi(n1N2N3[0]);

    int n2 = stoi(n1N2N3[1]);

    int n3 = stoi(n1N2N3[2]);

    string h1_temp_temp;
    getline(cin, h1_temp_temp);

    vector<string> h1_temp = split_string(h1_temp_temp);

    vector<int> h1(n1);

    for (int h1_itr = 0; h1_itr < n1; h1_itr++) {
        int h1_item = stoi(h1_temp[h1_itr]);

        h1[h1_itr] = h1_item;
    }

    string h2_temp_temp;
    getline(cin, h2_temp_temp);

    vector<string> h2_temp = split_string(h2_temp_temp);

    vector<int> h2(n2);

    for (int h2_itr = 0; h2_itr < n2; h2_itr++) {
        int h2_item = stoi(h2_temp[h2_itr]);

        h2[h2_itr] = h2_item;
    }

    string h3_temp_temp;
    getline(cin, h3_temp_temp);

    vector<string> h3_temp = split_string(h3_temp_temp);

    vector<int> h3(n3);

    for (int h3_itr = 0; h3_itr < n3; h3_itr++) {
        int h3_item = stoi(h3_temp[h3_itr]);

        h3[h3_itr] = h3_item;
    }

    int result = equalStacks(h1, h2, h3);

    fout << result << "\n";

    fout.close();

    return 0;
}

vector<string> split_string(string input_string) {
    string::iterator new_end = unique(input_string.begin(), input_string.end(), [] (const char &x, const char &y) {
        return x == y and x == ' ';
    });

    input_string.erase(new_end, input_string.end());

    while (input_string[input_string.length() - 1] == ' ') {
        input_string.pop_back();
    }

    vector<string> splits;
    char delimiter = ' ';

    size_t i = 0;
    size_t pos = input_string.find(delimiter);

    while (pos != string::npos) {
        splits.push_back(input_string.substr(i, pos - i));

        i = pos + 1;
        pos = input_string.find(delimiter, i);
    }

    splits.push_back(input_string.substr(i, min(pos, input_string.length()) - i + 1));

    return splits;
}
