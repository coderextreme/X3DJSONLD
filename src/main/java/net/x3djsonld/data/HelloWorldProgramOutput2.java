package net.x3djsonld.data;

import org.web3d.x3d.jsail.Core.*;
import org.web3d.x3d.jsail.CADGeometry.*;
import org.web3d.x3d.jsail.CubeMapTexturing.*;
import org.web3d.x3d.jsail.DIS.*;
import org.web3d.x3d.jsail.EnvironmentalEffects.*;
import org.web3d.x3d.jsail.fields.*;
import org.web3d.x3d.jsail.Geometry3D.*;
import org.web3d.x3d.jsail.Geospatial.*;
import org.web3d.x3d.jsail.Grouping.*;
import org.web3d.x3d.jsail.Interpolation.*;
import org.web3d.x3d.jsail.Layering.*;
import org.web3d.x3d.jsail.Navigation.*;
import org.web3d.x3d.jsail.Networking.*;
import org.web3d.x3d.jsail.PointingDeviceSensor.*;
import org.web3d.x3d.jsail.Rendering.*;
import org.web3d.x3d.jsail.Scripting.*;
import org.web3d.x3d.jsail.Shaders.*;
import org.web3d.x3d.jsail.Shape.*;
import org.web3d.x3d.jsail.Sound.*;
import org.web3d.x3d.jsail.Text.*;
import org.web3d.x3d.jsail.Texturing.*;
import org.web3d.x3d.jsail.Texturing3D.*;
import org.web3d.x3d.jsail.Time.*;

