# __fastcall-alternative
Just for fun - but also serious.

Just wanting a nicer syntax for VCL calls in C++Builder... 

```
TForm1 *Form1;

#define ฦ __fastcall;

//---------------------------------------------------------------------------
 ฦ TForm1::TForm1(TComponent* Owner)  : TForm(Owner)

{     //  candidates:  ๐  _ฦ   ฦ   อฐ   ฮจ   ฯช   ฯ
	  //
	  //	๐คจ ๐ ๐ค  ๐ โ  ๐ป ๐ฝ ๐ฉ ๐ ๐ ๐ โ ๐ฌ โณ ๐ ๐ธ
}

//---------------------------------------------------------------------------
```
