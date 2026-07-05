/* Deoxyribonucleic acid, DNA is the primary information storage molecule in biological systems. It is composed of four nucleic acid bases Guanine ('G'), Cytosine ('C'), Adenine ('A'), and Thymine ('T').

Ribonucleic acid, RNA, is the primary messenger molecule in cells. RNA differs slightly from DNA its chemical structure and contains no Thymine. In RNA Thymine is replaced by another nucleic acid Uracil ('U').

Create a function which translates a given DNA string into RNA. */

#include <string>

std::string DNAtoRNA(std::string dna)
{
  for (size_t i = 0; i < dna.size(); i++)
  {
    if (dna[i] == 'T') {
      dna[i] = 'U';
    }
  }
  
  return dna;
}

// second try
/* std::string DNAtoRNA(std::string dna){
  std::replace(dna.begin(), dna.end(), 'T', 'U');
  return dna;
} */