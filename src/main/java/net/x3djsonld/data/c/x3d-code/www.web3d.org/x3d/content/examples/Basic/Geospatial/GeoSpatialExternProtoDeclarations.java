package net.x3djsonld.data;

import org.web3d.x3d.jsail.Core.*;
import org.web3d.x3d.jsail.EnvironmentalEffects.*;
import org.web3d.x3d.jsail.fields.*;
import org.web3d.x3d.jsail.Grouping.*;
import org.web3d.x3d.jsail.Shape.*;

// Javadoc annotations follow, see below for source.
/**
 * <p> GeoVrml Recommendation, Example 1: GeoElevation, using ExternProtoDeclare statements instead of GeoSpatial DTD. </p>
 <p> Related links: <a href="../../../Geospatial/GeoSpatialExternProtoDeclarations.java">GeoSpatialExternProtoDeclarations.java</a> source, <a href="../../../Geospatial/GeoSpatialExternProtoDeclarationsIndex.html" target="_top">GeoSpatialExternProtoDeclarations catalog page</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>, and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;">
        <caption>Scene Meta Information</caption>
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="../../../Geospatial/GeoSpatialExternProtoDeclarations.x3d">GeoSpatialExternProtoDeclarations.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> GeoVrml Recommendation, Example 1: GeoElevation, using ExternProtoDeclare statements instead of GeoSpatial DTD. </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="http://www.ai.sri.com/geovrml/1.0/doc" target="_blank">http://www.ai.sri.com/geovrml/1.0/doc</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> Don Brutzman </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> created </i> </td>
			<td> 22 November 2000 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> modified </i> </td>
			<td> 20 October 2019 </td>
		</tr>
		<tr style="color:burntorange">
			<td style="text-align:right; vertical-align: text-top;"> <i> warning </i> </td>
			<td> Needs further verification work using GeoVrml Recommendation. </td>
		</tr>
		<tr style="color:burntorange">
			<td style="text-align:right; vertical-align: text-top;"> <i> warning </i> </td>
			<td> Unresolved: are set_ and _changed methods needed? </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/Basic/Geospatial/GeoSpatialExternProtoDeclarations.x3d" target="_blank">https://www.web3d.org/x3d/content/examples/Basic/Geospatial/GeoSpatialExternProtoDeclarations.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> generator </i> </td>
			<td> X3D-Edit 3.3, <a href="https://savage.nps.edu/X3D-Edit" target="_blank">https://savage.nps.edu/X3D-Edit</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> license </i> </td>
			<td> <a href="../../../Geospatial/../license.html">../license.html</a> </td>
		</tr>
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center;" colspan="2">  &nbsp; </td>
		</tr>
	</table>

	<p>
		This program uses the
		<a href="https://www.web3d.org/specifications/java/X3DJSAIL.html" target="_blank">X3D Java Scene Access Interface Library (X3DJSAIL)</a>.
		It has been produced using the 
		<a href="https://www.web3d.org/x3d/stylesheets/X3dToJava.xslt" target="_blank">X3dToJava.xslt</a>
		stylesheet to create Java source code from an <code>.x3d</code> model.
	</p>

	* @author Don Brutzman
 */

public class GeoSpatialExternProtoDeclarations
{
	/** Default constructor to create this object. */
	public GeoSpatialExternProtoDeclarations ()
	{
	  initialize();
	}

