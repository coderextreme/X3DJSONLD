/*
Copyright (c) 1995-2018 held by the author(s).  All rights reserved.

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

package org.web3d.x3d.jsail.fields;

import org.web3d.x3d.jsail.*;
import org.web3d.x3d.jsail.Core.*;
import org.web3d.x3d.sai.InvalidFieldValueException;

/**
 * This utility class provides a concrete implementation corresponding to SFColor X3D field type.
 * 
 * <br><br>
 * The SFColor field specifies one RGB (red-green-blue) color triple. Each color value is an RGB triple of floating point numbers in the range 0.0 to 1.0. The default value of an uninitialized SFColor field is (0 0 0). Warning: comma characters in attribute values do not pass strict XML validation.
<br><br>
Related field object: {@link MFColorObject}
 * @see <a href="http://www.web3d.org/x3d/tooltips/X3dTooltips.html#SFColor">X3D Tooltips: type SFColor</a>

 * 

 * <br>
 * Note that {@linkplain SFColorObject#ALICEBLUE SFColorObject} provides a variety of color constants.
 * <br>

 * <br>
 * <i>Package hint:</i>  This specification class is defined by the X3D Java Language Binding Specification for the Scene Authoring Interface (SAI).
 *
 * @author Don Brutzman and Roy Walmsley
 * @see <a href="http://www.web3d.org/documents/specifications/19777-2/V3.0/Part2/abstracts.html#X3DFieldTypes" target="_blank">SAI Java Specification: B.4.11 X3DFieldTypes</a>
 * @see <a href="http://www.web3d.org/documents/specifications/19775-2/V3.3/Part02/dataRef.html#SAIFieldType" target="blank">SAI Abstract Specification: 5.2.15 SAIFieldType</a>
 * @see <a href="http://www.web3d.org/documents/specifications/19775-1/V3.3/Part01/fieldsDef.html#SFColorAndMFColor" target="blank">X3D Abstract Specification: SFColorAndMFColor</a>

 * @see <a href="http://www.web3d.org/x3d/tooltips/X3dTooltips.html" target="_blank">X3D Tooltips</a>
 * @see <a href="http://www.web3d.org/x3d/tooltips/X3dTooltips.html#field"      target="_blank">X3D Tooltips: field</a>
 * @see <a href="http://www.web3d.org/x3d/tooltips/X3dTooltips.html#fieldValue" target="_blank">X3D Tooltips: fieldValue</a>
 * @see <a href="http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a> * @see <a href="https://www.w3.org/TR/css3-color/#svg-color" target="_blank">CSS Color Module Level 3, 4.3. Extended color keywords</a>
 */
public class SFColorObject extends X3DConcreteField implements org.web3d.x3d.sai.SFColor
{
	/** String constant <i>NAME</i> provides name of this element: <i>SFColor</i> */
	public static final String NAME = "SFColor";

	/** Default value for this field type is a <i>0</i> value.
	 * @see <a href="https://docs.oracle.com/javase/tutorial/java/nutsandbolts/datatypes.html" target="_blank">Java Tutorials: Primitive Data Types</a>
     */
	public static final float[] DEFAULT_VALUE = {0.0f, 0.0f, 0.0f};

