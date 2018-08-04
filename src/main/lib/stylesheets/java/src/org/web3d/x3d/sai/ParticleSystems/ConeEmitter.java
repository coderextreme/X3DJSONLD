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

package org.web3d.x3d.sai.ParticleSystems;
import java.util.*;
import org.web3d.x3d.sai.*;  // making sure #2
import org.web3d.x3d.sai.Core.*;

/**
 * Abstract node interface, defined by X3D specification to support X3D Java interoperability.
 * 
 * <br><br>
 * <i>X3D node tooltip</i>:  (X3D version 3.2 or later) [X3DParticleEmitterNode] ConeEmitter generates all available particles from a specific point in space. Particles are emitted from the single point specified by the position field emanating in a direction randomly distributed within the cone specified by the angle and direction fields.  * <br>
 * <br>

 * <br>
 * <i>Package hint:</i>  This interface is defined by the X3D Java Language Binding Specification for the Scene Authoring Interface (SAI).
 * @author Don Brutzman and Roy Walmsley
 * @see <a href="http://www.web3d.org/documents/specifications/19777-2/V3.0/Part2/concretes.html#ConeEmitter" target="_blank">SAI Java Specification: TODO</a>
 * @see <a href="http://www.web3d.org/documents/specifications/19775-1/V3.3/Part01/components/particle_systems.html#ConeEmitter" target="blank">X3D Abstract Specification: ConeEmitter</a>
 * @see <a href="http://www.web3d.org/x3d/tooltips/X3dTooltips.html#ConeEmitter" target="_blank">X3D Tooltips: ConeEmitter</a>
 * @see <a href="http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>
 */
public interface ConeEmitter extends X3DParticleEmitterNode
{
	// ==== Accessor methods: strongly typed get/set methods for compile-time strictness

	/**
	 * Provide float value unit axis, angle (in radians) within allowed range of [0,3.1416] from inputOutput SFFloat field named <i>angle</i>.
	 * <br><br>
	 * <i>Tooltip:</i> [0,+infinity) Cone boundary for random distribution of particles about initial direction.
 * <ul>
 *  <li> <i> Hint:</i>  <br> <a href="https://en.wikipedia.org/wiki/Radian" target="_blank">https://en.wikipedia.org/wiki/Radian</a> </li> 
 * </ul>
	 * @return value of angle field
	 */
	public float getAngle();

	/**
	 * Assign float value unit axis, angle (in radians) within allowed range of [0,3.1416] to inputOutput SFFloat field named <i>angle</i>.
	 * <br><br>
	 * <i>Tooltip:</i> [0,+infinity) Cone boundary for random distribution of particles about initial direction. Hint: https://en.wikipedia.org/wiki/Radian
	 * @param newValue is new value for the angle field.
	 * @return {@link ConeEmitter} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public ConeEmitter setAngle(float newValue);

	/**
	 * Provide array of 3-tuple float results within allowed range of [-1,1] from inputOutput SFVec3f field named <i>direction</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  Initial direction from which particles emanate.  * <br>

	 * @return value of direction field
	 */
	public float[] getDirection();

	/**
	 * Assign 3-tuple float array within allowed range of [-1,1] to inputOutput SFVec3f field named <i>direction</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Initial direction from which particles emanate.
	 * @param newValue is new value for the direction field.
	 * @return {@link ConeEmitter} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public ConeEmitter setDirection(float[] newValue);

	/**
	 * Provide float value within allowed range of [0,infinity) from inputOutput SFFloat field named <i>mass</i>.
	 * @return value of mass field
	 */
	@Override
	public float getMass();

	/**
	 * Assign float value within allowed range of [0,infinity) to inputOutput SFFloat field named <i>mass</i>.
	 * @param newValue is new value for the mass field.
	 * @return {@link ConeEmitter} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public ConeEmitter setMass(float newValue);

	/**
	 * Provide X3DMetadataObject instance (using a properly typed node) from inputOutput SFNode field <i>metadata</i>.
	 * @see <a href="http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html#Metadata" target="_blank">X3D Scene Authoring Hints: Metadata Nodes</a>
	 * @return value of metadata field
	 */
	@Override
	public X3DMetadataObject getMetadata(); // acceptable node types #1:X3DMetadataObject

	/**
	 * Assign X3DMetadataObject instance (using a properly typed node) to inputOutput SFNode field <i>metadata</i>.
	 * @see <a href="http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html#Metadata" target="_blank">X3D Scene Authoring Hints: Metadata Nodes</a>
	 * @param newValue is new value for the metadata field.
	 * @return {@link ConeEmitter} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public ConeEmitter setMetadata(X3DMetadataObject newValue); // acceptable node types #2: X3DMetadataObject

	/**
	 * Provide array of 3-tuple float results from inputOutput SFVec3f field named <i>position</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  Point from which particles emanate.  * <br>

	 * @return value of position field
	 */
	public float[] getPosition();

