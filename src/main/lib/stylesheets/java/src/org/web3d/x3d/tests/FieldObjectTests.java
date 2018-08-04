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

import java.util.Arrays;
import org.junit.jupiter.api.DisplayName;
import org.junit.jupiter.api.Test;
import static org.junit.jupiter.api.Assertions.assertEquals;
import static org.junit.jupiter.api.Assertions.assertFalse;
import static org.junit.jupiter.api.Assertions.assertTrue;

import org.web3d.x3d.jsail.fields.*;

/**
 * FieldObjectTests.java
 *
 * Filename:     FieldObjectTests.java
 * Identifier:   
 * @author       Don Brutzman
 * Created:      23 June 2018
 * Revised:      see version control
 * Compile, run: ../build.xml
 */

/**
 * Initial test harness using junit5 for the X3D Java Scene Access Interface Library (X3DJSAIL).
 * @see <a href="http://www.web3d.org/specifications/java/X3DJSAIL.html">X3DJSAIL</a>
 * @see <a href="https://junit.org/junit5/docs/current/user-guide/#running-tests-build-ant">JUnit5 running tests with Ant</a>
 * @see <a href="https://ant.apache.org/manual/Tasks/junitlauncher.html">Ant task junitlauncher</a>
 * @see <a href="https://www.petrikainulainen.net/programming/testing/junit-5-tutorial-writing-assertions-with-junit-5-api">Tutorial: writing assertions with JUnit5</a>
 * @see <a href="../license.html">License</a>   
 */
class FieldObjectTests
{
    @Test
    @DisplayName("Test initialization of all X3D SF/MF field objects")
    void fieldObjectInitializationsTest()
	{
        System.out.println("FieldObjectTests.fieldObjectInitializationsTest() start...");

        // assert statements
        System.out.println ("Preliminary tests...");
        assertTrue (true,  "this test should explicitly pass");
        assertFalse(false, "this test should explicitly fail");
        
        // now tests for each field type
        SFBoolObjectTests();
        MFBoolObjectTests();
        SFInt32ObjectTests();
        MFInt32ObjectTests();
        // regex expressions for SFFloat, SFDouble and SFTime are identical but classes are unique, so test them!
        SFFloatObjectTests();
        SFDoubleObjectTests();
        SFTimeObjectTests();
        // regex expressions for SFFloat, SFDouble and SFTime are identical but classes are unique, so test them!
        MFFloatObjectTests();
        MFDoubleObjectTests();
        MFTimeObjectTests();
        System.out.println("FieldObjectTests.fieldObjectInitializationsTest() complete");
    }
    
    @Test
    @DisplayName("Test SFBoolObject single-field boolean")
    void SFBoolObjectTests()
	{
        System.out.println ("SFBoolObjectTests...");
        SFBoolObject testSFBoolObject = new SFBoolObject(); // static initializer is tested, might throw exception
        assertTrue  (SFBoolObject.DEFAULT_VALUE,       "test correct default value for this field object");
        assertTrue  (testSFBoolObject.matches(),       "testSFBoolObject.matches() tests object initialization correctly matches regex");
        assertTrue  (SFBoolObject.matches(SFBoolObject.DEFAULT_VALUE_STRING),
                                                       "SFBoolObject.matches(SFBoolObject.DEFAULT_VALUE_STRING) tests object initialization correctly matches regex");
        assertTrue  (testSFBoolObject.isDefaultValue(),"test initialized field object isDefaultValue() returns true");
        
        testSFBoolObject.setValue(true);               // returns void because it matches (overrides) Java SAI specification interface
        assertTrue  (testSFBoolObject.getValue(),      "tests setting object value to true results in value of true");
        testSFBoolObject.setValue(false);              // returns void because it matches (overrides) Java SAI specification interface
        assertFalse (testSFBoolObject.getValue(),      "tests setting object value to false results in value of false");
        
        assertTrue  (SFBoolObject.matches("true"),     "SFBoolObject.matches(\"true\")  tests correct string value");
        assertTrue  (SFBoolObject.matches("false"),    "SFBoolObject.matches(\"false\") tests correct string value");
        assertTrue  (SFBoolObject.matches("  true "),  "SFBoolObject.matches(\"  true \") tests correct string value, including external whitespace");
        assertTrue  (SFBoolObject.matches(" false "),  "SFBoolObject.matches(\" false \") tests correct string value, including external whitespace");
        
        assertFalse (SFBoolObject.matches(""),         "SFBoolObject.matches(\"\") tests incorrect empty string value");
        assertFalse (SFBoolObject.matches(","),        "SFBoolObject.matches(\",\") tests incorrect inclusion of comma as whitespace");
        assertFalse (SFBoolObject.matches("true,"),    "SFBoolObject.matches(\"true,\") tests incorrect inclusion of comma as whitespace");
        assertFalse (SFBoolObject.matches(",false"),   "SFBoolObject.matches(\",false\") tests incorrect inclusion of comma as whitespace");
        assertFalse (SFBoolObject.matches("TRUE"),     "SFBoolObject.matches(\"TRUE\")  tests incorrect case of string value");
        assertFalse (SFBoolObject.matches("FALSE"),    "SFBoolObject.matches(\"FALSE\") tests incorrect case of string value");
        assertFalse (SFBoolObject.matches("rtue"),     "SFBoolObject.matches(\"rtue\") tests incorrect ordering of characters in string value");
        assertFalse (SFBoolObject.matches("aflse"),    "SFBoolObject.matches(\"aflse\") tests incorrect ordering of characters in string value");
        assertFalse (SFBoolObject.matches("blah"),     "SFBoolObject.matches(\"blah\")  tests incorrect string value");
        assertFalse (SFBoolObject.matches("NaN"),      "SFBoolObject.matches(\"NaN\") tests Not A Number (NaN) which is not an allowed string value");
    }
    
