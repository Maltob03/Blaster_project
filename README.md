<h1 align="center">
  <br>
  <a><img src="https://icons-for-free.com/iconfiles/png/512/c+original-1324760524626900054.png" alt="Markdownify" width="200"></a>
  <br>
  Project Blaster
  <br>
</h1>

<h4 align="center">This C script unlocks the hidden code of life by transforming a gene sequence into a captivating chain of amino acids.</h4>

<!-- 
<p align="center">
  <a href="https://badge.fury.io/js/electron-markdownify">
    <img src="https://badge.fury.io/js/electron-markdownify.svg"
         alt="Gitter">
  </a>
  <a href="https://gitter.im/amitmerchant1990/electron-markdownify"><img src="https://badges.gitter.im/amitmerchant1990/electron-markdownify.svg"></a>
  <a href="https://saythanks.io/to/bullredeyes@gmail.com">
      <img src="https://img.shields.io/badge/SayThanks.io-%E2%98%BC-1EAEDB.svg">
  </a>
  <a href="https://www.paypal.me/AmitMerchant">
    <img src="https://img.shields.io/badge/$-donate-ff69b4.svg?maxAge=2592000&amp;style=flat">
  </a>
</p>

<p align="center">
  <a href="#key-features">Key Features</a> •
  <a href="#how-to-use">How To Use</a> •
  <a href="#download">Download</a> •
  <a href="#credits">Credits</a> •
  <a href="#related">Related</a> •
  <a href="#license">License</a>
</p>
-->

![Image](https://res.cloudinary.com/maltob03/image/upload/v1684603570/Screenshot_2023-05-20_alle_19.25.43_vhicbg.png)
## How it works

This C script allows obtaining a sequence of amino acids from a specific gene sequence.

This process occurs in all cells almost algorithmically. A DNA sequence is composed of 4 nitrogenous bases: A, C, G, T (adenine, cytosine, guanine, and thymine). In a cell, this sequence is converted into RNA by breaking the DNA chain and using it as a sort of template. It's important to note that RNA replaces the nitrogenous base T with U (uracil).

From the newly converted mRNA sequence inside the cell, the most crucial process for biological development takes place, namely the translation of mRNA into an amino acid sequence.

Translation follows specific rules:

Only certain portions of the mRNA sequence encode an amino acid, while others can be considered placeholders and are called "exons".
Translation occurs by examining a sequence of three bases, known as a "codon". Each codon encodes a specific amino acid.
The polymerization of amino acids (the translation process) is unambiguous but redundant, as multiple codons can encode the same amino acid.
With 4 nitrogenous bases and codons formed by triplets of bases, there are exactly 4^3, or 64 possible combinations.
Once the amino acid sequence is obtained, the process of blasting can be performed to identify the corresponding protein and its specific function within the organism.



## How To Use

What you need to run this script:

* An ide for compile and run the scrpt, but you can run also with terminal like this:

Move into the folder with terminal and run in order

```
gcc script.c

./a.out 

```

Like this:


```
daltob@Mac-mini-di-Domenico Blaster_project-main % cd code
daltob@Mac-mini-di-Domenico code % gcc script.c            
script.c:110:9: warning: expression result unused [-Wunused-value]
    for(c; c<=lenght; c=c+3)
        ^
script.c:131:9: warning: expression result unused [-Wunused-value]
    for(start;start<=stop;start=start+3)
        ^~~~~
2 warnings generated.
daltob@Mac-mini-di-Domenico code % ls
a.out           output          script.c        test.txt
daltob@Mac-mini-di-Domenico code % ./a.out                 
```
After this the script will be executed, of course you need a gcc compiler installed on your pc


