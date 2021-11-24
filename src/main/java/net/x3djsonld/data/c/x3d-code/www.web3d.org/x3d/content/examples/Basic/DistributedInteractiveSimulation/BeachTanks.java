package net.x3djsonld.data;

import org.web3d.x3d.jsail.Core.*;
import org.web3d.x3d.jsail.fields.*;
import org.web3d.x3d.jsail.Geometry3D.*;
import org.web3d.x3d.jsail.Grouping.*;
import org.web3d.x3d.jsail.Interpolation.*;
import org.web3d.x3d.jsail.Lighting.*;
import org.web3d.x3d.jsail.Navigation.*;
import org.web3d.x3d.jsail.Networking.*;
import org.web3d.x3d.jsail.Rendering.*;
import org.web3d.x3d.jsail.Shape.*;
import org.web3d.x3d.jsail.Texturing.*;
import org.web3d.x3d.jsail.Time.*;

// Javadoc annotations follow, see below for source.
/**
 * <p> NPS beach-site old sewage treatment tanks. Dimensions (127, 20, 35) feet = (38.3, 6.1, 10.7) meters. </p>
 <p> Related links: <a href="../../../DistributedInteractiveSimulation/BeachTanks.java">BeachTanks.java</a> source, <a href="../../../DistributedInteractiveSimulation/BeachTanksIndex.html" target="_top">BeachTanks catalog page</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>, and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;">
        <caption>Scene Meta Information</caption>
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="../../../DistributedInteractiveSimulation/BeachTanks.x3d">BeachTanks.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> NPS beach-site old sewage treatment tanks. Dimensions (127, 20, 35) feet = (38.3, 6.1, 10.7) meters. </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> Don Brutzman </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> created </i> </td>
			<td> 1 July 2001 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> translated </i> </td>
			<td> 12 August 2003 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> modified </i> </td>
			<td> 28 November 2019 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> BeachTanks.original.wrl </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> SingleTankDimensions.png </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/Basic/DistributedInteractiveSimulation/BeachTanks.x3d" target="_blank">https://www.web3d.org/x3d/content/examples/Basic/DistributedInteractiveSimulation/BeachTanks.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> generator </i> </td>
			<td> Cosmo Worlds V2.0 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> translator </i> </td>
			<td> Xeena VRML importer, X3D-Edit 3.1, <a href="https://www.web3d.org/x3d/content/README.X3D-Edit.html" target="_blank">https://www.web3d.org/x3d/content/README.X3D-Edit.html</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> generator </i> </td>
			<td> Vrml97ToX3dNist, <a href="http://ovrt.nist.gov/v2_x3d.html" target="_blank">http://ovrt.nist.gov/v2_x3d.html</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> generator </i> </td>
			<td> X3D-Edit 3.3, <a href="https://savage.nps.edu/X3D-Edit" target="_blank">https://savage.nps.edu/X3D-Edit</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> license </i> </td>
			<td> <a href="../../../DistributedInteractiveSimulation/../license.html">../license.html</a> </td>
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

public class BeachTanks
{
	/** Default constructor to create this object. */
	public BeachTanks ()
	{
	  initialize();
	}

	/** Create and initialize the X3D model for this object. */
	public final void initialize()
	{
  x3dModel = new X3D().setProfile(X3D.PROFILE_IMMERSIVE).setVersion(X3D.VERSION_3_0)
  .setHead(new head()
    .addMeta(new meta().setName(meta.NAME_TITLE      ).setContent("BeachTanks.x3d"))
    .addMeta(new meta().setName(meta.NAME_DESCRIPTION).setContent("NPS beach-site old sewage treatment tanks. Dimensions (127, 20, 35) feet = (38.3, 6.1, 10.7) meters."))
    .addMeta(new meta().setName(meta.NAME_CREATOR    ).setContent("Don Brutzman"))
    .addMeta(new meta().setName(meta.NAME_CREATED    ).setContent("1 July 2001"))
    .addMeta(new meta().setName(meta.NAME_TRANSLATED ).setContent("12 August 2003"))
    .addMeta(new meta().setName(meta.NAME_MODIFIED   ).setContent("28 November 2019"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("BeachTanks.original.wrl"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("SingleTankDimensions.png"))
    .addMeta(new meta().setName(meta.NAME_IDENTIFIER ).setContent("https://www.web3d.org/x3d/content/examples/Basic/DistributedInteractiveSimulation/BeachTanks.x3d"))
    .addMeta(new meta().setName(meta.NAME_GENERATOR  ).setContent("Cosmo Worlds V2.0"))
    .addMeta(new meta().setName(meta.NAME_TRANSLATOR ).setContent("Xeena VRML importer, X3D-Edit 3.1, https://www.web3d.org/x3d/content/README.X3D-Edit.html"))
    .addMeta(new meta().setName(meta.NAME_GENERATOR  ).setContent("Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html"))
    .addMeta(new meta().setName(meta.NAME_GENERATOR  ).setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
    .addMeta(new meta().setName(meta.NAME_LICENSE    ).setContent("../license.html")))
  .setScene(new Scene()
    .addChild(new WorldInfo().setInfo(new String[] {"NPS Beach Tanks"}).setTitle("BeachTanks.x3d"))
    .addChild(new PointLight().setLocation(0.0,1.62486,1.36244))
    .addComments(" ==================== ")
    .addChild(new ExternProtoDeclare("GridXZ").setName("GridXZ").setAppinfo("Line grid authoring tool to enable precise measurement of objects in 3D space - fixed position. Oriented along XZ plane size 20m by 20m.").setUrl(new String[] {"../../Savage/Tools/Authoring/GridXZPrototype.x3d#GridXZ","https://savage.nps.edu/Savage/Tools/Authoring/GridXZPrototype.x3d#GridXZ","../../Savage/Tools/Authoring/GridXZPrototype.wrl#GridXZ","https://savage.nps.edu/Savage/Tools/Authoring/GridXZPrototype.wrl#GridXZ"})
      .addField(new field().setName("description").setType(field.TYPE_SFSTRING).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setAppinfo("Purpose of this grid displayed for overall Viewpoint"))
      .addField(new field().setName("labelColor").setType(field.TYPE_SFCOLOR).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("color for descriptive labels at grid edges and corners"))
      .addField(new field().setName("scale").setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("default unscaled size: 10m by 10m"))
      .addField(new field().setName("labelsOffset").setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("label location offset (in meters) to improve readability"))
      .addField(new field().setName("originLabel").setType(field.TYPE_MFSTRING).setAccessType(field.ACCESSTYPE_INPUTOUTPUT))
      .addField(new field().setName("WestLabel").setType(field.TYPE_MFSTRING).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("-X axis"))
      .addField(new field().setName("NorthWestLabel").setType(field.TYPE_MFSTRING).setAccessType(field.ACCESSTYPE_INPUTOUTPUT))
      .addField(new field().setName("NorthLabel").setType(field.TYPE_MFSTRING).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("-Z axis"))
      .addField(new field().setName("NorthEastLabel").setType(field.TYPE_MFSTRING).setAccessType(field.ACCESSTYPE_INPUTOUTPUT))
      .addField(new field().setName("EastLabel").setType(field.TYPE_MFSTRING).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("+X axis"))
      .addField(new field().setName("SouthEastLabel").setType(field.TYPE_MFSTRING).setAccessType(field.ACCESSTYPE_INPUTOUTPUT))
      .addField(new field().setName("SouthLabel").setType(field.TYPE_MFSTRING).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("+Z axis"))
      .addField(new field().setName("SouthWestLabel").setType(field.TYPE_MFSTRING).setAccessType(field.ACCESSTYPE_INPUTOUTPUT)))
    .addComments(" ==================== ")
    .addChild(new Transform().setTranslation(20.0,0.0,20.0)
      .addChild(new Switch("AuthoringAssist").setWhichChoice(1)
        .addChild(new Inline().setUrl(new String[] {"../../Savage/Tools/Authoring/GridXZ_20x20Movable.x3d","https://savage.nps.edu/Savage/Tools/Authoring/GridXZ_20x20Movable.x3d","../../Savage/Tools/Authoring/GridXZ_20x20Movable.wrl","https://savage.nps.edu/Savage/Tools/Authoring/GridXZ_20x20Movable.wrl"}))
        .addChild(new ProtoInstance("GridXZ").setContainerField("children")
          .addFieldValue(new fieldValue().setName("description").setValue("GridXZ for AUV Beach Tanks"))
          .addFieldValue(new fieldValue().setName("labelColor").setValue(new SFColor(1.0,1.0,1.0)))
          .addFieldValue(new fieldValue().setName("scale").setValue(new SFVec3f(2.0,1.0,2.0)))
          .addFieldValue(new fieldValue().setName("labelsOffset").setValue(new SFVec3f(0.0,2.0,0.0)))
          .addFieldValue(new fieldValue().setName("originLabel").setValue(new String[] {"20 0 20","|"}))
          .addFieldValue(new fieldValue().setName("WestLabel").setValue(new String[] {"20 0 0 ","|"}))
          .addFieldValue(new fieldValue().setName("NorthWestLabel").setValue(new String[] {"40 0 0 ","|"}))
          .addFieldValue(new fieldValue().setName("NorthLabel").setValue(new String[] {"40 0 20","|"}))
          .addFieldValue(new fieldValue().setName("NorthEastLabel").setValue(new String[] {"40 0 40","|"}))
          .addFieldValue(new fieldValue().setName("EastLabel").setValue(new String[] {"20 0 40","|"}))
          .addFieldValue(new fieldValue().setName("SouthEastLabel").setValue(new String[] {" 0 0 40","|"}))
          .addFieldValue(new fieldValue().setName("SouthLabel").setValue(new String[] {" 0 0 20","|"}))
          .addFieldValue(new fieldValue().setName("SouthWestLabel").setValue(new String[] {"0 0 0","|"})))))
    .addComments(" ==================== ")
    .addChild(new Transform().setScale(4.6,4.6,4.6).setTranslation(22.0,-6.0,12.6)
      .addChild(new Transform().setTranslation(-0.231212,1.19209E-7,-0.445523)
        .addChild(new Transform("_0").setRotation(0.0,0.0,1.0,4.71239).setScale(0.25,0.25,0.25).setTranslation(0.25,0.7625,3.14552)
          .addChild(new Shape()
            .setAppearance(new Appearance()
              .setMaterial(new Material("_1"))
              .setTexture(new ImageTexture("_2").setUrl(new String[] {"dirt4.gif","https://www.web3d.org/x3d/content/examples/Basic/DistributedInteractiveSimulation/dirt4.gif"})))
            .setGeometry(new IndexedFaceSet().setCreaseAngle(0.5).setCoordIndex(new int[] {0,1,3,2,-1,4,5,7,6,-1,6,7,1,0,-1,2,3,5,4,-1,6,0,2,4,-1,1,7,5,3,-1}).setTexCoordIndex(new int[] {0,1,2,3,-1,0,1,2,3,-1,0,1,2,3,-1,0,1,2,3,-1,0,1,2,3,-1,0,1,2,3,-1})
              .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {-3.05,19.35,0.1,-3.05,-19.35,0.1,3.05,19.35,0.1,3.05,-19.35,0.1,3.05,19.35,-0.1,3.05,-19.35,-0.1,-3.05,19.35,-0.1,-3.05,-19.35,-0.1})))
              .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f(new double[] {0.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0})))))))
      .addChild(new Transform().setTranslation(-0.231309,4.76837E-7,-3.17052)
        .addChild(new Transform().setUSE("_0")))
      .addChild(new Transform()
        .addChild(new Transform("_4").setRotation(0.57735,0.57735,0.57735,2.09439).setScale(0.25,0.25,0.25).setTranslation(-4.79385,0.762498,1.3375)
          .addChild(new Shape()
            .setAppearance(new Appearance()
              .setMaterial(new Material().setUSE("_1"))
              .setTexture(new ImageTexture().setUSE("_2")))
            .setGeometry(new IndexedFaceSet().setCreaseAngle(0.5).setCoordIndex(new int[] {0,1,3,2,-1,4,5,7,6,-1,6,7,1,0,-1,2,3,5,4,-1,6,0,2,4,-1,1,7,5,3,-1}).setTexCoordIndex(new int[] {0,1,2,3,-1,0,1,2,3,-1,0,1,2,3,-1,0,1,2,3,-1,0,1,2,3,-1,0,1,2,3,-1})
              .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {-3.05,5.35,0.1,-3.05,-5.35,0.1,3.05,5.35,0.1,3.05,-5.35,0.1,3.05,5.35,-0.1,3.05,-5.35,-0.1,-3.05,5.35,-0.1,-3.05,-5.35,-0.1})))
              .setTexCoord(new TextureCoordinate("RectangularMapping").setPoint(new MFVec2f(new double[] {0.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0})))))))
      .addChild(new Transform().setTranslation(9.62386,2.02656E-6,3.57628E-6)
        .addChild(new Transform().setUSE("_4")))
      .addChild(new Transform().setTranslation(8.55684E-4,2.86102E-6,2.72476)
        .addChild(new Transform().setUSE("_4")))
      .addChild(new Transform().setTranslation(9.62471,4.88758E-6,2.72476)
        .addChild(new Transform().setUSE("_4")))
      .addChild(new Transform().setTranslation(-0.230357,2.98023E-6,2.27924)
        .addChild(new Transform().setUSE("_0")))
      .addChild(new Transform().setTranslation(-6.85215E-4,0.0,-2.72525)
        .addChild(new Transform().setUSE("_4")))
      .addChild(new Transform().setTranslation(-0.231994,4.76837E-7,-5.89578)
        .addChild(new Transform().setUSE("_0")))
      .addChild(new Transform().setTranslation(9.62317,2.02656E-6,-2.72525)
        .addChild(new Transform().setUSE("_4")))
      .addChild(new Transform("LongWalkways").setTranslation(0.0,-0.025,0.0)
        .addChild(new Transform().setRotation(1.0,0.0,0.0,1.57079).setScale(0.25,0.325231,0.25).setTranslation(0.0169573,1.55,-0.0232847)
          .addChild(new Shape()
            .setAppearance(new Appearance()
              .setMaterial(new Material().setAmbientIntensity(0.230769).setDiffuseColor(0.52,0.32,0.25).setShininess(0.93).setSpecularColor(0.53,0.53,0.53))
              .setTexture(new ImageTexture("_6").setUrl(new String[] {"hex.jpg","https://www.web3d.org/x3d/content/examples/Basic/DistributedInteractiveSimulation/hex.jpg"})))
            .setGeometry(new Box().setSize(38.7,2.07,0.2))))
        .addChild(new Transform().setRotation(1.0,0.0,0.0,4.71239).setScale(0.25,0.52247,0.25).setTranslation(0.0186882,1.55,2.7021)
          .addChild(new Shape()
            .setAppearance(new Appearance()
              .setMaterial(new Material().setAmbientIntensity(0.230769).setDiffuseColor(0.52,0.32,0.25).setShininess(0.93).setSpecularColor(0.53,0.53,0.53))
              .setTexture(new ImageTexture().setUSE("_6")))
            .setGeometry(new Box().setSize(38.7,0.77,0.2)))))
      .addChild(new Transform().setScale(1.25695,1.0,1.0).setTranslation(-0.613655,0.0,0.0)
        .addChild(new Transform("_7").setRotation(0.577349,0.57735,0.577351,4.18879).setScale(0.247522,0.25,0.25).setTranslation(2.39002,1.55,4.12235)
          .addChild(new Shape()
            .setAppearance(new Appearance()
              .setMaterial(new Material().setAmbientIntensity(0.0).setDiffuseColor(0.3,0.3,0.3).setEmissiveColor(0.15,0.15,0.15).setSpecularColor(0.5,0.5,0.5))
              .setTexture(new ImageTexture().setUSE("_6")))
            .setGeometry(new IndexedFaceSet().setCreaseAngle(0.5).setCoordIndex(new int[] {15,14,4,5,13,12,7,6,-1,6,7,1,0,-1,2,3,5,4,-1,0,1,9,8,-1,9,10,11,8,-1,10,3,2,11,-1,9,1,7,12,-1,10,13,5,3,-1,11,2,4,14,-1,6,0,8,15,-1,17,16,18,19,-1,16,17,10,9,-1,18,16,9,12,-1,19,18,12,13,-1,17,19,13,10,-1,20,21,22,23,-1,21,20,8,11,-1,22,21,11,14,-1,23,22,14,15,-1,20,23,15,8,-1}).setTexCoordIndex(new int[] {6,4,0,1,5,4,2,3,-1,0,1,2,3,-1,0,1,2,3,-1,0,1,5,4,-1,5,7,6,4,-1,7,3,2,6,-1,4,0,1,5,-1,6,7,2,3,-1,7,2,3,6,-1,0,1,5,4,-1,6,4,5,7,-1,4,6,6,4,-1,5,4,4,5,-1,7,5,5,7,-1,6,7,7,6,-1,5,7,6,4,-1,7,5,5,7,-1,6,7,7,6,-1,4,6,6,4,-1,5,4,4,5,-1})
              .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {-5.35,0.61,0.1,-5.35,-0.61,0.1,5.35,0.61,0.1,5.35,-0.61,0.1,5.35,0.61,-0.1,5.35,-0.61,-0.1,-5.35,0.61,-0.1,-5.35,-0.61,-0.1,-1.05193,0.61,0.1,-1.05193,-0.61,0.1,0.836004,-0.61,0.1,0.835993,0.61,0.1,-1.05193,-0.61,-0.1,0.841128,-0.610626,-0.0989307,0.835993,0.61,-0.1,-1.05193,0.61,-0.1,-1.05199,-0.956541,0.100583,0.835941,-0.956541,0.100583,-1.05199,-0.956541,-0.0994172,0.841065,-0.957167,-0.0983479,-1.05193,0.942793,0.0999999,0.83599,0.942793,0.0999999,0.835989,0.942793,-0.1,-1.05193,0.942793,-0.1})))
              .setTexCoord(new TextureCoordinate().setUSE("RectangularMapping"))))))
      .addChild(new Transform().setScale(1.0,1.0,0.893756).setTranslation(-0.00564504,0.0,-2.26582)
        .addChild(new Transform().setUSE("_7")))
      .addChild(new Transform().setScale(1.0,1.0,0.942275).setTranslation(-0.00696254,0.0,-5.41092)
        .addChild(new Transform().setUSE("_7")))
      .addChild(new Transform().setTranslation(-4.76171,0.0,0.00510687)
        .addChild(new Transform().setUSE("_7")))
      .addChild(new Transform().setScale(1.0,1.0,0.893756).setTranslation(-4.76735,0.0,-2.26071)
        .addChild(new Transform().setUSE("_7")))
      .addChild(new Transform().setScale(1.0,1.0,0.942275).setTranslation(-4.76867,0.0,-5.40581)
        .addChild(new Transform().setUSE("_7")))
      .addChild(new Transform().setRotation(-1.0,.498861E-11,-0.440486E-11,1.57079).setScale(0.246032,0.253973,0.25).setTranslation(3.05619E-8,0.0249995,1.33348)
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0.116667).setDiffuseColor(0.28,0.42,0.6).setEmissiveColor(0.14,0.22,0.31).setShininess(0.54).setSpecularColor(0.32,0.4,0.4)))
          .setGeometry(new Box().setSize(38.7,32.1,0.2))))
      .addChild(new Group()
        .addChild(new Viewpoint().setDescription("towards ocean").setOrientation(-0.786685E-5,0.925611,0.378476,3.13775).setPosition(0.0472176,7.51329,-6.11978))
        .addChild(new Viewpoint().setDescription("towards hotel").setOrientation(-0.260603,-0.929755,-0.260081,1.64157).setPosition(-8.52449,5.69685,1.02696))
        .addChild(new Viewpoint().setDescription("towards building").setOrientation(-0.999652,-0.0250519,-0.00823059,0.635059).setPosition(-0.114891,6.43827,9.05423))
        .addChild(new Viewpoint().setDescription("towards sand dunes").setOrientation(-0.261841,0.928458,0.263449,1.65106).setPosition(8.77076,5.35957,1.40753))
        .addChild(new Viewpoint().setDescription("standing on plank").setOrientation(-0.179786,-0.967204,-0.179427,1.60213).setPosition(-2.51286,1.76634,1.40119)))
      .addChild(new Transform("_9").setCenter(0.0,0.0,-1.60187E-7).setRotation(0.0,0.707107,0.707107,3.14159).setScale(0.246032,0.253973,0.25).setTranslation(-0.0156405,1.26788,1.35101)
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0.0).setDiffuseColor(0.5,0.5,0.5).setShininess(0.02).setSpecularColor(0.05,0.13,1.0).setTransparency(0.5)))
          .setGeometry(new Box().setSize(38.7,32.1,0.2)))
        .addChild(new Group("WaterLevelAnimation")
          .addChild(new TimeSensor("UnnamedAnimation0Time_11").setCycleInterval(10).setEnabled(false).setLoop(true))
          .addChild(new PositionInterpolator("UnnamedTransformTranslationInterp_12").setKey(new double[] {0.0,0.025,0.05,0.075,0.1,0.125,0.15,0.175,0.2,0.225,0.25,0.275,0.3,0.325,0.35,0.375,0.4,0.425,0.45,0.475,0.5,0.525,0.55,0.575,0.6,0.625,0.65,0.675,0.7,0.725,0.75,0.775,0.8,0.825,0.85,0.875,0.9,0.925,0.95,0.975,1.0}).setKeyValue(getUnnamedTransformTranslationInterp_12_6_131_keyValue()))
          .addChild(new ROUTE().setFromNode("UnnamedAnimation0Time_11").setFromField("fraction_changed").setToNode("UnnamedTransformTranslationInterp_12").setToField("set_fraction"))
          .addChild(new ROUTE().setFromNode("UnnamedTransformTranslationInterp_12").setFromField("value_changed").setToNode("_9").setToField("set_translation")))))
    .addComments(" ==================== ")
    .addChild(new Transform().setTranslation(0.0,1.1,0.0)
      .addChild(new Transform().setScale(2.0,2.0,2.0).setTranslation(0.0,0.25,0.0)
        .addChild(new Inline("CoordinateAxes").setUrl(new String[] {"../../X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.x3d","../../Savage/Tools/Authoring/CoordinateAxes.x3d","https://X3dGraphics.com/examples/X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.x3d","https://savage.nps.edu/Savage/Tools/Authoring/CoordinateAxes.x3d","../../X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.wrl","../../Savage/Tools/Authoring/CoordinateAxes.wrl","https://X3dGraphics.com/examples/X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.wrl","https://savage.nps.edu/Savage/Tools/Authoring/CoordinateAxes.wrl"})))
      .addChild(new Viewpoint().setDescription("Origin +2m up, looking northeast").setOrientation(0.0,1.0,0.0,-2.35).setPosition(-2.0,2.0,-2.0))
      .addChild(new Viewpoint().setDescription("Origin +1m up, looking northeast").setOrientation(0.0,1.0,0.0,-2.35).setPosition(-2.0,1.0,-2.0))));
    }
	// end of initialize() method

		/** Large attribute array: PositionInterpolator DEF='UnnamedTransformTranslationInterp_12' keyValue field, scene-graph level=6, element #131, 123 total numbers made up of 41 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3f getUnnamedTransformTranslationInterp_12_6_131_keyValue()
		{
			MFVec3f UnnamedTransformTranslationInterp_12_6_131_keyValue = new MFVec3f(new double[] {-0.0156404,1.20497,1.35101,-0.0156404,1.1656,1.35101,-0.0156403,1.12632,1.35101,-0.0156403,1.08711,1.35101,-0.0156402,1.04791,1.35101,-0.0156402,1.00868,1.35101,-0.0156402,0.969374,1.35101,-0.0156401,0.929956,1.35101,-0.0156401,0.890379,1.35101,-0.01564,0.850598,1.35101,-0.01564,0.810572,1.35101,-0.01564,0.765219,1.35101,-0.0156399,0.71176,1.35101,-0.0156398,0.653609,1.35101,-0.0156398,0.594176,1.35101,-0.0156397,0.536871,1.35101,-0.0156397,0.485108,1.35101,-0.0156396,0.442297,1.35101,-0.0156396,0.411849,1.35101,-0.0156396,0.397177,1.35101,-0.0156396,0.40169,1.35101,-0.0156396,0.41967,1.35101,-0.0156396,0.442842,1.35101,-0.0156397,0.470786,1.35101,-0.0156397,0.503079,1.35101,-0.0156397,0.539302,1.35101,-0.0156398,0.579033,1.35101,-0.0156398,0.621851,1.35101,-0.0156399,0.667336,1.35101,-0.0156399,0.715066,1.35101,-0.01564,0.76462,1.35101,-0.01564,0.815577,1.35101,-0.0156401,0.867517,1.35101,-0.0156401,0.920018,1.35101,-0.0156402,0.972659,1.35101,-0.0156402,1.02502,1.35101,-0.0156403,1.07668,1.35101,-0.0156404,1.12722,1.35101,-0.0156404,1.17621,1.35101,-0.0156405,1.22324,1.35101,-0.0156405,1.26788,1.35101});
			return UnnamedTransformTranslationInterp_12_6_131_keyValue;
		}

	/** The initialized model object, created within initialize() method. */
	private X3D x3dModel;

	/** 
	 * Provide a 
	 * <a href="https://dzone.com/articles/java-copy-shallow-vs-deep-in-which-you-will-swim" target="_blank">shallow copy</a>
	 * of the X3D model.
	 * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/Core/X3D.html">X3D</a>
	 * @return BeachTanks model
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
        X3D thisExampleX3dModel = new BeachTanks().getX3dModel();

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
			System.out.println("WARNING: \"net.x3djsonld.data.BeachTanks\" model invocation is attempting to load file \"" + fileName + "\" instead of simply validating itself... file loading ignored.");
		else if (hasArguments) // if no arguments provided, this method produces usage warning
			thisExampleX3dModel.handleArguments(args);

		if (validate)
		{
			System.out.print("Java program \"net.x3djsonld.data.BeachTanks\" self-validation test results: ");
			String validationResults = thisExampleX3dModel.validationReport();
            if (validationResults.startsWith("\n"))
                System.out.println();
			System.out.println(validationResults.trim());
		}
    }
}