	/** @see <a href="https://www.w3.org/TR/css3-color/#svg-color" target="_blank">CSS Color Module Level 3, 4.3. Extended color keywords</a> */
	public static float[] ALICEBLUE = toFloatArray(0xf0f8ff); // decimal 240,248,255
	/** @see <a href="https://www.w3.org/TR/css3-color/#svg-color" target="_blank">CSS Color Module Level 3, 4.3. Extended color keywords</a> */
	public static float[] ANTIQUEWHITE = toFloatArray(0xfaebd7); // decimal 250,235,215
	/** @see <a href="https://www.w3.org/TR/css3-color/#svg-color" target="_blank">CSS Color Module Level 3, 4.3. Extended color keywords</a> */
	public static float[] AQUA = toFloatArray(0x00ffff); // decimal 0,255,255
	/** @see <a href="https://www.w3.org/TR/css3-color/#svg-color" target="_blank">CSS Color Module Level 3, 4.3. Extended color keywords</a> */
	public static float[] AQUAMARINE = toFloatArray(0x7fffd4); // decimal 127,255,212
	/** @see <a href="https://www.w3.org/TR/css3-color/#svg-color" target="_blank">CSS Color Module Level 3, 4.3. Extended color keywords</a> */
	public static float[] AZURE = toFloatArray(0xf0ffff); // decimal 240,255,255
	/** @see <a href="https://www.w3.org/TR/css3-color/#svg-color" target="_blank">CSS Color Module Level 3, 4.3. Extended color keywords</a> */
	public static float[] BEIGE = toFloatArray(0xf5f5dc); // decimal 245,245,220
	/** @see <a href="https://www.w3.org/TR/css3-color/#svg-color" target="_blank">CSS Color Module Level 3, 4.3. Extended color keywords</a> */
	public static float[] BISQUE = toFloatArray(0xffe4c4); // decimal 255,228,196
	/** @see <a href="https://www.w3.org/TR/css3-color/#svg-color" target="_blank">CSS Color Module Level 3, 4.3. Extended color keywords</a> */
	public static float[] BLACK = toFloatArray(0x000000); // decimal 0,0,0
	/** @see <a href="https://www.w3.org/TR/css3-color/#svg-color" target="_blank">CSS Color Module Level 3, 4.3. Extended color keywords</a> */
	public static float[] BLANCHEDALMOND = toFloatArray(0xffebcd); // decimal 255,235,205
	/** @see <a href="https://www.w3.org/TR/css3-color/#svg-color" target="_blank">CSS Color Module Level 3, 4.3. Extended color keywords</a> */
	public static float[] BLUE = toFloatArray(0x0000ff); // decimal 0,0,255
	/** @see <a href="https://www.w3.org/TR/css3-color/#svg-color" target="_blank">CSS Color Module Level 3, 4.3. Extended color keywords</a> */
	public static float[] BLUEVIOLET = toFloatArray(0x8a2be2); // decimal 138,43,226
	/** @see <a href="https://www.w3.org/TR/css3-color/#svg-color" target="_blank">CSS Color Module Level 3, 4.3. Extended color keywords</a> */
	public static float[] BROWN = toFloatArray(0xa52a2a); // decimal 165,42,42
	/** @see <a href="https://www.w3.org/TR/css3-color/#svg-color" target="_blank">CSS Color Module Level 3, 4.3. Extended color keywords</a> */
	public static float[] BURLYWOOD = toFloatArray(0xdeb887); // decimal 222,184,135
	/** @see <a href="https://www.w3.org/TR/css3-color/#svg-color" target="_blank">CSS Color Module Level 3, 4.3. Extended color keywords</a> */
	public static float[] CADETBLUE = toFloatArray(0x5f9ea0); // decimal 95,158,160
	/** @see <a href="https://www.w3.org/TR/css3-color/#svg-color" target="_blank">CSS Color Module Level 3, 4.3. Extended color keywords</a> */
	public static float[] CHARTREUSE = toFloatArray(0x7fff00); // decimal 127,255,0
	/** @see <a href="https://www.w3.org/TR/css3-color/#svg-color" target="_blank">CSS Color Module Level 3, 4.3. Extended color keywords</a> */
	public static float[] CHOCOLATE = toFloatArray(0xd2691e); // decimal 210,105,30
	/** @see <a href="https://www.w3.org/TR/css3-color/#svg-color" target="_blank">CSS Color Module Level 3, 4.3. Extended color keywords</a> */
	public static float[] CORAL = toFloatArray(0xff7f50); // decimal 255,127,80
	/** @see <a href="https://www.w3.org/TR/css3-color/#svg-color" target="_blank">CSS Color Module Level 3, 4.3. Extended color keywords</a> */
	public static float[] CORNFLOWERBLUE = toFloatArray(0x6495ed); // decimal 100,149,237
	/** @see <a href="https://www.w3.org/TR/css3-color/#svg-color" target="_blank">CSS Color Module Level 3, 4.3. Extended color keywords</a> */
	public static float[] CORNSILK = toFloatArray(0xfff8dc); // decimal 255,248,220
	/** @see <a href="https://www.w3.org/TR/css3-color/#svg-color" target="_blank">CSS Color Module Level 3, 4.3. Extended color keywords</a> */
	public static float[] CRIMSON = toFloatArray(0xdc143c); // decimal 220,20,60
	/** @see <a href="https://www.w3.org/TR/css3-color/#svg-color" target="_blank">CSS Color Module Level 3, 4.3. Extended color keywords</a> */
	public static float[] CYAN = toFloatArray(0x00ffff); // decimal 0,255,255
	/** @see <a href="https://www.w3.org/TR/css3-color/#svg-color" target="_blank">CSS Color Module Level 3, 4.3. Extended color keywords</a> */
	public static float[] DARKBLUE = toFloatArray(0x00008b); // decimal 0,0,139
	/** @see <a href="https://www.w3.org/TR/css3-color/#svg-color" target="_blank">CSS Color Module Level 3, 4.3. Extended color keywords</a> */
	public static float[] DARKCYAN = toFloatArray(0x008b8b); // decimal 0,139,139
	/** @see <a href="https://www.w3.org/TR/css3-color/#svg-color" target="_blank">CSS Color Module Level 3, 4.3. Extended color keywords</a> */
	public static float[] DARKGOLDENROD = toFloatArray(0xb8860b); // decimal 184,134,11
	/** @see <a href="https://www.w3.org/TR/css3-color/#svg-color" target="_blank">CSS Color Module Level 3, 4.3. Extended color keywords</a> */
	public static float[] DARKGRAY = toFloatArray(0xa9a9a9); // decimal 169,169,169
	/** @see <a href="https://www.w3.org/TR/css3-color/#svg-color" target="_blank">CSS Color Module Level 3, 4.3. Extended color keywords</a> */
	public static float[] DARKGREEN = toFloatArray(0x006400); // decimal 0,100,0
	/** @see <a href="https://www.w3.org/TR/css3-color/#svg-color" target="_blank">CSS Color Module Level 3, 4.3. Extended color keywords</a> */
	public static float[] DARKGREY = toFloatArray(0xa9a9a9); // decimal 169,169,169
	/** @see <a href="https://www.w3.org/TR/css3-color/#svg-color" target="_blank">CSS Color Module Level 3, 4.3. Extended color keywords</a> */
	public static float[] DARKKHAKI = toFloatArray(0xbdb76b); // decimal 189,183,107
	/** @see <a href="https://www.w3.org/TR/css3-color/#svg-color" target="_blank">CSS Color Module Level 3, 4.3. Extended color keywords</a> */
	public static float[] DARKMAGENTA = toFloatArray(0x8b008b); // decimal 139,0,139
	/** @see <a href="https://www.w3.org/TR/css3-color/#svg-color" target="_blank">CSS Color Module Level 3, 4.3. Extended color keywords</a> */
	public static float[] DARKOLIVEGREEN = toFloatArray(0x556b2f); // decimal 85,107,47
	/** @see <a href="https://www.w3.org/TR/css3-color/#svg-color" target="_blank">CSS Color Module Level 3, 4.3. Extended color keywords</a> */
	public static float[] DARKORANGE = toFloatArray(0xff8c00); // decimal 255,140,0
	/** @see <a href="https://www.w3.org/TR/css3-color/#svg-color" target="_blank">CSS Color Module Level 3, 4.3. Extended color keywords</a> */
	public static float[] DARKORCHID = toFloatArray(0x9932cc); // decimal 153,50,204
	/** @see <a href="https://www.w3.org/TR/css3-color/#svg-color" target="_blank">CSS Color Module Level 3, 4.3. Extended color keywords</a> */
	public static float[] DARKRED = toFloatArray(0x8b0000); // decimal 139,0,0
	/** @see <a href="https://www.w3.org/TR/css3-color/#svg-color" target="_blank">CSS Color Module Level 3, 4.3. Extended color keywords</a> */
	public static float[] DARKSALMON = toFloatArray(0xe9967a); // decimal 233,150,122
	/** @see <a href="https://www.w3.org/TR/css3-color/#svg-color" target="_blank">CSS Color Module Level 3, 4.3. Extended color keywords</a> */
	public static float[] DARKSEAGREEN = toFloatArray(0x8fbc8f); // decimal 143,188,143
	/** @see <a href="https://www.w3.org/TR/css3-color/#svg-color" target="_blank">CSS Color Module Level 3, 4.3. Extended color keywords</a> */
	public static float[] DARKSLATEBLUE = toFloatArray(0x483d8b); // decimal 72,61,139
	/** @see <a href="https://www.w3.org/TR/css3-color/#svg-color" target="_blank">CSS Color Module Level 3, 4.3. Extended color keywords</a> */
	public static float[] DARKSLATEGRAY = toFloatArray(0x2f4f4f); // decimal 47,79,79
	/** @see <a href="https://www.w3.org/TR/css3-color/#svg-color" target="_blank">CSS Color Module Level 3, 4.3. Extended color keywords</a> */
	public static float[] DARKSLATEGREY = toFloatArray(0x2f4f4f); // decimal 47,79,79
	/** @see <a href="https://www.w3.org/TR/css3-color/#svg-color" target="_blank">CSS Color Module Level 3, 4.3. Extended color keywords</a> */
	public static float[] DARKTURQUOISE = toFloatArray(0x00ced1); // decimal 0,206,209
	/** @see <a href="https://www.w3.org/TR/css3-color/#svg-color" target="_blank">CSS Color Module Level 3, 4.3. Extended color keywords</a> */
	public static float[] DARKVIOLET = toFloatArray(0x9400d3); // decimal 148,0,211
	/** @see <a href="https://www.w3.org/TR/css3-color/#svg-color" target="_blank">CSS Color Module Level 3, 4.3. Extended color keywords</a> */
	public static float[] DEEPPINK = toFloatArray(0xff1493); // decimal 255,20,147
	/** @see <a href="https://www.w3.org/TR/css3-color/#svg-color" target="_blank">CSS Color Module Level 3, 4.3. Extended color keywords</a> */
	public static float[] DEEPSKYBLUE = toFloatArray(0x00bfff); // decimal 0,191,255
	/** @see <a href="https://www.w3.org/TR/css3-color/#svg-color" target="_blank">CSS Color Module Level 3, 4.3. Extended color keywords</a> */
	public static float[] DIMGRAY = toFloatArray(0x696969); // decimal 105,105,105
	/** @see <a href="https://www.w3.org/TR/css3-color/#svg-color" target="_blank">CSS Color Module Level 3, 4.3. Extended color keywords</a> */
	public static float[] DIMGREY = toFloatArray(0x696969); // decimal 105,105,105
	/** @see <a href="https://www.w3.org/TR/css3-color/#svg-color" target="_blank">CSS Color Module Level 3, 4.3. Extended color keywords</a> */
	public static float[] DODGERBLUE = toFloatArray(0x1e90ff); // decimal 30,144,255
	/** @see <a href="https://www.w3.org/TR/css3-color/#svg-color" target="_blank">CSS Color Module Level 3, 4.3. Extended color keywords</a> */
	public static float[] FIREBRICK = toFloatArray(0xb22222); // decimal 178,34,34
	/** @see <a href="https://www.w3.org/TR/css3-color/#svg-color" target="_blank">CSS Color Module Level 3, 4.3. Extended color keywords</a> */
	public static float[] FLORALWHITE = toFloatArray(0xfffaf0); // decimal 255,250,240
	/** @see <a href="https://www.w3.org/TR/css3-color/#svg-color" target="_blank">CSS Color Module Level 3, 4.3. Extended color keywords</a> */
	public static float[] FORESTGREEN = toFloatArray(0x228b22); // decimal 34,139,34
	/** @see <a href="https://www.w3.org/TR/css3-color/#svg-color" target="_blank">CSS Color Module Level 3, 4.3. Extended color keywords</a> */
	public static float[] FUCHSIA = toFloatArray(0xff00ff); // decimal 255,0,255
	/** @see <a href="https://www.w3.org/TR/css3-color/#svg-color" target="_blank">CSS Color Module Level 3, 4.3. Extended color keywords</a> */
	public static float[] GAINSBORO = toFloatArray(0xdcdcdc); // decimal 220,220,220
	/** @see <a href="https://www.w3.org/TR/css3-color/#svg-color" target="_blank">CSS Color Module Level 3, 4.3. Extended color keywords</a> */
	public static float[] GHOSTWHITE = toFloatArray(0xf8f8ff); // decimal 248,248,255
	/** @see <a href="https://www.w3.org/TR/css3-color/#svg-color" target="_blank">CSS Color Module Level 3, 4.3. Extended color keywords</a> */
	public static float[] GOLD = toFloatArray(0xffd700); // decimal 255,215,0
	/** @see <a href="https://www.w3.org/TR/css3-color/#svg-color" target="_blank">CSS Color Module Level 3, 4.3. Extended color keywords</a> */
	public static float[] GOLDENROD = toFloatArray(0xdaa520); // decimal 218,165,32
	/** @see <a href="https://www.w3.org/TR/css3-color/#svg-color" target="_blank">CSS Color Module Level 3, 4.3. Extended color keywords</a> */
	public static float[] GRAY = toFloatArray(0x808080); // decimal 128,128,128
	/** @see <a href="https://www.w3.org/TR/css3-color/#svg-color" target="_blank">CSS Color Module Level 3, 4.3. Extended color keywords</a> */
	public static float[] GREEN = toFloatArray(0x008000); // decimal 0,128,0
	/** @see <a href="https://www.w3.org/TR/css3-color/#svg-color" target="_blank">CSS Color Module Level 3, 4.3. Extended color keywords</a> */
	public static float[] GREENYELLOW = toFloatArray(0xadff2f); // decimal 173,255,47
	/** @see <a href="https://www.w3.org/TR/css3-color/#svg-color" target="_blank">CSS Color Module Level 3, 4.3. Extended color keywords</a> */
	public static float[] GREY = toFloatArray(0x808080); // decimal 128,128,128
	/** @see <a href="https://www.w3.org/TR/css3-color/#svg-color" target="_blank">CSS Color Module Level 3, 4.3. Extended color keywords</a> */
	public static float[] HONEYDEW = toFloatArray(0xf0fff0); // decimal 240,255,240
	/** @see <a href="https://www.w3.org/TR/css3-color/#svg-color" target="_blank">CSS Color Module Level 3, 4.3. Extended color keywords</a> */
	public static float[] HOTPINK = toFloatArray(0xff69b4); // decimal 255,105,180
	/** @see <a href="https://www.w3.org/TR/css3-color/#svg-color" target="_blank">CSS Color Module Level 3, 4.3. Extended color keywords</a> */
	public static float[] INDIANRED = toFloatArray(0xcd5c5c); // decimal 205,92,92
	/** @see <a href="https://www.w3.org/TR/css3-color/#svg-color" target="_blank">CSS Color Module Level 3, 4.3. Extended color keywords</a> */
	public static float[] INDIGO = toFloatArray(0x4b0082); // decimal 75,0,130
	/** @see <a href="https://www.w3.org/TR/css3-color/#svg-color" target="_blank">CSS Color Module Level 3, 4.3. Extended color keywords</a> */
	public static float[] IVORY = toFloatArray(0xfffff0); // decimal 255,255,240
	/** @see <a href="https://www.w3.org/TR/css3-color/#svg-color" target="_blank">CSS Color Module Level 3, 4.3. Extended color keywords</a> */
	public static float[] KHAKI = toFloatArray(0xf0e68c); // decimal 240,230,140
	/** @see <a href="https://www.w3.org/TR/css3-color/#svg-color" target="_blank">CSS Color Module Level 3, 4.3. Extended color keywords</a> */
	public static float[] LAVENDER = toFloatArray(0xe6e6fa); // decimal 230,230,250
	/** @see <a href="https://www.w3.org/TR/css3-color/#svg-color" target="_blank">CSS Color Module Level 3, 4.3. Extended color keywords</a> */
	public static float[] LAVENDERBLUSH = toFloatArray(0xfff0f5); // decimal 255,240,245
	/** @see <a href="https://www.w3.org/TR/css3-color/#svg-color" target="_blank">CSS Color Module Level 3, 4.3. Extended color keywords</a> */
	public static float[] LAWNGREEN = toFloatArray(0x7cfc00); // decimal 124,252,0
	/** @see <a href="https://www.w3.org/TR/css3-color/#svg-color" target="_blank">CSS Color Module Level 3, 4.3. Extended color keywords</a> */
	public static float[] LEMONCHIFFON = toFloatArray(0xfffacd); // decimal 255,250,205
	/** @see <a href="https://www.w3.org/TR/css3-color/#svg-color" target="_blank">CSS Color Module Level 3, 4.3. Extended color keywords</a> */
	public static float[] LIGHTBLUE = toFloatArray(0xadd8e6); // decimal 173,216,230
	/** @see <a href="https://www.w3.org/TR/css3-color/#svg-color" target="_blank">CSS Color Module Level 3, 4.3. Extended color keywords</a> */
	public static float[] LIGHTCORAL = toFloatArray(0xf08080); // decimal 240,128,128
	/** @see <a href="https://www.w3.org/TR/css3-color/#svg-color" target="_blank">CSS Color Module Level 3, 4.3. Extended color keywords</a> */
	public static float[] LIGHTCYAN = toFloatArray(0xe0ffff); // decimal 224,255,255
	/** @see <a href="https://www.w3.org/TR/css3-color/#svg-color" target="_blank">CSS Color Module Level 3, 4.3. Extended color keywords</a> */
	public static float[] LIGHTGOLDENRODYELLOW = toFloatArray(0xfafad2); // decimal 250,250,210
	/** @see <a href="https://www.w3.org/TR/css3-color/#svg-color" target="_blank">CSS Color Module Level 3, 4.3. Extended color keywords</a> */
	public static float[] LIGHTGRAY = toFloatArray(0xd3d3d3); // decimal 211,211,211
	/** @see <a href="https://www.w3.org/TR/css3-color/#svg-color" target="_blank">CSS Color Module Level 3, 4.3. Extended color keywords</a> */
	public static float[] LIGHTGREEN = toFloatArray(0x90ee90); // decimal 144,238,144
	/** @see <a href="https://www.w3.org/TR/css3-color/#svg-color" target="_blank">CSS Color Module Level 3, 4.3. Extended color keywords</a> */
	public static float[] LIGHTGREY = toFloatArray(0xd3d3d3); // decimal 211,211,211
	/** @see <a href="https://www.w3.org/TR/css3-color/#svg-color" target="_blank">CSS Color Module Level 3, 4.3. Extended color keywords</a> */
	public static float[] LIGHTPINK = toFloatArray(0xffb6c1); // decimal 255,182,193
	/** @see <a href="https://www.w3.org/TR/css3-color/#svg-color" target="_blank">CSS Color Module Level 3, 4.3. Extended color keywords</a> */
	public static float[] LIGHTSALMON = toFloatArray(0xffa07a); // decimal 255,160,122
	/** @see <a href="https://www.w3.org/TR/css3-color/#svg-color" target="_blank">CSS Color Module Level 3, 4.3. Extended color keywords</a> */
	public static float[] LIGHTSEAGREEN = toFloatArray(0x20b2aa); // decimal 32,178,170
	/** @see <a href="https://www.w3.org/TR/css3-color/#svg-color" target="_blank">CSS Color Module Level 3, 4.3. Extended color keywords</a> */
	public static float[] LIGHTSKYBLUE = toFloatArray(0x87cefa); // decimal 135,206,250
	/** @see <a href="https://www.w3.org/TR/css3-color/#svg-color" target="_blank">CSS Color Module Level 3, 4.3. Extended color keywords</a> */
	public static float[] LIGHTSLATEGRAY = toFloatArray(0x778899); // decimal 119,136,153
	/** @see <a href="https://www.w3.org/TR/css3-color/#svg-color" target="_blank">CSS Color Module Level 3, 4.3. Extended color keywords</a> */
	public static float[] LIGHTSLATEGREY = toFloatArray(0x778899); // decimal 119,136,153
	/** @see <a href="https://www.w3.org/TR/css3-color/#svg-color" target="_blank">CSS Color Module Level 3, 4.3. Extended color keywords</a> */
	public static float[] LIGHTSTEELBLUE = toFloatArray(0xb0c4de); // decimal 176,196,222
	/** @see <a href="https://www.w3.org/TR/css3-color/#svg-color" target="_blank">CSS Color Module Level 3, 4.3. Extended color keywords</a> */
	public static float[] LIGHTYELLOW = toFloatArray(0xffffe0); // decimal 255,255,224
	/** @see <a href="https://www.w3.org/TR/css3-color/#svg-color" target="_blank">CSS Color Module Level 3, 4.3. Extended color keywords</a> */
	public static float[] LIME = toFloatArray(0x00ff00); // decimal 0,255,0
	/** @see <a href="https://www.w3.org/TR/css3-color/#svg-color" target="_blank">CSS Color Module Level 3, 4.3. Extended color keywords</a> */
	public static float[] LIMEGREEN = toFloatArray(0x32cd32); // decimal 50,205,50
	/** @see <a href="https://www.w3.org/TR/css3-color/#svg-color" target="_blank">CSS Color Module Level 3, 4.3. Extended color keywords</a> */
	public static float[] LINEN = toFloatArray(0xfaf0e6); // decimal 250,240,230
	/** @see <a href="https://www.w3.org/TR/css3-color/#svg-color" target="_blank">CSS Color Module Level 3, 4.3. Extended color keywords</a> */
	public static float[] MAGENTA = toFloatArray(0xff00ff); // decimal 255,0,255
	/** @see <a href="https://www.w3.org/TR/css3-color/#svg-color" target="_blank">CSS Color Module Level 3, 4.3. Extended color keywords</a> */
	public static float[] MAROON = toFloatArray(0x800000); // decimal 128,0,0
	/** @see <a href="https://www.w3.org/TR/css3-color/#svg-color" target="_blank">CSS Color Module Level 3, 4.3. Extended color keywords</a> */
	public static float[] MEDIUMAQUAMARINE = toFloatArray(0x66cdaa); // decimal 102,205,170
	/** @see <a href="https://www.w3.org/TR/css3-color/#svg-color" target="_blank">CSS Color Module Level 3, 4.3. Extended color keywords</a> */
	public static float[] MEDIUMBLUE = toFloatArray(0x0000cd); // decimal 0,0,205
	/** @see <a href="https://www.w3.org/TR/css3-color/#svg-color" target="_blank">CSS Color Module Level 3, 4.3. Extended color keywords</a> */
	public static float[] MEDIUMORCHID = toFloatArray(0xba55d3); // decimal 186,85,211
	/** @see <a href="https://www.w3.org/TR/css3-color/#svg-color" target="_blank">CSS Color Module Level 3, 4.3. Extended color keywords</a> */
	public static float[] MEDIUMPURPLE = toFloatArray(0x9370db); // decimal 147,112,219
	/** @see <a href="https://www.w3.org/TR/css3-color/#svg-color" target="_blank">CSS Color Module Level 3, 4.3. Extended color keywords</a> */
	public static float[] MEDIUMSEAGREEN = toFloatArray(0x3cb371); // decimal 60,179,113
	/** @see <a href="https://www.w3.org/TR/css3-color/#svg-color" target="_blank">CSS Color Module Level 3, 4.3. Extended color keywords</a> */
	public static float[] MEDIUMSLATEBLUE = toFloatArray(0x7b68ee); // decimal 123,104,238
	/** @see <a href="https://www.w3.org/TR/css3-color/#svg-color" target="_blank">CSS Color Module Level 3, 4.3. Extended color keywords</a> */
	public static float[] MEDIUMSPRINGGREEN = toFloatArray(0x00fa9a); // decimal 0,250,154
	/** @see <a href="https://www.w3.org/TR/css3-color/#svg-color" target="_blank">CSS Color Module Level 3, 4.3. Extended color keywords</a> */
	public static float[] MEDIUMTURQUOISE = toFloatArray(0x48d1cc); // decimal 72,209,204
	/** @see <a href="https://www.w3.org/TR/css3-color/#svg-color" target="_blank">CSS Color Module Level 3, 4.3. Extended color keywords</a> */
	public static float[] MEDIUMVIOLETRED = toFloatArray(0xc71585); // decimal 199,21,133
	/** @see <a href="https://www.w3.org/TR/css3-color/#svg-color" target="_blank">CSS Color Module Level 3, 4.3. Extended color keywords</a> */
	public static float[] MIDNIGHTBLUE = toFloatArray(0x191970); // decimal 25,25,112
	/** @see <a href="https://www.w3.org/TR/css3-color/#svg-color" target="_blank">CSS Color Module Level 3, 4.3. Extended color keywords</a> */
	public static float[] MINTCREAM = toFloatArray(0xf5fffa); // decimal 245,255,250
	/** @see <a href="https://www.w3.org/TR/css3-color/#svg-color" target="_blank">CSS Color Module Level 3, 4.3. Extended color keywords</a> */
	public static float[] MISTYROSE = toFloatArray(0xffe4e1); // decimal 255,228,225
	/** @see <a href="https://www.w3.org/TR/css3-color/#svg-color" target="_blank">CSS Color Module Level 3, 4.3. Extended color keywords</a> */
	public static float[] MOCCASIN = toFloatArray(0xffe4b5); // decimal 255,228,181
	/** @see <a href="https://www.w3.org/TR/css3-color/#svg-color" target="_blank">CSS Color Module Level 3, 4.3. Extended color keywords</a> */
	public static float[] NAVAJOWHITE = toFloatArray(0xffdead); // decimal 255,222,173
	/** @see <a href="https://www.w3.org/TR/css3-color/#svg-color" target="_blank">CSS Color Module Level 3, 4.3. Extended color keywords</a> */
	public static float[] NAVY = toFloatArray(0x000080); // decimal 0,0,128
	/** @see <a href="https://www.w3.org/TR/css3-color/#svg-color" target="_blank">CSS Color Module Level 3, 4.3. Extended color keywords</a> */
	public static float[] OLDLACE = toFloatArray(0xfdf5e6); // decimal 253,245,230
	/** @see <a href="https://www.w3.org/TR/css3-color/#svg-color" target="_blank">CSS Color Module Level 3, 4.3. Extended color keywords</a> */
	public static float[] OLIVE = toFloatArray(0x808000); // decimal 128,128,0
	/** @see <a href="https://www.w3.org/TR/css3-color/#svg-color" target="_blank">CSS Color Module Level 3, 4.3. Extended color keywords</a> */
	public static float[] OLIVEDRAB = toFloatArray(0x6b8e23); // decimal 107,142,35
	/** @see <a href="https://www.w3.org/TR/css3-color/#svg-color" target="_blank">CSS Color Module Level 3, 4.3. Extended color keywords</a> */
	public static float[] ORANGE = toFloatArray(0xffa500); // decimal 255,165,0
	/** @see <a href="https://www.w3.org/TR/css3-color/#svg-color" target="_blank">CSS Color Module Level 3, 4.3. Extended color keywords</a> */
	public static float[] ORANGERED = toFloatArray(0xff4500); // decimal 255,69,0
	/** @see <a href="https://www.w3.org/TR/css3-color/#svg-color" target="_blank">CSS Color Module Level 3, 4.3. Extended color keywords</a> */
	public static float[] ORCHID = toFloatArray(0xda70d6); // decimal 218,112,214
	/** @see <a href="https://www.w3.org/TR/css3-color/#svg-color" target="_blank">CSS Color Module Level 3, 4.3. Extended color keywords</a> */
	public static float[] PALEGOLDENROD = toFloatArray(0xeee8aa); // decimal 238,232,170
	/** @see <a href="https://www.w3.org/TR/css3-color/#svg-color" target="_blank">CSS Color Module Level 3, 4.3. Extended color keywords</a> */
	public static float[] PALEGREEN = toFloatArray(0x98fb98); // decimal 152,251,152
	/** @see <a href="https://www.w3.org/TR/css3-color/#svg-color" target="_blank">CSS Color Module Level 3, 4.3. Extended color keywords</a> */
	public static float[] PALETURQUOISE = toFloatArray(0xafeeee); // decimal 175,238,238
	/** @see <a href="https://www.w3.org/TR/css3-color/#svg-color" target="_blank">CSS Color Module Level 3, 4.3. Extended color keywords</a> */
	public static float[] PALEVIOLETRED = toFloatArray(0xdb7093); // decimal 219,112,147
	/** @see <a href="https://www.w3.org/TR/css3-color/#svg-color" target="_blank">CSS Color Module Level 3, 4.3. Extended color keywords</a> */
	public static float[] PAPAYAWHIP = toFloatArray(0xffefd5); // decimal 255,239,213
	/** @see <a href="https://www.w3.org/TR/css3-color/#svg-color" target="_blank">CSS Color Module Level 3, 4.3. Extended color keywords</a> */
	public static float[] PEACHPUFF = toFloatArray(0xffdab9); // decimal 255,218,185
	/** @see <a href="https://www.w3.org/TR/css3-color/#svg-color" target="_blank">CSS Color Module Level 3, 4.3. Extended color keywords</a> */
	public static float[] PERU = toFloatArray(0xcd853f); // decimal 205,133,63
	/** @see <a href="https://www.w3.org/TR/css3-color/#svg-color" target="_blank">CSS Color Module Level 3, 4.3. Extended color keywords</a> */
	public static float[] PINK = toFloatArray(0xffc0cb); // decimal 255,192,203
	/** @see <a href="https://www.w3.org/TR/css3-color/#svg-color" target="_blank">CSS Color Module Level 3, 4.3. Extended color keywords</a> */
	public static float[] PLUM = toFloatArray(0xdda0dd); // decimal 221,160,221
	/** @see <a href="https://www.w3.org/TR/css3-color/#svg-color" target="_blank">CSS Color Module Level 3, 4.3. Extended color keywords</a> */
	public static float[] POWDERBLUE = toFloatArray(0xb0e0e6); // decimal 176,224,230
	/** @see <a href="https://www.w3.org/TR/css3-color/#svg-color" target="_blank">CSS Color Module Level 3, 4.3. Extended color keywords</a> */
	public static float[] PURPLE = toFloatArray(0x800080); // decimal 128,0,128
	/** @see <a href="https://www.w3.org/TR/css3-color/#svg-color" target="_blank">CSS Color Module Level 3, 4.3. Extended color keywords</a> */
	public static float[] RED = toFloatArray(0xff0000); // decimal 255,0,0
	/** @see <a href="https://www.w3.org/TR/css3-color/#svg-color" target="_blank">CSS Color Module Level 3, 4.3. Extended color keywords</a> */
	public static float[] ROSYBROWN = toFloatArray(0xbc8f8f); // decimal 188,143,143
	/** @see <a href="https://www.w3.org/TR/css3-color/#svg-color" target="_blank">CSS Color Module Level 3, 4.3. Extended color keywords</a> */
	public static float[] ROYALBLUE = toFloatArray(0x4169e1); // decimal 65,105,225
	/** @see <a href="https://www.w3.org/TR/css3-color/#svg-color" target="_blank">CSS Color Module Level 3, 4.3. Extended color keywords</a> */
	public static float[] SADDLEBROWN = toFloatArray(0x8b4513); // decimal 139,69,19
	/** @see <a href="https://www.w3.org/TR/css3-color/#svg-color" target="_blank">CSS Color Module Level 3, 4.3. Extended color keywords</a> */
	public static float[] SALMON = toFloatArray(0xfa8072); // decimal 250,128,114
	/** @see <a href="https://www.w3.org/TR/css3-color/#svg-color" target="_blank">CSS Color Module Level 3, 4.3. Extended color keywords</a> */
	public static float[] SANDYBROWN = toFloatArray(0xf4a460); // decimal 244,164,96
	/** @see <a href="https://www.w3.org/TR/css3-color/#svg-color" target="_blank">CSS Color Module Level 3, 4.3. Extended color keywords</a> */
	public static float[] SEAGREEN = toFloatArray(0x2e8b57); // decimal 46,139,87
	/** @see <a href="https://www.w3.org/TR/css3-color/#svg-color" target="_blank">CSS Color Module Level 3, 4.3. Extended color keywords</a> */
	public static float[] SEASHELL = toFloatArray(0xfff5ee); // decimal 255,245,238
	/** @see <a href="https://www.w3.org/TR/css3-color/#svg-color" target="_blank">CSS Color Module Level 3, 4.3. Extended color keywords</a> */
	public static float[] SIENNA = toFloatArray(0xa0522d); // decimal 160,82,45
	/** @see <a href="https://www.w3.org/TR/css3-color/#svg-color" target="_blank">CSS Color Module Level 3, 4.3. Extended color keywords</a> */
	public static float[] SILVER = toFloatArray(0xc0c0c0); // decimal 192,192,192
	/** @see <a href="https://www.w3.org/TR/css3-color/#svg-color" target="_blank">CSS Color Module Level 3, 4.3. Extended color keywords</a> */
	public static float[] SKYBLUE = toFloatArray(0x87ceeb); // decimal 135,206,235
	/** @see <a href="https://www.w3.org/TR/css3-color/#svg-color" target="_blank">CSS Color Module Level 3, 4.3. Extended color keywords</a> */
	public static float[] SLATEBLUE = toFloatArray(0x6a5acd); // decimal 106,90,205
	/** @see <a href="https://www.w3.org/TR/css3-color/#svg-color" target="_blank">CSS Color Module Level 3, 4.3. Extended color keywords</a> */
	public static float[] SLATEGRAY = toFloatArray(0x708090); // decimal 112,128,144
	/** @see <a href="https://www.w3.org/TR/css3-color/#svg-color" target="_blank">CSS Color Module Level 3, 4.3. Extended color keywords</a> */
	public static float[] SLATEGREY = toFloatArray(0x708090); // decimal 112,128,144
	/** @see <a href="https://www.w3.org/TR/css3-color/#svg-color" target="_blank">CSS Color Module Level 3, 4.3. Extended color keywords</a> */
	public static float[] SNOW = toFloatArray(0xfffafa); // decimal 255,250,250
	/** @see <a href="https://www.w3.org/TR/css3-color/#svg-color" target="_blank">CSS Color Module Level 3, 4.3. Extended color keywords</a> */
	public static float[] SPRINGGREEN = toFloatArray(0x00ff7f); // decimal 0,255,127
	/** @see <a href="https://www.w3.org/TR/css3-color/#svg-color" target="_blank">CSS Color Module Level 3, 4.3. Extended color keywords</a> */
	public static float[] STEELBLUE = toFloatArray(0x4682b4); // decimal 70,130,180
	/** @see <a href="https://www.w3.org/TR/css3-color/#svg-color" target="_blank">CSS Color Module Level 3, 4.3. Extended color keywords</a> */
	public static float[] TAN = toFloatArray(0xd2b48c); // decimal 210,180,140
	/** @see <a href="https://www.w3.org/TR/css3-color/#svg-color" target="_blank">CSS Color Module Level 3, 4.3. Extended color keywords</a> */
	public static float[] TEAL = toFloatArray(0x008080); // decimal 0,128,128
	/** @see <a href="https://www.w3.org/TR/css3-color/#svg-color" target="_blank">CSS Color Module Level 3, 4.3. Extended color keywords</a> */
	public static float[] THISTLE = toFloatArray(0xd8bfd8); // decimal 216,191,216
	/** @see <a href="https://www.w3.org/TR/css3-color/#svg-color" target="_blank">CSS Color Module Level 3, 4.3. Extended color keywords</a> */
	public static float[] TOMATO = toFloatArray(0xff6347); // decimal 255,99,71
	/** @see <a href="https://www.w3.org/TR/css3-color/#svg-color" target="_blank">CSS Color Module Level 3, 4.3. Extended color keywords</a> */
	public static float[] TURQUOISE = toFloatArray(0x40e0d0); // decimal 64,224,208
	/** @see <a href="https://www.w3.org/TR/css3-color/#svg-color" target="_blank">CSS Color Module Level 3, 4.3. Extended color keywords</a> */
	public static float[] VIOLET = toFloatArray(0xee82ee); // decimal 238,130,238
	/** @see <a href="https://www.w3.org/TR/css3-color/#svg-color" target="_blank">CSS Color Module Level 3, 4.3. Extended color keywords</a> */
	public static float[] WHEAT = toFloatArray(0xf5deb3); // decimal 245,222,179
	/** @see <a href="https://www.w3.org/TR/css3-color/#svg-color" target="_blank">CSS Color Module Level 3, 4.3. Extended color keywords</a> */
	public static float[] WHITE = toFloatArray(0xffffff); // decimal 255,255,255
	/** @see <a href="https://www.w3.org/TR/css3-color/#svg-color" target="_blank">CSS Color Module Level 3, 4.3. Extended color keywords</a> */
	public static float[] WHITESMOKE = toFloatArray(0xf5f5f5); // decimal 245,245,245
	/** @see <a href="https://www.w3.org/TR/css3-color/#svg-color" target="_blank">CSS Color Module Level 3, 4.3. Extended color keywords</a> */
	public static float[] YELLOW = toFloatArray(0xffff00); // decimal 255,255,0
	/** @see <a href="https://www.w3.org/TR/css3-color/#svg-color" target="_blank">CSS Color Module Level 3, 4.3. Extended color keywords</a> */
	public static float[] YELLOWGREEN = toFloatArray(0x9acd32); // decimal 154,205,50

