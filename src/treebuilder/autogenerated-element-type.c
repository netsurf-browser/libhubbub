/* ANSI-C code produced by gperf version 3.1 */
/* Command-line: gperf --output-file=src/treebuilder/autogenerated-element-type.c src/treebuilder/element-type.gperf  */
/* Computed positions: -k'1-2,$' */

#if !((' ' == 32) && ('!' == 33) && ('"' == 34) && ('#' == 35) \
      && ('%' == 37) && ('&' == 38) && ('\'' == 39) && ('(' == 40) \
      && (')' == 41) && ('*' == 42) && ('+' == 43) && (',' == 44) \
      && ('-' == 45) && ('.' == 46) && ('/' == 47) && ('0' == 48) \
      && ('1' == 49) && ('2' == 50) && ('3' == 51) && ('4' == 52) \
      && ('5' == 53) && ('6' == 54) && ('7' == 55) && ('8' == 56) \
      && ('9' == 57) && (':' == 58) && (';' == 59) && ('<' == 60) \
      && ('=' == 61) && ('>' == 62) && ('?' == 63) && ('A' == 65) \
      && ('B' == 66) && ('C' == 67) && ('D' == 68) && ('E' == 69) \
      && ('F' == 70) && ('G' == 71) && ('H' == 72) && ('I' == 73) \
      && ('J' == 74) && ('K' == 75) && ('L' == 76) && ('M' == 77) \
      && ('N' == 78) && ('O' == 79) && ('P' == 80) && ('Q' == 81) \
      && ('R' == 82) && ('S' == 83) && ('T' == 84) && ('U' == 85) \
      && ('V' == 86) && ('W' == 87) && ('X' == 88) && ('Y' == 89) \
      && ('Z' == 90) && ('[' == 91) && ('\\' == 92) && (']' == 93) \
      && ('^' == 94) && ('_' == 95) && ('a' == 97) && ('b' == 98) \
      && ('c' == 99) && ('d' == 100) && ('e' == 101) && ('f' == 102) \
      && ('g' == 103) && ('h' == 104) && ('i' == 105) && ('j' == 106) \
      && ('k' == 107) && ('l' == 108) && ('m' == 109) && ('n' == 110) \
      && ('o' == 111) && ('p' == 112) && ('q' == 113) && ('r' == 114) \
      && ('s' == 115) && ('t' == 116) && ('u' == 117) && ('v' == 118) \
      && ('w' == 119) && ('x' == 120) && ('y' == 121) && ('z' == 122) \
      && ('{' == 123) && ('|' == 124) && ('}' == 125) && ('~' == 126))
/* The character set is not based on ISO-646.  */
#error "gperf generated tables don't work with this execution character set. Please report a bug to <bug-gperf@gnu.org>."
#endif

#line 17 "src/treebuilder/element-type.gperf"

#include <string.h>

#include "treebuilder/element-type.h"

#line 24 "src/treebuilder/element-type.gperf"
struct element_type_map;

#define TOTAL_KEYWORDS 106
#define MIN_WORD_LENGTH 1
#define MAX_WORD_LENGTH 14
#define MIN_HASH_VALUE 1
#define MAX_HASH_VALUE 219
/* maximum key range = 219, duplicates = 0 */

#ifndef GPERF_DOWNCASE
#define GPERF_DOWNCASE 1
static unsigned char gperf_downcase[256] =
  {
      0,   1,   2,   3,   4,   5,   6,   7,   8,   9,  10,  11,  12,  13,  14,
     15,  16,  17,  18,  19,  20,  21,  22,  23,  24,  25,  26,  27,  28,  29,
     30,  31,  32,  33,  34,  35,  36,  37,  38,  39,  40,  41,  42,  43,  44,
     45,  46,  47,  48,  49,  50,  51,  52,  53,  54,  55,  56,  57,  58,  59,
     60,  61,  62,  63,  64,  97,  98,  99, 100, 101, 102, 103, 104, 105, 106,
    107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121,
    122,  91,  92,  93,  94,  95,  96,  97,  98,  99, 100, 101, 102, 103, 104,
    105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119,
    120, 121, 122, 123, 124, 125, 126, 127, 128, 129, 130, 131, 132, 133, 134,
    135, 136, 137, 138, 139, 140, 141, 142, 143, 144, 145, 146, 147, 148, 149,
    150, 151, 152, 153, 154, 155, 156, 157, 158, 159, 160, 161, 162, 163, 164,
    165, 166, 167, 168, 169, 170, 171, 172, 173, 174, 175, 176, 177, 178, 179,
    180, 181, 182, 183, 184, 185, 186, 187, 188, 189, 190, 191, 192, 193, 194,
    195, 196, 197, 198, 199, 200, 201, 202, 203, 204, 205, 206, 207, 208, 209,
    210, 211, 212, 213, 214, 215, 216, 217, 218, 219, 220, 221, 222, 223, 224,
    225, 226, 227, 228, 229, 230, 231, 232, 233, 234, 235, 236, 237, 238, 239,
    240, 241, 242, 243, 244, 245, 246, 247, 248, 249, 250, 251, 252, 253, 254,
    255
  };
