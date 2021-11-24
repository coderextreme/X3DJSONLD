package net.x3djsonld.data;

import org.web3d.x3d.jsail.Core.*;
import org.web3d.x3d.jsail.EnvironmentalEffects.*;
import org.web3d.x3d.jsail.fields.*;
import org.web3d.x3d.jsail.Grouping.*;
import org.web3d.x3d.jsail.Navigation.*;
import org.web3d.x3d.jsail.Shape.*;
import org.web3d.x3d.jsail.Text.*;

// Javadoc annotations follow, see below for source.
/**
 * <p> ExternProto declarations and examples for developmental use showing X3D Geometry2D component nodes (Arc2D ArcClose2D Circle2D Disk2D Polyline2D Polypoint2D Rectangle2D TriangleSet2D), implemented as prototypes for backwards compatibility with VRML 97. Also provides Unfilled ProtoInstance versions of some nodes since FillProperties not possible in VRML 97. 2D nodes are considered particularly helpful for CADPart geometry and building user interfaces such as Heads-Up Displays (HUDs). </p>
 <p> Related links: <a href="../../../development/Geometry2dComponentExternProtos.java">Geometry2dComponentExternProtos.java</a> source, <a href="../../../development/Geometry2dComponentExternProtosIndex.html" target="_top">Geometry2dComponentExternProtos catalog page</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>, and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;">
        <caption>Scene Meta Information</caption>
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="../../../development/Geometry2dComponentExternProtos.x3d">Geometry2dComponentExternProtos.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> ExternProto declarations and examples for developmental use showing X3D Geometry2D component nodes (Arc2D ArcClose2D Circle2D Disk2D Polyline2D Polypoint2D Rectangle2D TriangleSet2D), implemented as prototypes for backwards compatibility with VRML 97. Also provides Unfilled ProtoInstance versions of some nodes since FillProperties not possible in VRML 97. 2D nodes are considered particularly helpful for CADPart geometry and building user interfaces such as Heads-Up Displays (HUDs). </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> Christos Kalogrias, Don Brutzman, Ken Curtin, Duane Davis </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> created </i> </td>
			<td> 16 November 2003 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> modified </i> </td>
			<td> 20 October 2019 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> TODO </i> </td>
			<td> Check Polypoint2D and point rendering order </td>
		</tr>
		<tr style="color:burntorange">
			<td style="text-align:right; vertical-align: text-top;"> <i> warning </i> </td>
			<td> These examples are complete but only used for developmental testing, not regular X3D authoring. </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="../../../development/Geometry2dComponentPrototypes.x3d">Geometry2dComponentPrototypes.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="../../../development/Geometry2dComponentExamples.x3d">Geometry2dComponentExamples.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="https://www.web3d.org/documents/specifications/19775-1/V3.3/Part01/components/geometry2D.html" target="_blank">https://www.web3d.org/documents/specifications/19775-1/V3.3/Part01/components/geometry2D.html</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> subject </i> </td>
			<td> Geometry2D component nodes (Arc2D ArcClose2D Circle2D Disk2D Polyline2D Polypoint2D Rectangle2D TriangleSet2D) </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/Basic/development/Geometry2dComponentExternProtos.x3d" target="_blank">https://www.web3d.org/x3d/content/examples/Basic/development/Geometry2dComponentExternProtos.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> generator </i> </td>
			<td> X3D-Edit 3.3, <a href="https://savage.nps.edu/X3D-Edit" target="_blank">https://savage.nps.edu/X3D-Edit</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> license </i> </td>
			<td> <a href="../../../development/../license.html">../license.html</a> </td>
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

	* @author Christos Kalogrias, Don Brutzman, Ken Curtin, Duane Davis
 */

public class Geometry2dComponentExternProtos
{
	/** Default constructor to create this object. */
	public Geometry2dComponentExternProtos ()
	{
	  initialize();
	}