	// Member value declaration is encapsulated and private, using preferred Java types for concretes library
	private float[] SFColor = java.util.Arrays.copyOf(DEFAULT_VALUE, DEFAULT_VALUE.length); // must be separate copy

	/**
	 * Constructor for SFColorObject performs value initialization.
	 */
	public SFColorObject ()
	{
		initialize();
	}

	/**
	 * Initialization for SFColorObject applies default initial value.
	 */
	@Override
	public void initialize()
	{
		SFColor = java.util.Arrays.copyOf(DEFAULT_VALUE, DEFAULT_VALUE.length); // must be separate copy
	}

	/**
	 * Utility accessor for SFColorObject using String value (which must pass parsing validation checks).
	 * <br ><br >
	 * <i>Warning:</i> this method is not 
	 * <i><a href="https://en.wikipedia.org/wiki/Type_safety" target="_blank">type safe</a></i>
	 * at compile time!  Best practice for X3DJSAIL programmers is to use strongly typed methods instead, in order to avoid potential for run-time errors.
	 * @see X3DLoaderObject#toX3dObjectTree(org.w3c.dom.Node)
	 * @param newValue is new value to assign, if empty then assign DEFAULT_VALUE
	 * @return {@link MFMatrix4dObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
method invocations on the same node object).
	 */
	public SFColorObject setValueByString (String newValue) throws InvalidFieldValueException
	{
		if (newValue == null)
			newValue = new String(); // Principle of Least Astonishment (POLA)
			// https://en.wikipedia.org/wiki/Principle_of_least_astonishment
		if (newValue.trim().isEmpty())
		{
			SFColor = java.util.Arrays.copyOf(DEFAULT_VALUE, DEFAULT_VALUE.length); // must be separate copy
			return this;
		}
		try
		{
			String[] newValues = newValue.trim().split("\\s+");
			if (newValues.length != 3)
			{
				String errorNotice = "illegal number of values in initialization string, new SFColorObject(" + newValue + ")";
				validationResult.append(errorNotice).append("\n");
				throw new InvalidFieldValueException(errorNotice);
			}
			SFColor[0] = Float.parseFloat(newValues[0]);
			SFColor[1] = Float.parseFloat(newValues[1]);
			SFColor[2] = Float.parseFloat(newValues[2]);
		}
		catch (NumberFormatException e)
		{
			String errorNotice = "new SFColorObject(" + newValue + ") " + e.getMessage();
			validationResult.append(errorNotice).append("\n");
			throw new InvalidFieldValueException (errorNotice);
		}
		return this;
	}

