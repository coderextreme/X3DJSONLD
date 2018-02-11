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

package org.web3d.x3d.sai.RigidBodyPhysics;


import org.web3d.x3d.sai.Core.X3DNode;

import java.util.*;
import org.web3d.x3d.sai.*;  // making sure #2
import org.web3d.x3d.sai.Core.*;
import java.util.Arrays;

/**
 * Abstract node interface, defined by X3D specification to support X3D Java interoperability.
 * 
 * <br><br>
 * <i>X3D node tooltip</i>: (X3D version 3.2 or later) CollisionCollection holds a collection of objects that can be managed as a single entity for resolution of inter-object collisions.
 * <ul>
 *  <li> <i> Hint:</i>  contains an array of CollisionSpace, CollidableShape or CollidableOffset nodes (containerField='collidables'). </li> 
 * </ul>
 * <br>
 * <i>Package hint:</i>  This interface is defined by the X3D Java Language Binding Specification for the Scene Authoring Interface (SAI).
 *
 * @author Don Brutzman and Roy Walmsley
 * @see <a href="http://www.web3d.org/documents/specifications/19777-2/V3.0/Part2/concretes.html#CollisionCollection" target="_blank">SAI Java Specification: TODO</a>
 * @see <a href="http://www.web3d.org/documents/specifications/19775-1/V3.3/Part01/components/rigid_physics.html#CollisionCollection" target="blank">X3D Abstract Specification: CollisionCollection</a>

 * @see <a href="http://www.web3d.org/x3d/tooltips/X3dTooltips.html#CollisionCollection" target="_blank">X3D Tooltips: CollisionCollection</a>
 * @see <a href="http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>
 */
public interface CollisionCollection extends X3DNode
{
	// ==== Accessor methods: strongly typed get/set methods for compile-time strictness

	/**
	 * Provide array of String enumeration results ['"BOUNCE"'|'"USER_FRICTION"'|'"FRICTION_COEFFICIENT-2"'|'"ERROR_REDUCTION"'|'"CONSTANT_FORCE"'|'"SPEED-1"'|'"SPEED-2"'|'"SLIP-1"'|'"SLIP-2"'|'"etc."'] from inputOutput MFString field named <i>appliedParameters</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Default global parameters for collision outputs of rigid body physics system. Contact node can override parent CollisionCollection node. Selectable values for array: "BOUNCE" "USER_FRICTION" "FRICTION_COEFFICIENT-2" "ERROR_REDUCTION" "CONSTANT_FORCE" "SPEED-1" "SPEED-2" "SLIP-1" "SLIP-2".
 * <ul>
 *  <li> <i> Hint:</i>  BOUNCE: bounce value is used; USER_FRICTION: apply user-supplied value; FRICTION_COEFFICIENT-2: apply frictionCoefficients values; ERROR_REDUCTION: apply softnessErrorCorrection value; CONSTANT_FORCE: apply softnessConstantForceMix value; SPEED-1: apply first component of surfaceSpeed array; SPEED-2: apply second component of surfaceSpeed array; SLIP-1: apply first component of slipFactors array; SLIP-2: apply second component of slipFactors array. </li> 
 * </ul>
	 * @return value of appliedParameters field
	 */
	public String[] getAppliedParameters();

	/**
	 * Assign String enumeration array (""BOUNCE""|""USER_FRICTION""|""FRICTION_COEFFICIENT-2""|""ERROR_REDUCTION""|""CONSTANT_FORCE""|""SPEED-1""|""SPEED-2""|""SLIP-1""|""SLIP-2"") ['"BOUNCE"'|'"USER_FRICTION"'|'"FRICTION_COEFFICIENT-2"'|'"ERROR_REDUCTION"'|'"CONSTANT_FORCE"'|'"SPEED-1"'|'"SPEED-2"'|'"SLIP-1"'|'"SLIP-2"'|'"etc."'] to inputOutput MFString field named <i>appliedParameters</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Default global parameters for collision outputs of rigid body physics system. Contact node can override parent CollisionCollection node. Selectable values for array: "BOUNCE" "USER_FRICTION" "FRICTION_COEFFICIENT-2" "ERROR_REDUCTION" "CONSTANT_FORCE" "SPEED-1" "SPEED-2" "SLIP-1" "SLIP-2". Hint: BOUNCE: bounce value is used; USER_FRICTION: apply user-supplied value; FRICTION_COEFFICIENT-2: apply frictionCoefficients values; ERROR_REDUCTION: apply softnessErrorCorrection value; CONSTANT_FORCE: apply softnessConstantForceMix value; SPEED-1: apply first component of surfaceSpeed array; SPEED-2: apply second component of surfaceSpeed array; SLIP-1: apply first component of slipFactors array; SLIP-2: apply second component of slipFactors array.
	 * @param newValue is new value for the appliedParameters field.
	 * @return {@link CollisionCollection} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public CollisionCollection setAppliedParameters(String[] newValue);

	/**
	 * Provide float value within allowed range of [0,1] from inputOutput SFFloat field named <i>bounce</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  [0,1] bounce indicates bounciness (0 = no bounce at all, 1 = maximum bounce).  * <br>

	 * @return value of bounce field
	 */
	public float getBounce();

