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

package org.web3d.x3d.jsail;


import java.util.Arrays;
import org.web3d.x3d.sai.Core.*;  // making sure #3
import org.web3d.x3d.jsail.*;
import org.web3d.x3d.jsail.Core.*;


/**
 * Topmost abstract parent class for concrete X3D nodes and statements, containing common methods and member variables.
 * 
 * <br><br>

 *
 * @author Don Brutzman and Roy Walmsley
 * @see <a href="http://www.web3d.org/x3d/tooltips/X3dTooltips.html" target="_blank">X3D Tooltips</a>
 * @see <a href="http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>
 */
public abstract class X3DConcreteElement
{
	/** IS/connect statements might be used if this node is within a ProtoBody and connections are defined between prototype fields and built-in node fields */
	private ISObject IS;

	/** String constant <i>NAME</i> provides name of this element; overridden by implementing class. */
	protected static final String NAME = ""; // must be overridden

	// Protected member value declarations are encapsulated and private, for internal library use only

	private X3DConcreteElement parentObject = null; // X3D node or statement
										
	/**
	 * Provide object reference to parent X3D node or statement, if any.
	 * This reference is named "parentObject" rather than "parent" to avoid potential name collision with any X3D field named "parent".
	 * @return object reference to parent X3D node or statement, otherwise null if none
	 */			
	public X3DConcreteElement getParentObject()
	{
		return parentObject;
	}
										
	/**
	 * Package-internal method to set parent object reference.
	 * @param newParentObject object reference to parent node or X3D statement that contains this node
	 */			
	public void setParentObject(X3DConcreteElement newParentObject)
	{
		parentObject = newParentObject;
	}
										
	/**
	 * Package-protected internal method to clear local reference to parent object, if any.
	 */			
	public void clearParentObject()
	{
		setParentObject(null);
	}

	/**
	 * Find object reference to ancestor Scene element, assumes this object is an attached child.
	 * @see X3DConcreteElement#hasAncestorSceneObject()
	 * @see #hasAncestorX3DObject()
	 * @see X3DConcreteElement#findAncestorX3DObject()
	 * @return ancestor Scene child reference if attached, otherwise null
	 */
	public SceneObject findAncestorSceneObject()
	{
		if ((this instanceof org.web3d.x3d.sai.Core.X3DNode) && ((X3DNode)this) instanceof org.web3d.x3d.jsail.Core.SceneObject)
			return (SceneObject)((X3DNode)this);
		X3DConcreteElement element = this.getParentObject();
		while (element != null)
		{
			if (element instanceof org.web3d.x3d.jsail.Core.SceneObject)
				 return (SceneObject)element;
			else element = element.getParentObject(); // walk up the tree to top, then back down to Scene
		}
		return null; // not found
	}
	/**
	 * Determine whether ancestor Scene element is found, meaning this object is an attached child.
	 * @see X3DConcreteElement#hasAncestorSceneObject()
	 * @see #hasAncestorX3DObject()
	 * @see X3DConcreteElement#findAncestorX3DObject()
	 * @return whether ancestor Scene node is found
	 */
	public boolean hasAncestorSceneObject()
	{
		return (findAncestorSceneObject() != null);
	}

	/**
	 * Find object reference to ancestor element (i.e. node or statement), if this object is an attached child.
	 * @param ancestorElementName elementName of ancestor of interest (e.g. first Transform)
	 * @return ancestor node reference if attached and found, otherwise null
	 */
	public X3DConcreteElement findAncestorElementByName(String ancestorElementName)
	{
		if (this.getElementName().equals(ancestorElementName))
			return this;
		X3DConcreteElement element = this.getParentObject();
		while (element != null)
		{
			if (element.getElementName().equals(ancestorElementName))
				 return element;
			else element = element.getParentObject(); // walk up the tree to top
		}
		return null; // not found
	}
	/**
	 * Determine whether ancestor element (i.e. node or statement) is found, meaning this object is an attached child.
	 * @param ancestorElementName elementName of ancestor of interest (e.g. first Transform)
	 * @see #findAncestorProtoBody()
	 * @return whether ancestor element is found
	 */
	public boolean hasAncestorElementByName(String ancestorElementName)
	{
		return (findAncestorElementByName(ancestorElementName) != null);
	}

	/**
	 * Find object reference to ancestor ProtoBody, if this node or statement is a child.
	 * @see #hasAncestorProtoBody()
	 * @return ancestor ProtoBodyObject reference if attached and found, otherwise null
	 */
	public ProtoBodyObject findAncestorProtoBody()
	{
		return (ProtoBodyObject) findAncestorElementByName(ProtoBodyObject.NAME);
	}
	/**
	 * Determine whether ancestor ProtoBody element is found, meaning this object is an attached child.
	 * @see #findAncestorProtoBody()
	 * @return whether ancestor ProtoBody element is found
	 */
	public boolean hasAncestorProtoBody()
	{
		return (findAncestorProtoBody() != null);
	}
										
	/**
	 * Find object reference to ancestor X3D element, if this node or statement is part of an X3DObject model.
	 * @see #hasAncestorX3DObject()
	 * @see X3DConcreteElement#hasAncestorSceneObject()
	 * @see X3DConcreteElement#hasAncestorSceneObject()
	 * @return ancestor X3D reference if attached, otherwise null
	 */	
	public X3DObject findAncestorX3DObject()
	{
		if (((X3DNode)this) instanceof org.web3d.x3d.jsail.Core.X3DObject)
			return (X3DObject)((X3DNode)this);
		X3DConcreteElement element = this.getParentObject();
		while (element != null)
		{
			if (element instanceof org.web3d.x3d.jsail.Core.X3DObject)
				 return (X3DObject)element;
			else element = element.getParentObject(); // walk up the tree to top
		}
		return null; // not found
	}
	/**
	 * Determine whether ancestor X3D element is found, meaning this object is an attached child.
	 * @see X3DConcreteElement#findAncestorX3DObject()
	 * @see X3DConcreteElement#hasAncestorSceneObject()
	 * @see X3DConcreteElement#hasAncestorSceneObject()
	 * @return whether ancestor X3D element is found
	 */
	public boolean hasAncestorX3DObject()
	{
		return (findAncestorX3DObject() != null);
	}
										
