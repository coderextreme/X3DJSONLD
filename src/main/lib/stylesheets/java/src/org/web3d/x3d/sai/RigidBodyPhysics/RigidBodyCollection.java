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


import org.web3d.x3d.sai.Core.X3DChildNode;

import java.util.*;
import org.web3d.x3d.sai.*;  // making sure #2
import org.web3d.x3d.sai.RigidBodyPhysics.*;
import org.web3d.x3d.sai.RigidBodyPhysics.*;
import org.web3d.x3d.sai.RigidBodyPhysics.*;
import org.web3d.x3d.sai.Core.*;
import java.util.Arrays;

/**
 * Abstract node interface, defined by X3D specification to support X3D Java interoperability.
 * 
 * <br><br>
 * <i>X3D node tooltip</i>:  (X3D version 3.2 or later) RigidBodyCollection represents a system of bodies that interact within a single physics model.  * <br>
 * <br>

 * <br>
 * <i>Package hint:</i>  This interface is defined by the X3D Java Language Binding Specification for the Scene Authoring Interface (SAI).
 *
 * @author Don Brutzman and Roy Walmsley
 * @see <a href="http://www.web3d.org/documents/specifications/19777-2/V3.0/Part2/concretes.html#RigidBodyCollection" target="_blank">SAI Java Specification: TODO</a>
 * @see <a href="http://www.web3d.org/documents/specifications/19775-1/V3.3/Part01/components/rigid_physics.html#RigidBodyCollection" target="blank">X3D Abstract Specification: RigidBodyCollection</a>

 * @see <a href="http://www.web3d.org/x3d/tooltips/X3dTooltips.html#RigidBodyCollection" target="_blank">X3D Tooltips: RigidBodyCollection</a>
 * @see <a href="http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>
 */
public interface RigidBodyCollection extends X3DChildNode
{
	// ==== Accessor methods: strongly typed get/set methods for compile-time strictness

	/**
	 * Provide boolean value from inputOutput SFBool field named <i>autoDisable</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  autoDisable toggles operation of disableAngularSpeed, disableLinearSpeed, disableTime.  * <br>

	 * @return value of autoDisable field
	 */
	public boolean getAutoDisable();

	/**
	 * Assign boolean value to inputOutput SFBool field named <i>autoDisable</i>.
	 * <br><br>
	 * <i>Tooltip:</i> autoDisable toggles operation of disableAngularSpeed, disableLinearSpeed, disableTime.
	 * @param newValue is new value for the autoDisable field.
	 * @return {@link RigidBodyCollection} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public RigidBodyCollection setAutoDisable(boolean newValue);

	/**
	 * Provide array of X3DNode results (using an array consisting of properly typed nodes or X3DPrototypeInstance objects) from inputOutput MFNode field <i>bodies</i>.
	 * <br><br>
	 * <i>Warning:</i> according to X3D Unified Object Model (X3DUOM), acceptable node types are limited to RigidBody.
	 * @see org.web3d.x3d.jsail.RigidBodyPhysics.RigidBodyObject
	 * @return value of bodies field
	 */
	public X3DNode[] getBodies(); // acceptable node types: RigidBody

	/**
	 * Assign X3DNode array (using an array consisting of properly typed nodes or X3DPrototypeInstance objects) to inputOutput MFNode field <i>bodies</i>.
	 * <br><br>
	 * <i>Note:</i> according to X3D Unified Object Model (X3DUOM), acceptable node types are limited to RigidBody.
	 * @param newValue is new value for the bodies field.
	 * @return {@link RigidBodyCollection} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public RigidBodyCollection setBodies(X3DNode[] newValue); // acceptable node types: RigidBody

	/**
	 * Add array of child bodies nodes to array of existing nodes (if any).
	 * <br><br>
	 * <i>Note:</i> according to X3D Unified Object Model (X3DUOM), acceptable node types are limited to RigidBody.
	 * @param newValue is new value array to be appended the bodies field.
	 */
	public void addBodies(X3DNode[] newValue); // acceptable node types: RigidBody
	/**
	 * Set single child bodies node, replacing prior array of existing nodes (if any).
	 * @param newValue is new node for the bodies field
	 */
	public void setBodies(X3DNode newValue); // acceptable node types: RigidBody
	/**
	 * Provide CollisionCollection instance (using a properly typed node) from initializeOnly SFNode field <i>collider</i>.
	 * @return value of collider field
	 */
	public CollisionCollection getCollider(); // acceptable node types: CollisionCollection

