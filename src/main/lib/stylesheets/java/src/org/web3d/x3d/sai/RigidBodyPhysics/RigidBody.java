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
import org.web3d.x3d.sai.RigidBodyPhysics.*;
import org.web3d.x3d.sai.Core.*;
import java.util.Arrays;

/**
 * Abstract node interface, defined by X3D specification to support X3D Java interoperability.
 * 
 * <br><br>
 * <i>X3D node tooltip</i>:  (X3D version 3.2 or later) RigidBody describes a collection of shapes with a mass distribution that is affected by the physics model.
Contains a Sphere, Box, or Cone (containerField='massDensityModel') and multiple CollidableOffset or CollidableShape nodes (containerField='geometry') for animating collidable geometry.  * <br>
 * <br>

 * <br>
 * <i>Package hint:</i>  This interface is defined by the X3D Java Language Binding Specification for the Scene Authoring Interface (SAI).
 *
 * @author Don Brutzman and Roy Walmsley
 * @see <a href="http://www.web3d.org/documents/specifications/19777-2/V3.0/Part2/concretes.html#RigidBody" target="_blank">SAI Java Specification: TODO</a>
 * @see <a href="http://www.web3d.org/documents/specifications/19775-1/V3.3/Part01/components/rigid_physics.html#RigidBody" target="blank">X3D Abstract Specification: RigidBody</a>

 * @see <a href="http://www.web3d.org/x3d/tooltips/X3dTooltips.html#RigidBody" target="_blank">X3D Tooltips: RigidBody</a>
 * @see <a href="http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>
 */
public interface RigidBody extends X3DNode
{
	// ==== Accessor methods: strongly typed get/set methods for compile-time strictness

	/**
	 * Provide float value from inputOutput SFFloat field named <i>angularDampingFactor</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  [0,1] angularDampingFactor automatically damps a portion of body motion over time.  * <br>

	 * @return value of angularDampingFactor field
	 */
	public float getAngularDampingFactor();

	/**
	 * Assign float value to inputOutput SFFloat field named <i>angularDampingFactor</i>.
	 * <br><br>
	 * <i>Tooltip:</i> [0,1] angularDampingFactor automatically damps a portion of body motion over time.
	 * @param newValue is new value for the angularDampingFactor field.
	 * @return {@link RigidBody} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public RigidBody setAngularDampingFactor(float newValue);

	/**
	 * Provide array of 3-tuple float results from inputOutput SFVec3f field named <i>angularVelocity</i>.
	 * <br><br>
	 * <i>Tooltip:</i> angularVelocity sets constant velocity value to object every frame, and reports updates by physics model.
 * <ul>
 *  <li> <i>Hint:</i> initial value only applied during first frame if forces applied. </li> 
 *  <li> <i>Warning:</i>  instantaneous velocity changes may lead to numerical instability. </li> 
 * </ul>
	 * @return value of angularVelocity field
	 */
	public float[] getAngularVelocity();

	/**
	 * Assign 3-tuple float array to inputOutput SFVec3f field named <i>angularVelocity</i>.
	 * <br><br>
	 * <i>Tooltip:</i> angularVelocity sets constant velocity value to object every frame, and reports updates by physics model. Hint: initial value only applied during first frame if forces applied. Warning: instantaneous velocity changes may lead to numerical instability.
	 * @param newValue is new value for the angularVelocity field.
	 * @return {@link RigidBody} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public RigidBody setAngularVelocity(float[] newValue);

	/**
	 * Provide boolean value from inputOutput SFBool field named <i>autoDamp</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  autoDamp enables/disables angularDampingFactor and linearDampingFactor.  * <br>

	 * @return value of autoDamp field
	 */
	public boolean getAutoDamp();

	/**
	 * Assign boolean value to inputOutput SFBool field named <i>autoDamp</i>.
	 * <br><br>
	 * <i>Tooltip:</i> autoDamp enables/disables angularDampingFactor and linearDampingFactor.
	 * @param newValue is new value for the autoDamp field.
	 * @return {@link RigidBody} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public RigidBody setAutoDamp(boolean newValue);

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
	 * @return {@link RigidBody} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public RigidBody setAutoDisable(boolean newValue);

	/**
	 * Provide array of 3-tuple float results from inputOutput SFVec3f field named <i>centerOfMass</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  centerOfMass defines local center of mass for physics calculations.  * <br>

	 * @return value of centerOfMass field
	 */
	public float[] getCenterOfMass();

