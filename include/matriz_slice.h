#ifndef MATRIZ_SLICE_H
#define MATRIZ_SLICE_H

/** Es la parte de la Matriz que mapea un conjunto de subscripts a la ubicación de un elemento.
    Usa la idea de slices generalizados. */
template<size_t N>
struct matriz_slice
{
  public:
    matriz_slice()=default;     //matriz vacía: sin elementos

    matriz_slice(size_t offset, std::initializer_list<size_t> exts); //offset inicial y alvances
    matriz_slice(size_t offset, std::initializer_list<size_t> exts, std::initializer_list<size_t> strs); //y strides

    template<typename... Dims>  // N "extents"
    matriz_slice(Dims... dims);

    typename<typename... Dims, typename=std::enable_if<std::all()

  protected:

  private:
};

#endif // MATRIZ_SLICE_H
