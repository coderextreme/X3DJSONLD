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

package org.web3d.x3d.sai.Layout;

import java.util.*;
import org.web3d.x3d.sai.*;  // making sure #2
import org.web3d.x3d.sai.Core.*;

/**
 * Abstract node interface, defined by X3D specification to support X3D Java interoperability.
 * 
 * <br><br>
 * <i>X3D node tooltip</i>: (X3D version 3.2 or later) Layout node is used as layout field of LayoutLayer and LayoutGroup nodes. Layout provides all parameters required to define the size, location and scale of a 2D rectangular region.
 * <ul>
 *  <li> <i> Hint:</i>  the align, offset, and offsetUnits fields are used to determine the location of the layout region. </li> 
 * </ul>
 * <br>
 * <i>Package hint:</i>  This interface is defined by the X3D Java Language Binding Specification for the Scene Authoring Interface (SAI).
 *
 * @author Don Brutzman and Roy Walmsley
 * @see <a href="http://www.web3d.org/documents/specifications/19777-2/V3.0/Part2/concretes.html#Layout" target="_blank">SAI Java Specification: TODO</a>
 * @see <a href="http://www.web3d.org/documents/specifications/19775-1/V3.3/Part01/components/layout.html#Layout" target="blank">X3D Abstract Specification: Layout</a>

 * @see <a href="http://www.web3d.org/x3d/tooltips/X3dTooltips.html#Layout" target="_blank">X3D Tooltips: Layout</a>
 * @see <a href="http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>
 */
public interface Layout extends X3DLayoutNode
{
	// ==== Accessor methods: strongly typed get/set methods for compile-time strictness

	/**
	 * Provide array of String enumeration results ['"CENTER"'|'"LEFT" "BOTTOM"'|'"LEFT" "CENTER"'|'"LEFT" "TOP"'|'"CENTER" "BOTTOM"'|'"CENTER" "CENTER"'|'"CENTER" "TOP"'|'"RIGHT" "BOTTOM"'|'"RIGHT" "CENTER"'|'"RIGHT" "TOP"'] from inputOutput MFString field named <i>align</i>.
	 * <br><br>
	 * <i>Tooltip:</i> The align field values align the sized rectangle to an edge or center of the parent rectangle. Two quoted string values are provided. The first value is for horizontal direction (LEFT | CENTER | RIGHT) and the second value is for vertical direction (BOTTOM | CENTER | TOP). Examples: "CENTER" "CENTER" (default value), "LEFT" "TOP" or "RIGHT" "BOTTOM".
 * <ul>
 *  <li> <i>Warning:</i> two values (or possibly one value) only. </li> 
 *  <li> <i>Warning:</i> if the align field has only one value, that value shall be "CENTER" and apply both horizontally and vertically. </li> 
 *  <li> <i>Hint:</i>  MFString arrays can have multiple values, so "separate each individual string" "by using quote marks". </li> 
 * </ul>
	 * @return value of align field
	 */
	public String[] getAlign();

	/**
	 * Assign String enumeration array (""CENTER""|""LEFT" "BOTTOM""|""LEFT" "CENTER""|""LEFT" "TOP""|""CENTER" "BOTTOM""|""CENTER" "CENTER""|""CENTER" "TOP""|""RIGHT" "BOTTOM""|""RIGHT" "CENTER""|""RIGHT" "TOP"") ['"CENTER"'|'"LEFT" "BOTTOM"'|'"LEFT" "CENTER"'|'"LEFT" "TOP"'|'"CENTER" "BOTTOM"'|'"CENTER" "CENTER"'|'"CENTER" "TOP"'|'"RIGHT" "BOTTOM"'|'"RIGHT" "CENTER"'|'"RIGHT" "TOP"'] to inputOutput MFString field named <i>align</i>.
	 * <br><br>
	 * <i>Tooltip:</i> The align field values align the sized rectangle to an edge or center of the parent rectangle. Two quoted string values are provided. The first value is for horizontal direction (LEFT | CENTER | RIGHT) and the second value is for vertical direction (BOTTOM | CENTER | TOP). Examples: "CENTER" "CENTER" (default value), "LEFT" "TOP" or "RIGHT" "BOTTOM". Warning: two values (or possibly one value) only. Warning: if the align field has only one value, that value shall be "CENTER" and apply both horizontally and vertically. Hint: MFString arrays can have multiple values, so "separate each individual string" "by using quote marks".
	 * @param newValue is new value for the align field.
	 * @return {@link Layout} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public Layout setAlign(String[] newValue);

	/**
	 * Provide X3DMetadataObject instance (using a properly typed node) from inputOutput SFNode field <i>metadata</i>.
	 * @see <a href="http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html#Metadata" target="_blank">X3D Scene Authoring Hints: Metadata Nodes</a>
	 * @return value of metadata field
	 */
	@Override
	public X3DMetadataObject getMetadata(); // acceptable node types: X3DMetadataObject