	/**
	 * Assign 3-tuple float array to inputOutput SFVec3f field named <i>position</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Point from which particles emanate.
	 * @param newValue is new value for the position field.
	 * @return {@link ConeEmitter} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public ConeEmitter setPosition(float[] newValue);

	/**
	 * Provide float value within allowed range of [0,infinity) from inputOutput SFFloat field named <i>speed</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  [0,+infinity) Initial linear speed (default is m/s) imparted to all particles along their direction of movement.  * <br>

	 * @return value of speed field
	 */
	@Override
	public float getSpeed();

	/**
	 * Assign float value within allowed range of [0,infinity) to inputOutput SFFloat field named <i>speed</i>.
	 * <br><br>
	 * <i>Tooltip:</i> [0,+infinity) Initial linear speed (default is m/s) imparted to all particles along their direction of movement.
	 * @param newValue is new value for the speed field.
	 * @return {@link ConeEmitter} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public ConeEmitter setSpeed(float newValue);

	/**
	 * Provide float value within allowed range of [0,infinity) from initializeOnly SFFloat field named <i>surfaceArea</i>.
	 * <br><br>
	 * <i>Tooltip:</i> [0,+infinity) Particle surface area in area base units (default is meters squared). Surface area is used for calculations such as wind effects per particle.
 * <ul>
 *  <li> <i>Hint:</i> surfaceArea value represents average frontal area presented to the wind. </li> 
 *  <li> <i>Hint:</i>  assumes spherical model for each particle (i.e., surface area is the same regardless of direction). </li> 
 * </ul>
	 * @return value of surfaceArea field
	 */
	@Override
	public float getSurfaceArea();

	/**
	 * Assign float value within allowed range of [0,infinity) to initializeOnly SFFloat field named <i>surfaceArea</i>.
	 * <br><br>
	 * <i>Tooltip:</i> [0,+infinity) Particle surface area in area base units (default is meters squared). Surface area is used for calculations such as wind effects per particle. Hint: surfaceArea value represents average frontal area presented to the wind. Hint: assumes spherical model for each particle (i.e., surface area is the same regardless of direction).
	 * @param newValue is new value for the surfaceArea field.
	 * @return {@link ConeEmitter} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public ConeEmitter setSurfaceArea(float newValue);

	/**
	 * Provide float value within allowed range of [0,infinity) from inputOutput SFFloat field named <i>variation</i>.
	 * <br><br>
	 * <i>Tooltip:</i> [0,+infinity) Multiplier for the randomness used to control the range of possible output values. The bigger the value, the more random the output and the bigger the range of possible initial values possible.
 * <ul>
 *  <li> <i> Hint:</i>  variation of zero does not allow any randomness. </li> 
 * </ul>
	 * @return value of variation field
	 */
	@Override
	public float getVariation();

	/**
	 * Assign float value within allowed range of [0,infinity) to inputOutput SFFloat field named <i>variation</i>.
	 * <br><br>
	 * <i>Tooltip:</i> [0,+infinity) Multiplier for the randomness used to control the range of possible output values. The bigger the value, the more random the output and the bigger the range of possible initial values possible. Hint: variation of zero does not allow any randomness.
	 * @param newValue is new value for the variation field.
	 * @return {@link ConeEmitter} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public ConeEmitter setVariation(float newValue);


	/**
	 * Assign String value to inputOutput SFString field named <i>DEF</i>.
	 * <br><br>
	 * <i>Tooltip:</i> DEF defines a unique ID name for this node, referenceable by other nodes. Hint: descriptive DEF names improve clarity and help document a model. Hint: well-defined names can simplify design and debugging through improved author understanding. Hint: X3D Scene Authoring Hints, Naming Conventions http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html#NamingConventions
	 * <br><br>
	 *  Note that setting the DEF value clears the USE value.
	 * @param newValue is new value for the DEF field.
	 * @return {@link ConeEmitter} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public ConeEmitter setDEF(String newValue);


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
	 * @return {@link ConeEmitter} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public ConeEmitter setUSE(String newValue);


	/**
	 * Assign String value to inputOutput SFString field named <i>class</i>.
	 * <br><br>
	 * <i>Tooltip:</i> The class attribute is a space-separated list of classes, reserved for use by CSS cascading stylesheets. Warning: currently the class attribute is only supported in XML encoding of X3D scenes. Hint: W3C Cascading Style Sheets https://www.w3.org/Style/CSS
	 * @param newValue is new value for the class field.
	 * @return {@link ConeEmitter} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public ConeEmitter setCssClass(String newValue);

}