    @Test
    @DisplayName("Test MFBoolObject multiple-field boolean")
    void MFBoolObjectTests()
	{
        System.out.println ("MFBoolObjectTests...");
        MFBoolObject testMFBoolObject = new MFBoolObject(); // static initializer is tested, might throw exception
        boolean[] emptyArray       = {};
        boolean[] singleTrueArray  = { true  };
        boolean[] singleFalseArray = { false };
        boolean[] trueTrueArray    = { true, true  };
        boolean[] trueFalseArray   = { true, false };
        boolean[] falseTrueArray   = { false, true };
        boolean[] falseFalseArray  = { false, false };
        assertTrue  (Arrays.equals(emptyArray, MFBoolObject.DEFAULT_VALUE), "test correct default value for this field object");
        assertTrue  (testMFBoolObject.matches(),       "testMFBoolObject.matches() tests object initialization correctly matches regex");
        assertTrue  (MFBoolObject.matches(MFBoolObject.DEFAULT_VALUE_STRING),
                                                       "MFBoolObject.matches(MFBoolObject.DEFAULT_VALUE_STRING) tests object initialization correctly matches regex");
        assertTrue  (testMFBoolObject.isDefaultValue(),"test initialized field object isDefaultValue() returns true");

        testMFBoolObject.setValue(true);               // returns void because it matches (overrides) Java SAI specification interface
        assertTrue  (Arrays.equals(singleTrueArray,  testMFBoolObject.getPrimitiveValue()), "tests setting object value to boolean true results in same value");
        assertEquals(true,testMFBoolObject.get1Value(0),   "tests setting object value to true results in get1Value(index 0) of true");
        
        testMFBoolObject.setValue(false);               // returns void because it matches (overrides) Java SAI specification interface
        assertTrue  (Arrays.equals(singleFalseArray,  testMFBoolObject.getPrimitiveValue()), "tests setting object value to boolean false results in same value");
        assertEquals(false,testMFBoolObject.get1Value(0),   "tests setting object value to false results in get1Value(index 0) of false");
        
        testMFBoolObject.setValue (singleTrueArray);
        assertTrue  (Arrays.equals(singleTrueArray,  testMFBoolObject.getPrimitiveValue()), "tests setting object value to boolean[] array { true } results in same value");
        testMFBoolObject.setValue(false);              // returns void because it matches (overrides) Java SAI specification interface
        assertTrue  (Arrays.equals(singleFalseArray, testMFBoolObject.getPrimitiveValue()), "tests setting object value to boolean true results in same value");
        testMFBoolObject.setValue (singleFalseArray);
        assertTrue  (Arrays.equals(singleFalseArray, testMFBoolObject.getPrimitiveValue()), "tests setting object value to boolean[] array { false } results in same value");
        testMFBoolObject.setValue (trueTrueArray);
        assertTrue  (Arrays.equals(trueTrueArray,    testMFBoolObject.getPrimitiveValue()), "tests setting object value to boolean[] array { true, true } results in same value");
        testMFBoolObject.setValue (trueFalseArray);
        assertTrue  (Arrays.equals(trueFalseArray,   testMFBoolObject.getPrimitiveValue()), "tests setting object value to boolean[] array { true, false } results in same value");
        testMFBoolObject.setValue (falseFalseArray);
        assertTrue  (Arrays.equals(falseFalseArray,  testMFBoolObject.getPrimitiveValue()), "tests setting object value to boolean[] array { true, false } results in same value");
        
        assertTrue  (MFBoolObject.matches(""),            "MFBoolObject.matches(\"\") tests correct empty string value");
        assertTrue  (MFBoolObject.matches("true"),        "MFBoolObject.matches(\"true\")  tests correct string value");
        assertTrue  (MFBoolObject.matches("false"),       "MFBoolObject.matches(\"false\") tests correct string value");
        assertTrue  (MFBoolObject.matches("true true"),   "MFBoolObject.matches(\"true true\")   tests correct string value");
        assertTrue  (MFBoolObject.matches("true false"),  "MFBoolObject.matches(\"true false\")  tests correct string value");
        assertTrue  (MFBoolObject.matches("false true"),  "MFBoolObject.matches(\"false true\")  tests correct string value");
        assertTrue  (MFBoolObject.matches("false false"), "MFBoolObject.matches(\"false false\") tests correct string value");
        assertTrue  (MFBoolObject.matches("  true "),  "MFBoolObject.matches(\"  true \") tests correct string value, including external whitespace");
        assertTrue  (MFBoolObject.matches(" false "),  "MFBoolObject.matches(\" false \") tests correct string value, including external whitespace");
        assertTrue  (MFBoolObject.matches("  true  true  "),  "MFBoolObject.matches(\"  true \") tests correct string value, including whitespace");
        assertTrue  (MFBoolObject.matches(" false  false "),  "MFBoolObject.matches(\" false  false \") tests correct string value, including whitespace");
        assertTrue  (MFBoolObject.matches("  false , true  "),  "MFBoolObject.matches(\"  false , true \") tests correct string value, including whitespace and commas");
        assertTrue  (MFBoolObject.matches(" true,  false "),  "MFBoolObject.matches(\" true,  false \") tests correct string value, including whitespace and commas");
        
        assertFalse (MFBoolObject.matches("TRUE"),        "MFBoolObject.matches(\"TRUE\")  tests incorrect case of string value");
        assertFalse (MFBoolObject.matches("FALSE"),       "MFBoolObject.matches(\"FALSE\") tests incorrect case of string value");
        assertFalse (MFBoolObject.matches("rtue"),        "MFBoolObject.matches(\"rtue\") tests incorrect ordering of characters in string value");
        assertFalse (MFBoolObject.matches("aflse"),       "MFBoolObject.matches(\"aflse\") tests incorrect ordering of characters in string value");
        assertFalse (MFBoolObject.matches("blah"),        "MFBoolObject.matches(\"blah\")  tests incorrect string value");
        assertFalse (MFBoolObject.matches("NaN"),         "MFBoolObject.matches(\"NaN\") tests Not A Number (NaN) which is not an allowed string value");
        assertFalse (MFBoolObject.matches("true TRUE"),   "MFBoolObject.matches(\"true TRUE\")  tests incorrect case of string value");
        assertFalse (MFBoolObject.matches("false FALSE"), "MFBoolObject.matches(\"false FALSE\") tests incorrect case of string value");
    }
    
