//586

/*
A structure as a unary predicate
*/

template<typename numberType>
struct IsMultiple{
    numberType m_Divisor;

    //divisorialize the divisor
    IsMultiple(const numberType& divisor) {
        m_Divisor = divisor;
    }

    //The comparator of type: bool f(x)
    bool operator()(const numberType& element) const {
        //Check if the dividend is a multiple of the divisor
        return ((element %m_Divisor)==0);
    }
};