	/** Create and initialize the X3D model for this object. */
	public final void initialize()
	{
  x3dModel = new X3D().setProfile(X3D.PROFILE_IMMERSIVE).setVersion(X3D.VERSION_3_0)
  .setHead(new head()
    .addMeta(new meta().setName(meta.NAME_TITLE      ).setContent("Geometry2dComponentExternProtos.x3d"))
    .addMeta(new meta().setName(meta.NAME_DESCRIPTION).setContent("ExternProto declarations and examples for developmental use showing X3D Geometry2D component nodes (Arc2D ArcClose2D Circle2D Disk2D Polyline2D Polypoint2D Rectangle2D TriangleSet2D), implemented as prototypes for backwards compatibility with VRML 97. Also provides Unfilled ProtoInstance versions of some nodes since FillProperties not possible in VRML 97. 2D nodes are considered particularly helpful for CADPart geometry and building user interfaces such as Heads-Up Displays (HUDs)."))
    .addMeta(new meta().setName(meta.NAME_CREATOR    ).setContent("Christos Kalogrias, Don Brutzman, Ken Curtin, Duane Davis"))
    .addMeta(new meta().setName(meta.NAME_CREATED    ).setContent("16 November 2003"))
    .addMeta(new meta().setName(meta.NAME_MODIFIED   ).setContent("20 October 2019"))
    .addMeta(new meta().setName(meta.NAME_TODO       ).setContent("Check Polypoint2D and point rendering order"))
    .addMeta(new meta().setName(meta.NAME_WARNING    ).setContent("These examples are complete but only used for developmental testing, not regular X3D authoring."))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("Geometry2dComponentPrototypes.x3d"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("Geometry2dComponentExamples.x3d"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("https://www.web3d.org/documents/specifications/19775-1/V3.3/Part01/components/geometry2D.html"))
    .addMeta(new meta().setName(meta.NAME_SUBJECT    ).setContent("Geometry2D component nodes (Arc2D ArcClose2D Circle2D Disk2D Polyline2D Polypoint2D Rectangle2D TriangleSet2D)"))
    .addMeta(new meta().setName(meta.NAME_IDENTIFIER ).setContent("https://www.web3d.org/x3d/content/examples/Basic/development/Geometry2dComponentExternProtos.x3d"))
    .addMeta(new meta().setName(meta.NAME_GENERATOR  ).setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
    .addMeta(new meta().setName(meta.NAME_LICENSE    ).setContent("../license.html")))
  .setScene(new Scene()
    .addComments(" ==================== ")
    .addComments(" Do not copy these ExternProtoDeclare statements! They are copied automatically to provide backwards compatibility for VRML97 when using X3dToVrml97.xslt stylesheet mappings. ")
    .addComments(" ==================== ")
    .addChild(new WorldInfo().setTitle("Geometry2dComponentExternProtos.x3d"))
    .addChild(new ExternProtoDeclare("Arc2D").setName("Arc2D").setUrl(new String[] {"Geometry2dComponentPrototypes.wrl#Arc2D","https://www.web3d.org/x3d/content/examples/Basic/development/Geometry2dComponentPrototypes.wrl#Arc2D","Geometry2dComponentPrototypes.x3d#Arc2D","https://www.web3d.org/x3d/content/examples/Basic/development/Geometry2dComponentPrototypes.x3d#Arc2D"})
      .addField(new field().setName("startAngle").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
      .addField(new field().setName("endAngle").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
      .addField(new field().setName("radius").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
      .addField(new field().setName("metadata").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INPUTOUTPUT)))
    .addChild(new ExternProtoDeclare("ArcClose2D").setName("ArcClose2D").setUrl(new String[] {"Geometry2dComponentPrototypes.wrl#ArcClose2D","https://www.web3d.org/x3d/content/examples/Basic/development/Geometry2dComponentPrototypes.wrl#ArcClose2D","Geometry2dComponentPrototypes.x3d#ArcClose2D","https://www.web3d.org/x3d/content/examples/Basic/development/Geometry2dComponentPrototypes.x3d#ArcClose2D"})
      .addField(new field().setName("startAngle").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
      .addField(new field().setName("endAngle").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
      .addField(new field().setName("radius").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
      .addField(new field().setName("closureType").setType(field.TYPE_SFSTRING).setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
      .addField(new field().setName("solid").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
      .addField(new field().setName("metadata").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INPUTOUTPUT)))
    .addChild(new ExternProtoDeclare("Circle2D").setName("Circle2D").setUrl(new String[] {"Geometry2dComponentPrototypes.wrl#Circle2D","https://www.web3d.org/x3d/content/examples/Basic/development/Geometry2dComponentPrototypes.wrl#Circle2D","Geometry2dComponentPrototypes.x3d#Circle2D","https://www.web3d.org/x3d/content/examples/Basic/development/Geometry2dComponentPrototypes.x3d#Circle2D"})
      .addField(new field().setName("radius").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
      .addField(new field().setName("solid").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
      .addField(new field().setName("metadata").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INPUTOUTPUT)))
    .addChild(new ExternProtoDeclare("Disk2D").setName("Disk2D").setUrl(new String[] {"Geometry2dComponentPrototypes.wrl#Disk2D","https://www.web3d.org/x3d/content/examples/Basic/development/Geometry2dComponentPrototypes.wrl#Disk2D","Geometry2dComponentPrototypes.x3d#Disk2D","https://www.web3d.org/x3d/content/examples/Basic/development/Geometry2dComponentPrototypes.x3d#Disk2D"})
      .addField(new field().setName("innerRadius").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
      .addField(new field().setName("outerRadius").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
      .addField(new field().setName("solid").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
      .addField(new field().setName("metadata").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INPUTOUTPUT)))
    .addChild(new ExternProtoDeclare("Polyline2D").setName("Polyline2D").setUrl(new String[] {"Geometry2dComponentPrototypes.wrl#Polyline2D","https://www.web3d.org/x3d/content/examples/Basic/development/Geometry2dComponentPrototypes.wrl#Polyline2D","Geometry2dComponentPrototypes.x3d#Polyline2D","https://www.web3d.org/x3d/content/examples/Basic/development/Geometry2dComponentPrototypes.x3d#Polyline2D"})
      .addField(new field().setName("lineSegments").setType(field.TYPE_MFVEC2F).setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
      .addField(new field().setName("solid").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
      .addField(new field().setName("metadata").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INPUTOUTPUT)))
    .addChild(new ExternProtoDeclare("Polypoint2D").setName("Polypoint2D").setUrl(new String[] {"Geometry2dComponentPrototypes.wrl#Polypoint2D","https://www.web3d.org/x3d/content/examples/Basic/development/Geometry2dComponentPrototypes.wrl#Polypoint2D","Geometry2dComponentPrototypes.x3d#Polypoint2D","https://www.web3d.org/x3d/content/examples/Basic/development/Geometry2dComponentPrototypes.x3d#Polypoint2D"})
      .addField(new field().setName("point").setType(field.TYPE_MFVEC2F).setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
      .addField(new field().setName("metadata").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INPUTOUTPUT)))
    .addChild(new ExternProtoDeclare("Rectangle2D").setName("Rectangle2D").setUrl(new String[] {"Geometry2dComponentPrototypes.wrl#Rectangle2D","https://www.web3d.org/x3d/content/examples/Basic/development/Geometry2dComponentPrototypes.wrl#Rectangle2D","Geometry2dComponentPrototypes.x3d#Rectangle2D","https://www.web3d.org/x3d/content/examples/Basic/development/Geometry2dComponentPrototypes.x3d#Rectangle2D"})
      .addField(new field().setName("size").setType(field.TYPE_SFVEC2F).setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
      .addField(new field().setName("solid").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
      .addField(new field().setName("metadata").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INPUTOUTPUT)))
    .addChild(new ExternProtoDeclare("TriangleSet2D").setName("TriangleSet2D").setUrl(new String[] {"Geometry2dComponentPrototypes.wrl#TriangleSet2D","https://www.web3d.org/x3d/content/examples/Basic/development/Geometry2dComponentPrototypes.wrl#TriangleSet2D","Geometry2dComponentPrototypes.x3d#TriangleSet2D","https://www.web3d.org/x3d/content/examples/Basic/development/Geometry2dComponentPrototypes.x3d#TriangleSet2D"})
      .addField(new field().setName("vertices").setType(field.TYPE_MFVEC2F).setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
      .addField(new field().setName("solid").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
      .addField(new field().setName("metadata").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INPUTOUTPUT)))
    .addComments(" ==================== ")
    .addComments(" Additional Unfilled versions since FillProperties node not possible in native VRML 97 ")
    .addComments(" ==================== ")
    .addChild(new ExternProtoDeclare("ArcClose2DUnfilled").setName("ArcClose2DUnfilled").setUrl(new String[] {"Geometry2dComponentPrototypes.wrl#ArcClose2DUnfilled","https://www.web3d.org/x3d/content/examples/Basic/development/Geometry2dComponentPrototypes.wrl#ArcClose2DUnfilled","Geometry2dComponentPrototypes.x3d#ArcClose2DUnfilled","https://www.web3d.org/x3d/content/examples/Basic/development/Geometry2dComponentPrototypes.x3d#ArcClose2DUnfilled"})
      .addField(new field().setName("startAngle").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
      .addField(new field().setName("endAngle").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
      .addField(new field().setName("radius").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
      .addField(new field().setName("closureType").setType(field.TYPE_SFSTRING).setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
      .addField(new field().setName("solid").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
      .addField(new field().setName("metadata").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INPUTOUTPUT)))
    .addChild(new ExternProtoDeclare("Rectangle2DUnfilled").setName("Rectangle2DUnfilled").setUrl(new String[] {"Geometry2dComponentPrototypes.wrl#Rectangle2DUnfilled","https://www.web3d.org/x3d/content/examples/Basic/development/Geometry2dComponentPrototypes.wrl#Rectangle2DUnfilled","Geometry2dComponentPrototypes.x3d#Rectangle2DUnfilled","https://www.web3d.org/x3d/content/examples/Basic/development/Geometry2dComponentPrototypes.x3d#Rectangle2DUnfilled"})
      .addField(new field().setName("size").setType(field.TYPE_SFVEC2F).setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
      .addField(new field().setName("solid").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
      .addField(new field().setName("metadata").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INPUTOUTPUT)))
    .addComments(" ==================== ")
    .addComments(" ==================== ")
    .addChild(new Background().setGroundColor(new MFColor(new double[] {0.3,0.3,0.3})).setSkyColor(new MFColor(new double[] {0.3,0.3,0.3})))
    .addChild(new Viewpoint().setDescription("Geometry2D Component Examples").setPosition(0.0,0.0,12.0))
    .addComments(" ==================== ")
    .addComments(" Top row ")
    .addChild(new Transform().setTranslation(-5.0,2.0,0.0)
      .addChild(new Shape()
        .setGeometry(new ProtoInstance("ArcClose2D").setContainerField("geometry")
          .addFieldValue(new fieldValue().setName("closureType").setValue("PIE"))
          .addFieldValue(new fieldValue().setName("startAngle").setValue(0.7))
          .addFieldValue(new fieldValue().setName("endAngle").setValue(3))
          .addFieldValue(new fieldValue().setName("radius").setValue(1)))
        .setAppearance(new Appearance()
          .setMaterial(new Material().setDiffuseColor(0.0,0.0,1.0)))))
    .addChild(new Transform("ArcClose2DUnfilledTransform").setTranslation(-2.5,2.0,0.0)
      .addChild(new Shape()
        .setGeometry(new ProtoInstance("ArcClose2DUnfilled").setContainerField("geometry")
          .addFieldValue(new fieldValue().setName("closureType").setValue("PIE"))
          .addFieldValue(new fieldValue().setName("startAngle").setValue(0.7))
          .addFieldValue(new fieldValue().setName("endAngle").setValue(3))
          .addFieldValue(new fieldValue().setName("radius").setValue(1)))
        .setAppearance(new Appearance()
          .setMaterial(new Material().setEmissiveColor(0.2,0.2,1.0)))))
    .addChild(new Transform().setTranslation(-0.5,2.0,0.0)
      .addChild(new Shape()
        .setGeometry(new ProtoInstance("Arc2D").setContainerField("geometry")
          .addFieldValue(new fieldValue().setName("startAngle").setValue(0))
          .addFieldValue(new fieldValue().setName("endAngle").setValue(1.570796))
          .addFieldValue(new fieldValue().setName("radius").setValue(1)))
        .setAppearance(new Appearance()
          .setMaterial(new Material().setEmissiveColor(1.0,1.0,0.0)))))
    .addChild(new Transform().setTranslation(2.0,2.0,0.0)
      .addChild(new Shape()
        .setGeometry(new ProtoInstance("Circle2D").setContainerField("geometry")
          .addFieldValue(new fieldValue().setName("radius").setValue(1)))
        .setAppearance(new Appearance()
          .setMaterial(new Material().setEmissiveColor(1.0,0.0,0.0)))))
    .addChild(new Transform().setTranslation(5.0,2.0,0.0)
      .addChild(new Shape()
        .setGeometry(new ProtoInstance("Disk2D").setContainerField("geometry")
          .addFieldValue(new fieldValue().setName("innerRadius").setValue(0.5))
          .addFieldValue(new fieldValue().setName("outerRadius").setValue(1)))
        .setAppearance(new Appearance()
          .setMaterial(new Material().setDiffuseColor(0.5,1.0,1.0)))))
    .addComments(" ==================== ")
    .addComments(" Bottom row ")
    .addChild(new Transform().setTranslation(-5.0,-2.0,0.0)
      .addChild(new Shape()
        .setGeometry(new ProtoInstance("Rectangle2D").setContainerField("geometry")
          .addFieldValue(new fieldValue().setName("size").setValue(new SFVec2f(1.0,2.0))))
        .setAppearance(new Appearance()
          .setMaterial(new Material().setDiffuseColor(1.0,0.0,0.0)))))
    .addChild(new Transform("RectangleUnfilled").setTranslation(-3.0,-2.0,0.0)
      .addChild(new Shape()
        .setGeometry(new ProtoInstance("Rectangle2DUnfilled").setContainerField("geometry")
          .addFieldValue(new fieldValue().setName("size").setValue(new SFVec2f(1.0,2.0))))
        .setAppearance(new Appearance()
          .setMaterial(new Material().setEmissiveColor(1.0,0.2,0.2)))))
    .addChild(new Transform().setTranslation(-0.5,-2.0,0.0)
      .addChild(new Shape()
        .setGeometry(new ProtoInstance("Polyline2D").setContainerField("geometry")
          .addFieldValue(new fieldValue().setName("lineSegments").setValue(new MFVec2f(new MFVec2f(new double[] {-1.0,0.0,-0.5,1.0,0.0,0.0,0.5,1.0,1.0,0.0})))))
        .setAppearance(new Appearance()
          .setMaterial(new Material().setDiffuseColor(0.0,0.0,0.0).setEmissiveColor(1.0,0.5,1.0)))))
    .addChild(new Transform().setTranslation(2.5,-2.0,0.0)
      .addChild(new Shape()
        .setGeometry(new ProtoInstance("Polypoint2D").setContainerField("geometry")
          .addFieldValue(new fieldValue().setName("point").setValue(new MFVec2f(new MFVec2f(new double[] {-1.0,0.0,-0.5,1.0,0.0,0.0,0.5,1.0,1.0,0.0})))))
        .setAppearance(new Appearance()
          .setMaterial(new Material().setEmissiveColor(1.0,1.0,1.0))))
      .addChild(new Transform().setTranslation(0.0,0.5,-0.5)
        .addChild(new Shape()
          .setGeometry(new ProtoInstance("Rectangle2D", "BackDrop").setContainerField("geometry")
            .addFieldValue(new fieldValue().setName("size").setValue(new SFVec2f(2.5,2.0))))
          .setAppearance(new Appearance()
            .setMaterial(new Material().setDiffuseColor(0.0,0.0,0.0))))
        .addChild(new Transform().setTranslation(0.0,-0.15,0.2)
          .addChild(new Shape()
            .setGeometry(new Text().setString(new String[] {"PolyPoint2D","5 points"})
              .setFontStyle(new FontStyle().setJustify(FontStyle.JUSTIFY_MIDDLE_MIDDLE).setSize(0.25).setCssStyle("BOLD")))
            .setAppearance(new Appearance()
              .setMaterial(new Material()))))))
    .addChild(new Transform().setTranslation(5.0,-2.0,0.0)
      .addChild(new Shape()
        .setGeometry(new ProtoInstance("TriangleSet2D").setContainerField("geometry")
          .addFieldValue(new fieldValue().setName("vertices").setValue(new MFVec2f(new MFVec2f(new double[] {0.0,0.0,1.0,1.0,-1.0,1.0,0.0,0.0,1.0,0.5,1.0,-0.5,0.0,0.0,-1.0,-2.0,-2.0,-1.0})))))
        .setAppearance(new Appearance()
          .setFillProperties(new FillProperties("TestFillProperties"))
          .setLineProperties(new LineProperties("TestLineProperties").setLinewidthScaleFactor(1)
            .setMetadata(new MetadataString("TestLinePropertiesMetaData").setName("test LineProperties metadata child")))
          .setMaterial(new Material().setDiffuseColor(0.0,1.0,0.0))))));
    }
	// end of initialize() method

	/** The initialized model object, created within initialize() method. */
	private X3D x3dModel;

	/** 
	 * Provide a 
	 * <a href="https://dzone.com/articles/java-copy-shallow-vs-deep-in-which-you-will-swim" target="_blank">shallow copy</a>
	 * of the X3D model.
	 * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/Core/X3D.html">X3D</a>
	 * @return Geometry2dComponentExternProtos model
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
        X3D thisExampleX3dModel = new Geometry2dComponentExternProtos().getX3dModel();

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
			System.out.println("WARNING: \"net.x3djsonld.data.Geometry2dComponentExternProtos\" model invocation is attempting to load file \"" + fileName + "\" instead of simply validating itself... file loading ignored.");
		else if (hasArguments) // if no arguments provided, this method produces usage warning
			thisExampleX3dModel.handleArguments(args);

		if (validate)
		{
			System.out.print("Java program \"net.x3djsonld.data.Geometry2dComponentExternProtos\" self-validation test results: ");
			String validationResults = thisExampleX3dModel.validationReport();
            if (validationResults.startsWith("\n"))
                System.out.println();
			System.out.println(validationResults.trim());
		}
    }
}
