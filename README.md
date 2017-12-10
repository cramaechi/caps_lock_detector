# Caps-Lock Detector
A program that prints out words that suffer from "caps-lock" syndrome.

### Synopsis
One sign that the caps-lock key may be inadvertently on is that the first letter of a word is lower case
and the remaining letters are uppercase (e.g., lIKE, tHIS).

The program scans a string input by a user and outputs any words that appear to suffer from caps-lock syndrome.

The program will allow a user to input as many strings as desired, testing each string for potential caps-lock
words, until the user enters a *blank string*.

## Setup
1. Download and install [Git](https://git-scm.com/downloads), if you don't already have it.

2. Open terminal and run the git clone command:

   ```
   $ git clone https://github.com/cramaechi/caps_lock_detector.git
   ```
    or [download as ZIP](https://github.com/cramaechi/caps_lock_detector/archive/master.zip).

3. Go to the project folder:

   ```
   $ cd caps-lock-detector
   ```

4. Compile:

   ```
   $ make
   ```
   
## Usage
Run:

```
$ ./caps_lock_detector
```

Sample Output:
```
Enter a sentence: I liKe tHIS cover oF Leonard Cohen's "Hallelujah".                                                  
                                                                                                                      
Caps-Lock Word List                                                                                                   
-------------------                                                                                                   
liKe                                                                                                                  
tHIS                                                                                                                  
oF                                                                                                                    
                                                                                                                      
Enter a sentence: ... And that's exacTly hoW I'm going end this... With love.                                         
                                                                                                                      
Caps-Lock Word List                                                                                                   
-------------------                                                                                                   
exacTly                                                                                                               
hoW                                                                                                                   
                                                                                                                      
Enter a sentence: 
```