	/**
	 * Assign 3-tuple float array to inputOutput SFVec3f field named <i>centerOfMass</i>.
	 * <br><br>
	 * <i>Tooltip:</i> centerOfMass defines local center of mass for physics calculations.
	 * @param newValue is new value for the centerOfMass field.
	 * @return {@link RigidBody} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public RigidBody setCenterOfMass(float[] newValue);

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
	 * @return {@link RigidBody} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public RigidBody setDisableAngularSpeed(float newValue);

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
	 * @return {@link RigidBody} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public RigidBody setDisableLinearSpeed(float newValue);

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
	 * @return {@link RigidBody} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public RigidBody setDisableTime(double newValue);

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
	 * @return {@link RigidBody} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public RigidBody setEnabled(boolean newValue);

	/**
	 * Provide array of 3-tuple float results unit axis, angle (in radians) from inputOutput SFVec3f field named <i>finiteRotationAxis</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  finiteRotationAxis specifies vector around which the object rotates.  * <br>

	 * @return value of finiteRotationAxis field
	 */
	public float[] getFiniteRotationAxis();

	/**
	 * Assign 3-tuple float array unit axis, angle (in radians) to inputOutput SFVec3f field named <i>finiteRotationAxis</i>.
	 * <br><br>
	 * <i>Tooltip:</i> finiteRotationAxis specifies vector around which the object rotates.
	 * @param newValue is new value for the finiteRotationAxis field.
	 * @return {@link RigidBody} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public RigidBody setFiniteRotationAxis(float[] newValue);

	/**
	 * Provide boolean value from inputOutput SFBool field named <i>fixed</i>.
	 * <br><br>
	 * <i>Tooltip:</i> fixed indicates whether body is able to move.
 * <ul>
 *  <li> <i> Hint:</i>  fixed is useful for indicating objects that do not move: walls, ground, etc. </li> 
 * </ul>
	 * @return value of fixed field
	 */
	public boolean getFixed();

	/**
	 * Assign boolean value to inputOutput SFBool field named <i>fixed</i>.
	 * <br><br>
	 * <i>Tooltip:</i> fixed indicates whether body is able to move. Hint: fixed is useful for indicating objects that do not move: walls, ground, etc.
	 * @param newValue is new value for the fixed field.
	 * @return {@link RigidBody} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public RigidBody setFixed(boolean newValue);

	/**
	 * Provide array of 3-tuple float results from inputOutput MFVec3f field named <i>forces</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  forces defines linear force values applied to the object every frame.  * <br>

	 * @return value of forces field
	 */
	public float[] getForces();

	/**
	 * Assign 3-tuple float array to inputOutput MFVec3f field named <i>forces</i>.
	 * <br><br>
	 * <i>Tooltip:</i> forces defines linear force values applied to the object every frame.
	 * @param newValue is new value for the forces field.
	 * @return {@link RigidBody} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public RigidBody setForces(float[] newValue);

	/**
	 * Provide array of X3DNode results (using an array consisting of properly typed nodes or X3DPrototypeInstance objects) from inputOutput MFNode field <i>geometry</i>.
	 * <br><br>
	 * <i>Warning:</i> according to X3D Unified Object Model (X3DUOM), acceptable node types are limited to X3DNBodyCollidableNode.
	 * @see org.web3d.x3d.sai.RigidBodyPhysics.X3DNBodyCollidableNode
	 * @return value of geometry field
	 */
	public X3DNode[] getGeometry(); // acceptable node types: X3DNBodyCollidableNode

	/**
	 * Assign X3DNode array (using an array consisting of properly typed nodes or X3DPrototypeInstance objects) to inputOutput MFNode field <i>geometry</i>.
	 * <br><br>
	 * <i>Note:</i> according to X3D Unified Object Model (X3DUOM), acceptable node types are limited to X3DNBodyCollidableNode.
	 * @param newValue is new value for the geometry field.
	 * @return {@link RigidBody} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public RigidBody setGeometry(X3DNode[] newValue); // acceptable node types: X3DNBodyCollidableNode

	/**
	 * Add array of child geometry nodes to array of existing nodes (if any).
	 * <br><br>
	 * <i>Note:</i> according to X3D Unified Object Model (X3DUOM), acceptable node types are limited to X3DNBodyCollidableNode.
	 * @param newValue is new value array to be appended the geometry field.
	 */
	public void addGeometry(X3DNode[] newValue); // acceptable node types: X3DNBodyCollidableNode
	/**
	 * Set single child geometry node, replacing prior array of existing nodes (if any).
	 * @param newValue is new node for the geometry field
	 */
	public void setGeometry(X3DNode newValue); // acceptable node types: X3DNBodyCollidableNode
	/**
	 * Provide array of float results from inputOutput SFMatrix3f field named <i>inertia</i>.
	 * <br><br>
	 * <i>Tooltip:</i> inertia matrix defines a 3x2 inertia tensor matrix.
 * <ul>
 *  <li> <i> Warning:</i>  only the first 6 values are used. </li> 
 * </ul>
	 * @return value of inertia field
	 */
	public float[] getInertia();

