# CPythonExtensionsExample
Simple examples for how to call C code from Python, and vice versa.

## Prerequisites.

In order to build the extensions for your system, you may need to install additional tools.

### Linux 

* RedHat variants

    $ sudo yum install python python-devel

* Debian variants

    $ sudo apt-get install python python-dev

* SUSE variants

    $ sudo zypper install python python-devel

### Windows.

(In progress)

### OS X.

(In progress)


## Building and Using the Extensions.

Make sure you have the prerequisites installed, and run the following:

    $ python setup.py build_ext --inplace && python setup.py clean

This will produce a `hello.so` binary. Simply add that to your PYTHONPATH and
you can try it out:

    $ python
    >>> import hello
    >>> hello.hello()
    Hello, World!
    >>> hello.hello("Your Name")
    Hello, Your Name!
    >>>

## References:

Blogs, documentation, and other sources that helped explain how this all works.

* https://en.wikibooks.org/wiki/Python_Programming/Extending_with_C
* http://dan.iel.fm/posts/python-c-extensions/


