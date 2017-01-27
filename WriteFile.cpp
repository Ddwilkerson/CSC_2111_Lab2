/*
Editor: Dakota Wilkerson
Date: 1/27/17
Edtiting: Changing WriteFile Struct to WriteFile Class
*/
#include "WriteFile.h"
#include <sstream>

WriteFile::WriteFile(const char* file_name)
{
   output_file.open(file_name);
   closed = false;
}

void WriteFile::~WriteFile()
{
   this.close();
   delete output_file;
}

void WriteFile::close()
{
   if (!closed)
   {
      output_file.close();
      closed = true;
   }
}

void WriteFile::writeLine(String* line)
{
   if (!closed && line->length() > 0)
   {
      output_file << line->getText() << endl;
   }
}