	/** Create and initialize the X3D model for this object. */
	public final void initialize()
	{
  x3dModel = new X3D().setProfile(X3D.PROFILE_IMMERSIVE).setVersion(X3D.VERSION_3_3)
  .setHead(new head()
    .addMeta(new meta().setName(meta.NAME_TITLE      ).setContent("GeoSpatialExternProtoDeclarations.x3d"))
    .addMeta(new meta().setName(meta.NAME_DESCRIPTION).setContent("GeoVrml Recommendation, Example 1: GeoElevation, using ExternProtoDeclare statements instead of GeoSpatial DTD."))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("http://www.ai.sri.com/geovrml/1.0/doc"))
    .addMeta(new meta().setName(meta.NAME_CREATOR    ).setContent("Don Brutzman"))
    .addMeta(new meta().setName(meta.NAME_CREATED    ).setContent("22 November 2000"))
    .addMeta(new meta().setName(meta.NAME_MODIFIED   ).setContent("20 October 2019"))
    .addMeta(new meta().setName(meta.NAME_WARNING    ).setContent("Needs further verification work using GeoVrml Recommendation."))
    .addMeta(new meta().setName(meta.NAME_WARNING    ).setContent("Unresolved: are set_ and _changed methods needed?"))
    .addMeta(new meta().setName(meta.NAME_IDENTIFIER ).setContent("https://www.web3d.org/x3d/content/examples/Basic/Geospatial/GeoSpatialExternProtoDeclarations.x3d"))
    .addMeta(new meta().setName(meta.NAME_GENERATOR  ).setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
    .addMeta(new meta().setName(meta.NAME_LICENSE    ).setContent("../license.html")))
  .setScene(new Scene()
    .addChild(new WorldInfo().setTitle("GeoSpatialExternProtoDeclarations.x3d"))
    .addChild(new ExternProtoDeclare("GeoCoordinate").setName("GeoCoordinate").setUrl(new String[] {"urn:web3d:geovrml:1.0/protos/GeoCoordinate.wrl#GeoCoordinate","/Program%20Files/GeoVRML/1.0/protos/GeoCoordinate.wrl#GeoCoordinate","http://www.ai.sri.com/geovrml/1.0/protos/GeoCoordinate.wrl#GeoCoordinate"})
      .addField(new field().setName("geoOrigin").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
      .addField(new field().setName("geoSystem").setType(field.TYPE_MFSTRING).setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
      .addField(new field().setName("point").setType(field.TYPE_MFSTRING).setAccessType(field.ACCESSTYPE_INITIALIZEONLY)))
    .addChild(new ExternProtoDeclare("GeoElevationGrid").setName("GeoElevationGrid").setUrl(new String[] {"urn:web3d:geovrml:1.0/protos/GeoElevationGrid.wrl#GeoElevationGrid","/Program%20Files/GeoVRML/1.0/protos/GeoElevationGrid.wrl#GeoElevationGrid","http://www.ai.sri.com/geovrml/1.0/protos/GeoElevationGrid.wrl#GeoElevationGrid"})
      .addField(new field().setName("geoOrigin").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
      .addField(new field().setName("geoSystem").setType(field.TYPE_MFSTRING).setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
      .addField(new field().setName("geoGridOrigin").setType(field.TYPE_SFSTRING).setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
      .addField(new field().setName("xDimension").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
      .addField(new field().setName("xSpacing").setType(field.TYPE_SFSTRING).setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
      .addField(new field().setName("zDimension").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
      .addField(new field().setName("zSpacing").setType(field.TYPE_SFSTRING).setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
      .addField(new field().setName("yScale").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
      .addField(new field().setName("height").setType(field.TYPE_MFFLOAT).setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
      .addField(new field().setName("color").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INPUTOUTPUT))
      .addField(new field().setName("texCoord").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INPUTOUTPUT))
      .addField(new field().setName("normal").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INPUTOUTPUT))
      .addField(new field().setName("normalPerVertex").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
      .addField(new field().setName("ccw").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
      .addField(new field().setName("colorPerVertex").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
      .addField(new field().setName("creaseAngle").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
      .addField(new field().setName("solid").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INITIALIZEONLY)))
    .addComments(" GeoInline replaced by Inline in X3D ")
    .addChild(new ExternProtoDeclare("GeoInline").setName("GeoInline").setUrl(new String[] {"urn:web3d:geovrml:1.0/protos/GeoInline.wrl#GeoInline","/Program%20Files/GeoVRML/1.0/protos/GeoInline.wrl#GeoInline","http://www.ai.sri.com/geovrml/1.0/protos/GeoInline.wrl#GeoInline"})
      .addField(new field().setName("identifier").setType(field.TYPE_MFSTRING).setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
      .addField(new field().setName("url_changed").setType(field.TYPE_MFSTRING).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
      .addField(new field().setName("load").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
      .addField(new field().setName("load_changed").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
      .addField(new field().setName("bboxCenter").setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
      .addField(new field().setName("bboxSize").setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_INITIALIZEONLY)))
    .addChild(new ExternProtoDeclare("GeoLocation").setName("GeoLocation").setUrl(new String[] {"urn:web3d:geovrml:1.0/protos/GeoLocation.wrl#GeoLocation","/Program%20Files/GeoVRML/1.0/protos/GeoLocation.wrl#GeoLocation","http://www.ai.sri.com/geovrml/1.0/protos/GeoLocation.wrl#GeoLocation"})
      .addField(new field().setName("geoOrigin").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
      .addField(new field().setName("geoSystem").setType(field.TYPE_MFSTRING).setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
      .addField(new field().setName("geoCoords").setType(field.TYPE_SFSTRING).setAccessType(field.ACCESSTYPE_INITIALIZEONLY)))
    .addChild(new ExternProtoDeclare("GeoLOD").setName("GeoLOD").setUrl(new String[] {"urn:web3d:geovrml:1.0/protos/GeoLOD.wrl#GeoLOD","/Program%20Files/GeoVRML/1.0/protos/GeoLOD.wrl#GeoLOD","http://www.ai.sri.com/geovrml/1.0/protos/GeoLOD.wrl#GeoLOD"})
      .addField(new field().setName("rootUrl").setType(field.TYPE_MFSTRING).setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
      .addField(new field().setName("rootNode").setType(field.TYPE_MFNODE).setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
      .addField(new field().setName("child1Url").setType(field.TYPE_MFSTRING).setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
      .addField(new field().setName("child2Url").setType(field.TYPE_MFSTRING).setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
      .addField(new field().setName("child3Url").setType(field.TYPE_MFSTRING).setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
      .addField(new field().setName("child4Url").setType(field.TYPE_MFSTRING).setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
      .addField(new field().setName("range").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
      .addField(new field().setName("geoOrigin").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
      .addField(new field().setName("geoSystem").setType(field.TYPE_MFSTRING).setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
      .addField(new field().setName("center").setType(field.TYPE_SFSTRING).setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
      .addField(new field().setName("children").setType(field.TYPE_MFNODE).setAccessType(field.ACCESSTYPE_OUTPUTONLY)))
    .addChild(new ExternProtoDeclare("GeoMetadata").setName("GeoMetadata").setUrl(new String[] {"urn:web3d:geovrml:1.0/protos/GeoMetadata.wrl#GeoMetadata","/Program%20Files/GeoVRML/1.0/protos/GeoMetadata.wrl#GeoMetadata","http://www.ai.sri.com/geovrml/1.0/protos/GeoMetadata.wrl#GeoMetadata"})
      .addField(new field().setName("identifier").setType(field.TYPE_MFSTRING).setAccessType(field.ACCESSTYPE_INPUTOUTPUT))
      .addField(new field().setName("summary").setType(field.TYPE_MFSTRING).setAccessType(field.ACCESSTYPE_INPUTOUTPUT))
      .addField(new field().setName("data").setType(field.TYPE_MFNODE).setAccessType(field.ACCESSTYPE_INPUTOUTPUT)))
    .addChild(new ExternProtoDeclare("GeoOrigin").setName("GeoOrigin").setUrl(new String[] {"urn:web3d:geovrml:1.0/protos/GeoOrigin.wrl#GeoOrigin","/Program%20Files/GeoVRML/1.0/protos/GeoOrigin.wrl#GeoOrigin","http://www.ai.sri.com/geovrml/1.0/protos/GeoOrigin.wrl#GeoOrigin"})
      .addField(new field().setName("geoSystem").setType(field.TYPE_MFSTRING).setAccessType(field.ACCESSTYPE_INPUTOUTPUT))
      .addField(new field().setName("geoCoords").setType(field.TYPE_SFSTRING).setAccessType(field.ACCESSTYPE_INPUTOUTPUT))
      .addField(new field().setName("rotateYUp").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INITIALIZEONLY)))
    .addChild(new ExternProtoDeclare("GeoPositionInterpolator").setName("GeoPositionInterpolator").setUrl(new String[] {"urn:web3d:geovrml:1.0/protos/GeoPositionInterpolator.wrl#GeoPositionInterpolator","/Program%20Files/GeoVRML/1.0/protos/GeoPositionInterpolator.wrl#GeoPositionInterpolator","http://www.ai.sri.com/geovrml/1.0/protos/GeoPositionInterpolator.wrl#GeoPositionInterpolator"})
      .addField(new field().setName("geoOrigin").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
      .addField(new field().setName("geoSystem").setType(field.TYPE_MFSTRING).setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
      .addField(new field().setName("key").setType(field.TYPE_MFFLOAT).setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
      .addField(new field().setName("keyValue").setType(field.TYPE_MFSTRING).setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
      .addField(new field().setName("set_fraction").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INPUTONLY))
      .addField(new field().setName("value_changed").setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
      .addField(new field().setName("geovalue_changed").setType(field.TYPE_SFSTRING).setAccessType(field.ACCESSTYPE_OUTPUTONLY)))
    .addComments(" need GeoTouchSensor ")
    .addChild(new ExternProtoDeclare("GeoViewpoint").setName("GeoViewpoint").setUrl(new String[] {"urn:web3d:geovrml:1.0/protos/GeoViewpoint.wrl#GeoViewpoint","/Program%20Files/GeoVRML/1.0/protos/GeoViewpoint.wrl#GeoViewpoint","http://www.ai.sri.com/geovrml/1.0/protos/GeoViewpoint.wrl#GeoViewpoint"})
      .addField(new field().setName("geoOrigin").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
      .addField(new field().setName("geoSystem").setType(field.TYPE_MFSTRING).setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
      .addField(new field().setName("position").setType(field.TYPE_SFSTRING).setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
      .addField(new field().setName("orientation").setType(field.TYPE_SFROTATION).setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
      .addField(new field().setName("fieldOfView").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INPUTOUTPUT))
      .addField(new field().setName("jump").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INPUTOUTPUT))
      .addField(new field().setName("description").setType(field.TYPE_SFSTRING).setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
      .addField(new field().setName("speed").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
      .addField(new field().setName("set_bind").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INPUTONLY))
      .addField(new field().setName("bindTime").setType(field.TYPE_SFTIME).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
      .addField(new field().setName("isBound").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_OUTPUTONLY)))
    .addChild(new Group()
      .addChild(new Background().setGroundColor(new MFColor(new double[] {0.0,0.0,0.0})).setSkyColor(new MFColor(new double[] {0.1,0.1,0.8})))
      .addChild(new ProtoInstance("GeoViewpoint").setContainerField("children")
        .addFieldValue(new fieldValue().setName("geoSystem").setValue(new String[] {"GD","WE"}))
        .addFieldValue(new fieldValue().setName("position").setValue("\"35.0 70.0 10000000\""))
        .addFieldValue(new fieldValue().setName("orientation").setValue(new SFRotation(1.0,0.0,0.0,-1.57)))
        .addFieldValue(new fieldValue().setName("description").setValue("\"Initial GeoViewpoint\"")))
      .addChild(new Shape()
        .setAppearance(new Appearance()
          .setMaterial(new Material().setDiffuseColor(0.3,1.0,0.3)))
        .setGeometry(new ProtoInstance("GeoElevationGrid").setContainerField("geometry")
          .addFieldValue(new fieldValue().setName("geoSystem").setValue(new String[] {"GD","WE"}))
          .addFieldValue(new fieldValue().setName("geoGridOrigin").setValue("-90 -180 0"))
          .addFieldValue(new fieldValue().setName("xDimension").setValue(21))
          .addFieldValue(new fieldValue().setName("zDimension").setValue(11))
          .addFieldValue(new fieldValue().setName("xSpacing").setValue("18"))
          .addFieldValue(new fieldValue().setName("zSpacing").setValue("18"))
          .addFieldValue(new fieldValue().setName("yScale").setValue(200))
          .addFieldValue(new fieldValue().setName("height").setValue(new double[] {0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,1220.0,3086.0,3135.0,2976.0,2529.0,2135.0,3449.0,2899.0,3190.0,2375.0,1847.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,25.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,142.0,792.0,0.0,0.0,0.0,969.0,0.0,0.0,0.0,0.0,0.0,495.0,276.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,320.0,46.0,60.0,0.0,0.0,0.0,588.0,0.0,0.0,0.0,0.0,0.0,0.0,34.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,301.0,601.0,837.0,627.0,0.0,880.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,202.0,1.0,0.0,0.0,0.0,0.0,1241.0,385.0,6.0,582.0,468.0,215.0,5201.0,529.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,1304.0,427.0,365.0,374.0,0.0,0.0,0.0,1977.0,345.0,22.0,132.0,325.0,2072.0,1256.0,171.0,0.0,0.0,0.0,0.0,706.0,1896.0,464.0,134.0,0.0,0.0,2563.0,0.0,0.0,0.0,143.0,11.0,784.0,88.0,498.0,307.0,108.0,1707.0,576.0,0.0,0.0,0.0,0.0,0.0,0.0,600.0,378.0,1378.0,339.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0}))))));
    }
	// end of initialize() method

	/** The initialized model object, created within initialize() method. */
	private X3D x3dModel;

	/** 
	 * Provide a 
	 * <a href="https://dzone.com/articles/java-copy-shallow-vs-deep-in-which-you-will-swim" target="_blank">shallow copy</a>
	 * of the X3D model.
	 * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/Core/X3D.html">X3D</a>
	 * @return GeoSpatialExternProtoDeclarations model
	 */
	public X3D getX3dModel()
	{	  
		return x3dModel;
	}
	   
    /** 
	 * Default main() method provided for test purposes, uses CommandLine to set global ConfigurationProperties for this object.
     * @param args array of input parameters, provided as arguments
	 * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/Core/X3D.html#handleArguments-java.lang.String:A-">X3D.handleArguments(args)</a>
	 * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/Core/X3D.html#validationReport--">X3D.validationReport()</a>
     * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/CommandLine.html">CommandLine</a>
     * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/CommandLine.html#USAGE">CommandLine.USAGE</a>
     * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/ConfigurationProperties.html">ConfigurationProperties</a>
     */
    public static void main(String args[])
    {
        X3D thisExampleX3dModel = new GeoSpatialExternProtoDeclarations().getX3dModel();

		boolean hasArguments = (args != null) && (args.length > 0);
		boolean validate = true; // default
		boolean argumentsLoadNewModel = false;
		String  fileName = new String();

		if (args != null)
		{
			for (String arg : args)
			{
				if (arg.toLowerCase().startsWith("-v") || arg.toLowerCase().contains("validate"))
				{
					validate = true; // making sure
				}
				if (arg.toLowerCase().endsWith(X3D.FILE_EXTENSION_X3D) ||
					arg.toLowerCase().endsWith(X3D.FILE_EXTENSION_CLASSICVRML) ||
					arg.toLowerCase().endsWith(X3D.FILE_EXTENSION_X3DB) ||
					arg.toLowerCase().endsWith(X3D.FILE_EXTENSION_VRML97) ||
					arg.toLowerCase().endsWith(X3D.FILE_EXTENSION_EXI) ||
					arg.toLowerCase().endsWith(X3D.FILE_EXTENSION_GZIP) ||
					arg.toLowerCase().endsWith(X3D.FILE_EXTENSION_ZIP) ||
					arg.toLowerCase().endsWith(X3D.FILE_EXTENSION_HTML) ||
					arg.toLowerCase().endsWith(X3D.FILE_EXTENSION_XHTML))
				{
					argumentsLoadNewModel = true;
					fileName = arg;
				}
			}
		}
		if      (argumentsLoadNewModel)
			System.out.println("WARNING: \"net.x3djsonld.data.GeoSpatialExternProtoDeclarations\" model invocation is attempting to load file \"" + fileName + "\" instead of simply validating itself... file loading ignored.");
		else if (hasArguments) // if no arguments provided, this method produces usage warning
			thisExampleX3dModel.handleArguments(args);

		if (validate)
		{
			System.out.print("Java program \"net.x3djsonld.data.GeoSpatialExternProtoDeclarations\" self-validation test results: ");
			String validationResults = thisExampleX3dModel.validationReport();
            if (validationResults.startsWith("\n"))
                System.out.println();
			System.out.println(validationResults.trim());
		}
    }
}
