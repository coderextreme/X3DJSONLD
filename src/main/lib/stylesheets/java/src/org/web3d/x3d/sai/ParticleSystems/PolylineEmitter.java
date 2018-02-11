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
import org.web3d.x3d.sai.Rendering.*;
import org.web3d.x3d.sai.Core.*;

/**
 * Abstract node interface, defined by X3D specification to support X3D Java interoperability.
 * 
 * <br><br>
 * <i>X3D node tooltip</i>: (X3D version 3.2 or later) PolylineEmitter emits particles along a single polyline. The coordinates for the line along which particles should be randomly generated are taken from a combination of the coord and coordIndex fields. The starting point for generating particles is randomly distributed along this line and given the initial speed and direction.
 * <ul>
 *  <li> <i> Hint:</i>  if no coordinates are available, PolylineEmitter acts like a point source located at local origin. </li> 
 * </ul>
 * <br>
 * <i>Package hint:</i>  This interface is defined by the X3D Java Language Binding Specification for the Scene Authoring Interface (SAI).
 *
 * @author Don Brutzman and Roy Walmsley
 * @see <a href="http://www.web3d.org/documents/specifications/19777-2/V3.0/Part2/concretes.html#PolylineEmitter" target="_blank">SAI Java Specification: TODO</a>
 * @see <a href="http://www.web3d.org/documents/specifications/19775-1/V3.3/Part01/components/particle_systems.html#PolylineEmitter" target="blank">X3D Abstract Specification: PolylineEmitter</a>

 * @see <a href="http://www.web3d.org/x3d/tooltips/X3dTooltips.html#PolylineEmitter" target="_blank">X3D Tooltips: PolylineEmitter</a>
 * @see <a href="http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>
 */
public interface PolylineEmitter extends X3DParticleEmitterNode
{
	// ==== Accessor methods: strongly typed get/set methods for compile-time strictness

	/**
	 * Provide X3DCoordinateNode instance (using a properly typed node) from inputOutput SFNode field <i>coord</i>.
	 * <br><br>
	 * <i>Tooltip:</i> [X3DCoordinateNode] Coordinates for the line along which particles are randomly generated.
 * <ul>
 *  <li> <i> Warning:</i>  If no coordinates are available, PolylineEmitter acts like a point source located at local origin. </li> 
 * </ul>
	 * @return value of coord field
	 */
	public X3DCoordinateNode getCoord(); // acceptable node types: X3DCoordinateNode

	/**
	 * Assign X3DCoordinateNode instance (using a properly typed node) to inputOutput SFNode field <i>coord</i>.
	 * <br><br>
	 * <i>Tooltip:</i> [X3DCoordinateNode] Coordinates for the line along which particles are randomly generated. Warning: If no coordinates are available, PolylineEmitter acts like a point source located at local origin.
	 * @param newValue is new value for the coord field.
	 * @return {@link PolylineEmitter} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public PolylineEmitter setCoord(X3DCoordinateNode newValue); // acceptable node types: X3DCoordinateNode

	/**
	 * Provide array of int results within allowed range of [-1,infinity) from initializeOnly MFInt32 field named <i>coordIndex</i>.
	 * <br><br>
	 * <i>Tooltip:</i> [-1,+infinity) coordIndex indices are applied to contained Coordinate values in order to define randomly generated initial geometry of the particles.
 * <ul>
 *  <li> <i>Warning:</i> If no coordinates are available, PolylineEmitter acts like a point source located at local origin. </li> 
 *  <li> <i>Warning:</i>  coordIndex is required in order to connect contained coordinate point values. </li> 
 * </ul>
	 * @return value of coordIndex field
	 */
	public int[] getCoordIndex();

	/**
	 * Assign int array within allowed range of [-1,infinity) to initializeOnly MFInt32 field named <i>coordIndex</i>.
	 * <br><br>
	 * <i>Tooltip:</i> [-1,+infinity) coordIndex indices are applied to contained Coordinate values in order to define randomly generated initial geometry of the particles. Warning: If no coordinates are available, PolylineEmitter acts like a point source located at local origin. Warning: coordIndex is required in order to connect contained coordinate point values.
	 * @param newValue is new value for the coordIndex field.
	 * @return {@link PolylineEmitter} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public PolylineEmitter setCoordIndex(int[] newValue);

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
	 * @return {@link PolylineEmitter} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public PolylineEmitter setDirection(float[] newValue);

	/**
	 * Provide float value within allowed range of [0,infinity) from inputOutput SFFloat field named <i>mass</i>.
	 * <br><br>
	 * <i>Tooltip:</i> [0,+infinity) Basic mass of each particle in mass base units (default is grams).
 * <ul>
 *  <li> <i> Hint:</i>  mass is needed if gravity or other force-related calculations are performed per-particle. </li> 
 * </ul>
	 * @return value of mass field
	 */
	@Override
	public float getMass();

	/**
	 * Assign float value within allowed range of [0,infinity) to inputOutput SFFloat field named <i>mass</i>.
	 * <br><br>
	 * <i>Tooltip:</i> [0,+infinity) Basic mass of each particle in mass base units (default is grams). Hint: mass is needed if gravity or other force-related calculations are performed per-particle.
	 * @param newValue is new value for the mass field.
	 * @return {@link PolylineEmitter} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public PolylineEmitter setMass(float newValue);

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
	 * @return {@link PolylineEmitter} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public PolylineEmitter setMetadata(X3DMetadataObject newValue); // acceptable node types: X3DMetadataObject

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
	 * @return {@link PolylineEmitter} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public PolylineEmitter setSpeed(float newValue);

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
	 * @return {@link PolylineEmitter} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public PolylineEmitter setSurfaceArea(float newValue);

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
	 * @return {@link PolylineEmitter} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public PolylineEmitter setVariation(float newValue);


	/**
	 * Assign String value to inputOutput SFString field named <i>DEF</i>.
	 * <br><br>
	 * <i>Tooltip:</i> DEF defines a unique ID name for this node, referenceable by other nodes. Hint: descriptive DEF names improve clarity and help document a model. Hint: well-defined names can simplify design and debugging through improved author understanding. Hint: X3D Scene Authoring Hints, Naming Conventions http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html#NamingConventions
	 * <br><br>
	 *  Note that setting the DEF value clears the USE value.
	 * @param newValue is new value for the DEF field.
	 * @return {@link PolylineEmitter} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public PolylineEmitter setDEF(String newValue);


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
	 * @return {@link PolylineEmitter} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public PolylineEmitter setUSE(String newValue);


	/**
	 * Assign String value to inputOutput SFString field named <i>class</i>.
	 * <br><br>
	 * <i>Tooltip:</i> The class attribute is a space-separated list of classes, reserved for use by CSS cascading stylesheets. Warning: currently the class attribute is only supported in XML encoding of X3D scenes. Hint: W3C Cascading Style Sheets https://www.w3.org/Style/CSS
	 * @param newValue is new value for the class field.
	 * @return {@link PolylineEmitter} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public PolylineEmitter setCssClass(String newValue);

}
