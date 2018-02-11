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

package org.web3d.x3d.sai.Interpolation;


import org.web3d.x3d.sai.Core.X3DChildNode;

import java.util.*;
import org.web3d.x3d.sai.*;  // making sure #2
import org.web3d.x3d.sai.Core.*;

/**
 * Abstract node interface, defined by X3D specification to support X3D Java interoperability.
 * 
 * <br><br>
 * <i>X3D node tooltip</i>: (X3D version 3.2 or later) EaseInEaseOut enables gradual animation transitions by modifying TimeSensor fraction outputs. Output values are modified fractions that can be ROUTEd to an interpolator, a sequencer, or another SFFloat attribute.
 * <ul>
 *  <li> <i>Hint:</i> typical input connection is ROUTE someTimeSensorDEF.fraction_changed TO thisEaseInEaseOutDEF.set_fraction </li> 
 *  <li> <i>Hint:</i> typical output connection is ROUTE thisEaseInEaseOutDEF.modifiedFraction_changed TO someDestinationNodeDEF.set_fraction. </li> 
 *  <li> <i>Warning:</i>  requires X3D profile='Full' or else include &amp;lt;component name='Interpolation' level='3'/&amp;gt; </li> 
 * </ul>
 * <br>
 * <i>Package hint:</i>  This interface is defined by the X3D Java Language Binding Specification for the Scene Authoring Interface (SAI).
 *
 * @author Don Brutzman and Roy Walmsley
 * @see <a href="http://www.web3d.org/documents/specifications/19777-2/V3.0/Part2/concretes.html#EaseInEaseOut" target="_blank">SAI Java Specification: TODO</a>
 * @see <a href="http://www.web3d.org/documents/specifications/19775-1/V3.3/Part01/components/interp.html#EaseInEaseOut" target="blank">X3D Abstract Specification: EaseInEaseOut</a>

 * @see <a href="http://www.web3d.org/x3d/tooltips/X3dTooltips.html#EaseInEaseOut" target="_blank">X3D Tooltips: EaseInEaseOut</a>
 * @see <a href="http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>
 */
public interface EaseInEaseOut extends X3DChildNode
{
	// ==== Accessor methods: strongly typed get/set methods for compile-time strictness

	/**
	 * Provide array of 2-tuple float results from inputOutput MFVec2f field named <i>easeInEaseOut</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Array of paired values for easeOut fraction and easeIn fraction within each key interval.
 * <ul>
 *  <li> <i> Hint:</i>  number of easeInEaseOut values must be one less than the number of keys. </li> 
 * </ul>
	 * @return value of easeInEaseOut field
	 */
	public float[] getEaseInEaseOut();

	/**
	 * Assign 2-tuple float array to inputOutput MFVec2f field named <i>easeInEaseOut</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Array of paired values for easeOut fraction and easeIn fraction within each key interval. Hint: number of easeInEaseOut values must be one less than the number of keys.
	 * @param newValue is new value for the easeInEaseOut field.
	 * @return {@link EaseInEaseOut} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public EaseInEaseOut setEaseInEaseOut(float[] newValue);

	/**
	 * Provide array of float results from inputOutput MFFloat field named <i>key</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Definition values for linear-interpolation function input intervals, listed in non-decreasing order and corresponding to easeInEaseOut array.
 * <ul>
 *  <li> <i>Hint:</i> number of keys must be one more than the number of easeInEaseOut values! </li> 
 *  <li> <i>Warning:</i> values in key array shall be monotonically non-decreasing, meaning that each value is greater than or equal to the preceding value. </li> 
 *  <li> <i>Hint:</i>  typical interval for values in key array is [0,1] but larger intervals can be defined, up to (-infinity,+infinity). </li> 
 * </ul>
	 * @return value of key field
	 */
	public float[] getKey();

	/**
	 * Assign float array to inputOutput MFFloat field named <i>key</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Definition values for linear-interpolation function input intervals, listed in non-decreasing order and corresponding to easeInEaseOut array. Hint: number of keys must be one more than the number of easeInEaseOut values! Warning: values in key array shall be monotonically non-decreasing, meaning that each value is greater than or equal to the preceding value. Hint: typical interval for values in key array is [0,1] but larger intervals can be defined, up to (-infinity,+infinity).
	 * @param newValue is new value for the key field.
	 * @return {@link EaseInEaseOut} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public EaseInEaseOut setKey(float[] newValue);

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
	 * @return {@link EaseInEaseOut} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public EaseInEaseOut setMetadata(X3DMetadataObject newValue); // acceptable node types: X3DMetadataObject

	/**
	 * Provide float value from outputOnly SFFloat field named <i>modifiedFraction_changed</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  Interpolated output value determined by current key time, corresponding easeInEaseOut smoothing intervals, and corresponding key pair.  * <br>

	 * @return value of modifiedFraction_changed field
	 */
	public float getModifiedFraction();

	/**
	 * Assign String value to inputOutput SFString field named <i>DEF</i>.
	 * <br><br>
	 * <i>Tooltip:</i> DEF defines a unique ID name for this node, referenceable by other nodes. Hint: descriptive DEF names improve clarity and help document a model. Hint: well-defined names can simplify design and debugging through improved author understanding. Hint: X3D Scene Authoring Hints, Naming Conventions http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html#NamingConventions
	 * <br><br>
	 *  Note that setting the DEF value clears the USE value.
	 * @param newValue is new value for the DEF field.
	 * @return {@link EaseInEaseOut} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public EaseInEaseOut setDEF(String newValue);


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
	 * @return {@link EaseInEaseOut} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public EaseInEaseOut setUSE(String newValue);


	/**
	 * Assign String value to inputOutput SFString field named <i>class</i>.
	 * <br><br>
	 * <i>Tooltip:</i> The class attribute is a space-separated list of classes, reserved for use by CSS cascading stylesheets. Warning: currently the class attribute is only supported in XML encoding of X3D scenes. Hint: W3C Cascading Style Sheets https://www.w3.org/Style/CSS
	 * @param newValue is new value for the class field.
	 * @return {@link EaseInEaseOut} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public EaseInEaseOut setCssClass(String newValue);

}