	/**
	 * Constructor to copy an SFColorObject value as initial value for this new field object.
	 * @param newValue The newValue to apply
	 */
	public SFColorObject(SFColorObject newValue)
	{
		if (newValue == null)
		{
			SFColor = java.util.Arrays.copyOf(DEFAULT_VALUE, DEFAULT_VALUE.length); // must be separate copy
			return;
		}
		SFColor = newValue.getPrimitiveValue();
	}

	/**
	 * Constructor for SFColorObject using a corresponding Java primitive float[] array as new initial value.
	 * @param newValue is new value to assign
	 * <i>Warning:</i> newValue array length must correspond to tuple size for base type SFColor tuple size of <i>3</i>.
	 * setContainerFieldOverride(containerFieldName); // apply checksConcreteField#getTupleSize(String)
	 */
	public SFColorObject (float[] newValue)
	{
		if      (newValue == null)
			     newValue = java.util.Arrays.copyOf(DEFAULT_VALUE, DEFAULT_VALUE.length); // must be separate copy
		else if (newValue.length != 3)
		{
			String errorNotice = "Illegal SFColor newValue array length=" + newValue.length +
				", must equal 3 or else be empty (newValue=" + toString(newValue) + ")";
			validationResult.append(errorNotice).append("\n");
			throw new InvalidFieldValueException(errorNotice);
		}
		
		// initial value checks 
		float   red = newValue[0];
		float green = newValue[1];
		float  blue = newValue[2];
		if ((red < 0.0f) || (red > 1.0f) || (green < 0.0f) || (green > 1.0f) || (blue < 0.0f) || (blue > 1.0f))
		{
			String errorNotice = "Illegal SFColor value (" + red + "," + green + "," + blue +
				"), all values must be in numeric range [0..1]";
			throw new InvalidFieldValueException(errorNotice);
		}
		SFColor = newValue;
	}