	/**
	 * Assign CollisionCollection instance (using a properly typed node) to initializeOnly SFNode field <i>collider</i>.
	 * @param newValue is new value for the collider field.
	 * @return {@link RigidBodyCollection} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public RigidBodyCollection setCollider(CollisionCollection newValue); // acceptable node types: CollisionCollection

	/**
	 * Provide float value from inputOutput SFFloat field named <i>constantForceMix</i>.
	 * <br><br>
	 * <i>Tooltip:</i> [0,+infinity) constantForceMix modifies damping calculations by violating normal constraints while applying small, constant forces in those calculations.
 * <ul>
 *  <li> <i>Hint:</i> this allows joints and bodies to be a fraction springy, and helps to eliminate numerical instability. </li> 
 *  <li> <i>Hint:</i>  spring-driven or spongy connections can be emulated by combined use of errorCorrection and constantForceMix. </li> 
 * </ul>
	 * @return value of constantForceMix field
	 */
	public float getConstantForceMix();

	/**
	 * Assign float value to inputOutput SFFloat field named <i>constantForceMix</i>.
	 * <br><br>
	 * <i>Tooltip:</i> [0,+infinity) constantForceMix modifies damping calculations by violating normal constraints while applying small, constant forces in those calculations. Hint: this allows joints and bodies to be a fraction springy, and helps to eliminate numerical instability. Hint: spring-driven or spongy connections can be emulated by combined use of errorCorrection and constantForceMix.
	 * @param newValue is new value for the constantForceMix field.
	 * @return {@link RigidBodyCollection} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public RigidBodyCollection setConstantForceMix(float newValue);

	/**
	 * Provide float value from inputOutput SFFloat field named <i>contactSurfaceThickness</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  [0,+infinity) contactSurfaceThickness defines how far bodies may interpenetrate after a collision, allowing simulation of softer bodies that deform somewhat during collision.  * <br>

	 * @return value of contactSurfaceThickness field
	 */
	public float getContactSurfaceThickness();

	/**
	 * Assign float value to inputOutput SFFloat field named <i>contactSurfaceThickness</i>.
	 * <br><br>
	 * <i>Tooltip:</i> [0,+infinity) contactSurfaceThickness defines how far bodies may interpenetrate after a collision, allowing simulation of softer bodies that deform somewhat during collision.
	 * @param newValue is new value for the contactSurfaceThickness field.
	 * @return {@link RigidBodyCollection} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public RigidBodyCollection setContactSurfaceThickness(float newValue);

	/**
	 * Provide float value from inputOutput SFFloat field named <i>disableAngularSpeed</i>.
	 * <br><br>
	 * <i>Tooltip:</i> [0,+infinity) disableAngularSpeed defines lower-limit tolerance value when body is considered at rest and not part of rigid body calculations, reducing numeric instabilities.
 * <ul>
 *  <li> <i> Hint:</i>  only activated if autoDisable='true'. </li> 
 * </ul>
	 * @return value of disableAngularSpeed field
	 */
	public float getDisableAngularSpeed();

	/**
	 * Assign float value to inputOutput SFFloat field named <i>disableAngularSpeed</i>.
	 * <br><br>
	 * <i>Tooltip:</i> [0,+infinity) disableAngularSpeed defines lower-limit tolerance value when body is considered at rest and not part of rigid body calculations, reducing numeric instabilities. Hint: only activated if autoDisable='true'.
	 * @param newValue is new value for the disableAngularSpeed field.
	 * @return {@link RigidBodyCollection} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public RigidBodyCollection setDisableAngularSpeed(float newValue);

	/**
	 * Provide float value from inputOutput SFFloat field named <i>disableLinearSpeed</i>.
	 * <br><br>
	 * <i>Tooltip:</i> [0,+infinity) disableLinearSpeed defines lower-limit tolerance value when body is considered at rest and not part of rigid body calculation, reducing numeric instabilitiess.
 * <ul>
 *  <li> <i> Hint:</i>  only activated if autoDisable='true'. </li> 
 * </ul>
	 * @return value of disableLinearSpeed field
	 */
	public float getDisableLinearSpeed();

