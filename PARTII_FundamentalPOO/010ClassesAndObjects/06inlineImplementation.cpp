/*
Inline Implementation

Just as you can ask the compiler to make a regular function inline,
you can make class methods inline.
The keyword inline appears before the return type.
The inline implementation of the GetWeight() function, for example, looks like this:
*/

//Return the weight data member
inline int Cat::GetWeight()
{
    return itsWeight;
}

/*
You can also put the definition of a function into 
the declaration of the class, which automatically makes that function inline.
For example:
*/

class Cat
{
    public:
        //inline
        int GetWeight() { return itsWeight; }
        void SetWeight(int aWeight);
};

/*
Note the syntax of the GetWeight() definition.
The body of the inline function begins immediately after the declaration
of class method; no semicolon is used after the parentheses.
Like any function, the definition begins with an opening brace and ends
with a clasing brace.

As usual, whitespace doesn´t matter; you could have written the declaration as
*/

class Cat
{
    int GetWeight() const
    {
        return itsWeight;
    }
    void SetWeight(int aWeight);
};