	/**
	 * Constructor using individual float types as new initial value (which must pass validation checks).
	 * @param red first component
	 * @param green second component
	 * @param blue third component
	 * @see <a href="http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html#Color" target="_blank">X3D Scene Authoring Hints: Color</a>
	 */
	public SFColorObject (float red, float green, float blue)
	{
		if ((red < 0.0f) || (red > 1.0f) || (green < 0.0f) || (green > 1.0f) || (blue < 0.0f) || (blue > 1.0f))
		{
			String errorNotice = "Illegal SFColor value (" + red + "," + green + "," + blue + 
				"), all values must be in numeric range [0..1]";
			validationResult.append(errorNotice).append("\n");
			throw new InvalidFieldValueException(errorNotice);
		}
		SFColor[0] = red;
		SFColor[1] = green;
		SFColor[2] = blue;
	}
	/**
	 * Constructor using individual double types as new initial value (which must pass validation checks).
	 * @param red first component
	 * @param green second component
	 * @param blue third component
	 * @see <a href="http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html#Color" target="_blank">X3D Scene Authoring Hints: Color</a>
	 */
	public SFColorObject (double red, double green, double blue)
	{
		setValue ((float) red, (float) green, (float) blue);
	}
	/**
	 * Constructor using single HTML-style 0xRRGGBB hex value as new initial value.
	 * @param hexColorValue HTML color value (such as 0xAA2288)
	 * @see <a href="http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html#Color" target="_blank">X3D Scene Authoring Hints: Color</a>
	 */
	public SFColorObject (int hexColorValue)
	{
		// http://stackoverflow.com/questions/12798611/splitting-a-hex-number

		float   red = ((hexColorValue>>16) & 0xff) / 255.0f;
		float green = ((hexColorValue>> 8) & 0xff) / 255.0f;
		float  blue = ((hexColorValue    ) & 0xff) / 255.0f;
						 
		if ((red < 0.0f) || (red > 1.0f) || (green < 0.0f) || (green > 1.0f) || (blue < 0.0f) || (blue > 1.0f))
		{
			String errorNotice = "Illegal SFColor value (" + red + "," + green + "," + blue + 
				"), all values must be in numeric range [0..1]";
			validationResult.append(errorNotice).append("\n");
			throw new InvalidFieldValueException(errorNotice);
		}
		SFColor[0] = red;
		SFColor[1] = green;
		SFColor[2] = blue;
	}
	/**
	 * Public utility method converting single HTML-style 0xRRGGBB hex value to three-tuple float array.
TODO: also MFColor.
	 * @param hexColorValue HTML color value (such as 0xAA2288)
	 * @see <a href="http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html#Color" target="_blank">X3D Scene Authoring Hints: Color</a>
	 * @return float[3] array containing X3D RGB values, each ranging [0..1]
	 */
	public static float[] toFloatArray (int hexColorValue)
	{
		// http://stackoverflow.com/questions/12798611/splitting-a-hex-number
						 
		float[] newFloatArray = {0.0f, 0.0f, 0.0f};
						 
		float   red = ((hexColorValue>>16) & 0xff) / 255.0f;
		float green = ((hexColorValue>> 8) & 0xff) / 255.0f;
		float  blue = ((hexColorValue    ) & 0xff) / 255.0f;
						 
		if ((red < 0.0f) || (red > 1.0f) || (green < 0.0f) || (green > 1.0f) || (blue < 0.0f) || (blue > 1.0f))
		{
			String errorNotice = "Illegal SFColor value (" + red + "," + green + "," + blue + 
				"), all values must be in numeric range [0..1]";
			validationResult.append(errorNotice).append("\n");
			throw new InvalidFieldValueException(errorNotice);
		}
		newFloatArray[0] = red;
		newFloatArray[1] = green;
		newFloatArray[2] = blue;
		return newFloatArray;
	}
	/**
	 * Public utility accessor method setting single HTML-style 0xRRGGBB hex value as new value.
	 * @param hexColorValue HTML color value (such as 0xAA2288)
	 * @see <a href="http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html#Color" target="_blank">X3D Scene Authoring Hints: Color</a>
	 * @return {@link SFColorObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public SFColorObject setValue (int hexColorValue)
	{
		// http://stackoverflow.com/questions/12798611/splitting-a-hex-number
						 
		float   red = ((hexColorValue>>16) & 0xff) / 255.0f;
		float green = ((hexColorValue>> 8) & 0xff) / 255.0f;
		float  blue = ((hexColorValue    ) & 0xff) / 255.0f;
						 
		if ((red < 0.0f) || (red > 1.0f) || (green < 0.0f) || (green > 1.0f) || (blue < 0.0f) || (blue > 1.0f))
		{
			String errorNotice = "Illegal ;SFColor value (" + red + "," + green + "," + blue + 
				"), all values must be in numeric range [0..1]";
			validationResult.append(errorNotice).append("\n");
			throw new InvalidFieldValueException(errorNotice);
		}
		SFColor[0] = red;
		SFColor[1] = green;
		SFColor[2] = blue;
		return this;
	}
	/**
	 * Complement all color values in RGB space (i.e. subtract each component from 1).
	 * @see <a href="https://en.wikipedia.org/wiki/Negative_(photography)">Wikipedia: Negative (photography)</a>
	 * @see <a href="https://en.wikipedia.org/wiki/Complementary_colors">Wikipedia: Complementary colors</a>
	 * @see <a href="http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html#Color" target="_blank">X3D Scene Authoring Hints: Color</a>
	 * @return {@link SFColorObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public SFColorObject complementRGB ()
	{
		SFColor[0] = 1.0f - SFColor[0];
		SFColor[1] = 1.0f - SFColor[1];
		SFColor[2] = 1.0f - SFColor[2];
		return this;
	}
	/**
	 * Scale all color values in RGB space.
	 * @param scaleFactor nonnegative scaling factor
	 * @see <a href="http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html#Color" target="_blank">X3D Scene Authoring Hints: Color</a>
	 * @return {@link SFColorObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public SFColorObject scaleRGB (float scaleFactor)
	{
		if (scaleFactor < 0.0f)
		{
			String errorNotice = "Illegal scaleFactor value (" + scaleFactor + "), must be nonnegative";
			validationResult.append(errorNotice).append("\n");
			throw new InvalidFieldValueException(errorNotice);
		}
		SFColor[0] *= scaleFactor;
		SFColor[1] *= scaleFactor;
		SFColor[2] *= scaleFactor;
		return this;
	}
	/**
	 * Ensure all component color values are within range [0-1] by clipping as necessary.
	 * @see <a href="http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html#Color" target="_blank">X3D Scene Authoring Hints: Color</a>
	 * @return {@link SFColorObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public SFColorObject normalizeClip ()
	{
		if (SFColor[0] < 0.0f) SFColor[0] = 0.0f;
		if (SFColor[1] < 0.0f) SFColor[1] = 0.0f;
		if (SFColor[2] < 0.0f) SFColor[2] = 0.0f;
		if (SFColor[0] > 1.0f) SFColor[0] = 1.0f;
		if (SFColor[1] > 1.0f) SFColor[1] = 1.0f;
		if (SFColor[2] > 1.0f) SFColor[2] = 1.0f;
		return this;
	}

	/**
	 * Assign a new value to this field.
	 * <i>Warning:</i> newValue array length must correspond to tuple size for base type SFColor tuple size of <i>3</i>.
	 * @see X3DConcreteField#getTupleSize(String)
	 * @param newValue The replacement value to assign.
	 */
	public void setValue(double[] newValue)
	{
		float[] floatArray = new float[newValue.length];
		for (int i = 0; i < newValue.length; i++)
			floatArray[i] = (float)newValue[i]; // cast each double to float
		setValue(floatArray);
	}

