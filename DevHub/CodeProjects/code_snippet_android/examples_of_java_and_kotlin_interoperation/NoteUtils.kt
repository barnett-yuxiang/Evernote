package kamakura.lab.kotlin_java_interop_example_01

object NoteUtils {
    val notes = mutableListOf<Note>()

    fun addNotes(title: String, content: String) {
        notes.add(Note(title, content))
    }

    fun getAllNotes(): List<Note> {
        return notes
    }
}

fun Note.display(): String {
    return "Title: $title, Content: $content"
}
