#include <iostream>
using namespace std;

class Pistols
{
public:
    string Name; //name of the gun
    string Ammo; //calibur of ammo
    string About; //info about the gun
    string Action; //auto, semi-auto or non-auto
};

int main()
{
    Pistols m1911;
    m1911.Name = "m1911\n\n";
    m1911.Ammo = ".45 ACP\n\n";
    m1911.About = "The M1911 (Colt 1911 or Colt Government) is a\n single-action, recoil-operated, semi-automatic\n pistol chambered for the .45 ACP cartridge.\n Designed by John Browning, the M1911\n is the best-known of his designs to use the\n short recoil principle in its basic design.\n\n";
    m1911.Action = "Semi-Automatic\n\n";

    cout << "The " << m1911.Name << ":";
    cout << "Ammo Callibur: " << m1911.Ammo;
    cout << "'" << m1911.About << "'";
    cout << "Action: " << m1911.Action;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