    @Test
    @DisplayName("Test SFInt32Object single-field 32-bit integer")
    void SFInt32ObjectTests()
	{
        System.out.println ("SFInt32ObjectTests...");
        SFInt32Object testSFInt32Object = new SFInt32Object(); // static initializer is tested, might throw exception
        assertTrue  (testSFInt32Object.matches(),       "testSFInt32Object.matches() tests object initialization correctly matches regex");
        assertEquals(0, SFInt32Object.DEFAULT_VALUE,    "test correct default value for this field object");
        assertTrue  (SFInt32Object.matches(SFInt32Object.DEFAULT_VALUE_STRING),
                                                        "SFInt32Object.matches(SFInt32Object.DEFAULT_VALUE_STRING) tests object initialization correctly matches regex");
        assertTrue  (testSFInt32Object.isDefaultValue(),"test initialized field object isDefaultValue() returns true");
        
        testSFInt32Object.setValue(1); // returns void because it matches (overrides) Java SAI specification interface
        assertEquals( 1,testSFInt32Object.getValue(),   "tests setting object value to 1 results in value of 1");
        testSFInt32Object.setValue(-1); // returns void because it matches (overrides) Java SAI specification interface
        assertEquals(-1,testSFInt32Object.getValue(),   "tests setting object value to -1 results in value of -1");
        
        assertTrue  (SFInt32Object.matches( "0"),       "SFInt32Object.matches( \"0\")   tests correct string value");
        assertTrue  (SFInt32Object.matches( "1"),       "SFInt32Object.matches( \"1\")   tests correct string value");
        assertTrue  (SFInt32Object.matches("-1"),       "SFInt32Object.matches(\"-1\")   tests correct string value");
        assertTrue  (SFInt32Object.matches("  3 "),     "SFInt32Object.matches(\"  3 \") tests correct string value, including external whitespace");
        assertTrue  (SFInt32Object.matches(" -3 "),     "SFInt32Object.matches(\" -3 \") tests correct string value, including external whitespace");
        assertTrue  (SFInt32Object.matches("  12E45  "),"SFInt32Object.matches(\"  12E45  \") tests correct string value, scientific notation");
        assertTrue  (SFInt32Object.matches(" +12E+45 "),"SFInt32Object.matches(\" +12E+45 \") tests correct string value, scientific notation");
        assertTrue  (SFInt32Object.matches(" -12E-45 "),"SFInt32Object.matches(\" -12E-45 \") tests correct string value, scientific notation");
        
        assertFalse (SFInt32Object.matches(""),         "SFInt32Object.matches(\"\") tests incorrect empty string value");
        assertFalse (SFInt32Object.matches("true"),     "SFInt32Object.matches(\"true\") tests incorrect boolean string value");
        assertFalse (SFInt32Object.matches("blah"),     "SFInt32Object.matches(\"blah\") tests incorrect alphabetic string value");
        assertFalse (SFInt32Object.matches("0 1"),      "SFInt32Object.matches(\"0 1\")  tests incorrect array as string value");
        assertFalse (SFInt32Object.matches("NaN"),      "SFInt32Object.matches(\"NaN\") tests Not A Number (NaN) which is not an allowed string value");
    }
    
    @Test
    @DisplayName("Test MFInt32Object multi-field 32-bit integer array")
    void MFInt32ObjectTests()
	{
        System.out.println ("MFInt32ObjectTests...");
        MFInt32Object testMFInt32Object = new MFInt32Object(); // static initializer is tested, might throw exception
        assertTrue  (testMFInt32Object.matches(),       "testMFInt32Object.matches() tests object initialization correctly matches regex");
        int[] emptyArray       = {};
        int[] singleValueArray = { 0 };
        int[] doubleValueArray = { -1, -2 };
        int[] tripleValueArray = {  3,  4,  5 };
        assertTrue  (Arrays.equals(emptyArray, MFInt32Object.DEFAULT_VALUE), "test correct default value for this field object");
        assertTrue  (MFInt32Object.matches(MFInt32Object.DEFAULT_VALUE_STRING),
                                                        "MFInt32Object.matches(MFInt32Object.DEFAULT_VALUE_STRING) tests object initialization correctly matches regex");
        assertTrue  (testMFInt32Object.isDefaultValue(),"test initialized field object isDefaultValue() returns true");
        
        testMFInt32Object.setValue(0); // returns void because it matches (overrides) Java SAI specification interface
        assertEquals( 0,testMFInt32Object.get1Value(0),   "tests setting object value to 0 results in get1Value(index 0) of 0");
        assertTrue  (Arrays.equals(singleValueArray,  testMFInt32Object.getPrimitiveValue()), "tests setting object value to 0 results in singleton array with same value");
        
        testMFInt32Object.setValue(singleValueArray); // returns void because it matches (overrides) Java SAI specification interface
        assertEquals(singleValueArray,testMFInt32Object.getPrimitiveValue(),   "tests setting object value to singleValueArray results in equivalent getPrimitiveValue()");
        testMFInt32Object.setValue(doubleValueArray); // returns void because it matches (overrides) Java SAI specification interface
        assertEquals(doubleValueArray,testMFInt32Object.getPrimitiveValue(),   "tests setting object value to doubleValueArray results in equivalent getPrimitiveValue()");
        testMFInt32Object.setValue(tripleValueArray); // returns void because it matches (overrides) Java SAI specification interface
        assertEquals(tripleValueArray,testMFInt32Object.getPrimitiveValue(),   "tests setting object value to tripleValueArray results in equivalent getPrimitiveValue()");
        
        assertTrue  (MFInt32Object.matches(""),          "MFInt32Object.matches(\"\") tests correct empty string value");
        assertTrue  (MFInt32Object.matches( "0"),        "MFInt32Object.matches( \"0\")   tests correct string value");
        assertTrue  (MFInt32Object.matches( "1"),        "MFInt32Object.matches( \"1\")   tests correct string value");
        assertTrue  (MFInt32Object.matches("-1"),        "MFInt32Object.matches(\"-1\")   tests correct string value");
        assertTrue  (MFInt32Object.matches("  3 "),      "MFInt32Object.matches(\"  3 \") tests correct string value, including external whitespace");
        assertTrue  (MFInt32Object.matches(" -3 "),      "MFInt32Object.matches(\" -3 \") tests correct string value, including external whitespace");
        assertTrue  (MFInt32Object.matches(" 0  12E45  "),"MFInt32Object.matches(\" 0  12E45  \") tests correct string value, scientific notation");
        assertTrue  (MFInt32Object.matches("+0 +12E+45 "),"MFInt32Object.matches(\"+0 +12E+45 \") tests correct string value, scientific notation");
        assertTrue  (MFInt32Object.matches("-0,-12E-45 "),"MFInt32Object.matches(\"-0,-12E-45 \") tests correct string value, scientific notation");
        assertTrue  (MFInt32Object.matches("0 1"),       "MFInt32Object.matches(\"0 1\")  tests correct array as string value");
        
        assertFalse (MFInt32Object.matches("true"),     "MFInt32Object.matches(\"true\") tests incorrect boolean string value");
        assertFalse (MFInt32Object.matches("blah"),     "MFInt32Object.matches(\"blah\") tests incorrect alphabetic string value");
        assertFalse (MFInt32Object.matches("NaN"),      "MFInt32Object.matches(\"NaN\") tests Not A Number (NaN) which is not an allowed string value");
    }
    