	/**
	 * Assign float value to inputOutput SFFloat field named <i>disableLinearSpeed</i>.
	 * <br><br>
	 * <i>Tooltip:</i> [0,+infinity) disableLinearSpeed defines lower-limit tolerance value when body is considered at rest and not part of rigid body calculation, reducing numeric instabilitiess. Hint: only activated if autoDisable='true'.
	 * @param newValue is new value for the disableLinearSpeed field.
	 * @return {@link RigidBodyCollection} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public RigidBodyCollection setDisableLinearSpeed(float newValue);

	/**
	 * Provide double value in seconds from inputOutput SFTime field named <i>disableTime</i>.
	 * <br><br>
	 * <i>Tooltip:</i> [0,+infinity) disableTime defines interval when body becomes at rest and not part of rigid body calculations, reducing numeric instabilities.
 * <ul>
 *  <li> <i> Hint:</i>  only activated if autoDisable='true'. </li> 
 * </ul>
	 * @return value of disableTime field
	 */
	public double getDisableTime();

	/**
	 * Assign double value in seconds to inputOutput SFTime field named <i>disableTime</i>.
	 * <br><br>
	 * <i>Tooltip:</i> [0,+infinity) disableTime defines interval when body becomes at rest and not part of rigid body calculations, reducing numeric instabilities. Hint: only activated if autoDisable='true'.
	 * @param newValue is new value for the disableTime field.
	 * @return {@link RigidBodyCollection} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public RigidBodyCollection setDisableTime(double newValue);

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
	 * @return {@link RigidBodyCollection} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public RigidBodyCollection setEnabled(boolean newValue);

	/**
	 * Provide float value from inputOutput SFFloat field named <i>errorCorrection</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  [0,1] errorCorrection describes how quickly intersection errors due to floating-point inaccuracies are resolved (0=no correction, 1=all corrected in single step).  * <br>

	 * @return value of errorCorrection field
	 */
	public float getErrorCorrection();

	/**
	 * Assign float value to inputOutput SFFloat field named <i>errorCorrection</i>.
	 * <br><br>
	 * <i>Tooltip:</i> [0,1] errorCorrection describes how quickly intersection errors due to floating-point inaccuracies are resolved (0=no correction, 1=all corrected in single step).
	 * @param newValue is new value for the errorCorrection field.
	 * @return {@link RigidBodyCollection} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public RigidBodyCollection setErrorCorrection(float newValue);

	/**
	 * Provide array of 3-tuple float results from inputOutput SFVec3f field named <i>gravity</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  gravity indicates direction and strength of local gravity vector for this collection of bodies (units m/sec^2).  * <br>

	 * @return value of gravity field
	 */
	public float[] getGravity();

	/**
	 * Assign 3-tuple float array to inputOutput SFVec3f field named <i>gravity</i>.
	 * <br><br>
	 * <i>Tooltip:</i> gravity indicates direction and strength of local gravity vector for this collection of bodies (units m/sec^2).
	 * @param newValue is new value for the gravity field.
	 * @return {@link RigidBodyCollection} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public RigidBodyCollection setGravity(float[] newValue);

	/**
	 * Provide int value from inputOutput SFInt32 field named <i>iterations</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  [0,+infinity) iterations controls number of iterations performed over collectioned joints and bodies during each evaluation.  * <br>

	 * @return value of iterations field
	 */
	public int getIterations();

	/**
	 * Assign int value to inputOutput SFInt32 field named <i>iterations</i>.
	 * <br><br>
	 * <i>Tooltip:</i> [0,+infinity) iterations controls number of iterations performed over collectioned joints and bodies during each evaluation.
	 * @param newValue is new value for the iterations field.
	 * @return {@link RigidBodyCollection} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public RigidBodyCollection setIterations(int newValue);

	/**
	 * Provide array of X3DNode results (using an array consisting of properly typed nodes or X3DPrototypeInstance objects) from inputOutput MFNode field <i>joints</i>.
	 * <br><br>
	 * <i>Warning:</i> according to X3D Unified Object Model (X3DUOM), acceptable node types are limited to X3DRigidJointNode.
	 * @see org.web3d.x3d.sai.RigidBodyPhysics.X3DRigidJointNode
	 * @return value of joints field
	 */
	public X3DNode[] getJoints(); // acceptable node types: X3DRigidJointNode