	/**
	 * Assign float value within allowed range of [0,1] to inputOutput SFFloat field named <i>bounce</i>.
	 * <br><br>
	 * <i>Tooltip:</i> [0,1] bounce indicates bounciness (0 = no bounce at all, 1 = maximum bounce).
	 * @param newValue is new value for the bounce field.
	 * @return {@link CollisionCollection} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public CollisionCollection setBounce(float newValue);

	/**
	 * Provide array of X3DNode results (using an array consisting of properly typed nodes or X3DPrototypeInstance objects) with acceptable node types limited to X3DNBodyCollisionSpaceNode|X3DNBodyCollidableNode, from inputOutput MFNode field <i>collidables</i>.
	 * <br><br>
	 * <i>Warning:</i> according to X3D Unified Object Model (X3DUOM), acceptable node types are limited to X3DNBodyCollisionSpaceNode|X3DNBodyCollidableNode.
	 * @see org.web3d.x3d.sai.RigidBodyPhysics.X3DNBodyCollisionSpaceNode
	 * @see org.web3d.x3d.sai.RigidBodyPhysics.X3DNBodyCollidableNode
	 * @return value of collidables field
	 */
	public X3DNode[] getCollidables(); // acceptable node types: X3DNBodyCollisionSpaceNode|X3DNBodyCollidableNode

	/**
	 * Assign X3DNode array (using an array consisting of properly typed nodes or X3DPrototypeInstance objects) with acceptable node types limited to X3DNBodyCollisionSpaceNode|X3DNBodyCollidableNode, to inputOutput MFNode field <i>collidables</i>.
	 * <br><br>
	 * <i>Note:</i> according to X3D Unified Object Model (X3DUOM), acceptable node types are limited to X3DNBodyCollisionSpaceNode|X3DNBodyCollidableNode.
	 * @param newValue is new value for the collidables field.
	 * @return {@link CollisionCollection} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public CollisionCollection setCollidables(X3DNode[] newValue); // acceptable node types: X3DNBodyCollisionSpaceNode|X3DNBodyCollidableNode

	/**
	 * Add array of child collidables nodes to array of existing nodes (if any).
	 * <br><br>
	 * <i>Note:</i> according to X3D Unified Object Model (X3DUOM), acceptable node types are limited to X3DNBodyCollisionSpaceNode|X3DNBodyCollidableNode.
	 * @param newValue is new value array to be appended the collidables field.
	 */
	public void addCollidables(X3DNode[] newValue); // acceptable node types: X3DNBodyCollisionSpaceNode|X3DNBodyCollidableNode
	/**
	 * Set single child collidables node, replacing prior array of existing nodes (if any).
	 * @param newValue is new node for the collidables field
	 */
	public void setCollidables(X3DNode newValue); // acceptable node types: X3DNBodyCollisionSpaceNode|X3DNBodyCollidableNode
	/**
	 * Provide boolean value from inputOutput SFBool field named <i>enabled</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  Enables/disables node operation.  * <br>

	 * @return value of enabled field
	 */
	public boolean getEnabled();

	/**
	 * Assign boolean value to inputOutput SFBool field named <i>enabled</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Enables/disables node operation.
	 * @param newValue is new value for the enabled field.
	 * @return {@link CollisionCollection} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public CollisionCollection setEnabled(boolean newValue);

	/**
	 * Provide array of 2-tuple float results within allowed range of [0,infinity) from inputOutput SFVec2f field named <i>frictionCoefficients</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  frictionCoefficients used for computing surface drag.  * <br>

	 * @return value of frictionCoefficients field
	 */
	public float[] getFrictionCoefficients();

	/**
	 * Assign 2-tuple float array within allowed range of [0,infinity) to inputOutput SFVec2f field named <i>frictionCoefficients</i>.
	 * <br><br>
	 * <i>Tooltip:</i> frictionCoefficients used for computing surface drag.
	 * @param newValue is new value for the frictionCoefficients field.
	 * @return {@link CollisionCollection} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public CollisionCollection setFrictionCoefficients(float[] newValue);

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
	 * @return {@link CollisionCollection} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public CollisionCollection setMetadata(X3DMetadataObject newValue); // acceptable node types: X3DMetadataObject

	/**
	 * Provide float value within allowed range of [0,infinity) from inputOutput SFFloat field named <i>minBounceSpeed</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  [0,+infinity) minBounceSpeed m/s needed to bounce.  * <br>

	 * @return value of minBounceSpeed field
	 */
	public float getMinBounceSpeed();

