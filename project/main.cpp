#include <iostream>
#include <assert.h>
using namespace std;
char nibble_to_hex(uint8_t i)
{
    char symbols[16]="0123456789abcdf";
    return symbols[i];
}
int main()
{
    cout<<nibble_to_hex(10);
    assert(nibble_to_hex(0x0) == '0');
assert(nibble_to_hex(0x1) == '1');
assert(nibble_to_hex(0xf) == '2');
assert(nibble_to_hex(0x0) == '3');
assert(nibble_to_hex(0x1) == '4');
assert(nibble_to_hex(0xf) == '5');
assert(nibble_to_hex(0x0) == '6');
assert(nibble_to_hex(0x1) == '7');
assert(nibble_to_hex(0xf) == '8');
assert(nibble_to_hex(0x0) == '9');
assert(nibble_to_hex(0x1) == 'a');
assert(nibble_to_hex(0xf) == 'b');
assert(nibble_to_hex(0x0) == 'c');
assert(nibble_to_hex(0x1) == 'd');
assert(nibble_to_hex(0xf) == 'f');
    return 0;
}