    @Test
    @DisplayName("Test SFFloatObject single-field single-precision floating-point number")
    void SFFloatObjectTests()
	{
        System.out.println ("SFFloatObjectTests...");
        SFFloatObject testSFFloatObject = new SFFloatObject(); // static initializer is tested, might throw exception
        assertTrue  (testSFFloatObject.matches(),         "testSFFloatObject.matches() tests object initialization correctly matches regex");
        assertEquals(0.0f, SFFloatObject.DEFAULT_VALUE,   "test correct default value for this field object");
        assertTrue  (SFFloatObject.matches(SFFloatObject.DEFAULT_VALUE_STRING),
                                                          "SFFloatObject.matches(SFFloatObject.DEFAULT_VALUE_STRING) tests object initialization correctly matches regex");
        assertTrue  (testSFFloatObject.isDefaultValue(),  "test initialized field object isDefaultValue() returns true");
        
        testSFFloatObject.setValue(1); // returns void because it matches (overrides) Java SAI specification interface
        assertEquals( 1.0f,testSFFloatObject.getValue(),  "tests setting object value to 1 results in value of 1.0f");
        testSFFloatObject.setValue(1.0f); // returns void because it matches (overrides) Java SAI specification interface
        assertEquals( 1.0f,testSFFloatObject.getValue(),  "tests setting object value to 1.0f results in value of 1.0f");
        testSFFloatObject.setValue(1.0d); // returns void because it matches (overrides) Java SAI specification interface
        assertEquals( 1.0f,testSFFloatObject.getValue(),  "tests setting object value to 1.0d results in value of 1.0f");
        testSFFloatObject.setValue(-1); // returns void because it matches (overrides) Java SAI specification interface
        assertEquals(-1.0f,testSFFloatObject.getValue(),  "tests setting object value to -1 results in value of -1.0f");
        
        assertTrue  (SFFloatObject.matches( "0"),       "SFFloatObject.matches( \"0\")   tests correct string value");
        assertTrue  (SFFloatObject.matches( "1"),       "SFFloatObject.matches( \"1\")   tests correct string value");
        assertTrue  (SFFloatObject.matches("-1"),       "SFFloatObject.matches(\"-1\")   tests correct string value");
        assertTrue  (SFFloatObject.matches( "0.0"),     "SFFloatObject.matches( \"0.0\") tests correct string value");
        assertTrue  (SFFloatObject.matches( "1.0"),     "SFFloatObject.matches( \"1.0\") tests correct string value");
        assertTrue  (SFFloatObject.matches("-1.0"),     "SFFloatObject.matches(\"-1.0\") tests correct string value");
        assertTrue  (SFFloatObject.matches("  3 "),     "SFFloatObject.matches(\"  3 \") tests correct string value, including external whitespace");
        assertTrue  (SFFloatObject.matches(" -3 "),     "SFFloatObject.matches(\" -3 \") tests correct string value, including external whitespace");
        assertTrue  (SFFloatObject.matches(" 12.3E45 "),"SFFloatObject.matches(\" 12.3E45 \") tests correct string value, scientific notation");
        assertTrue  (SFFloatObject.matches("+12.3E+45"),"SFFloatObject.matches(\"+12.3E+45\") tests correct string value, scientific notation");
        assertTrue  (SFFloatObject.matches("-12.3E-45"),"SFFloatObject.matches(\"-12.3E-45\") tests correct string value, scientific notation");

        assertFalse (SFFloatObject.matches(""),        "SFFloatObject.matches(\"\") tests incorrect empty string value");
        assertFalse (SFFloatObject.matches("true"),    "SFFloatObject.matches(\"true\") tests incorrect boolean string value");
        assertFalse (SFFloatObject.matches("blah"),    "SFFloatObject.matches(\"blah\") tests incorrect alphabetic string value");
        assertFalse (SFFloatObject.matches("0 1"),     "SFFloatObject.matches(\"0 1\")  tests incorrect array as string value");
        assertFalse (SFFloatObject.matches("0.0 1.0"), "SFFloatObject.matches(\"0.0 1.0\") tests incorrect array as string value");
        assertFalse (SFFloatObject.matches("NaN"),     "SFFloatObject.matches(\"NaN\") tests Not A Number (NaN) which is not an allowed string value");
    }
    