	/**
	 * Assign float value within allowed range of [0,infinity) to inputOutput SFFloat field named <i>minBounceSpeed</i>.
	 * <br><br>
	 * <i>Tooltip:</i> [0,+infinity) minBounceSpeed m/s needed to bounce.
	 * @param newValue is new value for the minBounceSpeed field.
	 * @return {@link CollisionCollection} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public CollisionCollection setMinBounceSpeed(float newValue);

	/**
	 * Provide array of 2-tuple float results from inputOutput SFVec2f field named <i>slipFactors</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  slipFactors used for computing surface drag.  * <br>

	 * @return value of slipFactors field
	 */
	public float[] getSlipFactors();

	/**
	 * Assign 2-tuple float array to inputOutput SFVec2f field named <i>slipFactors</i>.
	 * <br><br>
	 * <i>Tooltip:</i> slipFactors used for computing surface drag.
	 * @param newValue is new value for the slipFactors field.
	 * @return {@link CollisionCollection} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public CollisionCollection setSlipFactors(float[] newValue);

	/**
	 * Provide float value within allowed range of [0,1] from inputOutput SFFloat field named <i>softnessConstantForceMix</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  [0,1] softnessConstantForceMix value applies a constant force value to make colliding surfaces appear to be somewhat soft.  * <br>

	 * @return value of softnessConstantForceMix field
	 */
	public float getSoftnessConstantForceMix();

	/**
	 * Assign float value within allowed range of [0,1] to inputOutput SFFloat field named <i>softnessConstantForceMix</i>.
	 * <br><br>
	 * <i>Tooltip:</i> [0,1] softnessConstantForceMix value applies a constant force value to make colliding surfaces appear to be somewhat soft.
	 * @param newValue is new value for the softnessConstantForceMix field.
	 * @return {@link CollisionCollection} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public CollisionCollection setSoftnessConstantForceMix(float newValue);

	/**
	 * Provide float value within allowed range of [0,1] from inputOutput SFFloat field named <i>softnessErrorCorrection</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  [0,1] softnessErrorCorrection indicates fraction of collision error fixed in a set of evaluations (0 = no error correction, 1 = all errors corrected in single step).  * <br>

	 * @return value of softnessErrorCorrection field
	 */
	public float getSoftnessErrorCorrection();

	/**
	 * Assign float value within allowed range of [0,1] to inputOutput SFFloat field named <i>softnessErrorCorrection</i>.
	 * <br><br>
	 * <i>Tooltip:</i> [0,1] softnessErrorCorrection indicates fraction of collision error fixed in a set of evaluations (0 = no error correction, 1 = all errors corrected in single step).
	 * @param newValue is new value for the softnessErrorCorrection field.
	 * @return {@link CollisionCollection} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public CollisionCollection setSoftnessErrorCorrection(float newValue);

	/**
	 * Provide array of 2-tuple float results from inputOutput SFVec2f field named <i>surfaceSpeed</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  surfaceSpeed defines speed vectors for computing surface drag, if contact surfaces move independently of bodies.  * <br>

	 * @return value of surfaceSpeed field
	 */
	public float[] getSurfaceSpeed();

	/**
	 * Assign 2-tuple float array to inputOutput SFVec2f field named <i>surfaceSpeed</i>.
	 * <br><br>
	 * <i>Tooltip:</i> surfaceSpeed defines speed vectors for computing surface drag, if contact surfaces move independently of bodies.
	 * @param newValue is new value for the surfaceSpeed field.
	 * @return {@link CollisionCollection} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public CollisionCollection setSurfaceSpeed(float[] newValue);


	/**
	 * Assign String value to inputOutput SFString field named <i>DEF</i>.
	 * <br><br>
	 * <i>Tooltip:</i> DEF defines a unique ID name for this node, referenceable by other nodes. Hint: descriptive DEF names improve clarity and help document a model. Hint: well-defined names can simplify design and debugging through improved author understanding. Hint: X3D Scene Authoring Hints, Naming Conventions http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html#NamingConventions
	 * <br><br>
	 *  Note that setting the DEF value clears the USE value.
	 * @param newValue is new value for the DEF field.
	 * @return {@link CollisionCollection} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public CollisionCollection setDEF(String newValue);


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
	 * @return {@link CollisionCollection} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public CollisionCollection setUSE(String newValue);


	/**
	 * Assign String value to inputOutput SFString field named <i>class</i>.
	 * <br><br>
	 * <i>Tooltip:</i> The class attribute is a space-separated list of classes, reserved for use by CSS cascading stylesheets. Warning: currently the class attribute is only supported in XML encoding of X3D scenes. Hint: W3C Cascading Style Sheets https://www.w3.org/Style/CSS
	 * @param newValue is new value for the class field.
	 * @return {@link CollisionCollection} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public CollisionCollection setCssClass(String newValue);

}
