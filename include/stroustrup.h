#ifndef STROUSTRUP_H
#define STROUSTRUP_H

#include <type_traits>

/*Para poder realizar cómputos durante la compilación, necesitamos selección y recursión*/
/*Selección: además de lo que se puede hacer usando constexpr, se pude usar:
Conditional: Una manera de elegir entre dos tipos (es un alias para std::conditional)
Select: Una manera de elegir entre varios tipos.

Estas son funciones tipo, y retornan tipos.
Si quieres escoger entre valores, ?: es suficiente. Conditional y Select son para seleccionar tipos.
No son equivalentes compilatorios de if y switch aunque lo parezcan

std::conditional pertenece a la std, pero lo voy a escribir para entenderle:

template<bool C, typename T, typename F>
struct conditional {
  using type = T;
};

template<typename T, typename F>
struct conditional<false,T,F> {
  using type = F;
};

*/
/*SFINAE -> Substitution Failure is Not An Error*/

/**Enable_if  Cuando escribimos un template, a veces queremos proveer
una operación para ciertos argumentos template, pero para otros no.
Es igualito a std::enable_if_t*/
template<bool B, typename T=void>
using Enable_if = typename std::enable_if<B,T>::type;

/**Checa si T es una clase o una struct.
Es idéntico a is_class_v (C++ 17)*/
template<typename T>
constexpr bool Is_class() { return std::is_class<T>::value; }

#endif // STROUSTRUP_H