	/**
	 * Constructor for MFVec3fObject using an alternatively typed Java double[] array as new initial value.
	 * @param newValue is new value to assign
	 */
	public SFColorObject(double[] newValue)
	{
		setValue(newValue); // type conversion, doubles to floats
	}

	/**
	 * Static utility method to provide String representation of a correctly typed input value.
	 * @param value The value to convert to a String
	 * @see <a href="http://www.web3d.org/x3d/tooltips/X3dTooltips.html#type">X3D Tooltips: type</a>
	 * @see SFFloatObject#stripTrailingZeroes(float)
	 * @return String version of the provided value, with trailing zeroes and decimal points omitted.
	 */
	public static String toString (float[] value)
	{
		StringBuilder result = new StringBuilder();
		for (int i=0; i < value.length; i++)
		{
			if  (ConfigurationProperties.isStripTrailingZeroes())
				 result.append(org.web3d.x3d.jsail.fields.SFFloatObject.stripTrailingZeroes(value[i])).append(" ");
			else result.append(value[i]).append(" ");
		}
		return result.toString().trim();
	}

	/**
	 * Get the current value of this SFColorObject by copying it into the valueDestination array, leaving the current object unchanged.
	 * @param valueDestination The array to be filled in with current field values.
	 */
	@Override
	public void getValue(float[] valueDestination)
	{
		valueDestination = SFColor;
	}

