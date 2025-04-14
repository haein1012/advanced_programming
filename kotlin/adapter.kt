class ExternalClass {
    fun search(): String = "get user info"
}

interface InternalInterface {
    fun fetch(): String
}

class Adapter(private val external: ExternalClass) : InternalInterface {
    override fun fetch(): String = external.search()
}