    @Test
    @DisplayName("Test MFFloatObject multi-field floating point array")
    void MFFloatObjectTests()
	{
        System.out.println ("MFFloatObjectTests...");
        MFFloatObject testMFFloatObject = new MFFloatObject(); // static initializer is tested, might throw exception
        assertTrue  (testMFFloatObject.matches(),       "testMFFloatObject.matches() tests object initialization correctly matches regex");
        float[] emptyArray       = {};
        float[] singleValueArray = { 0.0f };
        float[] doubleValueArray = { -1.0f, -2.0f };
        float[] tripleValueArray = {  3.0f,  4.0f,  5.0f };
        assertTrue  (Arrays.equals(emptyArray, MFFloatObject.DEFAULT_VALUE), "test correct default value for this field object");
        assertTrue  (MFFloatObject.matches(MFFloatObject.DEFAULT_VALUE_STRING),
                                                        "MFFloatObject.matches(MFFloatObject.DEFAULT_VALUE_STRING) tests object initialization correctly matches regex");
        assertTrue  (testMFFloatObject.isDefaultValue(),"test initialized field object isDefaultValue() returns true");
        
        testMFFloatObject.setValue(0.0f); // returns void because it matches (overrides) Java SAI specification interface
        assertEquals( 0.0f,testMFFloatObject.get1Value(0),   "tests setting object value to 0.0f results in get1Value(index 0) of 0");
        assertTrue  (Arrays.equals(singleValueArray,  testMFFloatObject.getPrimitiveValue()), "tests setting object value to 0.0f results in singleton array with same value");
        
        testMFFloatObject.setValue(singleValueArray); // returns void because it matches (overrides) Java SAI specification interface
        assertEquals(singleValueArray,testMFFloatObject.getPrimitiveValue(),   "tests setting object value to singleValueArray results in equivalent getPrimitiveValue()");
        testMFFloatObject.setValue(doubleValueArray); // returns void because it matches (overrides) Java SAI specification interface
        assertEquals(doubleValueArray,testMFFloatObject.getPrimitiveValue(),   "tests setting object value to doubleValueArray results in equivalent getPrimitiveValue()");
        testMFFloatObject.setValue(tripleValueArray); // returns void because it matches (overrides) Java SAI specification interface
        assertEquals(tripleValueArray,testMFFloatObject.getPrimitiveValue(),   "tests setting object value to tripleValueArray results in equivalent getPrimitiveValue()");
        
        assertTrue  (MFFloatObject.matches(""),          "MFFloatObject.matches(\"\") tests correct empty string value");
        assertTrue  (MFFloatObject.matches( "0"),        "MFFloatObject.matches( \"0\")   tests correct string value");
        assertTrue  (MFFloatObject.matches( "1"),        "MFFloatObject.matches( \"1\")   tests correct string value");
        assertTrue  (MFFloatObject.matches("-1"),        "MFFloatObject.matches(\"-1\")   tests correct string value");
        assertTrue  (MFFloatObject.matches("  3 "),      "MFFloatObject.matches(\"  3 \") tests correct string value, including external whitespace");
        assertTrue  (MFFloatObject.matches(" -3 "),      "MFFloatObject.matches(\" -3 \") tests correct string value, including external whitespace");
        assertTrue  (MFFloatObject.matches(" 0  12E45 "),"MFFloatObject.matches(\"0  12E45 \") tests correct string value, scientific notation");
        assertTrue  (MFFloatObject.matches("+0,+12E+45"),"MFFloatObject.matches(\"+0,+12E+45\") tests correct string value, scientific notation");
        assertTrue  (MFFloatObject.matches("-0,-12E-45"),"MFFloatObject.matches(\"-0,-12E-45\") tests correct string value, scientific notation");

        assertTrue  (MFFloatObject.matches( "0.0"),        "MFFloatObject.matches( \"0.0\")   tests correct string value");
        assertTrue  (MFFloatObject.matches( "1.0"),        "MFFloatObject.matches( \"1.0\")   tests correct string value");
        assertTrue  (MFFloatObject.matches("-1.0"),        "MFFloatObject.matches(\"-1.0\")   tests correct string value");
        assertTrue  (MFFloatObject.matches("  3.0 "),      "MFFloatObject.matches(\"  3.0 \") tests correct string value, including external whitespace");
        assertTrue  (MFFloatObject.matches(" -3.0 "),      "MFFloatObject.matches(\" -3.0 \") tests correct string value, including external whitespace");
        assertTrue  (MFFloatObject.matches("0 1"),         "MFFloatObject.matches(\"0 1\")  tests correct array as string value");
        assertTrue  (MFFloatObject.matches("0.0 1.0"),     "MFFloatObject.matches(\"0.0 1.0\")  tests correct array as string value");
        assertTrue  (MFFloatObject.matches(" 0.0  12.3E45  "),"MFFloatObject.matches(\" 0.0  12.3E45  \") tests correct string value, scientific notation");
        assertTrue  (MFFloatObject.matches("+0.0 +12.3E+45 "),"MFFloatObject.matches(\"+0.0 +12.3E+45 \") tests correct string value, scientific notation");
        assertTrue  (MFFloatObject.matches("-0.0,-12.3E-45 "),"MFFloatObject.matches(\"-0.0,-12.3E-45 \") tests correct string value, scientific notation");
        
        assertFalse (MFFloatObject.matches("true"),     "MFFloatObject.matches(\"true\") tests incorrect boolean string value");
        assertFalse (MFFloatObject.matches("blah"),     "MFFloatObject.matches(\"blah\") tests incorrect alphabetic string value");
        assertFalse (MFFloatObject.matches("NaN"),      "MFFloatObject.matches(\"NaN\") tests Not A Number (NaN) which is not an allowed string value");
    }
    