#endif

#ifndef GPERF_CASE_STRNCMP
#define GPERF_CASE_STRNCMP 1
static int
gperf_case_strncmp (register const char *s1, register const char *s2, register size_t n)
{
  for (; n > 0;)
    {
      unsigned char c1 = gperf_downcase[(unsigned char)*s1++];
      unsigned char c2 = gperf_downcase[(unsigned char)*s2++];
      if (c1 != 0 && c1 == c2)
        {
          n--;
          continue;
        }
      return (int)c1 - (int)c2;
    }
  return 0;
}
#endif

#ifdef __GNUC__
__inline
#else
#ifdef __cplusplus
inline
#endif
#endif
static unsigned int
hubbub_element_type_hash (register const char *str, register size_t len)
{
  static const unsigned char asso_values[] =
    {
      220, 220, 220, 220, 220, 220, 220, 220, 220, 220,
      220, 220, 220, 220, 220, 220, 220, 220, 220, 220,
      220, 220, 220, 220, 220, 220, 220, 220, 220, 220,
      220, 220, 220, 220, 220, 220, 220, 220, 220, 220,
      220, 220, 220, 220, 220, 220, 220, 220, 220,  60,
       20,  70, 105,  50,  10,  50,   5, 220, 220, 220,
      220, 220, 220, 220, 220,   0,  95,  40,  20,  10,
        5,  35,  35,  60,  70,  15,  55,   5,  15,  70,
       35,   0,   0,  10,   0, 100, 125,  40,  10,  65,
      220, 220, 220, 220, 220, 220, 220,   0,  95,  40,
       20,  10,   5,  35,  35,  60,  70,  15,  55,   5,
       15,  70,  35,   0,   0,  10,   0, 100, 125,  40,
       10,  65, 220, 220, 220, 220, 220, 220, 220, 220,
      220, 220, 220, 220, 220, 220, 220, 220, 220, 220,
      220, 220, 220, 220, 220, 220, 220, 220, 220, 220,
      220, 220, 220, 220, 220, 220, 220, 220, 220, 220,
      220, 220, 220, 220, 220, 220, 220, 220, 220, 220,
      220, 220, 220, 220, 220, 220, 220, 220, 220, 220,
      220, 220, 220, 220, 220, 220, 220, 220, 220, 220,
      220, 220, 220, 220, 220, 220, 220, 220, 220, 220,
      220, 220, 220, 220, 220, 220, 220, 220, 220, 220,
      220, 220, 220, 220, 220, 220, 220, 220, 220, 220,
      220, 220, 220, 220, 220, 220, 220, 220, 220, 220,
      220, 220, 220, 220, 220, 220, 220, 220, 220, 220,
      220, 220, 220, 220, 220, 220, 220, 220, 220, 220,
      220, 220, 220, 220, 220, 220, 220, 220
    };
  register unsigned int hval = len;

  switch (hval)
    {
      default:
        hval += asso_values[(unsigned char)str[1]+2];
      /*FALLTHROUGH*/
      case 1:
        hval += asso_values[(unsigned char)str[0]];
        break;
    }
  return hval + asso_values[(unsigned char)str[len - 1]];
}