	/**
	 * Provides current value of the field as a Java primitive type.
	 * @return current value
	 */
	public float[] getPrimitiveValue()
	{
		return SFColor;
	}
	/**
	 * Provides current value as a String.
	 * @see <a href="http://www.web3d.org/x3d/tooltips/X3dTooltips.html#SFColor">X3D Tooltips: type SFColor</a>
	 * @see org.web3d.x3d.jsail.fields.SFFloatObject#stripTrailingZeroes(float)
	 * @return String version of the provided value, with trailing zeroes and decimal points omitted.
	 */
	@Override
	public String toString()
	{
		StringBuilder result = new StringBuilder();
		for (int i = 0; i < SFColor.length; i++)
		{
			if  (ConfigurationProperties.isStripTrailingZeroes())
				 result.append(org.web3d.x3d.jsail.fields.SFFloatObject.stripTrailingZeroes(SFColor[i]));
			else result.append(SFColor[i]);
			if (i < SFColor.length - 1)
				result.append(" ");
		}
		return result.toString();
	}
	/**
	 * Assign a new value to this field.
	 * <i>Warning:</i> newValue array length must correspond to tuple size for base type SFColor tuple size of <i>3</i>.
	 * @see X3DConcreteField#getTupleSize(String)
	 * @param newValue The replacement value to assign.
	 */
	@Override
	public void setValue(float[] newValue)
	{
		if (newValue == null) return; // newValueNullReturnVoid2

		if      (newValue == null)
			     newValue = java.util.Arrays.copyOf(DEFAULT_VALUE, DEFAULT_VALUE.length); // must be separate copy
		else if (newValue.length != 3)
		{
			String errorNotice = "Illegal SFColor newValue array length=" + newValue.length +
				", must equal 3 or else be empty (newValue=" + toString(newValue) + ")";
			validationResult.append(errorNotice).append("\n");
			throw new InvalidFieldValueException(errorNotice);
		}
		
		// initial value checks
		float   red = newValue[0];
		float green = newValue[1];
		float  blue = newValue[2];
		if ((red < 0.0f) || (red > 1.0f) || (green < 0.0f) || (green > 1.0f) || (blue < 0.0f) || (blue > 1.0f))
		{
			String errorNotice = "Illegal SFColor value (" + red + "," + green + "," + blue + 
				"), all values must be in numeric range [0..1]";
			validationResult.append(errorNotice).append("\n");
			throw new InvalidFieldValueException(errorNotice);
		}
		SFColor = newValue;
	}

