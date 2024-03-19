#include <bits/stdc++.h>
using namespace std;

int main(){

   class RedSocial{
    private:
    vector <Usuario> usuarios;
    vector <Publicacion> publicaciones;

    public:
    string nombre;
    int numeroDeUsuarios;
    int numeroDePublicaciones;
    
    RedSocial(); 
    RedSocial(string nom, int nu, int np);
    
    void agregarUsuario();
    void mostrarUsuario();
    void mostrarPublicacion();
    Usuario* getUsuario (int id);

};

  return 0;
}