	/** Provides name of this element.
	 * @return name of this element
	 */
	abstract public String getElementName(); // must be overridden (static methods cannot be abstract)
										
	/** Defines X3D component for this element.
	 * @return X3D component for this element
	 */
	abstract public String getComponent(); // must be overridden (static methods cannot be abstract)
										
	/** Provides default X3D component level for this element
	 * @return default X3D component level for this element
	 */
	abstract public int getComponentLevel(); // must be overridden (static methods cannot be abstract)

	/** Indicate type corresponding to given fieldName.
	 * @param fieldName name of field in this X3D statement
	 * @see ConfigurationProperties#ERROR_UNKNOWN_FIELD_TYPE
	 * @return X3D type (SFvec3f etc.), otherwise ConfigurationProperties.ERROR_UNKNOWN_FIELD_TYPE if not recognized
	 */			
	abstract public String getFieldType(String fieldName); // must be overridden
										
	/** Indicate accessType corresponding to given fieldName.
	 * @param fieldName name of field in this X3D statement
	 * @see ConfigurationProperties#ERROR_UNKNOWN_FIELD_TYPE
	 * @return X3D accessType (inputOnly etc.), otherwise ConfigurationProperties.ERROR_UNKNOWN_FIELD_TYPE if not recognized
	 */			
	abstract public String getAccessType(String fieldName); // must be overridden
										
	/**
	 * Recursive method to provide object reference to node or statement by name attribute, if found as part of this element or in a contained element.
	 * Elements with name fields include meta, Metadata* nodes, field/fieldValue, ProtoDeclare/ExternProtoDeclare/ProtoInstance, HAnim nodes.
	 * <br ><br >
	 * <i>Warning:</i> first start with findAncestorSceneObject() to check entire scene graph, or findAncestorX3DObject() to check entire model document.
	 * <br ><br >
	 * @see #findNodeByDEF(String)
	 * @see X3DConcreteElement#hasAncestorSceneObject()
	 * @see org.web3d.x3d.jsail.X3DConcreteElement#findAncestorX3DObject()
	 * @see metaObject
	 * @see MetadataStringObject
	 * <i>Warning:</i> more than one element may be found that has the same name, this method does not handle that case.
	 * @param nameValue is value of the name field being searched for in this element and child elements(if any)
	 * @param elementName identifies the element of interest (meta MetadataString ProtoDeclare CADassembly ProtoInstance HAnimHumanoid etc.)
	 * @return object reference to found element, null otherwise
	 */
	abstract public X3DConcreteElement findElementByNameValue(String nameValue, String elementName); // required interface
										
	/**
	 * Recursive method to provide object reference to node or statement by name attribute, if found as part of this element or in a contained element.
	 * Elements with name fields include meta, Metadata* nodes, field/fieldValue, ProtoDeclare/ExternProtoDeclare/ProtoInstance, HAnim nodes.
	 * <br ><br >
	 * <i>Warning:</i> first start with findAncestorSceneObject() to check entire scene graph, or findAncestorX3DObject() to check entire model document.
	 * <br ><br >
	 * <i>Warning:</i> more than one element may be found that has the same name, this method does not handle that case.
	 * @see #findNodeByDEF(String)
	 * @see X3DConcreteElement#hasAncestorSceneObject()
	 * @see org.web3d.x3d.jsail.X3DConcreteElement#findAncestorX3DObject()
	 * @param nameValue is value of the name field being searched for in this element and child elements(if any)
	 * @return object reference to found element, null otherwise
	 */
	abstract public X3DConcreteElement findElementByNameValue(String nameValue); // required interface
										
	/**
	 * Recursive method to provide object reference to node by DEF, if found as this node or in a contained node.
	 * <br ><br >
	 * <i>Warning:</i> first start with findAncestorSceneObject() to check entire scene graph, or findAncestorX3DObject() to check entire model document.
	 * <br ><br >
	 * <i>Warning:</i> more than one element may be found that has the same DEF, this method does not handle that case.
	 * @see #findElementByNameValue(String)
	 * @see X3DConcreteElement#hasAncestorSceneObject()
	 * @see org.web3d.x3d.jsail.X3DConcreteElement#findAncestorX3DObject()
	 * @param DEFvalue is value of the name field being searched for in this element and child elements(if any)
	 * @return object reference to found node, null otherwise
	 */
	abstract public X3DConcreteNode findNodeByDEF(String DEFvalue); // required interface
										
