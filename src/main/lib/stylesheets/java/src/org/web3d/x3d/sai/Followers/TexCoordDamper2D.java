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

package org.web3d.x3d.sai.Followers;

import java.util.*;
import org.web3d.x3d.sai.*;  // making sure #2
import org.web3d.x3d.sai.Core.*;

/**
 * Abstract node interface, defined by X3D specification to support X3D Java interoperability.
 * 
 * <br><br>
 * <i>X3D node tooltip</i>: (X3D version 3.2 or later) TexCoordDamper2D generates a series of 2D floating-point arrays that progressively change from initial value to destination value.
 * <ul>
 *  <li> <i> Hint:</i>  value_changed output events can be ROUTEd to a &amp;lt;TextureTransform&amp;gt; node's translation field, for example. </li> 
 * </ul>
 * <br>
 * <i>Package hint:</i>  This interface is defined by the X3D Java Language Binding Specification for the Scene Authoring Interface (SAI).
 *
 * @author Don Brutzman and Roy Walmsley
 * @see <a href="http://www.web3d.org/documents/specifications/19777-2/V3.0/Part2/concretes.html#TexCoordDamper2D" target="_blank">SAI Java Specification: TODO</a>
 * @see <a href="http://www.web3d.org/documents/specifications/19775-1/V3.3/Part01/components/followers.html#TexCoordDamper2D" target="blank">X3D Abstract Specification: TexCoordDamper2D</a>

 * @see <a href="http://www.web3d.org/x3d/tooltips/X3dTooltips.html#TexCoordDamper2D" target="_blank">X3D Tooltips: TexCoordDamper2D</a>
 * @see <a href="http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>
 */
public interface TexCoordDamper2D extends X3DDamperNode
{
	// ==== Accessor methods: strongly typed get/set methods for compile-time strictness

	/**
	 * Provide array of 2-tuple float results from initializeOnly MFVec2f field named <i>initialDestination</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  Initial destination value for this node.  * <br>

	 * @return value of initialDestination field
	 */
	public float[] getInitialDestination();

	/**
	 * Assign 2-tuple float array to initializeOnly MFVec2f field named <i>initialDestination</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Initial destination value for this node.
	 * @param newValue is new value for the initialDestination field.
	 * @return {@link TexCoordDamper2D} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public TexCoordDamper2D setInitialDestination(float[] newValue);

	/**
	 * Provide array of 2-tuple float results from initializeOnly MFVec2f field named <i>initialValue</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  Initial starting value for this node.  * <br>

	 * @return value of initialValue field
	 */
	public float[] getInitialValue();

	/**
	 * Assign 2-tuple float array to initializeOnly MFVec2f field named <i>initialValue</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Initial starting value for this node.
	 * @param newValue is new value for the initialValue field.
	 * @return {@link TexCoordDamper2D} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public TexCoordDamper2D setInitialValue(float[] newValue);

	/**
	 * Provide boolean value from outputOnly SFBool field named <i>isActive</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  isActive true/false events are sent when follower-node computation starts/stops.  * <br>

	 * @return value of isActive field
	 */
	@Override
	public boolean getIsActive();
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
	 * @return {@link TexCoordDamper2D} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public TexCoordDamper2D setMetadata(X3DMetadataObject newValue); // acceptable node types: X3DMetadataObject

	/**
	 * Provide int value within allowed range of [0,5] from initializeOnly SFInt32 field named <i>order</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  [0,5] order defines the number of internal filters (larger means smoother response, longer delay).  * <br>

	 * @return value of order field
	 */
	@Override
	public int getOrder();

	/**
	 * Assign int value within allowed range of [0,5] to initializeOnly SFInt32 field named <i>order</i>.
	 * <br><br>
	 * <i>Tooltip:</i> [0,5] order defines the number of internal filters (larger means smoother response, longer delay).
	 * @param newValue is new value for the order field.
	 * @return {@link TexCoordDamper2D} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public TexCoordDamper2D setOrder(int newValue);

	/**
	 * Provide double value in seconds within allowed range of [0,infinity) from inputOutput SFTime field named <i>tau</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  [0,+infinity) tau is the exponential-decay time constant for filter response in seconds.  * <br>

	 * @return value of tau field
	 */
	@Override
	public double getTau();

	/**
	 * Assign double value in seconds within allowed range of [0,infinity) to inputOutput SFTime field named <i>tau</i>.
	 * <br><br>
	 * <i>Tooltip:</i> [0,+infinity) tau is the exponential-decay time constant for filter response in seconds.
	 * @param newValue is new value for the tau field.
	 * @return {@link TexCoordDamper2D} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public TexCoordDamper2D setTau(double newValue);

	/**
	 * Provide float value from inputOutput SFFloat field named <i>tolerance</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  -1 or [0,+infinity) Absolute value for satisfactory completion proximity (-1 lets browser choose).  * <br>

	 * @return value of tolerance field
	 */
	@Override
	public float getTolerance();

	/**
	 * Assign float value to inputOutput SFFloat field named <i>tolerance</i>.
	 * <br><br>
	 * <i>Tooltip:</i> -1 or [0,+infinity) Absolute value for satisfactory completion proximity (-1 lets browser choose).
	 * @param newValue is new value for the tolerance field.
	 * @return {@link TexCoordDamper2D} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public TexCoordDamper2D setTolerance(float newValue);

	/**
	 * Provide array of 2-tuple float results from outputOnly MFVec2f field named <i>value_changed</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  Computed output value that approaches within tolerance of destination value, as determined by elapsed time, order and tau.  * <br>

	 * @return value of value_changed field
	 */
	public float[] getValue();

	/**
	 * Assign String value to inputOutput SFString field named <i>DEF</i>.
	 * <br><br>
	 * <i>Tooltip:</i> DEF defines a unique ID name for this node, referenceable by other nodes. Hint: descriptive DEF names improve clarity and help document a model. Hint: well-defined names can simplify design and debugging through improved author understanding. Hint: X3D Scene Authoring Hints, Naming Conventions http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html#NamingConventions
	 * <br><br>
	 *  Note that setting the DEF value clears the USE value.
	 * @param newValue is new value for the DEF field.
	 * @return {@link TexCoordDamper2D} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public TexCoordDamper2D setDEF(String newValue);


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
	 * @return {@link TexCoordDamper2D} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public TexCoordDamper2D setUSE(String newValue);


	/**
	 * Assign String value to inputOutput SFString field named <i>class</i>.
	 * <br><br>
	 * <i>Tooltip:</i> The class attribute is a space-separated list of classes, reserved for use by CSS cascading stylesheets. Warning: currently the class attribute is only supported in XML encoding of X3D scenes. Hint: W3C Cascading Style Sheets https://www.w3.org/Style/CSS
	 * @param newValue is new value for the class field.
	 * @return {@link TexCoordDamper2D} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public TexCoordDamper2D setCssClass(String newValue);

}