	/**
	 * Assign X3DMetadataObject instance (using a properly typed node) to inputOutput SFNode field <i>metadata</i>.
	 * @see <a href="http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html#Metadata" target="_blank">X3D Scene Authoring Hints: Metadata Nodes</a>
	 * @param newValue is new value for the metadata field.
	 * @return {@link Layout} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public Layout setMetadata(X3DMetadataObject newValue); // acceptable node types: X3DMetadataObject

	/**
	 * Provide array of float results from inputOutput MFFloat field named <i>offset</i>.
	 * <br><br>
	 * <i>Tooltip:</i> (-infinity,+infinity) The values of the offset field are used to translate the location of this rectangle after the initial alignment. The offsetUnits field specifies how to interpret the offset field.
 * <ul>
 *  <li> <i> Warning:</i>  if only one value is provided, it applies equally to horizontal and vertical directions (width and height). More than two values are not allowed. </li> 
 * </ul>
	 * @return value of offset field
	 */
	public float[] getOffset();

	/**
	 * Assign float array to inputOutput MFFloat field named <i>offset</i>.
	 * <br><br>
	 * <i>Tooltip:</i> (-infinity,+infinity) The values of the offset field are used to translate the location of this rectangle after the initial alignment. The offsetUnits field specifies how to interpret the offset field. Warning: if only one value is provided, it applies equally to horizontal and vertical directions (width and height). More than two values are not allowed.
	 * @param newValue is new value for the offset field.
	 * @return {@link Layout} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public Layout setOffset(float[] newValue);

	/**
	 * Provide array of String enumeration results ['"WORLD"'|'"WORLD" "WORLD"'|'"WORLD" "PIXEL"'|'"FRACTION"'|'"FRACTION" "WORLD"'|'"FRACTION" "FRACTION"'|'"FRACTION" "PIXEL"'|'"PIXEL"'|'"PIXEL" "WORLD"'|'"PIXEL" "FRACTION"'|'"PIXEL" "PIXEL"'] from inputOutput MFString field named <i>offsetUnits</i>.
	 * <br><br>
	 * <i>Tooltip:</i> The offsetUnits field values are used to interprete the offset values. Two quoted string values are provided. The first value is for horizontal offset, and the second value is for vertical offset. Examples: "WORLD" "WORLD" (default value), "FRACTION" "FRACTION" or "PIXEL" "PIXEL".
 * <ul>
 *  <li> <i>Hint:</i> If the value of the offsetUnits field is FRACTION, the size of the corresponding dimension is interpreted as a fraction of the corresponding parent’s dimension. </li> 
 *  <li> <i>Warning:</i> if only one value is provided, it applies equally to horizontal and vertical directions (width and height). More than two values are not allowed. </li> 
 *  <li> <i>Hint:</i>  MFString arrays can have multiple values, so "separate each individual string" "by using quote marks". </li> 
 * </ul>
	 * @return value of offsetUnits field
	 */
	public String[] getOffsetUnits();