	/** Provide fully qualified package for a given element object, including className.  Helpful for reflection.
	 * @param className X3D statement or node of interest
	 * @return fully qualified package for className
	 */
	static public String getPackageName(String className)
	{
		if (className.contains("Object"))
		    className = className.substring(0,className.indexOf("Object"));
		switch (className)
		{
			case "Anchor":
				return "org.web3d.x3d.jsail.Networking.AnchorObject";
			case "Appearance":
				return "org.web3d.x3d.jsail.Shape.AppearanceObject";
			case "Arc2D":
				return "org.web3d.x3d.jsail.Geometry2D.Arc2DObject";
			case "ArcClose2D":
				return "org.web3d.x3d.jsail.Geometry2D.ArcClose2DObject";
			case "AudioClip":
				return "org.web3d.x3d.jsail.Sound.AudioClipObject";
			case "Background":
				return "org.web3d.x3d.jsail.EnvironmentalEffects.BackgroundObject";
			case "BallJoint":
				return "org.web3d.x3d.jsail.RigidBodyPhysics.BallJointObject";
			case "Billboard":
				return "org.web3d.x3d.jsail.Navigation.BillboardObject";
			case "BlendedVolumeStyle":
				return "org.web3d.x3d.jsail.VolumeRendering.BlendedVolumeStyleObject";
			case "BooleanFilter":
				return "org.web3d.x3d.jsail.EventUtilities.BooleanFilterObject";
			case "BooleanSequencer":
				return "org.web3d.x3d.jsail.EventUtilities.BooleanSequencerObject";
			case "BooleanToggle":
				return "org.web3d.x3d.jsail.EventUtilities.BooleanToggleObject";
			case "BooleanTrigger":
				return "org.web3d.x3d.jsail.EventUtilities.BooleanTriggerObject";
			case "BoundaryEnhancementVolumeStyle":
				return "org.web3d.x3d.jsail.VolumeRendering.BoundaryEnhancementVolumeStyleObject";
			case "BoundedPhysicsModel":
				return "org.web3d.x3d.jsail.ParticleSystems.BoundedPhysicsModelObject";
			case "Box":
				return "org.web3d.x3d.jsail.Geometry3D.BoxObject";
			case "CADAssembly":
				return "org.web3d.x3d.jsail.CADGeometry.CADAssemblyObject";
			case "CADFace":
				return "org.web3d.x3d.jsail.CADGeometry.CADFaceObject";
			case "CADLayer":
				return "org.web3d.x3d.jsail.CADGeometry.CADLayerObject";
			case "CADPart":
				return "org.web3d.x3d.jsail.CADGeometry.CADPartObject";
			case "CartoonVolumeStyle":
				return "org.web3d.x3d.jsail.VolumeRendering.CartoonVolumeStyleObject";
			case "Circle2D":
				return "org.web3d.x3d.jsail.Geometry2D.Circle2DObject";
			case "ClipPlane":
				return "org.web3d.x3d.jsail.Rendering.ClipPlaneObject";
			case "CollidableOffset":
				return "org.web3d.x3d.jsail.RigidBodyPhysics.CollidableOffsetObject";
			case "CollidableShape":
				return "org.web3d.x3d.jsail.RigidBodyPhysics.CollidableShapeObject";
			case "Collision":
				return "org.web3d.x3d.jsail.Navigation.CollisionObject";
			case "CollisionCollection":
				return "org.web3d.x3d.jsail.RigidBodyPhysics.CollisionCollectionObject";
			case "CollisionSensor":
				return "org.web3d.x3d.jsail.RigidBodyPhysics.CollisionSensorObject";
			case "CollisionSpace":
				return "org.web3d.x3d.jsail.RigidBodyPhysics.CollisionSpaceObject";
			case "Color":
				return "org.web3d.x3d.jsail.Rendering.ColorObject";
			case "ColorChaser":
				return "org.web3d.x3d.jsail.Followers.ColorChaserObject";
			case "ColorDamper":
				return "org.web3d.x3d.jsail.Followers.ColorDamperObject";
			case "ColorInterpolator":
				return "org.web3d.x3d.jsail.Interpolation.ColorInterpolatorObject";
			case "ColorRGBA":
				return "org.web3d.x3d.jsail.Rendering.ColorRGBAObject";
			case "ComposedCubeMapTexture":
				return "org.web3d.x3d.jsail.CubeMapTexturing.ComposedCubeMapTextureObject";
			case "ComposedShader":
				return "org.web3d.x3d.jsail.Shaders.ComposedShaderObject";
			case "ComposedTexture3D":
				return "org.web3d.x3d.jsail.Texturing3D.ComposedTexture3DObject";
			case "ComposedVolumeStyle":
				return "org.web3d.x3d.jsail.VolumeRendering.ComposedVolumeStyleObject";
			case "Cone":
				return "org.web3d.x3d.jsail.Geometry3D.ConeObject";
			case "ConeEmitter":
				return "org.web3d.x3d.jsail.ParticleSystems.ConeEmitterObject";
			case "Contact":
				return "org.web3d.x3d.jsail.RigidBodyPhysics.ContactObject";
			case "Contour2D":
				return "org.web3d.x3d.jsail.NURBS.Contour2DObject";
			case "ContourPolyline2D":
				return "org.web3d.x3d.jsail.NURBS.ContourPolyline2DObject";
			case "Coordinate":
				return "org.web3d.x3d.jsail.Rendering.CoordinateObject";
			case "CoordinateChaser":
				return "org.web3d.x3d.jsail.Followers.CoordinateChaserObject";
			case "CoordinateDamper":
				return "org.web3d.x3d.jsail.Followers.CoordinateDamperObject";
			case "CoordinateDouble":
				return "org.web3d.x3d.jsail.NURBS.CoordinateDoubleObject";
			case "CoordinateInterpolator":
				return "org.web3d.x3d.jsail.Interpolation.CoordinateInterpolatorObject";
			case "CoordinateInterpolator2D":
				return "org.web3d.x3d.jsail.Interpolation.CoordinateInterpolator2DObject";
			case "Cylinder":
				return "org.web3d.x3d.jsail.Geometry3D.CylinderObject";
			case "CylinderSensor":
				return "org.web3d.x3d.jsail.PointingDeviceSensor.CylinderSensorObject";
			case "DirectionalLight":
				return "org.web3d.x3d.jsail.Lighting.DirectionalLightObject";
			case "DISEntityManager":
				return "org.web3d.x3d.jsail.DIS.DISEntityManagerObject";
			case "DISEntityTypeMapping":
				return "org.web3d.x3d.jsail.DIS.DISEntityTypeMappingObject";
			case "Disk2D":
				return "org.web3d.x3d.jsail.Geometry2D.Disk2DObject";
			case "DoubleAxisHingeJoint":
				return "org.web3d.x3d.jsail.RigidBodyPhysics.DoubleAxisHingeJointObject";
			case "EaseInEaseOut":
				return "org.web3d.x3d.jsail.Interpolation.EaseInEaseOutObject";
			case "EdgeEnhancementVolumeStyle":
				return "org.web3d.x3d.jsail.VolumeRendering.EdgeEnhancementVolumeStyleObject";
			case "ElevationGrid":
				return "org.web3d.x3d.jsail.Geometry3D.ElevationGridObject";
			case "EspduTransform":
				return "org.web3d.x3d.jsail.DIS.EspduTransformObject";
			case "ExplosionEmitter":
				return "org.web3d.x3d.jsail.ParticleSystems.ExplosionEmitterObject";
			case "Extrusion":
				return "org.web3d.x3d.jsail.Geometry3D.ExtrusionObject";
			case "FillProperties":
				return "org.web3d.x3d.jsail.Shape.FillPropertiesObject";
			case "FloatVertexAttribute":
				return "org.web3d.x3d.jsail.Shaders.FloatVertexAttributeObject";
			case "Fog":
				return "org.web3d.x3d.jsail.EnvironmentalEffects.FogObject";
			case "FogCoordinate":
				return "org.web3d.x3d.jsail.EnvironmentalEffects.FogCoordinateObject";
			case "FontStyle":
				return "org.web3d.x3d.jsail.Text.FontStyleObject";
			case "ForcePhysicsModel":
				return "org.web3d.x3d.jsail.ParticleSystems.ForcePhysicsModelObject";
			case "GeneratedCubeMapTexture":
				return "org.web3d.x3d.jsail.CubeMapTexturing.GeneratedCubeMapTextureObject";
			case "GeoCoordinate":
				return "org.web3d.x3d.jsail.Geospatial.GeoCoordinateObject";
			case "GeoElevationGrid":
				return "org.web3d.x3d.jsail.Geospatial.GeoElevationGridObject";
			case "GeoLocation":
				return "org.web3d.x3d.jsail.Geospatial.GeoLocationObject";
			case "GeoLOD":
				return "org.web3d.x3d.jsail.Geospatial.GeoLODObject";
			case "GeoMetadata":
				return "org.web3d.x3d.jsail.Geospatial.GeoMetadataObject";
			case "GeoOrigin":
				return "org.web3d.x3d.jsail.Geospatial.GeoOriginObject";
			case "GeoPositionInterpolator":
				return "org.web3d.x3d.jsail.Geospatial.GeoPositionInterpolatorObject";
			case "GeoProximitySensor":
				return "org.web3d.x3d.jsail.Geospatial.GeoProximitySensorObject";
			case "GeoTouchSensor":
				return "org.web3d.x3d.jsail.Geospatial.GeoTouchSensorObject";
			case "GeoTransform":
				return "org.web3d.x3d.jsail.Geospatial.GeoTransformObject";
			case "GeoViewpoint":
				return "org.web3d.x3d.jsail.Geospatial.GeoViewpointObject";
			case "Group":
				return "org.web3d.x3d.jsail.Grouping.GroupObject";
			case "HAnimDisplacer":
				return "org.web3d.x3d.jsail.H-Anim.HAnimDisplacerObject";
			case "HAnimHumanoid":
				return "org.web3d.x3d.jsail.H-Anim.HAnimHumanoidObject";
			case "HAnimJoint":
				return "org.web3d.x3d.jsail.H-Anim.HAnimJointObject";
			case "HAnimSegment":
				return "org.web3d.x3d.jsail.H-Anim.HAnimSegmentObject";
			case "HAnimSite":
				return "org.web3d.x3d.jsail.H-Anim.HAnimSiteObject";
			case "ImageCubeMapTexture":
				return "org.web3d.x3d.jsail.CubeMapTexturing.ImageCubeMapTextureObject";
			case "ImageTexture":
				return "org.web3d.x3d.jsail.Texturing.ImageTextureObject";
			case "ImageTexture3D":
				return "org.web3d.x3d.jsail.Texturing3D.ImageTexture3DObject";
			case "IndexedFaceSet":
				return "org.web3d.x3d.jsail.Geometry3D.IndexedFaceSetObject";
			case "IndexedLineSet":
				return "org.web3d.x3d.jsail.Rendering.IndexedLineSetObject";
			case "IndexedQuadSet":
				return "org.web3d.x3d.jsail.CADGeometry.IndexedQuadSetObject";
			case "IndexedTriangleFanSet":
				return "org.web3d.x3d.jsail.Rendering.IndexedTriangleFanSetObject";
			case "IndexedTriangleSet":
				return "org.web3d.x3d.jsail.Rendering.IndexedTriangleSetObject";
			case "IndexedTriangleStripSet":
				return "org.web3d.x3d.jsail.Rendering.IndexedTriangleStripSetObject";
			case "Inline":
				return "org.web3d.x3d.jsail.Networking.InlineObject";
			case "IntegerSequencer":
				return "org.web3d.x3d.jsail.EventUtilities.IntegerSequencerObject";
			case "IntegerTrigger":
				return "org.web3d.x3d.jsail.EventUtilities.IntegerTriggerObject";
			case "IsoSurfaceVolumeData":
				return "org.web3d.x3d.jsail.VolumeRendering.IsoSurfaceVolumeDataObject";
			case "KeySensor":
				return "org.web3d.x3d.jsail.KeyDeviceSensor.KeySensorObject";
			case "Layer":
				return "org.web3d.x3d.jsail.Layering.LayerObject";
			case "LayerSet":
				return "org.web3d.x3d.jsail.Layering.LayerSetObject";
			case "Layout":
				return "org.web3d.x3d.jsail.Layout.LayoutObject";
			case "LayoutGroup":
				return "org.web3d.x3d.jsail.Layout.LayoutGroupObject";
			case "LayoutLayer":
				return "org.web3d.x3d.jsail.Layout.LayoutLayerObject";
			case "LinePickSensor":
				return "org.web3d.x3d.jsail.Picking.LinePickSensorObject";
			case "LineProperties":
				return "org.web3d.x3d.jsail.Shape.LinePropertiesObject";
			case "LineSet":
				return "org.web3d.x3d.jsail.Rendering.LineSetObject";
			case "LoadSensor":
				return "org.web3d.x3d.jsail.Networking.LoadSensorObject";
			case "LocalFog":
				return "org.web3d.x3d.jsail.EnvironmentalEffects.LocalFogObject";
			case "LOD":
				return "org.web3d.x3d.jsail.Navigation.LODObject";
			case "Material":
				return "org.web3d.x3d.jsail.Shape.MaterialObject";
			case "Matrix3VertexAttribute":
				return "org.web3d.x3d.jsail.Shaders.Matrix3VertexAttributeObject";
			case "Matrix4VertexAttribute":
				return "org.web3d.x3d.jsail.Shaders.Matrix4VertexAttributeObject";
			case "MetadataBoolean":
				return "org.web3d.x3d.jsail.Core.MetadataBooleanObject";
			case "MetadataDouble":
				return "org.web3d.x3d.jsail.Core.MetadataDoubleObject";
			case "MetadataFloat":
				return "org.web3d.x3d.jsail.Core.MetadataFloatObject";
			case "MetadataInteger":
				return "org.web3d.x3d.jsail.Core.MetadataIntegerObject";
			case "MetadataSet":
				return "org.web3d.x3d.jsail.Core.MetadataSetObject";
			case "MetadataString":
				return "org.web3d.x3d.jsail.Core.MetadataStringObject";
			case "MotorJoint":
				return "org.web3d.x3d.jsail.RigidBodyPhysics.MotorJointObject";
			case "MovieTexture":
				return "org.web3d.x3d.jsail.Texturing.MovieTextureObject";
			case "MultiTexture":
				return "org.web3d.x3d.jsail.Texturing.MultiTextureObject";
			case "MultiTextureCoordinate":
				return "org.web3d.x3d.jsail.Texturing.MultiTextureCoordinateObject";
			case "MultiTextureTransform":
				return "org.web3d.x3d.jsail.Texturing.MultiTextureTransformObject";
			case "NavigationInfo":
				return "org.web3d.x3d.jsail.Navigation.NavigationInfoObject";
			case "Normal":
				return "org.web3d.x3d.jsail.Rendering.NormalObject";
			case "NormalInterpolator":
				return "org.web3d.x3d.jsail.Interpolation.NormalInterpolatorObject";
			case "NurbsCurve":
				return "org.web3d.x3d.jsail.NURBS.NurbsCurveObject";
			case "NurbsCurve2D":
				return "org.web3d.x3d.jsail.NURBS.NurbsCurve2DObject";
			case "NurbsOrientationInterpolator":
				return "org.web3d.x3d.jsail.NURBS.NurbsOrientationInterpolatorObject";
			case "NurbsPatchSurface":
				return "org.web3d.x3d.jsail.NURBS.NurbsPatchSurfaceObject";
			case "NurbsPositionInterpolator":
				return "org.web3d.x3d.jsail.NURBS.NurbsPositionInterpolatorObject";
			case "NurbsSet":
				return "org.web3d.x3d.jsail.NURBS.NurbsSetObject";
			case "NurbsSurfaceInterpolator":
				return "org.web3d.x3d.jsail.NURBS.NurbsSurfaceInterpolatorObject";
			case "NurbsSweptSurface":
				return "org.web3d.x3d.jsail.NURBS.NurbsSweptSurfaceObject";
			case "NurbsSwungSurface":
				return "org.web3d.x3d.jsail.NURBS.NurbsSwungSurfaceObject";
			case "NurbsTextureCoordinate":
				return "org.web3d.x3d.jsail.NURBS.NurbsTextureCoordinateObject";
			case "NurbsTrimmedSurface":
				return "org.web3d.x3d.jsail.NURBS.NurbsTrimmedSurfaceObject";
			case "OpacityMapVolumeStyle":
				return "org.web3d.x3d.jsail.VolumeRendering.OpacityMapVolumeStyleObject";
			case "OrientationChaser":
				return "org.web3d.x3d.jsail.Followers.OrientationChaserObject";
			case "OrientationDamper":
				return "org.web3d.x3d.jsail.Followers.OrientationDamperObject";
			case "OrientationInterpolator":
				return "org.web3d.x3d.jsail.Interpolation.OrientationInterpolatorObject";
			case "OrthoViewpoint":
				return "org.web3d.x3d.jsail.Navigation.OrthoViewpointObject";
			case "PackagedShader":
				return "org.web3d.x3d.jsail.Shaders.PackagedShaderObject";
			case "ParticleSystem":
				return "org.web3d.x3d.jsail.ParticleSystems.ParticleSystemObject";
			case "PickableGroup":
				return "org.web3d.x3d.jsail.Picking.PickableGroupObject";
			case "PixelTexture":
				return "org.web3d.x3d.jsail.Texturing.PixelTextureObject";
			case "PixelTexture3D":
				return "org.web3d.x3d.jsail.Texturing3D.PixelTexture3DObject";
			case "PlaneSensor":
				return "org.web3d.x3d.jsail.PointingDeviceSensor.PlaneSensorObject";
			case "PointEmitter":
				return "org.web3d.x3d.jsail.ParticleSystems.PointEmitterObject";
			case "PointLight":
				return "org.web3d.x3d.jsail.Lighting.PointLightObject";
			case "PointPickSensor":
				return "org.web3d.x3d.jsail.Picking.PointPickSensorObject";
			case "PointSet":
				return "org.web3d.x3d.jsail.Rendering.PointSetObject";
			case "Polyline2D":
				return "org.web3d.x3d.jsail.Geometry2D.Polyline2DObject";
			case "PolylineEmitter":
				return "org.web3d.x3d.jsail.ParticleSystems.PolylineEmitterObject";
			case "Polypoint2D":
				return "org.web3d.x3d.jsail.Geometry2D.Polypoint2DObject";
			case "PositionChaser":
				return "org.web3d.x3d.jsail.Followers.PositionChaserObject";
			case "PositionChaser2D":
				return "org.web3d.x3d.jsail.Followers.PositionChaser2DObject";
			case "PositionDamper":
				return "org.web3d.x3d.jsail.Followers.PositionDamperObject";
			case "PositionDamper2D":
				return "org.web3d.x3d.jsail.Followers.PositionDamper2DObject";
			case "PositionInterpolator":
				return "org.web3d.x3d.jsail.Interpolation.PositionInterpolatorObject";
			case "PositionInterpolator2D":
				return "org.web3d.x3d.jsail.Interpolation.PositionInterpolator2DObject";
			case "PrimitivePickSensor":
				return "org.web3d.x3d.jsail.Picking.PrimitivePickSensorObject";
			case "ProgramShader":
				return "org.web3d.x3d.jsail.Shaders.ProgramShaderObject";
			case "ProjectionVolumeStyle":
				return "org.web3d.x3d.jsail.VolumeRendering.ProjectionVolumeStyleObject";
			case "ProtoInstance":
				return "org.web3d.x3d.jsail.Core.ProtoInstanceObject";
			case "ProximitySensor":
				return "org.web3d.x3d.jsail.EnvironmentalSensor.ProximitySensorObject";
			case "QuadSet":
				return "org.web3d.x3d.jsail.CADGeometry.QuadSetObject";
			case "ReceiverPdu":
				return "org.web3d.x3d.jsail.DIS.ReceiverPduObject";
			case "Rectangle2D":
				return "org.web3d.x3d.jsail.Geometry2D.Rectangle2DObject";
			case "RigidBody":
				return "org.web3d.x3d.jsail.RigidBodyPhysics.RigidBodyObject";
			case "RigidBodyCollection":
				return "org.web3d.x3d.jsail.RigidBodyPhysics.RigidBodyCollectionObject";
			case "ScalarChaser":
				return "org.web3d.x3d.jsail.Followers.ScalarChaserObject";
			case "ScalarDamper":
				return "org.web3d.x3d.jsail.Followers.ScalarDamperObject";
			case "ScalarInterpolator":
				return "org.web3d.x3d.jsail.Interpolation.ScalarInterpolatorObject";
			case "ScreenFontStyle":
				return "org.web3d.x3d.jsail.Layout.ScreenFontStyleObject";
			case "ScreenGroup":
				return "org.web3d.x3d.jsail.Layout.ScreenGroupObject";
			case "Script":
				return "org.web3d.x3d.jsail.Scripting.ScriptObject";
			case "SegmentedVolumeData":
				return "org.web3d.x3d.jsail.VolumeRendering.SegmentedVolumeDataObject";
			case "ShadedVolumeStyle":
				return "org.web3d.x3d.jsail.VolumeRendering.ShadedVolumeStyleObject";
			case "ShaderPart":
				return "org.web3d.x3d.jsail.Shaders.ShaderPartObject";
			case "ShaderProgram":
				return "org.web3d.x3d.jsail.Shaders.ShaderProgramObject";
			case "Shape":
				return "org.web3d.x3d.jsail.Shape.ShapeObject";
			case "SignalPdu":
				return "org.web3d.x3d.jsail.DIS.SignalPduObject";
			case "SilhouetteEnhancementVolumeStyle":
				return "org.web3d.x3d.jsail.VolumeRendering.SilhouetteEnhancementVolumeStyleObject";
			case "SingleAxisHingeJoint":
				return "org.web3d.x3d.jsail.RigidBodyPhysics.SingleAxisHingeJointObject";
			case "SliderJoint":
				return "org.web3d.x3d.jsail.RigidBodyPhysics.SliderJointObject";
			case "Sound":
				return "org.web3d.x3d.jsail.Sound.SoundObject";
			case "Sphere":
				return "org.web3d.x3d.jsail.Geometry3D.SphereObject";
			case "SphereSensor":
				return "org.web3d.x3d.jsail.PointingDeviceSensor.SphereSensorObject";
			case "SplinePositionInterpolator":
				return "org.web3d.x3d.jsail.Interpolation.SplinePositionInterpolatorObject";
			case "SplinePositionInterpolator2D":
				return "org.web3d.x3d.jsail.Interpolation.SplinePositionInterpolator2DObject";
			case "SplineScalarInterpolator":
				return "org.web3d.x3d.jsail.Interpolation.SplineScalarInterpolatorObject";
			case "SpotLight":
				return "org.web3d.x3d.jsail.Lighting.SpotLightObject";
			case "SquadOrientationInterpolator":
				return "org.web3d.x3d.jsail.Interpolation.SquadOrientationInterpolatorObject";
			case "StaticGroup":
				return "org.web3d.x3d.jsail.Grouping.StaticGroupObject";
			case "StringSensor":
				return "org.web3d.x3d.jsail.KeyDeviceSensor.StringSensorObject";
			case "SurfaceEmitter":
				return "org.web3d.x3d.jsail.ParticleSystems.SurfaceEmitterObject";
			case "Switch":
				return "org.web3d.x3d.jsail.Grouping.SwitchObject";
			case "TexCoordChaser2D":
				return "org.web3d.x3d.jsail.Followers.TexCoordChaser2DObject";
			case "TexCoordDamper2D":
				return "org.web3d.x3d.jsail.Followers.TexCoordDamper2DObject";
			case "Text":
				return "org.web3d.x3d.jsail.Text.TextObject";
			case "TextureBackground":
				return "org.web3d.x3d.jsail.EnvironmentalEffects.TextureBackgroundObject";
			case "TextureCoordinate":
				return "org.web3d.x3d.jsail.Texturing.TextureCoordinateObject";
			case "TextureCoordinate3D":
				return "org.web3d.x3d.jsail.Texturing3D.TextureCoordinate3DObject";
			case "TextureCoordinate4D":
				return "org.web3d.x3d.jsail.Texturing3D.TextureCoordinate4DObject";
			case "TextureCoordinateGenerator":
				return "org.web3d.x3d.jsail.Texturing.TextureCoordinateGeneratorObject";
			case "TextureProperties":
				return "org.web3d.x3d.jsail.Texturing.TexturePropertiesObject";
			case "TextureTransform":
				return "org.web3d.x3d.jsail.Texturing.TextureTransformObject";
			case "TextureTransform3D":
				return "org.web3d.x3d.jsail.Texturing3D.TextureTransform3DObject";
			case "TextureTransformMatrix3D":
				return "org.web3d.x3d.jsail.Texturing3D.TextureTransformMatrix3DObject";
			case "TimeSensor":
				return "org.web3d.x3d.jsail.Time.TimeSensorObject";
			case "TimeTrigger":
				return "org.web3d.x3d.jsail.EventUtilities.TimeTriggerObject";
			case "ToneMappedVolumeStyle":
				return "org.web3d.x3d.jsail.VolumeRendering.ToneMappedVolumeStyleObject";
			case "TouchSensor":
				return "org.web3d.x3d.jsail.PointingDeviceSensor.TouchSensorObject";
			case "Transform":
				return "org.web3d.x3d.jsail.Grouping.TransformObject";
			case "TransformSensor":
				return "org.web3d.x3d.jsail.EnvironmentalSensor.TransformSensorObject";
			case "TransmitterPdu":
				return "org.web3d.x3d.jsail.DIS.TransmitterPduObject";
			case "TriangleFanSet":
				return "org.web3d.x3d.jsail.Rendering.TriangleFanSetObject";
			case "TriangleSet":
				return "org.web3d.x3d.jsail.Rendering.TriangleSetObject";
			case "TriangleSet2D":
				return "org.web3d.x3d.jsail.Geometry2D.TriangleSet2DObject";
			case "TriangleStripSet":
				return "org.web3d.x3d.jsail.Rendering.TriangleStripSetObject";
			case "TwoSidedMaterial":
				return "org.web3d.x3d.jsail.Shape.TwoSidedMaterialObject";
			case "UniversalJoint":
				return "org.web3d.x3d.jsail.RigidBodyPhysics.UniversalJointObject";
			case "Viewpoint":
				return "org.web3d.x3d.jsail.Navigation.ViewpointObject";
			case "ViewpointGroup":
				return "org.web3d.x3d.jsail.Navigation.ViewpointGroupObject";
			case "Viewport":
				return "org.web3d.x3d.jsail.Layering.ViewportObject";
			case "VisibilitySensor":
				return "org.web3d.x3d.jsail.EnvironmentalSensor.VisibilitySensorObject";
			case "VolumeData":
				return "org.web3d.x3d.jsail.VolumeRendering.VolumeDataObject";
			case "VolumeEmitter":
				return "org.web3d.x3d.jsail.ParticleSystems.VolumeEmitterObject";
			case "VolumePickSensor":
				return "org.web3d.x3d.jsail.Picking.VolumePickSensorObject";
			case "WindPhysicsModel":
				return "org.web3d.x3d.jsail.ParticleSystems.WindPhysicsModelObject";
			case "WorldInfo":
				return "org.web3d.x3d.jsail.Core.WorldInfoObject";
			case "component":
				return "org.web3d.x3d.jsail.Core.componentObject";
			case "connect":
				return "org.web3d.x3d.jsail.Core.connectObject";
			case "EXPORT":
				return "org.web3d.x3d.jsail.Networking.EXPORTObject";
			case "ExternProtoDeclare":
				return "org.web3d.x3d.jsail.Core.ExternProtoDeclareObject";
			case "field":
				return "org.web3d.x3d.jsail.Core.fieldObject";
			case "fieldValue":
				return "org.web3d.x3d.jsail.Core.fieldValueObject";
			case "head":
				return "org.web3d.x3d.jsail.Core.headObject";
			case "IMPORT":
				return "org.web3d.x3d.jsail.Networking.IMPORTObject";
			case "IS":
				return "org.web3d.x3d.jsail.Core.ISObject";
			case "meta":
				return "org.web3d.x3d.jsail.Core.metaObject";
			case "ProtoBody":
				return "org.web3d.x3d.jsail.Core.ProtoBodyObject";
			case "ProtoDeclare":
				return "org.web3d.x3d.jsail.Core.ProtoDeclareObject";
			case "ProtoInterface":
				return "org.web3d.x3d.jsail.Core.ProtoInterfaceObject";
			case "ROUTE":
				return "org.web3d.x3d.jsail.Core.ROUTEObject";
			case "Scene":
				return "org.web3d.x3d.jsail.Core.SceneObject";
			case "unit":
				return "org.web3d.x3d.jsail.Core.unitObject";
			case "X3D":
				return "org.web3d.x3d.jsail.Core.X3DObject";
			default:
				return "UnknownClassName_" + className;
		}
	}

		
	/** Results log of local validation. */
	protected StringBuilder validationResult = new StringBuilder();

