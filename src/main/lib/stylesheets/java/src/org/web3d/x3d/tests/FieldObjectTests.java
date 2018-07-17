/* Copyright (c) 1995-2018 held by the author(s).  All rights reserved.

Redistribution and use in source and binary forms, with or without
modification, are permitted provided that the following conditions
are met:

    * Redistributions of source code must retain the above copyright
      notice, this list of conditions and the following disclaimer.
    * Redistributions in binary form must reproduce the above copyright
      notice, this list of conditions and the following disclaimer
      in the documentation and/or other materials provided with the
      distribution.
    * Neither the name of the Web3D Consortium (http://www.web3D.org)
      nor the names of its contributors may be used to endorse or
      promote products derived from this software without specific
      prior written permission.

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
"AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
POSSIBILITY OF SUCH DAMAGE.
*/

package org.web3d.x3d.tests;

import org.junit.jupiter.api.Test;
import static org.junit.jupiter.api.Assertions.assertEquals;
import static org.junit.jupiter.api.Assertions.assertTrue;

import org.web3d.x3d.jsail.fields.*;

/**
 * FieldObjectTests.java
 *
 * Filename:     FieldObjectTests.java
 * Description:  Initial test harness using junit5 for the X3D Java Scene Access Interface Library (X3DJSAIL).
 * Identifier:   
 * @author       Don Brutzman
 * Created:      23 June 2018
 * Revised:      see version control
 * Compile, run: ../build.xml
 * Reference:    http://www.web3d.org/specifications/java/X3DJSAIL.html
 * Reference:    https://junit.org/junit5/docs/current/user-guide/#running-tests-build-ant
 * Reference:    https://ant.apache.org/manual/Tasks/junitlauncher.html
 * License:      ../license.html
 */
class FieldObjectTests
{
    @Test
    void fieldObjectInitializationsTest()
	{
        SFBoolObject testSFBoolObject = new SFBoolObject(); // static initializer is tested, might throw exception

        // assert statements
		System.out.println ("Beginning tests:");
        assertTrue(SFBoolObject.matches("blah"), "SFBoolObject.matches(\"blah\") should fail");
        assertTrue(false, "this test should explicitly fail");
        assertTrue(testSFBoolObject.matches(),   "testSFBoolObject.matches()");
		System.out.println("FieldObjectTests.fieldObjectInitializations() complete");
    }

    /** Default main() method provided for test purposes.
     * @param args the command line arguments
     * @see #fieldObjectInitializationsTest()
     */
    public static void main(String[] args)
    {
		System.out.println("FieldObjectTests start...");
		FieldObjectTests thisObject = new FieldObjectTests();
		thisObject.fieldObjectInitializationsTest();
		System.out.println("FieldObjectTests complete");
	}
}