	/**
	 * Assign String enumeration array (""WORLD""|""WORLD" "WORLD""|""WORLD" "PIXEL""|""FRACTION""|""FRACTION" "WORLD""|""FRACTION" "FRACTION""|""FRACTION" "PIXEL""|""PIXEL""|""PIXEL" "WORLD""|""PIXEL" "FRACTION""|""PIXEL" "PIXEL"") ['"WORLD"'|'"WORLD" "WORLD"'|'"WORLD" "PIXEL"'|'"FRACTION"'|'"FRACTION" "WORLD"'|'"FRACTION" "FRACTION"'|'"FRACTION" "PIXEL"'|'"PIXEL"'|'"PIXEL" "WORLD"'|'"PIXEL" "FRACTION"'|'"PIXEL" "PIXEL"'] to inputOutput MFString field named <i>offsetUnits</i>.
	 * <br><br>
	 * <i>Tooltip:</i> The offsetUnits field values are used to interprete the offset values. Two quoted string values are provided. The first value is for horizontal offset, and the second value is for vertical offset. Examples: "WORLD" "WORLD" (default value), "FRACTION" "FRACTION" or "PIXEL" "PIXEL". Hint: If the value of the offsetUnits field is FRACTION, the size of the corresponding dimension is interpreted as a fraction of the corresponding parent’s dimension. Warning: if only one value is provided, it applies equally to horizontal and vertical directions (width and height). More than two values are not allowed. Hint: MFString arrays can have multiple values, so "separate each individual string" "by using quote marks".
	 * @param newValue is new value for the offsetUnits field.
	 * @return {@link Layout} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public Layout setOffsetUnits(String[] newValue);

	/**
	 * Provide array of String enumeration results ['"NONE"'|'"NONE" "NONE"'|'"NONE" "FRACTION"'|'"NONE" "STRETCH"'|'"NONE" "PIXEL"'|'"FRACTION"'|'"FRACTION" "NONE"'|'"FRACTION" "FRACTION"'|'"FRACTION" "STRETCH"'|'"FRACTION" "PIXEL"'|'"STRETCH"'|'"STRETCH" "NONE"'|'"STRETCH" "FRACTION"'|'"STRETCH" "STRETCH"'|'"STRETCH" "PIXEL"'|'"PIXEL"'|'"PIXEL" "NONE"'|'"PIXEL" "FRACTION"'|'"PIXEL" "STRETCH"'|'"PIXEL" "PIXEL"'] from inputOutput MFString field named <i>scaleMode</i>.
	 * <br><br>
	 * <i>Tooltip:</i> The scaleMode field specifies how the scale of the parent is modified. Two quoted string values are provided. The first value is for horizontal scale and the second value is for vertical scale. Examples: "NONE" "NONE" (default value), "FRACTION" "FRACTION", "STRETCH" "STRETCH" or "PIXEL" "PIXEL".
 * <ul>
 *  <li> <i>Hint:</i> A scaleMode field value of NONE specifies that the corresponding scale value is not modified. Instead, the scale is inherited from its parent. Since a LayoutLayer node does not have a parent, the value of NONE reverts to FRACTION. </li> 
 *  <li> <i>Hint:</i> A scaleMode value of FRACTION specifies a scale in the corresponding direction so that one unit is equal to the dimension (width or height) of this rectangle. </li> 
 *  <li> <i>Hint:</i> a scaleMode value of STRETCH specifies a scale in the corresponding direction such that the resulting scale in the horizontal direction is equal to the scale in the vertical direction, thus producing a uniform scale. </li> 
 *  <li> <i>Hint:</i> a value of PIXEL specifies a scale in the corresponding direction such that one unit is equal to one pixel. </li> 
 *  <li> <i>Warning:</i> if only one value is provided, it applies equally to horizontal and vertical directions (width and height). More than two values are not allowed. </li> 
 *  <li> <i>Hint:</i>  MFString arrays can have multiple values, so "separate each individual string" "by using quote marks". </li> 
 * </ul>
	 * @return value of scaleMode field
	 */
	public String[] getScaleMode();

