using namespace std;

void swap(float *p1, float *p2){
    float temp;

    cout << "1. Temp = " << temp << "\n\n";

    temp = *p1;

    cout << "2. Temp = " << temp << " \np1 = " << p1 << "\n*p1 = " << *p1 << "\n\n";

    *p1 = *p2;

    cout << "3. Temp = " << temp << " \np1 = " << p1 << "\n*p1 = " << *p1 << "\np2 = " << p2  << "\n*p2 = " << *p2 << "\n\n";

    *p2 = temp;

    cout << "4. Temp = " << temp << " \np1 = " << p1 << "\n*p1 = " << *p1 << "\np2 = " << p2  << "\n*p2 = " << *p2 << "\n\n";

}