# File: scrapespec.py
'''
Copyright (c) 2022, John Carlson.
All rights reserved.

Redistribution and use in source and binary forms, with or without
modification, are permitted provided that the following conditions are met:

    * Redistributions of source code must retain the above copyright notice, this
  list of conditions and the following disclaimer.

* Redistributions in binary form must reproduce the above copyright notice,
  this list of conditions and the following disclaimer in the documentation
  and/or other materials provided with the distribution.

* Neither the name of content nor the names of its
  contributors may be used to endorse or promote products derived from
  this software without specific prior written permission.

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE
FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
        SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE
'''

import sys
import re
from bs4 import BeautifulSoup

# Convert HTML to C/C++/C# by capturing <pre>'s from sys.stdin.  Result C/C++/C# written to sys.stdout

# Installation instructions
'''
pip install bs4
'''
# Running instructions
'''
python scrapespec.py < nodeInterfaces.html > nodeInterfaces.h
python scrapespec.py < nodeTypeInterfaces.html > nodeTypeInterfaces.h
'''

soup = BeautifulSoup(sys.stdin, features="lxml")

if soup is not None:
    f = sys.stdout
    pres = soup.find_all("pre")
    for pre in pres:
        cls = pre.text
        cns = re.findall(r' class ([a-zA-Z_][a-zA-Z_0-9]*) ', cls)
        f.write(str(cns))
        # f.write(str(cls.replace(u'\xa0', ' ')))
    f.close()