	/**
	 * Assign String enumeration array (""NONE""|""NONE" "NONE""|""NONE" "FRACTION""|""NONE" "STRETCH""|""NONE" "PIXEL""|""FRACTION""|""FRACTION" "NONE""|""FRACTION" "FRACTION""|""FRACTION" "STRETCH""|""FRACTION" "PIXEL""|""STRETCH""|""STRETCH" "NONE""|""STRETCH" "FRACTION""|""STRETCH" "STRETCH""|""STRETCH" "PIXEL""|""PIXEL""|""PIXEL" "NONE""|""PIXEL" "FRACTION""|""PIXEL" "STRETCH""|""PIXEL" "PIXEL"") ['"NONE"'|'"NONE" "NONE"'|'"NONE" "FRACTION"'|'"NONE" "STRETCH"'|'"NONE" "PIXEL"'|'"FRACTION"'|'"FRACTION" "NONE"'|'"FRACTION" "FRACTION"'|'"FRACTION" "STRETCH"'|'"FRACTION" "PIXEL"'|'"STRETCH"'|'"STRETCH" "NONE"'|'"STRETCH" "FRACTION"'|'"STRETCH" "STRETCH"'|'"STRETCH" "PIXEL"'|'"PIXEL"'|'"PIXEL" "NONE"'|'"PIXEL" "FRACTION"'|'"PIXEL" "STRETCH"'|'"PIXEL" "PIXEL"'] to inputOutput MFString field named <i>scaleMode</i>.
	 * <br><br>
	 * <i>Tooltip:</i> The scaleMode field specifies how the scale of the parent is modified. Two quoted string values are provided. The first value is for horizontal scale and the second value is for vertical scale. Examples: "NONE" "NONE" (default value), "FRACTION" "FRACTION", "STRETCH" "STRETCH" or "PIXEL" "PIXEL". Hint: A scaleMode field value of NONE specifies that the corresponding scale value is not modified. Instead, the scale is inherited from its parent. Since a LayoutLayer node does not have a parent, the value of NONE reverts to FRACTION. Hint: A scaleMode value of FRACTION specifies a scale in the corresponding direction so that one unit is equal to the dimension (width or height) of this rectangle. Hint: a scaleMode value of STRETCH specifies a scale in the corresponding direction such that the resulting scale in the horizontal direction is equal to the scale in the vertical direction, thus producing a uniform scale. Hint: a value of PIXEL specifies a scale in the corresponding direction such that one unit is equal to one pixel. Warning: if only one value is provided, it applies equally to horizontal and vertical directions (width and height). More than two values are not allowed. Hint: MFString arrays can have multiple values, so "separate each individual string" "by using quote marks".
	 * @param newValue is new value for the scaleMode field.
	 * @return {@link Layout} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public Layout setScaleMode(String[] newValue);

	/**
	 * Provide array of float results from initializeOnly MFFloat field named <i>size</i>.
	 * <br><br>
	 * <i>Tooltip:</i> (0,+infinity) The two values in the size field define the width and height of the layout rectangle. The sizeUnits field specifies how to interpret the size values.
 * <ul>
 *  <li> <i> Warning:</i>  if only one value is provided, it applies equally to horizontal and vertical directions (width and height). More than two values are not allowed. </li> 
 * </ul>
	 * @return value of size field
	 */
	public float[] getSize();

	/**
	 * Assign float array to initializeOnly MFFloat field named <i>size</i>.
	 * <br><br>
	 * <i>Tooltip:</i> (0,+infinity) The two values in the size field define the width and height of the layout rectangle. The sizeUnits field specifies how to interpret the size values. Warning: if only one value is provided, it applies equally to horizontal and vertical directions (width and height). More than two values are not allowed.
	 * @param newValue is new value for the size field.
	 * @return {@link Layout} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public Layout setSize(float[] newValue);

	/**
	 * Provide array of String enumeration results ['"WORLD"'|'"WORLD" "WORLD"'|'"WORLD" "FRACTION"'|'"WORLD" "PIXEL"'|'"FRACTION"'|'"FRACTION" "WORLD"'|'"FRACTION" "FRACTION"'|'"FRACTION" "PIXEL"'|'"PIXEL"'|'"PIXEL" "WORLD"'|'"PIXEL" "FRACTION"'|'"PIXEL" "PIXEL"'] from inputOutput MFString field named <i>sizeUnits</i>.
	 * <br><br>
	 * <i>Tooltip:</i> The sizeUnits field values are used to interprete the offset values. Two quoted string values are provided. The first value is for horizontal size, and the second value is for vertical size. Examples: "WORLD" "WORLD" (default value), "FRACTION" "FRACTION" or "PIXEL" "PIXEL".
 * <ul>
 *  <li> <i>Hint:</i> If the value of the sizeUnits field is FRACTION, the size of the corresponding dimension is interpreted as a fraction of the corresponding parent’s dimension. </li> 
 *  <li> <i>Warning:</i> if only one value is provided, it applies equally to horizontal and vertical directions (width and height). More than two values are not allowed. </li> 
 *  <li> <i>Hint:</i>  MFString arrays can have multiple values, so "separate each individual string" "by using quote marks". </li> 
 * </ul>
	 * @return value of sizeUnits field
	 */
	public String[] getSizeUnits();