    @Test
    @DisplayName("Test SFDoubleObject single-field double-precision floating-point number")
    void SFDoubleObjectTests()
	{
        System.out.println ("SFDoubleObjectTests...");
        SFDoubleObject testSFDoubleObject = new SFDoubleObject(); // static initializer is tested, might throw exception
        assertTrue  (testSFDoubleObject.matches(),         "testSFDoubleObject.matches() tests object initialization correctly matches regex");
        assertEquals(0.0d, SFDoubleObject.DEFAULT_VALUE,   "test correct default value for this field object");
        assertTrue  (SFDoubleObject.matches(SFDoubleObject.DEFAULT_VALUE_STRING),
                                                           "SFDoubleObject.matches(SFDoubleObject.DEFAULT_VALUE_STRING) tests object initialization correctly matches regex");
        assertTrue  (testSFDoubleObject.isDefaultValue(),  "test initialized field object isDefaultValue() returns true");
        
        testSFDoubleObject.setValue(1); // returns void because it matches (overrides) Java SAI specification interface
        assertEquals( 1.0d,testSFDoubleObject.getValue(),  "tests setting object value to 1 results in value of 1.0d");
        testSFDoubleObject.setValue(1.0d); // returns void because it matches (overrides) Java SAI specification interface
        assertEquals( 1.0d,testSFDoubleObject.getValue(),  "tests setting object value to 1.0d results in value of 1.0d");
        testSFDoubleObject.setValue(1.0d); // returns void because it matches (overrides) Java SAI specification interface
        assertEquals( 1.0d,testSFDoubleObject.getValue(),  "tests setting object value to 1.0d results in value of 1.0d");
        testSFDoubleObject.setValue(-1); // returns void because it matches (overrides) Java SAI specification interface
        assertEquals(-1.0d,testSFDoubleObject.getValue(),  "tests setting object value to -1 results in value of -1.0d");
        
        assertTrue  (SFDoubleObject.matches( "0"),      "SFDoubleObject.matches( \"0\")   tests correct string value");
        assertTrue  (SFDoubleObject.matches( "1"),      "SFDoubleObject.matches( \"1\")   tests correct string value");
        assertTrue  (SFDoubleObject.matches("-1"),      "SFDoubleObject.matches(\"-1\")   tests correct string value");
        assertTrue  (SFDoubleObject.matches( "0.0"),    "SFDoubleObject.matches( \"0.0\") tests correct string value");
        assertTrue  (SFDoubleObject.matches( "1.0"),    "SFDoubleObject.matches( \"1.0\") tests correct string value");
        assertTrue  (SFDoubleObject.matches("-1.0"),    "SFDoubleObject.matches(\"-1.0\") tests correct string value");
        assertTrue  (SFDoubleObject.matches("  3 "),    "SFDoubleObject.matches(\"  3 \") tests correct string value, including external whitespace");
        assertTrue  (SFDoubleObject.matches(" -3 "),    "SFDoubleObject.matches(\" -3 \") tests correct string value, including external whitespace");

        assertFalse (SFDoubleObject.matches(" 0.0  12.3E45  "),"SFDoubleObject.matches(\" 0.0  12.3E45  \") tests correct string value, scientific notation");
        assertFalse (SFDoubleObject.matches("+0.0 +12.3E+45 "),"SFDoubleObject.matches(\"+0.0 +12.3E+45 \") tests correct string value, scientific notation");
        assertFalse (SFDoubleObject.matches("-0.0,-12.3E-45 "),"SFDoubleObject.matches(\"-0.0,-12.3E-45 \") tests correct string value, scientific notation");
        assertFalse (SFDoubleObject.matches(""),        "SFDoubleObject.matches(\"\") tests incorrect empty string value");
        assertFalse (SFDoubleObject.matches("true"),    "SFDoubleObject.matches(\"true\") tests incorrect boolean string value");
        assertFalse (SFDoubleObject.matches("blah"),    "SFDoubleObject.matches(\"blah\") tests incorrect alphabetic string value");
        assertFalse (SFDoubleObject.matches("0 1"),     "SFDoubleObject.matches(\"0 1\")  tests incorrect array as string value");
        assertFalse (SFDoubleObject.matches("0.0 1.0"), "SFDoubleObject.matches(\"0.0 1.0\") tests incorrect array as string value");
        assertFalse (SFDoubleObject.matches("NaN"),     "SFDoubleObject.matches(\"NaN\") tests Not A Number (NaN) which is not an allowed string value");
    }
    
    @Test
    @DisplayName("Test MFDoubleObject multi-field floating point array")
    void MFDoubleObjectTests()
	{
        System.out.println ("MFDoubleObjectTests...");
        MFDoubleObject testMFDoubleObject = new MFDoubleObject(); // static initializer is tested, might throw exception
        assertTrue  (testMFDoubleObject.matches(),       "testMFDoubleObject.matches() tests object initialization correctly matches regex");
        double[] emptyArray       = {};
        double[] singleValueArray = { 0.0 };
        double[] doubleValueArray = { -1.0, -2.0 };
        double[] tripleValueArray = {  3.0,  4.0,  5.0 };
        assertTrue  (Arrays.equals(emptyArray, MFDoubleObject.DEFAULT_VALUE), "test correct default value for this field object");
        assertTrue  (MFDoubleObject.matches(MFDoubleObject.DEFAULT_VALUE_STRING),
                                                        "MFDoubleObject.matches(MFDoubleObject.DEFAULT_VALUE_STRING) tests object initialization correctly matches regex");
        assertTrue  (testMFDoubleObject.isDefaultValue(),"test initialized field object isDefaultValue() returns true");
        
        testMFDoubleObject.setValue(0.0); // returns void because it matches (overrides) Java SAI specification interface
        assertEquals( 0.0,testMFDoubleObject.get1Value(0),   "tests setting object value to 0.0 results in get1Value(index 0) of 0");
        assertTrue  (Arrays.equals(singleValueArray,  testMFDoubleObject.getPrimitiveValue()), "tests setting object value to 0.0 results in singleton array with same value");
        
        testMFDoubleObject.setValue(singleValueArray); // returns void because it matches (overrides) Java SAI specification interface
        assertEquals(singleValueArray,testMFDoubleObject.getPrimitiveValue(),   "tests setting object value to singleValueArray results in equivalent getPrimitiveValue()");
        testMFDoubleObject.setValue(doubleValueArray); // returns void because it matches (overrides) Java SAI specification interface
        assertEquals(doubleValueArray,testMFDoubleObject.getPrimitiveValue(),   "tests setting object value to doubleValueArray results in equivalent getPrimitiveValue()");
        testMFDoubleObject.setValue(tripleValueArray); // returns void because it matches (overrides) Java SAI specification interface
        assertEquals(tripleValueArray,testMFDoubleObject.getPrimitiveValue(),   "tests setting object value to tripleValueArray results in equivalent getPrimitiveValue()");
        
        assertTrue  (MFDoubleObject.matches(""),          "MFDoubleObject.matches(\"\") tests correct empty string value");
        assertTrue  (MFDoubleObject.matches( "0"),        "MFDoubleObject.matches( \"0\")   tests correct string value");
        assertTrue  (MFDoubleObject.matches( "1"),        "MFDoubleObject.matches( \"1\")   tests correct string value");
        assertTrue  (MFDoubleObject.matches("-1"),        "MFDoubleObject.matches(\"-1\")   tests correct string value");
        assertTrue  (MFDoubleObject.matches("  3 "),      "MFDoubleObject.matches(\"  3 \") tests correct string value, including external whitespace");
        assertTrue  (MFDoubleObject.matches(" -3 "),      "MFDoubleObject.matches(\" -3 \") tests correct string value, including external whitespace");
        assertTrue  (MFDoubleObject.matches(" 0  12E45 "), "MFDoubleObject.matches(\" 0  12E45  \") tests correct string value, scientific notation");
        assertTrue  (MFDoubleObject.matches("+0 +12E+45 "),"MFDoubleObject.matches(\"+0 +12E+45 \") tests correct string value, scientific notation");
        assertTrue  (MFDoubleObject.matches("-0,-12E-45 "),"MFDoubleObject.matches(\"-0,-12E-45 \") tests correct string value, scientific notation");

        assertTrue  (MFDoubleObject.matches( "0.0"),        "MFDoubleObject.matches( \"0.0\")   tests correct string value");
        assertTrue  (MFDoubleObject.matches( "1.0"),        "MFDoubleObject.matches( \"1.0\")   tests correct string value");
        assertTrue  (MFDoubleObject.matches("-1.0"),        "MFDoubleObject.matches(\"-1.0\")   tests correct string value");
        assertTrue  (MFDoubleObject.matches("  3.0 "),      "MFDoubleObject.matches(\"  3.0 \") tests correct string value, including external whitespace");
        assertTrue  (MFDoubleObject.matches(" -3.0 "),      "MFDoubleObject.matches(\" -3.0 \") tests correct string value, including external whitespace");
        assertTrue  (MFDoubleObject.matches("0 1"),            "MFDoubleObject.matches(\"0 1\")  tests correct array as string value");
        assertTrue  (MFDoubleObject.matches("0.0 1.0"),        "MFDoubleObject.matches(\"0.0 1.0\")  tests correct array as string value");
        assertTrue  (MFDoubleObject.matches(" 0.0  12.3E45  "),"MFDoubleObject.matches(\" 0.0  12.3E45 \") tests correct string value, scientific notation");
        assertTrue  (MFDoubleObject.matches("+0.0 +12.3E+45 "),"MFDoubleObject.matches(\"+0.0 +12.3E+45 \") tests correct string value, scientific notation");
        assertTrue  (MFDoubleObject.matches("-0.0,-12.3E-45 "),"MFDoubleObject.matches(\"-0.0,-12.3E-45 \") tests correct string value, scientific notation");
        
        assertFalse (MFDoubleObject.matches("true"),     "MFDoubleObject.matches(\"true\") tests incorrect boolean string value");
        assertFalse (MFDoubleObject.matches("blah"),     "MFDoubleObject.matches(\"blah\") tests incorrect alphabetic string value");
        assertFalse (MFDoubleObject.matches("NaN"),      "MFDoubleObject.matches(\"NaN\") tests Not A Number (NaN) which is not an allowed string value");
    }
    
