/*
MAKING MEMBER DATA PRIVATE.

As a general rule of dessign, you should keep the data members of a class private.
Of course, if you make all the data members private, you might wonder how you access
information about the class. For example, if itsAge is private, how would you be able to set or get a Cat object's age?

To access private data in a class, you must create public fucntions known as accessor methods.
Use these methods to set and get the private member variables.
These accessor method are the member functionsthat other parts of your program call to get and
set your private member variables.
A public accessor metos is a class member function used either to read (get) the value
of a private class member variable or to set its value.

Why bother with this extra level of indirect access?
Why add extra functions when it is simpler and easier to use the data directly?
Why work through accessor functions?

The answer to these questions is that accessor functions enable you to separate the details
of how the data is stored from how it is used.
By using accessor functions, you can later change how the data is stored from how it is used.
By using accessor functions, you can later change how the data is stored without having to rewrite
any of the other functions in your porograms that use the data.

If a function that needs to know a Cat's age accesses itsAge directly, that function would
need to be rewritten if you, as the author of the Cat class, decided to change how that data is stored.

By having the functioon call GetAge(), your Cat class can easily return the right value no matter
how you arrive at the age. The calling function doesn't need to know wheter you are storing
it as an unsigned integer or a long, oor wheter yoou are computing it as needed.

This technique makes your program easier to maintain. It gives your code a longer life because
design changes don't make your program obsolote.

In addition, accessor functions can include additional logic foor instance,
wheter a Cat's age is unlikely to be more than 100 or its weight is unlikely to be 1000.
These values should probably not be allowed. An accessor function can enforce these 
types of restrictions as well as do other tasks.

*/

class Cat
{
    public:
        //public accessors
        unsigned int GetAge();
        void SetAge(unsigned int Weight);

        unsigned int GetWeight();
        void SetWeight(unsigned int Weight);

        //public member functions
        void Meow();

    private:
        //private member data
        unsigned int itsAge;
        unsigned int itsWeight;
};