	/**
	 * Add comment as String to contained commentsList.
	 * @param newComment initial value
	 * @return <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
setAttribute method invocations).
	 */
	public abstract X3DConcreteElement addComments (String newComment);

	/**
	 * Add comments as String[] array to contained commentsList.
	 * @param newComments array of comments
	 * @return <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
setAttribute method invocations).
	 */
	public abstract X3DConcreteElement addComments (String[] newComments);

	/**
	 * Add CommentsBlock to element
	 * @param newCommentsBlock block of comments to add
	 * @return <i>this</i> same object to allow sequential method pipelining (i.e. consecutive set method invocations).
	 */
	public abstract X3DConcreteElement addComments (CommentsBlock newCommentsBlock);
				
	/** Get output of results from prior validation, if any
	 * @return validation results (if any)
	 */		
	public String getValidationResult()
	{
		return validationResult.toString();
	}
				
	/**
	 * Recursive method to provide X3D string serialization of this model subgraph, utilizing XML encoding and conforming to X3D Canonical Form.
	 * @see X3DObject#FILE_EXTENSION_X3D
	 * @see X3DObject#FILE_EXTENSION_XML
	 * @see <a href="http://www.web3d.org/documents/specifications/19776-1/V3.3/Part01/X3D_XML.html">X3D XML Encoding</a>
	 * @see <a href="http://www.web3d.org/documents/specifications/19776-3/V3.3/Part03/concepts.html#X3DCanonicalForm">X3D Compressed Binary Encoding: X3D Canonical Form</a>
	 * @return X3D string
	 */
	public String toStringX3D()
	{
		return toStringX3D(0); // apply next method with initial indentation level 0
	}
	