	/**
	 * Assign float array to inputOutput SFMatrix3f field named <i>inertia</i>.
	 * <br><br>
	 * <i>Tooltip:</i> inertia matrix defines a 3x2 inertia tensor matrix. Warning: only the first 6 values are used.
	 * @param newValue is new value for the inertia field.
	 * @return {@link RigidBody} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public RigidBody setInertia(float[] newValue);

	/**
	 * Provide float value from inputOutput SFFloat field named <i>linearDampingFactor</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  [0,1] linearDampingFactor automatically damps a portion of body motion over time.  * <br>

	 * @return value of linearDampingFactor field
	 */
	public float getLinearDampingFactor();

	/**
	 * Assign float value to inputOutput SFFloat field named <i>linearDampingFactor</i>.
	 * <br><br>
	 * <i>Tooltip:</i> [0,1] linearDampingFactor automatically damps a portion of body motion over time.
	 * @param newValue is new value for the linearDampingFactor field.
	 * @return {@link RigidBody} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public RigidBody setLinearDampingFactor(float newValue);

	/**
	 * Provide array of 3-tuple float results from inputOutput SFVec3f field named <i>linearVelocity</i>.
	 * <br><br>
	 * <i>Tooltip:</i> linearVelocity sets constant velocity value to object every frame, and reports updates by physics model.
 * <ul>
 *  <li> <i>Hint:</i> initial value only applied during first frame if forces applied. </li> 
 *  <li> <i>Warning:</i>  instantaneous velocity changes may lead to numerical instability. </li> 
 * </ul>
	 * @return value of linearVelocity field
	 */
	public float[] getLinearVelocity();

	/**
	 * Assign 3-tuple float array to inputOutput SFVec3f field named <i>linearVelocity</i>.
	 * <br><br>
	 * <i>Tooltip:</i> linearVelocity sets constant velocity value to object every frame, and reports updates by physics model. Hint: initial value only applied during first frame if forces applied. Warning: instantaneous velocity changes may lead to numerical instability.
	 * @param newValue is new value for the linearVelocity field.
	 * @return {@link RigidBody} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public RigidBody setLinearVelocity(float[] newValue);

	/**
	 * Provide float value from inputOutput SFFloat field named <i>mass</i>.
	 * <br><br>
	 * <i>Tooltip:</i> (0,1] mass of the body in kilograms.
 * <ul>
 *  <li> <i> Warning:</i>  mass must be greater than 0. </li> 
 * </ul>
	 * @return value of mass field
	 */
	public float getMass();

	/**
	 * Assign float value to inputOutput SFFloat field named <i>mass</i>.
	 * <br><br>
	 * <i>Tooltip:</i> (0,1] mass of the body in kilograms. Warning: mass must be greater than 0.
	 * @param newValue is new value for the mass field.
	 * @return {@link RigidBody} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public RigidBody setMass(float newValue);

	/**
	 * Provide X3DNode instance (using a properly typed node) with acceptable node types limited to Sphere|Box|Cone, from inputOutput SFNode field <i>massDensityModel</i>.
	 * @return value of massDensityModel field
	 */
	public X3DNode getMassDensityModel(); // acceptable node types: Sphere|Box|Cone

	/**
	 * Assign X3DNode instance (using a properly typed node) with acceptable node types limited to Sphere|Box|Cone, to inputOutput SFNode field <i>massDensityModel</i>.
	 * @param newValue is new value for the massDensityModel field.
	 * @return {@link RigidBody} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public RigidBody setMassDensityModel(X3DNode newValue); // acceptable node types: Sphere|Box|Cone

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
	 * @return {@link RigidBody} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public RigidBody setMetadata(X3DMetadataObject newValue); // acceptable node types: X3DMetadataObject

	/**
	 * Provide array of 4-tuple float results unit axis, angle (in radians) from inputOutput SFRotation field named <i>orientation</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  orientation sets body direction in world space, then reports physics updates.  * <br>

	 * @return value of orientation field
	 */
	public float[] getOrientation();

