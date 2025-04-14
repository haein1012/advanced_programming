class ExternalClass {
    public string Search() => "get user info";
}

interface IInternal {
    string Fetch();
}

class Adapter : IInternal {
    private ExternalClass external;

    public Adapter(ExternalClass external) {
        this.external = external;
    }

    public string Fetch() => external.Search();
}