	/**
	 * Recursive method to provide X3D string serialization of this model subgraph, utilizing XML encoding and conforming to X3D Canonical Form.
	 * @param indentLevel number of levels of indentation for this element
	 * @see X3DObject#FILE_EXTENSION_X3D
	 * @see X3DObject#FILE_EXTENSION_XML
	 * @see <a href="http://www.web3d.org/documents/specifications/19776-1/V3.3/Part01/X3D_XML.html">X3D XML Encoding</a>
	 * @see <a href="http://www.web3d.org/documents/specifications/19776-3/V3.3/Part03/concepts.html#X3DCanonicalForm">X3D Compressed Binary Encoding: X3D Canonical Form</a>
	 * @return X3D string
	 */
	abstract public String toStringX3D(int indentLevel); // must be overridden
				
	/**
	 * Recursive method to provide ClassicVRML string serialization.
	 * @see X3DObject#FILE_EXTENSION_CLASSICVRML
	 * @see <a href="http://www.web3d.org/x3d/content/examples/X3dResources.html#VRML">X3D Resources: Virtual Reality Modeling Language (VRML) 97</a>
	 * @see <a href="http://www.web3d.org/documents/specifications/19776-2/V3.3/Part02/X3D_ClassicVRML.html">Extensible 3D (X3D) encodings Part 2: Classic VRML encoding</a>
	 * @see <a href="http://www.web3d.org/documents/specifications/19776-2/V3.3/Part02/grammar.html">Extensible 3D (X3D) encodings Part 2: Classic VRML encoding, Annex A: Grammar</a>
	 * @return ClassicVRML string
	 */
	public String toStringClassicVRML()
	{
		return toStringClassicVRML(0); // apply next method with initial indentation level 0
	}
				