	/**
	 * Assign 4-tuple float array unit axis, angle (in radians) to inputOutput SFRotation field named <i>orientation</i>.
	 * <br><br>
	 * <i>Tooltip:</i> orientation sets body direction in world space, then reports physics updates.
	 * @param newValue is new value for the orientation field.
	 * @return {@link RigidBody} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public RigidBody setOrientation(float[] newValue);

	/**
	 * Provide array of 3-tuple float results from inputOutput SFVec3f field named <i>position</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  position sets body location in world space, then reports physics updates.  * <br>

	 * @return value of position field
	 */
	public float[] getPosition();

	/**
	 * Assign 3-tuple float array to inputOutput SFVec3f field named <i>position</i>.
	 * <br><br>
	 * <i>Tooltip:</i> position sets body location in world space, then reports physics updates.
	 * @param newValue is new value for the position field.
	 * @return {@link RigidBody} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public RigidBody setPosition(float[] newValue);

	/**
	 * Provide array of 3-tuple float results from inputOutput MFVec3f field named <i>torques</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  torques defines rotational force values applied to the object every frame.  * <br>

	 * @return value of torques field
	 */
	public float[] getTorques();

	/**
	 * Assign 3-tuple float array to inputOutput MFVec3f field named <i>torques</i>.
	 * <br><br>
	 * <i>Tooltip:</i> torques defines rotational force values applied to the object every frame.
	 * @param newValue is new value for the torques field.
	 * @return {@link RigidBody} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public RigidBody setTorques(float[] newValue);

	/**
	 * Provide boolean value unit axis, angle (in radians) from inputOutput SFBool field named <i>useFiniteRotation</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  useFiniteRotation enables/disables higher-resolution, higher-cost computational method for calculating rotations.  * <br>

	 * @return value of useFiniteRotation field
	 */
	public boolean getUseFiniteRotation();

	/**
	 * Assign boolean value unit axis, angle (in radians) to inputOutput SFBool field named <i>useFiniteRotation</i>.
	 * <br><br>
	 * <i>Tooltip:</i> useFiniteRotation enables/disables higher-resolution, higher-cost computational method for calculating rotations.
	 * @param newValue is new value for the useFiniteRotation field.
	 * @return {@link RigidBody} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public RigidBody setUseFiniteRotation(boolean newValue);

	/**
	 * Provide boolean value from inputOutput SFBool field named <i>useGlobalGravity</i>.
	 * <br><br>
	 * <i>Tooltip:</i> useGlobalGravity indicates whether this particular body is influenced by parent RigidBodyCollection's gravity setting.
 * <ul>
 *  <li> <i> Hint:</i>  contained sub-bodies are not affected by this setting. </li> 
 * </ul>
	 * @return value of useGlobalGravity field
	 */
	public boolean getUseGlobalGravity();

	/**
	 * Assign boolean value to inputOutput SFBool field named <i>useGlobalGravity</i>.
	 * <br><br>
	 * <i>Tooltip:</i> useGlobalGravity indicates whether this particular body is influenced by parent RigidBodyCollection's gravity setting. Hint: contained sub-bodies are not affected by this setting.
	 * @param newValue is new value for the useGlobalGravity field.
	 * @return {@link RigidBody} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public RigidBody setUseGlobalGravity(boolean newValue);


	/**
	 * Assign String value to inputOutput SFString field named <i>DEF</i>.
	 * <br><br>
	 * <i>Tooltip:</i> DEF defines a unique ID name for this node, referenceable by other nodes. Hint: descriptive DEF names improve clarity and help document a model. Hint: well-defined names can simplify design and debugging through improved author understanding. Hint: X3D Scene Authoring Hints, Naming Conventions http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html#NamingConventions
	 * <br><br>
	 *  Note that setting the DEF value clears the USE value.
	 * @param newValue is new value for the DEF field.
	 * @return {@link RigidBody} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public RigidBody setDEF(String newValue);


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
	 * @return {@link RigidBody} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public RigidBody setUSE(String newValue);


	/**
	 * Assign String value to inputOutput SFString field named <i>class</i>.
	 * <br><br>
	 * <i>Tooltip:</i> The class attribute is a space-separated list of classes, reserved for use by CSS cascading stylesheets. Warning: currently the class attribute is only supported in XML encoding of X3D scenes. Hint: W3C Cascading Style Sheets https://www.w3.org/Style/CSS
	 * @param newValue is new value for the class field.
	 * @return {@link RigidBody} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public RigidBody setCssClass(String newValue);

}
