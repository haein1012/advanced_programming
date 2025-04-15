class Person
{
    public string Name { get; set; }
    public int Age { get; set; }
    public string Address { get; set; }

    public override string ToString()
    {
        return $"Name: {Name}, Age: {Age}, Address: {Address}";
    }
}

class PersonBuilder
{
    private Person person = new Person();

    public PersonBuilder WithName(string name)
    {
        person.Name = name;
        return this;
    }

    public PersonBuilder WithAge(int age)
    {
        person.Age = age;
        return this;
    }

    public PersonBuilder WithAddress(string address)
    {
        person.Address = address;
        return this;
    }

    public Person Build()
    {
        return person;
    }
}
