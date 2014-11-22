displayuid
==========

Demonstration of Real and Effective UID
If the ownership are permissions are not the set real and effective UIDs will be the same.
Try setting the ownership to root sudo chown root displayuid and adding the SETUID bit. sudo chmod u+s
displayuid. Now running the program the real and effective UIDs are different.