	/**
	 * Assign a new value to this field.
	 * @param red first component
	 * @param green second component
	 * @param blue third component
	 * @return {@link SFColorObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public SFColorObject setValue(float red, float green, float blue)
	{
		if ((red < 0.0f) || (red > 1.0f) || (green < 0.0f) || (green > 1.0f) || (blue < 0.0f) || (blue > 1.0f))
		{
			String errorNotice = "Illegal SFColor value (" + red + "," + green + "," + blue + 
				"), all values must be in numeric range [0..1]";
			validationResult.append(errorNotice).append("\n");
			throw new InvalidFieldValueException(errorNotice);
		}
		SFColor[0] = red;
		SFColor[1] = green;
		SFColor[2] = blue;
		return this;
	}

	/**
	 * Assign a new value to this field.
	 * @param red first component
	 * @param green second component
	 * @param blue third component
	 * @return {@link SFColorObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public SFColorObject setValue(double red, double green, double blue)
	{
		setValue ((float) red, (float) green, (float) blue);
		return this;
	}

	/**
	 * Provide float array for this field type.
	 *
	 * @return Array of floats in this field array.
	 */
	public float[] toFloatArray()
	{
		return SFColor;
	}

	/**
	 * Apply an SFColorObject value to this field.
	 * @param newValue The newValue to apply
	 * @return {@link SFColorObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public SFColorObject setValue(SFColorObject newValue)
	{
		if (newValue == null)
		{
			SFColor = java.util.Arrays.copyOf(DEFAULT_VALUE, DEFAULT_VALUE.length); // must be separate copy
			return this;
		}
		SFColor = newValue.getPrimitiveValue();
		return this;
	}								
}