	/**
	 * Assign String enumeration array (""WORLD""|""WORLD" "WORLD""|""WORLD" "FRACTION""|""WORLD" "PIXEL""|""FRACTION""|""FRACTION" "WORLD""|""FRACTION" "FRACTION""|""FRACTION" "PIXEL""|""PIXEL""|""PIXEL" "WORLD""|""PIXEL" "FRACTION""|""PIXEL" "PIXEL"") ['"WORLD"'|'"WORLD" "WORLD"'|'"WORLD" "FRACTION"'|'"WORLD" "PIXEL"'|'"FRACTION"'|'"FRACTION" "WORLD"'|'"FRACTION" "FRACTION"'|'"FRACTION" "PIXEL"'|'"PIXEL"'|'"PIXEL" "WORLD"'|'"PIXEL" "FRACTION"'|'"PIXEL" "PIXEL"'] to inputOutput MFString field named <i>sizeUnits</i>.
	 * <br><br>
	 * <i>Tooltip:</i> The sizeUnits field values are used to interprete the offset values. Two quoted string values are provided. The first value is for horizontal size, and the second value is for vertical size. Examples: "WORLD" "WORLD" (default value), "FRACTION" "FRACTION" or "PIXEL" "PIXEL". Hint: If the value of the sizeUnits field is FRACTION, the size of the corresponding dimension is interpreted as a fraction of the corresponding parent’s dimension. Warning: if only one value is provided, it applies equally to horizontal and vertical directions (width and height). More than two values are not allowed. Hint: MFString arrays can have multiple values, so "separate each individual string" "by using quote marks".
	 * @param newValue is new value for the sizeUnits field.
	 * @return {@link Layout} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public Layout setSizeUnits(String[] newValue);


	/**
	 * Assign String value to inputOutput SFString field named <i>DEF</i>.
	 * <br><br>
	 * <i>Tooltip:</i> DEF defines a unique ID name for this node, referenceable by other nodes. Hint: descriptive DEF names improve clarity and help document a model. Hint: well-defined names can simplify design and debugging through improved author understanding. Hint: X3D Scene Authoring Hints, Naming Conventions http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html#NamingConventions
	 * <br><br>
	 *  Note that setting the DEF value clears the USE value.
	 * @param newValue is new value for the DEF field.
	 * @return {@link Layout} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public Layout setDEF(String newValue);


	/**
	 * Assign String value to inputOutput SFString field named <i>USE</i>.
	 * <br><br>
	 * <i>Tooltip:</i> USE means reuse an already DEF-ed node ID, excluding all child nodes and all other attributes (except for containerField, which can have a different value). Hint: USE references to previously defined DEF geometry (instead of duplicating nodes) can improve performance. Warning: do NOT include any child nodes, a DEF attribute, or any other attribute values (except for containerField) when defining a USE attribute. Warning: each USE value must match a corresponding DEF value that is defined earlier in the scene.
	 * <br><br>
	 * <i>Note:</i> each <code>USE</code> node is still an independent object, with the <code>USE</code> value matching the <code>DEF</code> value in the preceding object. 
	 * <br><br>
	 * <i>Warning:</i> invoking the <code>setUSE()</code> method on this node resets all other fields to their default values (except for containerField) and also releases all child nodes.<br><br>
	 * <i>Warning:</i> no other operations can be performed to modify a USE node other than setting an alternate containerField value.
	 * @param newValue is new value for the USE field.
	 * @return {@link Layout} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public Layout setUSE(String newValue);


	/**
	 * Assign String value to inputOutput SFString field named <i>class</i>.
	 * <br><br>
	 * <i>Tooltip:</i> The class attribute is a space-separated list of classes, reserved for use by CSS cascading stylesheets. Warning: currently the class attribute is only supported in XML encoding of X3D scenes. Hint: W3C Cascading Style Sheets https://www.w3.org/Style/CSS
	 * @param newValue is new value for the class field.
	 * @return {@link Layout} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public Layout setCssClass(String newValue);

}