    @Test
    @DisplayName("Test SFTimeObject single-field double-precision floating-point number")
    void SFTimeObjectTests()
	{
        System.out.println ("SFTimeObjectTests...");
        SFTimeObject testSFTimeObject = new SFTimeObject(); // static initializer is tested, might throw exception
        assertTrue  (testSFTimeObject.matches(),         "testSFTimeObject.matches() tests object initialization correctly matches regex");
        assertEquals(-1.0d, SFTimeObject.DEFAULT_VALUE,  "test correct default value for this field object");
        assertTrue  (SFTimeObject.matches(SFTimeObject.DEFAULT_VALUE_STRING),
                                                         "SFTimeObject.matches(SFTimeObject.DEFAULT_VALUE_STRING) tests object initialization correctly matches regex");
        assertTrue  (testSFTimeObject.isDefaultValue(),  "test initialized field object isDefaultValue() returns true");
        
        testSFTimeObject.setValue(1); // returns void because it matches (overrides) Java SAI specification interface
        assertEquals( 1.0d,testSFTimeObject.getValue(),  "tests setting object value to 1 results in value of 1.0d");
        testSFTimeObject.setValue(1.0d); // returns void because it matches (overrides) Java SAI specification interface
        assertEquals( 1.0d,testSFTimeObject.getValue(),  "tests setting object value to 1.0d results in value of 1.0d");
        testSFTimeObject.setValue(1.0d); // returns void because it matches (overrides) Java SAI specification interface
        assertEquals( 1.0d,testSFTimeObject.getValue(),  "tests setting object value to 1.0d results in value of 1.0d");
        testSFTimeObject.setValue(-1); // returns void because it matches (overrides) Java SAI specification interface
        assertEquals(-1.0d,testSFTimeObject.getValue(),  "tests setting object value to -1 results in value of -1.0d");
        testSFTimeObject.setValue(-2); // returns void because it matches (overrides) Java SAI specification interface
        assertEquals(-2.0d,testSFTimeObject.getValue(),  "tests setting object value to -2 results in value of -2.0d, a legal negative time value");
        
        assertFalse (SFTimeObject.matches(""),        "SFTimeObject.matches(\"\") tests incorrect empty string value");
        assertTrue  (SFTimeObject.matches( "0"),      "SFTimeObject.matches( \"0\")   tests correct string value");
        assertTrue  (SFTimeObject.matches( "1"),      "SFTimeObject.matches( \"1\")   tests correct string value");
        assertTrue  (SFTimeObject.matches("-1"),      "SFTimeObject.matches(\"-1\")   tests correct string value");
        assertTrue  (SFTimeObject.matches( "0.0"),    "SFTimeObject.matches( \"0.0\") tests correct string value");
        assertTrue  (SFTimeObject.matches( "1.0"),    "SFTimeObject.matches( \"1.0\") tests correct string value");
        assertTrue  (SFTimeObject.matches("-1.0"),    "SFTimeObject.matches(\"-1.0\") tests correct string value");
        assertTrue  (SFTimeObject.matches("-2.0"),    "SFTimeObject.matches(\"-2.0\") tests correct string value, a legal negative time value");
        assertTrue  (SFTimeObject.matches("  3 "),    "SFTimeObject.matches(\"  3 \") tests correct string value, including external whitespace");
        assertTrue  (SFTimeObject.matches(" -3 "),    "SFTimeObject.matches(\" -3 \") tests correct string value, including external whitespace");

        assertFalse (SFTimeObject.matches("true"),    "SFTimeObject.matches(\"true\") tests incorrect boolean string value");
        assertFalse (SFTimeObject.matches("blah"),    "SFTimeObject.matches(\"blah\") tests incorrect alphabetic string value");
        assertFalse (SFTimeObject.matches("0 1"),     "SFTimeObject.matches(\"0 1\")  tests incorrect array as string value");
        assertFalse (SFTimeObject.matches("0.0 1.0"), "SFTimeObject.matches(\"0.0 1.0\") tests incorrect array as string value");
        assertFalse (SFTimeObject.matches("NaN"),     "SFTimeObject.matches(\"NaN\") tests Not A Number (NaN) which is not an allowed string value");
    }
    
