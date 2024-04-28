#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

bool searchWord(vector<string> matrix, string word);
	int rows = matrix.size();
	int cols = matrix[0].size();

int main() {
    int numWords;
    cout << " ";
    cin >> numWords;

    vector<string> matrix = {
        "AAFLKHPFSSUFICICLESGNNH",
        "SFVREOMRWLRTTSXOQQNAOAO",
        "QEIAIFXAEIRFVFYSXIMINJI",
        "WSTRLGOCAPBIAFIWIWTUACM",
        "FEYAEAISTPCRLUJKOAKCERS",
        "RVDAKPNDEEHDEMSNCKKFOAH",
        "MRNEDSLCRRIWNRSAAFITMMI",
        "YAAECIEAHYMOTAVHRSSTISB",
        "RJSEWELCCENNIETOHWSGLSE", 
        "ATANYYMOIEESNESIOIRELTR", 
        "UTENEWEBHMYBETNNRAIEBEN", 
        "RCLKUTEAEQJLSGSHTGDSKOA", 
        "BHOICATNRRSDDECEHOOLGIT", 
        "ENSLUARIRSETALOCOHCTOHE", 
        "FZFUDQJYMADOYIWYGLOVESU",
        "TEKALFWONSNAEBMIEJTZNTG",
        "ESWPOSJXEUTUYOZUWAKEZHM",
        "KZUHBPEZEERFLMSNOWBALLH",
        "NSNOWBOARDYTVWYCLEVOHSA",
        "ACOCRQLGZIYCHODRAZZILBI",
        "LBVKKWANZAAQINWOLPWONSL",
        "BFREEZINGRAINSLILGTMELT",
        "HQPYLWHFMNFFUFPSWXNUMMV"
    };

    vector<string> words(numWords);
    cout << " ";
    for (int i = 0; i < numWords; ++i) {
        cin >> words[i];
    }

    for (const string& word : words) {
        if (!searchWord(matrix, word)) {
            cout << " Tidak Ada" << endl;
        }
    }

    return 0;
}
