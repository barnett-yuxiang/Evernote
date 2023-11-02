package kamakura.lab.kotlin_java_interop_example_01;

public class NoteManager {
    public void addAndDisplayNotes() {
        NoteUtils.INSTANCE.addNotes("Note 1", "This is note 1!");
        NoteUtils.INSTANCE.addNotes("Note 2", "This is note 2!");

        for (Note note : NoteUtils.INSTANCE.getAllNotes()) {
            System.out.println(NoteUtilsKt.display(note));
        }
    }
}