// Javadoc annotations follow, see below for Java source code.
/**
 * <p> Example HelloWorldProgram creates an X3D model using the X3D Java Scene Access Interface Library (X3DJSAIL). </p>
 <p> Related links: HelloWorldProgramOutput.java source, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>, and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;">
        <caption>Scene Meta Information</caption>
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">net.x3djsonld.data.HelloWorldProgramOutput&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="https://www.web3d.org/specifications/java/examples/HelloWorldProgramOutput.x3d">HelloWorldProgramOutput.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> info </i> </td>
			<td> continued development and testing in progress </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> Example HelloWorldProgram creates an X3D model using the X3D Java Scene Access Interface Library (X3DJSAIL) </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="https://www.web3d.org/specifications/java/X3DJSAIL.html" target="_blank">https://www.web3d.org/specifications/java/X3DJSAIL.html</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> generator </i> </td>
			<td> HelloWorldProgramOutput.java </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> created </i> </td>
			<td> 6 September 2016 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> modified </i> </td>
			<td> 29 January 2023 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> generator </i> </td>
			<td> X3D Java Scene Access Interface Library (X3DJSAIL) </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> generator </i> </td>
			<td> <a href="https://www.web3d.org/specifications/java/examples/HelloWorldProgram.java" target="_blank">https://www.web3d.org/specifications/java/examples/HelloWorldProgram.java</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> generator </i> </td>
			<td> Netbeans <a href="https://www.netbeans.org" target="_blank">https://www.netbeans.org</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> Don Brutzman </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="https://sourceforge.net/p/x3d/code/HEAD/tree/www.web3d.org/x3d/stylesheets/java/examples/HelloWorldProgramOutput.x3d" target="_blank">https://sourceforge.net/p/x3d/code/HEAD/tree/www.web3d.org/x3d/stylesheets/java/examples/HelloWorldProgramOutput.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> Console output, ClassicVRML encoding, VRML97 encoding and pretty-print documentation: </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> HelloWorldProgramOutput.txt </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="https://www.web3d.org/specifications/java/examples/HelloWorldProgramOutput.x3dv">HelloWorldProgramOutput.x3dv</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> HelloWorldProgramOutput.wrl </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="https://www.web3d.org/specifications/java/examples/HelloWorldProgramOutput.html">HelloWorldProgramOutput.html</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="https://savage.nps.edu/X3dValidator?url=https://www.web3d.org/specifications/java/examples/HelloWorldProgramOutput.x3d" target="_blank">https://savage.nps.edu/X3dValidator?url=https://www.web3d.org/specifications/java/examples/HelloWorldProgramOutput.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="https://www.web3d.org/specifications/java/examples/HelloWorldProgramOutput.x3d" target="_blank">https://www.web3d.org/specifications/java/examples/HelloWorldProgramOutput.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> license </i> </td>
			<td> <a href="https://www.web3d.org/specifications/java/examples/../license.html">../license.html</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> translated </i> </td>
			<td> 22 March 2023 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> generator </i> </td>
			<td> X3dToJson.xslt, <a href="https://www.web3d.org/x3d/stylesheets/X3dToJson.html" target="_blank">https://www.web3d.org/x3d/stylesheets/X3dToJson.html</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> X3D JSON encoding: <a href="https://www.web3d.org/wiki/index.php/X3D_JSON_Encoding" target="_blank">https://www.web3d.org/wiki/index.php/X3D_JSON_Encoding</a> </td>
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

public class HelloWorldProgramOutput
{
	/** Default constructor to create this object. */
	public HelloWorldProgramOutput ()
	{
	  initialize();
	}

	/** Create and initialize the X3D model for this object. */
	public final void initialize()
	{
  x3dModel = new X3D().setProfile(X3D.PROFILE_FULL).setVersion(X3D.VERSION_4_0)
  .setHead(new head()
    .addComponent(new component().setName("Navigation").setLevel(3))
    .addComponent(new component().setName("Shaders"))
    .addComponent(new component().setName("CADGeometry").setLevel(2))
    .addComponent(new component().setName("DIS").setLevel(2))
    .addComponent(new component().setName("H-Anim"))
    .addComponent(new component().setName("Grouping"))
    .addComponent(new component().setName("Layering"))
    .addUnit(new unit().setName("AngleUnitConversion").setCategory("angle"))
    .addUnit(new unit().setName("LengthUnitConversion").setCategory("length"))
    .addUnit(new unit().setName("ForceFromPoundsToNewtons").setCategory("force").setConversionFactor(4.4482))
    .addMeta(new meta().setName(meta.NAME_TITLE      ).setContent("HelloWorldProgramOutput.x3d"))
    .addMeta(new meta().setName(meta.NAME_INFO       ).setContent("continued development and testing in progress"))
    .addMeta(new meta().setName(meta.NAME_DESCRIPTION).setContent("Example HelloWorldProgram creates an X3D model using the X3D Java Scene Access Interface Library (X3DJSAIL)"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("https://www.web3d.org/specifications/java/X3DJSAIL.html"))
    .addMeta(new meta().setName(meta.NAME_GENERATOR  ).setContent("HelloWorldProgramOutput.java"))
    .addMeta(new meta().setName(meta.NAME_CREATED    ).setContent("6 September 2016"))
    .addMeta(new meta().setName(meta.NAME_MODIFIED   ).setContent("29 January 2023"))
    .addMeta(new meta().setName(meta.NAME_GENERATOR  ).setContent("X3D Java Scene Access Interface Library (X3DJSAIL)"))
    .addMeta(new meta().setName(meta.NAME_GENERATOR  ).setContent("https://www.web3d.org/specifications/java/examples/HelloWorldProgram.java"))
    .addMeta(new meta().setName(meta.NAME_GENERATOR  ).setContent("Netbeans https://www.netbeans.org"))
    .addMeta(new meta().setName(meta.NAME_CREATOR    ).setContent("Don Brutzman"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("https://sourceforge.net/p/x3d/code/HEAD/tree/www.web3d.org/x3d/stylesheets/java/examples/HelloWorldProgramOutput.x3d"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("Console output, ClassicVRML encoding, VRML97 encoding and pretty-print documentation:"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("HelloWorldProgramOutput.txt"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("HelloWorldProgramOutput.x3dv"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("HelloWorldProgramOutput.wrl"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("HelloWorldProgramOutput.html"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("https://savage.nps.edu/X3dValidator?url=https://www.web3d.org/specifications/java/examples/HelloWorldProgramOutput.x3d"))
    .addMeta(new meta().setName(meta.NAME_IDENTIFIER ).setContent("https://www.web3d.org/specifications/java/examples/HelloWorldProgramOutput.x3d"))
    .addMeta(new meta().setName(meta.NAME_LICENSE    ).setContent("../license.html"))
    .addMeta(new meta().setName(meta.NAME_TRANSLATED ).setContent("22 March 2023"))
    .addMeta(new meta().setName(meta.NAME_GENERATOR  ).setContent("X3dToJson.xslt, https://www.web3d.org/x3d/stylesheets/X3dToJson.html"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("X3D JSON encoding: https://www.web3d.org/wiki/index.php/X3D_JSON_Encoding")))
  .setScene(new Scene()
    .addChild(new ViewpointGroup().setDescription("Available viewpoints")
      .addChild(new Viewpoint("DefaultView").setDescription("Hello X3DJSAIL"))
      .addChild(new Viewpoint("TopDownView").setDescription("top-down view from above").setOrientation(1.0,0.0,0.0,-1.570796).setPosition(0.0,100.0,0.0)))
    .addChild(new NavigationInfo().setType("\"\"EXAMINE\" \"FLY\" \"ANY\"\""))
    .addChild(new WorldInfo("WorldInfoDEF").setCssClass("worldInfoNode.class").setCssStyle("worldInfoNode.style").setTitle("HelloWorldProgram produced by X3D Java SAI Library (X3DJSAIL)"))
    .addChild(new WorldInfo().setUSE("WorldInfoDEF"))
    .addChild(new WorldInfo().setUSE("WorldInfoDEF"))
    .addMetadata(new MetadataString("scene.addChildMetadata").setName("test").setValue(new String[] {"Top-level root Metadata node beneath Scene needs to be one of '-children' in JSON encoding"}))
    .addLayerSet(new LayerSet("scene.addChildLayerSetTest"))
    .addChild(new Transform("LogoGeometryTransform").setTranslation(0.0,1.5,0.0)
      .addChild(new Anchor("siteAnchor").setDescription("select for X3D Java SAI Library (X3DJSAIL) description").setUrl(new String[] {"../X3DJSAIL.html","https://www.web3d.org/specifications/java/X3DJSAIL.html"})
        .addChild(new Shape("BoxShape")
          .setAppearance(new Appearance()
            .setMaterial(new Material("GreenMaterial").setDiffuseColor(0.0,1.0,1.0).setEmissiveColor(0.8,0.0,0.0).setTransparency(0.1))
            .setTexture(new ImageTexture().setUrl(new String[] {"images/X3dJavaSceneAccessInterfaceSaiLibrary.png","https://www.web3d.org/specifications/java/examples/images/X3dJavaSceneAccessInterfaceSaiLibrary.png"})))
          .setGeometry(new Box("test-NMTOKEN_regex.0123456789").setCssClass("untextured")))))
    .addChild(new Shape("LineShape")
      .setAppearance(new Appearance()
        .setMaterial(new Material().setEmissiveColor(0.6,0.19607843,0.8)))
      .setGeometry(new IndexedLineSet().setCoordIndex(new int[] {0,1,2,3,4,0})
        .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {0.0,1.5,0.0,2.0,1.5,0.0,2.0,1.5,-2.0,-2.0,1.5,-2.0,-2.0,1.5,0.0,0.0,1.5,0.0})))))
    .addChild(new PositionInterpolator("BoxPathAnimator").setKey(new double[] {0.0,0.125,0.375,0.625,0.875,1.0}).setKeyValue(new MFVec3f(new double[] {0.0,1.5,0.0,2.0,1.5,0.0,2.0,1.5,-2.0,-2.0,1.5,-2.0,-2.0,1.5,0.0,0.0,1.5,0.0})))
    .addChild(new TimeSensor("OrbitClock").setCycleInterval(8.0).setLoop(true))
    .addChild(new ROUTE().setFromNode("OrbitClock").setFromField("fraction_changed").setToNode("BoxPathAnimator").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("BoxPathAnimator").setFromField("value_changed").setToNode("LogoGeometryTransform").setToField("set_translation"))
    .addChild(new Transform("TextTransform").setTranslation(0.0,-1.5,0.0)
      .addChild(new Shape()
        .setAppearance(new Appearance()
          .setMaterial(new Material().setUSE("GreenMaterial")))
        .setGeometry(new Text().setString(new String[] {"X3D Java","SAI Library","X3DJSAIL"})
          .setFontStyle(new FontStyle().setJustify(FontStyle.JUSTIFY_MIDDLE_MIDDLE))
          .setMetadata(new MetadataSet().setName("EscapedQuotationMarksMetadataSet")
            .setMetadata(new MetadataString().setName("quotesTestC").setValue(new String[] {"MFString example C, backslash-escaped quotes: He said, "Immel did it!""}))
            .setMetadata(new MetadataString().setName("extraChildTest").setValue(new String[] {"checks MetadataSet addValue() method"})))))
      .addChild(new Collision()
        .addChild(new Shape("ProxyShape")
          .setGeometry(new Text().setString(new String[] {"One, Two, Text","","He said, "Immel did it!","""})))
        .addComments("  test containerField='proxy'  "))
      .addComments("  It's a beautiful world  ")
      .addComments("  ... for you!  ")
      .addComments("  https://en.wikipedia.org/wiki/Beautiful_World_(Devo_song)  "))
    .addComments("  repeatedly spin 180 degrees as a readable special effect  ")
    .addChild(new OrientationInterpolator("SpinInterpolator").setKey(new double[] {0.0,0.5,1.0}).setKeyValue(new MFRotation(new double[] {0.0,1.0,0.0,4.712389,0.0,1.0,0.0,0.0,0.0,1.0,0.0,1.5707964})))
    .addChild(new TimeSensor("SpinClock").setCycleInterval(5.0).setLoop(true))
    .addChild(new ROUTE().setFromNode("SpinClock").setFromField("fraction_changed").setToNode("SpinInterpolator").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("SpinInterpolator").setFromField("value_changed").setToNode("TextTransform").setToField("rotation"))
    .addChild(new Group("BackgroundGroup")
      .addChild(new Background("GradualBackground"))
      .addChild(new Script("colorTypeConversionScript").setSourceCode("""
ecmascript:
['', '', 'ecmascript:', '', 'function colorInput (eventValue) // Example source code', '{', '   colorsOutput = new MFColor(eventValue); // assigning value sends output event', "// Browser.print('colorInput=' + eventValue + ', colorsOutput=' + colorsOutput + '
');", '}', '', '']
""")
        .addField(new field().setName("colorInput").setType(field.TYPE_SFCOLOR).setAccessType(field.ACCESSTYPE_INPUTONLY))
        .addField(new field().setName("colorsOutput").setType(field.TYPE_MFCOLOR).setAccessType(field.ACCESSTYPE_OUTPUTONLY)))
      .addChild(new ColorInterpolator("ColorAnimator").setKey(new double[] {0.0,0.5,1.0}).setKeyValue(new MFColor(new double[] {0.9411765,1.0,1.0,0.29411766,0.0,0.50980395,0.9411765,1.0,1.0})))
      .addChild(new TimeSensor("ColorClock").setCycleInterval(60.0).setLoop(true))
      .addChild(new ROUTE().setFromNode("colorTypeConversionScript").setFromField("colorsOutput").setToNode("GradualBackground").setToField("skyColor"))
      .addChild(new ROUTE().setFromNode("ColorAnimator").setFromField("value_changed").setToNode("colorTypeConversionScript").setToField("colorInput"))
      .addChild(new ROUTE().setFromNode("ColorClock").setFromField("fraction_changed").setToNode("ColorAnimator").setToField("set_fraction")))
    .addChild(new ProtoDeclare("ArtDeco01Material").setName("ArtDeco01Material").setAppinfo("tooltip: ArtDeco01Material prototype is a Material node")
      .setProtoInterface(new ProtoInterface()
        .addField(new field().setName("description").setType(field.TYPE_SFSTRING).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("ArtDeco01Material prototype is a Material node").setAppinfo("tooltip for descriptionField"))
        .addField(new field().setName("enabled").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(true)))
      .setProtoBody(new ProtoBody()
        .addComments("  Initial node of ProtoBody determines prototype node type  ")
        .addChild(new Material().setAmbientIntensity(0.25).setDiffuseColor(0.282435,0.085159,0.134462).setShininess(0.127273).setSpecularColor(0.276305,0.11431,0.139857))
        .addComments("  [HelloWorldProgram diagnostic] should be connected to scene graph: artDeco01ProtoDeclare.getNodeType()=\"Material\"  ")
        .addComments("  presence of follow-on TouchSensor shows that additional nodes are allowed in ProtoBody after initial node, regardless of node types  ")
        .addChild(new TouchSensor().setDescription("within ProtoBody")
          .setIS(new IS()
            .addConnect(new connect().setNodeField("description").setProtoField("description"))
            .addConnect(new connect().setNodeField("enabled").setProtoField("enabled"))))))
    .addChild(new ExternProtoDeclare("ArtDeco02Material").setName("ArtDeco02Material").setAppinfo("this is a different Material node").setUrl(new String[] {"https://X3dGraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/ArtDecoPrototypesExcerpt.x3d#ArtDeco02Material","https://X3dGraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/ArtDecoPrototypesExcerpt.x3dv#ArtDeco02Material"})
      .addField(new field().setName("description").setType(field.TYPE_SFSTRING).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("tooltip for descriptionField")))
    .addComments("  Tested ArtDeco01ProtoInstance, ArtDeco02ProtoInstance for improper node type when ProtoInstance is added in wrong place  ")
    .addChild(new Shape("TestShape1")
      .setAppearance(new Appearance("TestAppearance1")
        .addChild(new ProtoInstance("ArtDeco01Material").setContainerField("children")
          .addFieldValue(new fieldValue().setName("description").setValue("ArtDeco01Material can substitute for a Material node"))))
      .setGeometry(new Sphere().setRadius(0.001)))
    .addChild(new Shape("TestShape2")
      .setAppearance(new Appearance("TestAppearance2")
        .addChild(new ProtoInstance("ArtDeco02Material", "ArtDeco02MaterialDEF").setContainerField("children")
          .addFieldValue(new fieldValue().setName("description").setValue("ArtDeco02Material can substitute for another Material node"))))
      .setGeometry(new Cone().setBottomRadius(0.001).setHeight(0.001)))
    .addChild(new Shape("TestShape3")
      .setAppearance(new Appearance("TestAppearance3")
        .addChild(new ProtoInstance().setUSE("ArtDeco02MaterialDEF").setContainerField("children")))
      .setGeometry(new Cylinder().setHeight(0.001).setRadius(0.001)))
    .addChild(new Inline("inlineScene").setUrl(new String[] {"someOtherScene.x3d","https://www.web3d.org/specifications/java/examples/someOtherScene.x3d"}))
    .addChild(new IMPORT().setImportedDEF("WorldInfoDEF").setInlineDEF("inlineScene").setAS("WorldInfoDEF2"))
    .addChild(new EXPORT().setLocalDEF("WorldInfoDEF").setAS("WorldInfoDEF3"))
    .addChild(new ProtoDeclare("MaterialModulator").setName("MaterialModulator").setAppinfo("mimic a Material node and modulate fields as an animation effect").setDocumentation("https://x3dgraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/MaterialModulatorIndex.html")
      .setProtoInterface(new ProtoInterface()
        .addField(new field().setName("enabled").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(true))
        .addField(new field().setName("diffuseColor").setType(field.TYPE_SFCOLOR).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(new SFColor(0.0,0.0,0.0)))
        .addField(new field().setName("emissiveColor").setType(field.TYPE_SFCOLOR).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(new SFColor(0.05,0.05,0.5)))
        .addField(new field().setName("specularColor").setType(field.TYPE_SFCOLOR).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(new SFColor(0.0,0.0,0.0)))
        .addField(new field().setName("transparency").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INPUTOUTPUT))
        .addField(new field().setName("shininess").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INPUTOUTPUT))
        .addField(new field().setName("ambientIntensity").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INPUTOUTPUT)))
      .setProtoBody(new ProtoBody()
        .addChild(new Material("MaterialNode")
          .setIS(new IS()
            .addConnect(new connect().setNodeField("diffuseColor").setProtoField("diffuseColor"))
            .addConnect(new connect().setNodeField("emissiveColor").setProtoField("emissiveColor"))
            .addConnect(new connect().setNodeField("specularColor").setProtoField("specularColor"))
            .addConnect(new connect().setNodeField("transparency").setProtoField("transparency"))
            .addConnect(new connect().setNodeField("shininess").setProtoField("shininess"))
            .addConnect(new connect().setNodeField("ambientIntensity").setProtoField("ambientIntensity"))))
        .addComments("  Only first node (the node type) is renderable, others are along for the ride  ")
        .addChild(new Script("MaterialModulatorScript").setSourceCode("""
ecmascript:
['', '', 'ecmascript:', 'function initialize ()', '{', '    newColor = diffuseColor; // start with correct color', '}', 'function set_enabled (newValue)', '{', '	enabled = newValue;', '}', 'function clockTrigger (timeValue)', '{', '    if (!enabled) return;', '    red   = newColor.r;', '    green = newColor.g;', '    blue  = newColor.b;', '', '    // note different modulation rates for each color component, % is modulus operator', '    newColor = new SFColor ((red + 0.02) % 1, (green + 0.03) % 1, (blue + 0.04) % 1);', '	if (enabled)', '	{', "		Browser.print ('diffuseColor=(' + red + ',' + green + ',' + blue + ') newColor=' + newColor.toString() + '
');", '	}', '}', '', '']
""")
          .setIS(new IS()
            .addConnect(new connect().setNodeField("enabled").setProtoField("enabled"))
            .addConnect(new connect().setNodeField("diffuseColor").setProtoField("diffuseColor")))
          .addField(new field().setName("enabled").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INPUTOUTPUT))
          .addField(new field().setName("diffuseColor").setType(field.TYPE_SFCOLOR).setAccessType(field.ACCESSTYPE_INPUTOUTPUT))
          .addField(new field().setName("newColor").setType(field.TYPE_SFCOLOR).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
          .addField(new field().setName("clockTrigger").setType(field.TYPE_SFTIME).setAccessType(field.ACCESSTYPE_INPUTONLY)))))
    .addComments("  Test success: declarative statement createDeclarativeShapeTests()  ")
    .addChild(new Group("DeclarativeGroupExample")
      .addChild(new Shape()
        .setAppearance(new Appearance("DeclarativeAppearanceExample")
          .addChild(new ProtoInstance("MaterialModulator", "MyMaterialModulator").setContainerField("children")))
        .setGeometry(new Cone().setBottom(false).setBottomRadius(0.05).setHeight(0.1)))
      .addComments("  Test success: declarativeGroup.addChild() singleton pipeline method  "))
    .addComments("  Test success: declarative statement addChild()  ")
    .addComments("  Test success: x3dModel.findNodeByDEF(DeclarativeAppearanceExample) = <Appearance DEF='DeclarativeAppearanceExample'/> i.e. <Appearance DEF='DeclarativeAppearanceExample'> <!- - DeclarativeMaterialExample gets overridden by subsequently added MaterialModulator ProtoInstance - -> <ProtoInstance DEF='MyMaterialModulator' name='MaterialModulator' containerField='material'/> </Appearance>  ")
    .addComments("  Test success: x3dModel.findElementByNameValue(findThisNameValue) = <MetadataString DEF='FindableMetadataStringTest' name='findThisNameValue' value='\"test case\"'/>  ")
    .addComments("  Test success: x3dModel.findElementByNameValue(\"ArtDeco01Material\", \"ProtoDeclare\") found  ")
    .addComments("  Test success: x3dModel.findElementByNameValue(\"MaterialModulator\", \"ProtoDeclare\") found  ")
    .addComments("  Test success: x3dModel.findElementByNameValue(\"MaterialModulator\", \"ProtoInstance\") found  ")
    .addChild(new Group("TestFieldObjectsGroup")
      .addComments("  testFieldObjects() results  ")
      .addComments("  SFBool default=false, true=true, false=false, negate()=true  ")
      .addComments("  MFBool default=, initial=true false true, negate()=false true false  ")
      .addComments("  SFFloat default=0.0, initial=1.0, setValue(2)=2.0, setValue(3.0f)=3.0, setValue(4.0)=4.0  ")
      .addComments("  MFFloat default=, initial=1 2 3, append(5)=1 2 3 5, inserts(3,4)(0,0)=0 1 2 3 4 5, append(6)=0 1 2 3 4 5 6, size()=7  ")
      .addComments("  ... get1Value[3]=3.0, remove[1]=0 2 3 4 5 6, set1Value(0,10)=10 2 3 4 5 6, multiply(2)=20 4 6 8 10 12, clear=  ")
      .addComments("  SFVec3f default=0 0 0, initial=1 2 3, setValue=4 5 6, multiply(2)=8 10 12, normalize()=0.45584232 0.5698029 0.68376344, regex matches()=true  ")
      .addComments("  regex test SFVec3f().matches(\"1 2 3\")=true, regex test SFVec3f().matches(\"1 2 3 4\")=false, regex test (SFRotation.matches(\"0 0 0 0\")=true, failure detecting illegal (zero axis) rotation value  "))
    .addChild(new Sound().setLocation(0.0,1.6,0.0)
      .setSource(new AudioClip().setDescription("chimes").setUrl(new String[] {"chimes.wav","https://www.web3d.org/x3d/content/examples/ConformanceNist/Sounds/AudioClip/chimes.wav"})))
    .addChild(new Sound().setLocation(0.0,1.6,0.0)
      .setTexture(new MovieTexture().setDescription("mpgsys.mpg from ConformanceNist suite").setUrl(new String[] {"mpgsys.mpg","https://www.web3d.org/x3d/content/examples/ConformanceNist/Appearance/MovieTexture/mpgsys.mpg"})))
    .addComments("  Test success: Anchor.isNode()=true, siteAnchor.isNode()=true  ")
    .addComments("  Test success: Anchor.isStatement()=false, siteAnchor.isStatement()=false  ")
    .addComments("  Test success: ROUTE.isNode()=false, orbitPositionROUTE.isNode()=false  ")
    .addComments("  Test success: ROUTE.isStatement()=true, orbitPositionROUTE.isStatement()=true  ")
    .addComments("  Test success: CommentsBlock.isNode()=false, testComments.isNode()=false  ")
    .addComments("  Test failure: CommentsBlock.isStatement()=true, testComments.isStatement()=true  ")
    .addChild(new Shape("ExtrusionShape")
      .setAppearance(new Appearance("TransparentAppearance")
        .setMaterial(new Material().setTransparency(1.0)))
      .setGeometry(new Extrusion("ExampleExtrusion")))
    .addChild(new Group()
      .addComments("  Test MFNode children array as an ordered list consisting of comments, statements, ProtoInstance and nodes  ")
      .addChild(new ProtoDeclare("NewWorldInfo").setName("NewWorldInfo")
        .setProtoInterface(new ProtoInterface()
          .addField(new field().setName("description").setType(field.TYPE_SFSTRING).setAccessType(field.ACCESSTYPE_INITIALIZEONLY)))
        .setProtoBody(new ProtoBody()
          .addChild(new WorldInfo())))
      .addChild(new ProtoInstance("NewWorldInfo", "Proto1").setContainerField("children")
        .addFieldValue(new fieldValue().setName("description").setValue("testing 1 2 3")))
      .addChild(new Group("Node2")
        .addComments("  intentionally empty  "))
      .addChild(new ProtoInstance("NewWorldInfo", "Proto3").setContainerField("children"))
      .addChild(new Transform("Node4")
        .addComments("  intentionally empty  "))
      .addComments("  Test satisfactorily creates MFNode children array as an ordered list with mixed content  "))
    .addChild(new ProtoDeclare("ShaderProto").setName("ShaderProto")
      .setProtoBody(new ProtoBody()
        .addChild(new ProgramShader())))
    .addChild(new Shape()
      .setAppearance(new Appearance()
        .addShaders(new ProgramShader("TestShader1")
          .addPrograms(new ShaderProgram("TestShader2")))
        .addChild(new ProtoInstance("ShaderProto", "TestShader3").setContainerField("children"))
        .addShaders(new ComposedShader("TestShader4")
          .addParts(new ShaderPart("TestShader5")))))
    .addChild(new Transform("SpecialtyNodes")
      .addChild(new CADLayer()
        .addChild(new CADAssembly()
          .addChild(new CADPart()
            .addChild(new CADFace()))))
      .addChild(new EspduTransform())
      .addChild(new ReceiverPdu().setReceivedPower(0.0))
      .addChild(new SignalPdu())
      .addChild(new TransmitterPdu().setRelativeAntennaLocation(0.0,0.0,0.0).setTransmitFrequencyBandwidth(0.0))
      .addChild(new DISEntityManager()
        .addChild(new DISEntityTypeMapping())))
    .addChild(new EspduTransform()
      .addChild(new WorldInfo()))
    .addChild(new ReceiverPdu().setReceivedPower(0.0))
    .addChild(new SignalPdu())
    .addChild(new TransmitterPdu().setRelativeAntennaLocation(0.0,0.0,0.0).setTransmitFrequencyBandwidth(0.0))
    .addChild(new DISEntityManager()
      .addChild(new DISEntityTypeMapping()))
    .addChild(new LoadSensor()
      .addComments("  Contained nodes typically must be USE references for nodes previously DEFined in the scene  ")
      .addComments("  The following nodes are test cases for all X3DUrlObject nodes  ")
      .addChild(new Anchor().setUSE("siteAnchor"))
      .addChild(new Inline().setUSE("inlineScene"))
      .addChild(new DISEntityTypeMapping())
      .addChild(new GeoMetadata())
      .addChild(new AudioClip())
      .addChild(new ImageCubeMapTexture())
      .addChild(new ImageTexture3D())
      .addChild(new ImageTexture())
      .addChild(new MovieTexture())
      .addChild(new Script())
      .addChild(new PackagedShader())
      .addChild(new ShaderPart())
      .addChild(new ShaderProgram())));
    }
	// end of initialize() method

	/** The initialized model object, created within initialize() method. */
	private X3D x3dModel;

	/** 
	 * Provide a 
	 * <a href="https://dzone.com/articles/java-copy-shallow-vs-deep-in-which-you-will-swim" target="_blank">shallow copy</a>
	 * of the X3D model.
	 * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/Core/X3D.html">X3D</a>
	 * @return HelloWorldProgramOutput model
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
        X3D thisExampleX3dModel = new HelloWorldProgramOutput().getX3dModel();

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
			System.out.println("WARNING: \"net.x3djsonld.data.HelloWorldProgramOutput\" model invocation is attempting to load file \"" + fileName + "\" instead of simply validating itself... file loading ignored.");
		else if (hasArguments) // if no arguments provided, this method produces usage warning
			thisExampleX3dModel.handleArguments(args);

		if (validate)
		{
			System.out.print("Java program \"net.x3djsonld.data.HelloWorldProgramOutput\" self-validation test results: ");
			String validationResults = thisExampleX3dModel.validationReport();
            if (validationResults.startsWith("\n"))
                System.out.println();
			System.out.println(validationResults.trim());
		}
    }
}