/*
TEMPLATE-BASED IMPLEMENTATION OF STL string

The std::string class, as you have learned, is actually a specialization of the STL
template class std::basic_string <T>.
The template declaration of container class basic_string is as follows:

template<class _Elem,
        class _Traits,
        class _Ax>
        class basic_string

In this template definition, the parameter of utmost importance is the first one:_Elem.
This is the type collectd by the basic_string object.
The string is therefore the template specialization of basic_string for_Elem=char, whereas the wstring is the template
specialization of basic_string for _Elem=wchar_t.

In other words, the STL string class is defined as

typedef basic_string<char, char_traits<char>, allocator<char> >
    string;

and the STL wstring class is defined as

typedef basic_string<wchar_t, char_traits<wchar_t>, allocator<wchar_t> >
    string;

So, all strings features and functions studied so far are actuallt those supplied by basic_string, and are therefore also applciable to the STL wstring class.

*/