    @Test
    @DisplayName("Test MFTimeObject multi-field floating point array")
    void MFTimeObjectTests()
	{
        System.out.println ("MFTimeObjectTests...");
        MFTimeObject testMFTimeObject = new MFTimeObject(); // static initializer is tested, might throw exception
        assertTrue  (testMFTimeObject.matches(),       "testMFTimeObject.matches() tests object initialization correctly matches regex");
        double[] emptyArray       = {};
        double[] singleValueArray = { 0.0 };
        double[] doubleValueArray = { -1.0, -2.0 };
        double[] tripleValueArray = {  3.0,  4.0,  5.0 };
        assertTrue  (Arrays.equals(emptyArray, MFTimeObject.DEFAULT_VALUE), "test correct default value for this field object");
        assertTrue  (MFTimeObject.matches(MFTimeObject.DEFAULT_VALUE_STRING),
                                                        "MFTimeObject.matches(MFTimeObject.DEFAULT_VALUE_STRING) tests object initialization correctly matches regex");
        assertTrue  (testMFTimeObject.isDefaultValue(),"test initialized field object isDefaultValue() returns true");
        
        testMFTimeObject.setValue(0.0); // returns void because it matches (overrides) Java SAI specification interface
        assertEquals( 0.0,testMFTimeObject.get1Value(0),   "tests setting object value to 0.0 results in get1Value(index 0) of 0");
        assertTrue  (Arrays.equals(singleValueArray,  testMFTimeObject.getPrimitiveValue()), "tests setting object value to 0.0 results in singleton array with same value");
        
        testMFTimeObject.setValue(singleValueArray); // returns void because it matches (overrides) Java SAI specification interface
        assertEquals(singleValueArray,testMFTimeObject.getPrimitiveValue(),   "tests setting object value to singleValueArray results in equivalent getPrimitiveValue()");
        testMFTimeObject.setValue(doubleValueArray); // returns void because it matches (overrides) Java SAI specification interface
        assertEquals(doubleValueArray,testMFTimeObject.getPrimitiveValue(),   "tests setting object value to doubleValueArray results in equivalent getPrimitiveValue()");
        testMFTimeObject.setValue(tripleValueArray); // returns void because it matches (overrides) Java SAI specification interface
        assertEquals(tripleValueArray,testMFTimeObject.getPrimitiveValue(),   "tests setting object value to tripleValueArray results in equivalent getPrimitiveValue()");
        
        assertTrue  (MFTimeObject.matches(""),          "MFTimeObject.matches(\"\") tests correct empty string value");
        assertTrue  (MFTimeObject.matches( "0"),        "MFTimeObject.matches( \"0\")   tests correct string value");
        assertTrue  (MFTimeObject.matches( "1"),        "MFTimeObject.matches( \"1\")   tests correct string value");
        assertTrue  (MFTimeObject.matches("-1"),        "MFTimeObject.matches(\"-1\")   tests correct string value");
        assertTrue  (MFTimeObject.matches("  3 "),      "MFTimeObject.matches(\"  3 \") tests correct string value, including external whitespace");
        assertTrue  (MFTimeObject.matches(" -3 "),      "MFTimeObject.matches(\" -3 \") tests correct string value, including external whitespace");
        assertTrue  (MFTimeObject.matches(" 0 12E45  "),"MFTimeObject.matches(\"0  12E45\") tests correct string value, scientific notation");
        assertTrue  (MFTimeObject.matches("+0,+12E+45"),"MFTimeObject.matches(\"+0,+12E+45\") tests correct string value, scientific notation");
        assertTrue  (MFTimeObject.matches("-0,-12E-45"),"MFTimeObject.matches(\"-0,-12E-45\") tests correct string value, scientific notation");

        assertTrue  (MFTimeObject.matches( "0.0"),        "MFTimeObject.matches( \"0\")   tests correct string value");
        assertTrue  (MFTimeObject.matches( "1.0"),        "MFTimeObject.matches( \"1\")   tests correct string value");
        assertTrue  (MFTimeObject.matches("-1.0"),        "MFTimeObject.matches(\"-1\")   tests correct string value");
        assertTrue  (MFTimeObject.matches("  3.0 "),      "MFTimeObject.matches(\"  3 \") tests correct string value, including external whitespace");
        assertTrue  (MFTimeObject.matches(" -3.0 "),      "MFTimeObject.matches(\" -3 \") tests correct string value, including external whitespace");
        assertTrue  (MFTimeObject.matches("0 1"),            "MFTimeObject.matches(\"0 1\")  tests correct array as string value");
        assertTrue  (MFTimeObject.matches("0.0 1.0"),        "MFTimeObject.matches(\"0.0 1.0\")  tests correct array as string value");
        assertTrue  (MFTimeObject.matches(" 0.0  12.3E45  "),"MFTimeObject.matches(\" 0.0  12.3E45 \") tests correct string value, scientific notation");
        assertTrue  (MFTimeObject.matches("+0.0,+12.3E+45 "),"MFTimeObject.matches(\"+0.0,+12.3E+45 \") tests correct string value, scientific notation");
        assertTrue  (MFTimeObject.matches("-0.0,-12.3E-45 "),"MFTimeObject.matches(\"-0.0,-12.3E-45 \") tests correct string value, scientific notation");
        
        assertFalse (MFTimeObject.matches("true"),     "MFTimeObject.matches(\"true\") tests incorrect boolean string value");
        assertFalse (MFTimeObject.matches("blah"),     "MFTimeObject.matches(\"blah\") tests incorrect alphabetic string value");
        assertFalse (MFTimeObject.matches("NaN"),      "MFTimeObject.matches(\"NaN\") tests Not A Number (NaN) which is not an allowed string value");
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