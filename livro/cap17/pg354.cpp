#include <iostream>

using namespace std;

int main(){
    float v[6] = { 0.0f, 0.1f, 0.2f, 0.3f, 0.4f, 0.5f }, *pv, x;
    pv = v + 4; // Let pv point to v[4].

    *pv = 1.4f; // Assign 1.4 to v[4].

    cout << "1° Mudança no v[4]: " << v[4] << endl;
    pv -= 2; // Reset pv to v[2].
    ++pv; // Let pv point to v[3].


    x = *pv++; // Assign v[3] to x and
    // increment pv.
    cout << "Mudança no x e no pv++: " << x << "e pv: " << *pv << endl;
    x += *pv--; // Increment x by v[4] and let
    // pv point to v[3] again.
    cout << "Mudança no x e no pv++: " << x << "e pv: " << *pv << endl;
    
    --pv; // Reset pv to v[2]
}

