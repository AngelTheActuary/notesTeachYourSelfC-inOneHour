#template<typename T>
#class smart_pointer
{
    private:
        T* m_pRawPointer;
    public:
        //Constructor
        smart_pointer(T* pData) : m_pRawPointer(pData) {}
        //Destructor
        ~smart_pointer(){delete m_pRawPointer;}
        //copy constructor
        smart
};