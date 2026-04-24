#include <iostream>
#include <Foco.hpp>
#include <SerieFocos.hpp>

int main (int argc, char const *argv[])
{
    SerieFocos serie;
    serie.EncenderFocos();
    serie.MostrarFocos();
    serie.ApagarFocos();

return 0;
}