const struct element_type_map *
hubbub_element_type_lookup (register const char *str, register size_t len)
{
  static const struct element_type_map wordlist[] =
    {
#line 26 "src/treebuilder/element-type.gperf"
      {"a",                   A},
#line 126 "src/treebuilder/element-type.gperf"
      {"tr",                  TR},
#line 30 "src/treebuilder/element-type.gperf"
      {"area",                AREA},
#line 29 "src/treebuilder/element-type.gperf"
      {"applet",              APPLET},
#line 60 "src/treebuilder/element-type.gperf"
      {"font",                FONT},
#line 61 "src/treebuilder/element-type.gperf"
      {"footer",              FOOTER},
#line 65 "src/treebuilder/element-type.gperf"
      {"frameset",            FRAMESET},
#line 63 "src/treebuilder/element-type.gperf"
      {"form",                FORM},
#line 112 "src/treebuilder/element-type.gperf"
      {"spacer",              SPACER},
#line 31 "src/treebuilder/element-type.gperf"
      {"article",             ARTICLE},
#line 62 "src/treebuilder/element-type.gperf"
      {"foreignobject",       FOREIGNOBJECT},
#line 95 "src/treebuilder/element-type.gperf"
      {"nobr",                NOBR},
#line 64 "src/treebuilder/element-type.gperf"
      {"frame",               FRAME},
#line 108 "src/treebuilder/element-type.gperf"
      {"s",                   S},
#line 27 "src/treebuilder/element-type.gperf"
      {"address",             ADDRESS},
#line 98 "src/treebuilder/element-type.gperf"
      {"noscript",            NOSCRIPT},
#line 109 "src/treebuilder/element-type.gperf"
      {"script",              SCRIPT},
#line 120 "src/treebuilder/element-type.gperf"
      {"td",                  TD},
#line 57 "src/treebuilder/element-type.gperf"
      {"fieldset",            FIELDSET},
#line 125 "src/treebuilder/element-type.gperf"
      {"title",               TITLE},
#line 97 "src/treebuilder/element-type.gperf"
      {"noframes",            NOFRAMES},
#line 59 "src/treebuilder/element-type.gperf"
      {"figure",              FIGURE},
#line 73 "src/treebuilder/element-type.gperf"
      {"hr",                  HR},
#line 51 "src/treebuilder/element-type.gperf"
      {"dir",                 DIR},
#line 122 "src/treebuilder/element-type.gperf"
      {"tfoot",               TFOOT},
#line 96 "src/treebuilder/element-type.gperf"
      {"noembed",             NOEMBED},
#line 121 "src/treebuilder/element-type.gperf"
      {"textarea",            TEXTAREA},
#line 88 "src/treebuilder/element-type.gperf"
      {"meta",                META},
#line 58 "src/treebuilder/element-type.gperf"
      {"figcaption",          FIGCAPTION},
#line 47 "src/treebuilder/element-type.gperf"
      {"dd",                  DD},
#line 107 "src/treebuilder/element-type.gperf"
      {"pre",                 PRE},
#line 110 "src/treebuilder/element-type.gperf"
      {"select",              SELECT},
#line 71 "src/treebuilder/element-type.gperf"
      {"h6",                  H6},
#line 118 "src/treebuilder/element-type.gperf"
      {"table",               TABLE},
#line 91 "src/treebuilder/element-type.gperf"
      {"mn",                  MN},
#line 117 "src/treebuilder/element-type.gperf"
      {"svg",                 SVG},
#line 106 "src/treebuilder/element-type.gperf"
      {"plaintext",           PLAINTEXT},
#line 85 "src/treebuilder/element-type.gperf"
      {"marquee",             MARQUEE},
#line 130 "src/treebuilder/element-type.gperf"
      {"wbr",                 WBR},
#line 46 "src/treebuilder/element-type.gperf"
      {"command",             COMMAND},
#line 84 "src/treebuilder/element-type.gperf"
      {"malignmark",          MALIGNMARK},
#line 104 "src/treebuilder/element-type.gperf"
      {"p",                   P},
#line 49 "src/treebuilder/element-type.gperf"
      {"details",             DETAILS},
#line 50 "src/treebuilder/element-type.gperf"
      {"dialog",              DIALOG},
#line 92 "src/treebuilder/element-type.gperf"
      {"mo",                  MO},
#line 43 "src/treebuilder/element-type.gperf"
      {"center",              CENTER},
#line 90 "src/treebuilder/element-type.gperf"
      {"mi",                  MI},
#line 45 "src/treebuilder/element-type.gperf"
      {"colgroup",            COLGROUP},
#line 86 "src/treebuilder/element-type.gperf"
      {"math",                MATH},
#line 105 "src/treebuilder/element-type.gperf"
      {"param",               PARAM},
#line 55 "src/treebuilder/element-type.gperf"
      {"em",                  EM},
#line 82 "src/treebuilder/element-type.gperf"
      {"link",                LINK},
#line 119 "src/treebuilder/element-type.gperf"
      {"tbody",               TBODY},
#line 102 "src/treebuilder/element-type.gperf"
      {"option",              OPTION},
#line 53 "src/treebuilder/element-type.gperf"
      {"dl",                  DL},
#line 72 "src/treebuilder/element-type.gperf"
      {"head",                HEAD},
#line 124 "src/treebuilder/element-type.gperf"
      {"thead",               THEAD},
#line 99 "src/treebuilder/element-type.gperf"
      {"object",              OBJECT},
#line 40 "src/treebuilder/element-type.gperf"
      {"br",                  BR},
#line 44 "src/treebuilder/element-type.gperf"
      {"col",                 COL},
#line 48 "src/treebuilder/element-type.gperf"
      {"desc",                DESC},
#line 79 "src/treebuilder/element-type.gperf"
      {"input",               INPUT},
#line 42 "src/treebuilder/element-type.gperf"
      {"caption",             CAPTION},
#line 28 "src/treebuilder/element-type.gperf"
      {"annotation-xml",      ANNOTATION_XML},
#line 56 "src/treebuilder/element-type.gperf"
      {"embed",               EMBED},
#line 89 "src/treebuilder/element-type.gperf"
      {"mglyph",              MGLYPH},
#line 123 "src/treebuilder/element-type.gperf"
      {"th",                  TH},
#line 76 "src/treebuilder/element-type.gperf"
      {"iframe",              IFRAME},
#line 83 "src/treebuilder/element-type.gperf"
      {"listing",             LISTING},
#line 101 "src/treebuilder/element-type.gperf"
      {"optgroup",            OPTGROUP},
#line 32 "src/treebuilder/element-type.gperf"
      {"aside",               ASIDE},
#line 103 "src/treebuilder/element-type.gperf"
      {"output",              OUTPUT},
#line 93 "src/treebuilder/element-type.gperf"
      {"ms",                  MS},
#line 131 "src/treebuilder/element-type.gperf"
      {"xmp",                 XMP},
#line 75 "src/treebuilder/element-type.gperf"
      {"i",                   I},
#line 116 "src/treebuilder/element-type.gperf"
      {"summary",             SUMMARY},
#line 127 "src/treebuilder/element-type.gperf"
      {"tt",                  TT},
#line 38 "src/treebuilder/element-type.gperf"
      {"blockquote",          BLOCKQUOTE},
#line 81 "src/treebuilder/element-type.gperf"
      {"li",                  LI},
#line 94 "src/treebuilder/element-type.gperf"
      {"mtext",               MTEXT},
#line 70 "src/treebuilder/element-type.gperf"
      {"h5",                  H5},
#line 111 "src/treebuilder/element-type.gperf"
      {"small",               SMALL},
#line 100 "src/treebuilder/element-type.gperf"
      {"ol",                  OL},
#line 35 "src/treebuilder/element-type.gperf"
      {"basefont",            BASEFONT},
#line 87 "src/treebuilder/element-type.gperf"
      {"menu",                MENU},
#line 77 "src/treebuilder/element-type.gperf"
      {"image",               IMAGE},
#line 54 "src/treebuilder/element-type.gperf"
      {"dt",                  DT},
#line 37 "src/treebuilder/element-type.gperf"
      {"big",                 BIG},
#line 34 "src/treebuilder/element-type.gperf"
      {"base",                BASE},
#line 115 "src/treebuilder/element-type.gperf"
      {"style",               STYLE},
#line 113 "src/treebuilder/element-type.gperf"
      {"strike",              STRIKE},
#line 69 "src/treebuilder/element-type.gperf"
      {"h4",                  H4},
#line 41 "src/treebuilder/element-type.gperf"
      {"button",              BUTTON},
#line 68 "src/treebuilder/element-type.gperf"
      {"h3",                  H3},
#line 67 "src/treebuilder/element-type.gperf"
      {"h2",                  H2},
#line 52 "src/treebuilder/element-type.gperf"
      {"div",                 DIV},
#line 39 "src/treebuilder/element-type.gperf"
      {"body",                BODY},
#line 66 "src/treebuilder/element-type.gperf"
      {"h1",                  H1},
#line 78 "src/treebuilder/element-type.gperf"
      {"img",                 IMG},
#line 129 "src/treebuilder/element-type.gperf"
      {"ul",                  UL},
#line 114 "src/treebuilder/element-type.gperf"
      {"strong",              STRONG},
#line 80 "src/treebuilder/element-type.gperf"
      {"isindex",             ISINDEX},
#line 36 "src/treebuilder/element-type.gperf"
      {"bgsound",             BGSOUND},
#line 33 "src/treebuilder/element-type.gperf"
      {"b",                   B},
#line 128 "src/treebuilder/element-type.gperf"
      {"u",                   U},
#line 74 "src/treebuilder/element-type.gperf"
      {"html",                HTML}
    };

  if (len <= MAX_WORD_LENGTH && len >= MIN_WORD_LENGTH)
    {
      register unsigned int key = hubbub_element_type_hash (str, len);

      if (key <= MAX_HASH_VALUE && key >= MIN_HASH_VALUE)
        {
          register const struct element_type_map *resword;

          switch (key - 1)
            {
              case 0:
                resword = &wordlist[0];
                goto compare;
              case 1:
                resword = &wordlist[1];
                goto compare;
              case 3:
                resword = &wordlist[2];
                goto compare;
              case 5:
                resword = &wordlist[3];
                goto compare;
              case 8:
                resword = &wordlist[4];
                goto compare;
              case 10:
                resword = &wordlist[5];
                goto compare;
              case 12:
                resword = &wordlist[6];
                goto compare;
              case 13:
                resword = &wordlist[7];
                goto compare;
              case 15:
                resword = &wordlist[8];
                goto compare;
              case 16:
                resword = &wordlist[9];
                goto compare;
              case 17:
                resword = &wordlist[10];
                goto compare;
              case 18:
                resword = &wordlist[11];
                goto compare;
              case 19:
                resword = &wordlist[12];
                goto compare;
              case 20:
                resword = &wordlist[13];
                goto compare;
              case 21:
                resword = &wordlist[14];
                goto compare;
              case 22:
                resword = &wordlist[15];
                goto compare;
              case 25:
                resword = &wordlist[16];
                goto compare;
              case 26:
                resword = &wordlist[17];
                goto compare;
              case 27:
                resword = &wordlist[18];
                goto compare;
              case 29:
                resword = &wordlist[19];
                goto compare;
              case 32:
                resword = &wordlist[20];
                goto compare;
              case 35:
                resword = &wordlist[21];
                goto compare;
              case 36:
                resword = &wordlist[22];
                goto compare;
              case 37:
                resword = &wordlist[23];
                goto compare;
              case 39:
                resword = &wordlist[24];
                goto compare;
              case 41:
                resword = &wordlist[25];
                goto compare;
              case 42:
                resword = &wordlist[26];
                goto compare;
              case 43:
                resword = &wordlist[27];
                goto compare;
              case 44:
                resword = &wordlist[28];
                goto compare;
              case 46:
                resword = &wordlist[29];
                goto compare;
              case 47:
                resword = &wordlist[30];
                goto compare;
              case 50:
                resword = &wordlist[31];
                goto compare;
              case 51:
                resword = &wordlist[32];
                goto compare;
              case 54:
                resword = &wordlist[33];
                goto compare;
              case 56:
                resword = &wordlist[34];
                goto compare;
              case 57:
                resword = &wordlist[35];
                goto compare;
              case 58:
                resword = &wordlist[36];
                goto compare;
              case 61:
                resword = &wordlist[37];
                goto compare;
              case 62:
                resword = &wordlist[38];
                goto compare;
              case 66:
                resword = &wordlist[39];
                goto compare;
              case 69:
                resword = &wordlist[40];
                goto compare;
              case 70:
                resword = &wordlist[41];
                goto compare;
              case 71:
                resword = &wordlist[42];
                goto compare;
              case 75:
                resword = &wordlist[43];
                goto compare;
              case 76:
                resword = &wordlist[44];
                goto compare;
              case 80:
                resword = &wordlist[45];
                goto compare;
              case 81:
                resword = &wordlist[46];
                goto compare;
              case 82:
                resword = &wordlist[47];
                goto compare;
              case 83:
                resword = &wordlist[48];
                goto compare;
              case 84:
                resword = &wordlist[49];
                goto compare;
              case 86:
                resword = &wordlist[50];
                goto compare;
              case 88:
                resword = &wordlist[51];
                goto compare;
              case 89:
                resword = &wordlist[52];
                goto compare;
              case 90:
                resword = &wordlist[53];
                goto compare;
              case 91:
                resword = &wordlist[54];
                goto compare;
              case 93:
                resword = &wordlist[55];
                goto compare;
              case 94:
                resword = &wordlist[56];
                goto compare;
              case 95:
                resword = &wordlist[57];
                goto compare;
              case 96:
                resword = &wordlist[58];
                goto compare;
              case 97:
                resword = &wordlist[59];
                goto compare;
              case 98:
                resword = &wordlist[60];
                goto compare;
              case 99:
                resword = &wordlist[61];
                goto compare;
              case 101:
                resword = &wordlist[62];
                goto compare;
              case 103:
                resword = &wordlist[63];
                goto compare;
              case 104:
                resword = &wordlist[64];
                goto compare;
              case 105:
                resword = &wordlist[65];
                goto compare;
              case 106:
                resword = &wordlist[66];
                goto compare;
              case 110:
                resword = &wordlist[67];
                goto compare;
              case 111:
                resword = &wordlist[68];
                goto compare;
              case 112:
                resword = &wordlist[69];
                goto compare;
              case 114:
                resword = &wordlist[70];
                goto compare;
              case 115:
                resword = &wordlist[71];
                goto compare;
              case 116:
                resword = &wordlist[72];
                goto compare;
              case 117:
                resword = &wordlist[73];
                goto compare;
              case 120:
                resword = &wordlist[74];
                goto compare;
              case 121:
                resword = &wordlist[75];
                goto compare;
              case 126:
                resword = &wordlist[76];
                goto compare;
              case 129:
                resword = &wordlist[77];
                goto compare;
              case 131:
                resword = &wordlist[78];
                goto compare;
              case 134:
                resword = &wordlist[79];
                goto compare;
              case 136:
                resword = &wordlist[80];
                goto compare;
              case 139:
                resword = &wordlist[81];
                goto compare;
              case 141:
                resword = &wordlist[82];
                goto compare;
              case 142:
                resword = &wordlist[83];
                goto compare;
              case 143:
                resword = &wordlist[84];
                goto compare;
              case 144:
                resword = &wordlist[85];
                goto compare;
              case 146:
                resword = &wordlist[86];
                goto compare;
              case 147:
                resword = &wordlist[87];
                goto compare;
              case 148:
                resword = &wordlist[88];
                goto compare;
              case 149:
                resword = &wordlist[89];
                goto compare;
              case 150:
                resword = &wordlist[90];
                goto compare;
              case 151:
                resword = &wordlist[91];
                goto compare;
              case 155:
                resword = &wordlist[92];
                goto compare;
              case 156:
                resword = &wordlist[93];
                goto compare;
              case 161:
                resword = &wordlist[94];
                goto compare;
              case 162:
                resword = &wordlist[95];
                goto compare;
              case 163:
                resword = &wordlist[96];
                goto compare;
              case 166:
                resword = &wordlist[97];
                goto compare;
              case 167:
                resword = &wordlist[98];
                goto compare;
              case 171:
                resword = &wordlist[99];
                goto compare;
              case 175:
                resword = &wordlist[100];
                goto compare;
              case 176:
                resword = &wordlist[101];
                goto compare;
              case 181:
                resword = &wordlist[102];
                goto compare;
              case 190:
                resword = &wordlist[103];
                goto compare;
              case 200:
                resword = &wordlist[104];
                goto compare;
              case 218:
                resword = &wordlist[105];
                goto compare;
            }
          return 0;
        compare:
          {
            register const char *s = resword->name;

            if ((((unsigned char)*str ^ (unsigned char)*s) & ~32) == 0 && !gperf_case_strncmp (str, s, len) && s[len] == '\0')
              return resword;
          }
        }
    }
  return 0;
}
