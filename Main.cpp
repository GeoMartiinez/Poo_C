#include"Cliente.cpp"
#include<iostream>
using namespace std;
main(){
	string nit, nombres, apellidos, direccion;
	int telefono;
	
	cout<<"Ingresar NIT: ";
	cin>>nit;
	cout<<"Ingresa Nombre: ";
	cin>>nombres;
	cout<<"Ingresa Apellidos: ";
	cin>>apellidos;
	cout<<"Ingresa direccion: ";
	cin>>direccion;
	cout<<"Ingresa Telefono: ";
	cin>>telefono;
	
	//Instancia de un Objeto
	
	Cliente obj = Cliente(nombres, apellidos, direccion, telefono, nit);
	//obj.mostrar();
	
	cout<<"Datos del Cliente: "<<obj.getNit()<<", "<<obj.getNombres()<<", "<<obj.getApellidos()<<", "<<obj.getDireccion()<<", "<<obj.getTelfono()<<endl;
	
	/*Cliente obj = Cliente();
	obj.setNit(nit);
	obj.setNombres(nombres);
	obj.setApellidos(apellidos);
	obj.setDireccion(direccion);
	obj.setTelefono(telefono);
	obj.mostrar();*/
	
}
