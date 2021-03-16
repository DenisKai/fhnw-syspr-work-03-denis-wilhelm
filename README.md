# System-Programmierung
## Hands-on zu Lektion 3
Für Slides und Code Beispiele, siehe [Lektion 3](../../../fhnw-syspr/blob/master/03/README.md)

> *Achtung: Arbeiten Sie nicht direkt auf diesem Repository.*<br/>
> *[Erstellen Sie eine persönliche Kopie, mit diesem GitHub Classroom Link](https://classroom.github.com/a/SiycV5GX).*

### a) TLPI Beispiele builden, 5'
* [TLPI](http://www.man7.org/tlpi/) Beispielcode Setup auf dem Raspberry Pi:<pre>
    $ cd ~
    $ wget http://man7.org/tlpi/code/download/tlpi-180725-book.tar.gz
    $ tar xfzmv tlpi-180725-book.tar.gz
    $ cd tlpi-book
    $ sudo apt-get install libcap-dev
    $ sudo apt-get install libacl1-dev
    $ make</pre>

### b) File I/O, 20'
* Schreiben Sie ein Programm *my_copy.c*, das eine beliebig grosse, existierende Datei source liest und in eine neue Datei dest kopiert, wie das *cp* Kommando:<pre>
    $ ./my_copy source dest</pre>
* Verwenden Sie System Calls: open(), read(), write().
* Fertig? Bauen Sie Fehlerbehandlung ein. 

### c) Buffering, 10'
* Kompilieren Sie das Programm [write_bytes](http://man7.org/tlpi/code/online/dist/filebuff/write_bytes.c.html) zuerst mit und dann ohne die Compiler Option *-DUSE_O_SYNC*.
* Messen Sie die Laufzeit (real, sys) der Binaries, je mit *num-bytes* = 100000 und *buf-size* = 1, 16, 256, 4096:<pre>
    $ time write_bytes my_file num-bytes buf-size</pre>
* Welchen Einfluss hat die Buffergrösse? Und *O_SYNC*?
* Wann/wozu ist Synchronisieren überhaupt nötig?