	/**
	 * Assign X3DNode array (using an array consisting of properly typed nodes or X3DPrototypeInstance objects) to inputOutput MFNode field <i>joints</i>.
	 * <br><br>
	 * <i>Note:</i> according to X3D Unified Object Model (X3DUOM), acceptable node types are limited to X3DRigidJointNode.
	 * @param newValue is new value for the joints field.
	 * @return {@link RigidBodyCollection} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public RigidBodyCollection setJoints(X3DNode[] newValue); // acceptable node types: X3DRigidJointNode

	/**
	 * Add array of child joints nodes to array of existing nodes (if any).
	 * <br><br>
	 * <i>Note:</i> according to X3D Unified Object Model (X3DUOM), acceptable node types are limited to X3DRigidJointNode.
	 * @param newValue is new value array to be appended the joints field.
	 */
	public void addJoints(X3DNode[] newValue); // acceptable node types: X3DRigidJointNode
	/**
	 * Set single child joints node, replacing prior array of existing nodes (if any).
	 * @param newValue is new node for the joints field
	 */
	public void setJoints(X3DNode newValue); // acceptable node types: X3DRigidJointNode
	/**
	 * Provide float value from inputOutput SFFloat field named <i>maxCorrectionSpeed</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  [0,+infinity) or -1, maxCorrectionSpeed .  * <br>

	 * @return value of maxCorrectionSpeed field
	 */
	public float getMaxCorrectionSpeed();

	/**
	 * Assign float value to inputOutput SFFloat field named <i>maxCorrectionSpeed</i>.
	 * <br><br>
	 * <i>Tooltip:</i> [0,+infinity) or -1, maxCorrectionSpeed .
	 * @param newValue is new value for the maxCorrectionSpeed field.
	 * @return {@link RigidBodyCollection} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public RigidBodyCollection setMaxCorrectionSpeed(float newValue);

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
	 * @return {@link RigidBodyCollection} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public RigidBodyCollection setMetadata(X3DMetadataObject newValue); // acceptable node types: X3DMetadataObject

	/**
	 * Provide boolean value from inputOutput SFBool field named <i>preferAccuracy</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  preferAccuracy provides hint for performance preference: higher accuracy or faster computational speed.  * <br>

	 * @return value of preferAccuracy field
	 */
	public boolean getPreferAccuracy();

	/**
	 * Assign boolean value to inputOutput SFBool field named <i>preferAccuracy</i>.
	 * <br><br>
	 * <i>Tooltip:</i> preferAccuracy provides hint for performance preference: higher accuracy or faster computational speed.
	 * @param newValue is new value for the preferAccuracy field.
	 * @return {@link RigidBodyCollection} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public RigidBodyCollection setPreferAccuracy(boolean newValue);


	/**
	 * Assign String value to inputOutput SFString field named <i>DEF</i>.
	 * <br><br>
	 * <i>Tooltip:</i> DEF defines a unique ID name for this node, referenceable by other nodes. Hint: descriptive DEF names improve clarity and help document a model. Hint: well-defined names can simplify design and debugging through improved author understanding. Hint: X3D Scene Authoring Hints, Naming Conventions http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html#NamingConventions
	 * <br><br>
	 *  Note that setting the DEF value clears the USE value.
	 * @param newValue is new value for the DEF field.
	 * @return {@link RigidBodyCollection} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public RigidBodyCollection setDEF(String newValue);


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
	 * @return {@link RigidBodyCollection} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public RigidBodyCollection setUSE(String newValue);


	/**
	 * Assign String value to inputOutput SFString field named <i>class</i>.
	 * <br><br>
	 * <i>Tooltip:</i> The class attribute is a space-separated list of classes, reserved for use by CSS cascading stylesheets. Warning: currently the class attribute is only supported in XML encoding of X3D scenes. Hint: W3C Cascading Style Sheets https://www.w3.org/Style/CSS
	 * @param newValue is new value for the class field.
	 * @return {@link RigidBodyCollection} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public RigidBodyCollection setCssClass(String newValue);

}