	/**
	 * Recursive method to provide ClassicVRML string serialization.
	 * @param indentLevel number of levels of indentation for this element
	 * @see X3DObject#FILE_EXTENSION_CLASSICVRML
	 * @see <a href="http://www.web3d.org/x3d/content/examples/X3dResources.html#VRML">X3D Resources: Virtual Reality Modeling Language (VRML) 97</a>
	 * @see <a href="http://www.web3d.org/documents/specifications/19776-2/V3.3/Part02/X3D_ClassicVRML.html">Extensible 3D (X3D) encodings Part 2: Classic VRML encoding</a>
	 * @see <a href="http://www.web3d.org/documents/specifications/19776-2/V3.3/Part02/grammar.html">Extensible 3D (X3D) encodings Part 2: Classic VRML encoding, Annex A: Grammar</a>
	 * @return ClassicVRML string
	 */
	abstract public String toStringClassicVRML(int indentLevel); // must be overridden
				
	/**
	 * Recursive method to provide VRML97 string serialization.
	 * @see X3DObject#FILE_EXTENSION_VRML97
	 * @see <a href="http://www.web3d.org/x3d/content/examples/X3dResources.html#VRML">X3D Resources: Virtual Reality Modeling Language (VRML) 97</a>
	 * @see <a href="http://www.web3d.org/documents/specifications/14772/V2.0/index.html">Virtual Reality Modeling Language (VRML) 97 specification</a>
	 * @see <a href="http://www.web3d.org/documents/specifications/14772-1/V2.1/index.html">VRML 97 v2.1 Amendment</a>
	 * @return VRML97 string
	 */
	public String toStringVRML97()
	{
		return toStringVRML97(0); // apply next method with initial indentation level 0
	}
			
	/**
	 * Recursive method to provide VRML97 string serialization.
	 * @param indentLevel number of levels of indentation for this element
	 * @see X3DObject#FILE_EXTENSION_VRML97
	 * @see <a href="http://www.web3d.org/x3d/content/examples/X3dResources.html#VRML">X3D Resources: Virtual Reality Modeling Language (VRML) 97</a>
	 * @see <a href="http://www.web3d.org/documents/specifications/14772/V2.0/index.html">Virtual Reality Modeling Language (VRML) 97 specification</a>
	 * @see <a href="http://www.web3d.org/documents/specifications/14772-1/V2.1/index.html">VRML 97 v2.1 Amendment</a>
	 * @return VRML97 string
	 */	
	abstract public String toStringVRML97(int indentLevel); // must be overridden

	/**
	 * Recursive method to validate this element plus all contained nodes and statements.
	 * @return validation results (if any)
	 */
	abstract public String validate(); // must be overridden
}
