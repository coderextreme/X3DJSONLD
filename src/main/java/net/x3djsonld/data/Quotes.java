package net.x3djsonld.data;

import java.util.*;
import org.web3d.x3d.jsail.Core.*;
import org.web3d.x3d.jsail.EnvironmentalEffects.*;
import org.web3d.x3d.jsail.fields.*;
import org.web3d.x3d.jsail.Geometry3D.*;
import org.web3d.x3d.jsail.Grouping.*;
import org.web3d.x3d.jsail.Interpolation.*;
import org.web3d.x3d.jsail.Layering.*;
import org.web3d.x3d.jsail.Navigation.*;
import org.web3d.x3d.jsail.Networking.*;
import org.web3d.x3d.jsail.PointingDeviceSensor.*;
import org.web3d.x3d.jsail.Rendering.*;
import org.web3d.x3d.jsail.Scripting.*;
import org.web3d.x3d.jsail.Shape.*;
import org.web3d.x3d.jsail.Sound.*;
import org.web3d.x3d.jsail.Text.*;
import org.web3d.x3d.jsail.Texturing.*;
import org.web3d.x3d.jsail.Time.*;

// Javadoc annotations follow, see below for source.
/**
 * <p> Example HelloWorldProgram creates an X3D model using the X3D Java Scene Access Interface (SAI) Library. </p>
 <p> Related links: Quotes.java source, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>, and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;">
        <caption>Scene Meta Information</caption>
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">net.x3djsonld.data.Quotes&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="http://www.web3d.org/specifications/java/examples/Java.x3d">Java.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> Example HelloWorldProgram creates an X3D model using the X3D Java Scene Access Interface (SAI) Library </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="http://www.web3d.org/specifications/java/X3DJSAIL.html" target="_blank">http://www.web3d.org/specifications/java/X3DJSAIL.html</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> generator </i> </td>
			<td> Java.java </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> created </i> </td>
			<td> 6 September 2016 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> modified </i> </td>
			<td> 7 April 2018 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> generator </i> </td>
			<td> X3D Java Scene Access Interface Library (X3DJSAIL) </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> generator </i> </td>
			<td> <a href="http://www.web3d.org/specifications/java/examples/HelloWorldProgram.java" target="_blank">http://www.web3d.org/specifications/java/examples/HelloWorldProgram.java</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> generator </i> </td>
			<td> Netbeans <a href="http://www.netbeans.org" target="_blank">http://www.netbeans.org</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> Don Brutzman </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="https://sourceforge.net/p/x3d/code/HEAD/tree/www.web3d.org/x3d/stylesheets/java/examples/Java.x3d" target="_blank">https://sourceforge.net/p/x3d/code/HEAD/tree/www.web3d.org/x3d/stylesheets/java/examples/Java.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> Console output, ClassicVRML encoding, VRML97 encoding and pretty-print documentation: </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> Java.txt </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="http://www.web3d.org/specifications/java/examples/Java.x3dv">Java.x3dv</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> Java.wrl </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="http://www.web3d.org/specifications/java/examples/Java.html">Java.html</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> X3dValidator <a href="https://savage.nps.edu/X3dValidator?url=http://www.web3d.org/specifications/java/examples/Java.x3d" target="_blank">https://savage.nps.edu/X3dValidator?url=http://www.web3d.org/specifications/java/examples/Java.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="http://www.web3d.org/specifications/java/examples/Java.x3d" target="_blank">http://www.web3d.org/specifications/java/examples/Java.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> license </i> </td>
			<td> <a href="http://www.web3d.org/specifications/java/examples/../license.html">../license.html</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> info </i> </td>
			<td> tested sat: name value cannot contain embedded space character </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> translated </i> </td>
			<td> 30 April 2018 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> generator </i> </td>
			<td> X3dToJson.xslt, <a href="http://www.web3d.org/x3d/stylesheets/X3dToJson.html" target="_blank">http://www.web3d.org/x3d/stylesheets/X3dToJson.html</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> X3D JSON encoding: <a href="http://www.web3d.org/wiki/index.php/X3D_JSON_Encoding" target="_blank">http://www.web3d.org/wiki/index.php/X3D_JSON_Encoding</a> </td>
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

public class Quotes
{
	/** Default constructor to create this object. */
	public Quotes ()
	{
	  initialize();
	}

	/** Create and initialize the X3D model for this object. */
	public final void initialize()
	{
  x3dModel = new X3DObject().setProfile(X3DObject.PROFILE_IMMERSIVE).setVersion(X3DObject.VERSION_3_3)
  .setHead(new headObject()
    .addComments(" comment #1 ")
    .addComments(" comment #2 ")
    .addComments(" comment #3 ")
    .addComments(" comment #4 ")
    .addComponent(new componentObject().setName("Navigation").setLevel(3))
    .addComponent(new componentObject().setName("Layering").setLevel(1))
    .addUnit(new unitObject().setName("AngleUnitConversion").setCategory("angle").setConversionFactor(1.0))
    .addUnit(new unitObject().setName("LengthUnitConversion").setCategory("length").setConversionFactor(1.0))
    .addMeta(new metaObject().setName(metaObject.NAME_TITLE      ).setContent("Java.x3d"))
    .addMeta(new metaObject().setName(metaObject.NAME_DESCRIPTION).setContent("Example HelloWorldProgram creates an X3D model using the X3D Java Scene Access Interface (SAI) Library"))
    .addMeta(new metaObject().setName(metaObject.NAME_REFERENCE  ).setContent("http://www.web3d.org/specifications/java/X3DJSAIL.html"))
    .addMeta(new metaObject().setName(metaObject.NAME_GENERATOR  ).setContent("Java.java"))
    .addMeta(new metaObject().setName(metaObject.NAME_CREATED    ).setContent("6 September 2016"))
    .addMeta(new metaObject().setName(metaObject.NAME_MODIFIED   ).setContent("7 April 2018"))
    .addMeta(new metaObject().setName(metaObject.NAME_GENERATOR  ).setContent("X3D Java Scene Access Interface Library (X3DJSAIL)"))
    .addMeta(new metaObject().setName(metaObject.NAME_GENERATOR  ).setContent("http://www.web3d.org/specifications/java/examples/HelloWorldProgram.java"))
    .addMeta(new metaObject().setName(metaObject.NAME_GENERATOR  ).setContent("Netbeans http://www.netbeans.org"))
    .addMeta(new metaObject().setName(metaObject.NAME_CREATOR    ).setContent("Don Brutzman"))
    .addMeta(new metaObject().setName(metaObject.NAME_REFERENCE  ).setContent("https://sourceforge.net/p/x3d/code/HEAD/tree/www.web3d.org/x3d/stylesheets/java/examples/Java.x3d"))
    .addMeta(new metaObject().setName(metaObject.NAME_REFERENCE  ).setContent("Console output, ClassicVRML encoding, VRML97 encoding and pretty-print documentation:"))
    .addMeta(new metaObject().setName(metaObject.NAME_REFERENCE  ).setContent("Java.txt"))
    .addMeta(new metaObject().setName(metaObject.NAME_REFERENCE  ).setContent("Java.x3dv"))
    .addMeta(new metaObject().setName(metaObject.NAME_REFERENCE  ).setContent("Java.wrl"))
    .addMeta(new metaObject().setName(metaObject.NAME_REFERENCE  ).setContent("Java.html"))
    .addMeta(new metaObject().setName(metaObject.NAME_REFERENCE  ).setContent("X3dValidator https://savage.nps.edu/X3dValidator?url=http://www.web3d.org/specifications/java/examples/Java.x3d"))
    .addMeta(new metaObject().setName(metaObject.NAME_IDENTIFIER ).setContent("http://www.web3d.org/specifications/java/examples/Java.x3d"))
    .addMeta(new metaObject().setName(metaObject.NAME_LICENSE    ).setContent("../license.html"))
    .addMeta(new metaObject().setName(metaObject.NAME_INFO       ).setContent("tested sat: name value cannot contain embedded space character"))
    .addMeta(new metaObject().setName(metaObject.NAME_TRANSLATED ).setContent("30 April 2018"))
    .addMeta(new metaObject().setName(metaObject.NAME_GENERATOR  ).setContent("X3dToJson.xslt, http://www.web3d.org/x3d/stylesheets/X3dToJson.html"))
    .addMeta(new metaObject().setName(metaObject.NAME_REFERENCE  ).setContent("X3D JSON encoding: http://www.web3d.org/wiki/index.php/X3D_JSON_Encoding")))
  .setScene(new SceneObject()
    .addChild(new ViewpointGroupObject().setDescription("Available viewpoints")
      .addChild(new ViewpointObject("DefaultView").setDescription("Hello X3DJSAIL"))
      .addChild(new ViewpointObject("TopDownView").setDescription("top-down view from above").setOrientation(1.0f,0.0f,0.0f,-1.570796f).setPosition(0.0f,100.0f,0.0f)))
    .addChild(new WorldInfoObject("WorldInfoDEF").setTitle("HelloWorldProgram produced by X3D Java SAI Library (X3DJSAIL)"))
    .addChild(new WorldInfoObject().setUSE("WorldInfoDEF"))
    .addChild(new WorldInfoObject().setUSE("WorldInfoDEF"))
    .addMetadata(new MetadataStringObject("scene.addChildMetadata").setName("test").setValue(new String[] {"Top-level root Metadata node beneath Scene needs to be one of '-children' in JSON encoding"}))
    .addLayerSet(new LayerSetObject("scene.addChildLayerSetTest"))
    .addChild(new TransformObject("LogoGeometryTransform").setTranslation(0.0f,1.5f,0.0f)
      .addChild(new AnchorObject().setDescription("select for X3D Java SAI Library (X3DJSAIL) description").setUrl(new String[] {"../X3DJSAIL.html","http://www.web3d.org/specifications/java/X3DJSAIL.html"})
        .addChild(new ShapeObject("BoxShape")
          .setAppearance(new AppearanceObject()
            .setMaterial(new MaterialObject("GreenMaterial").setDiffuseColor(0.0f,1.0f,1.0f).setEmissiveColor(0.8f,0.0f,0.0f).setTransparency(0.1f))
            .setTexture(new ImageTextureObject().setUrl(new String[] {"images/X3dJavaSceneAccessInterfaceSaiLibrary.png","http://www.web3d.org/specifications/java/examples/images/X3dJavaSceneAccessInterfaceSaiLibrary.png"})))
          .setGeometry(new BoxObject("test-NMTOKEN_regex.0123456789").setCssClass("untextured")))))
    .addChild(new ShapeObject("LineShape")
      .setAppearance(new AppearanceObject()
        .setMaterial(new MaterialObject().setEmissiveColor(0.6f,0.19607843f,0.8f)))
      .setGeometry(new IndexedLineSetObject().setCoordIndex(new int[] {0,1,2,3,4,0})
        .addComments(" Coordinate 3-tuple point count: 6 ")
        .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new float[] {0.0f,1.5f,0.0f,2.0f,1.5f,0.0f,2.0f,1.5f,-2.0f,-2.0f,1.5f,-2.0f,-2.0f,1.5f,0.0f,0.0f,1.5f,0.0f})))))
    .addChild(new PositionInterpolatorObject("BoxPathAnimator").setKey(new float[] {0.0f,0.125f,0.375f,0.625f,0.875f,1.0f}).setKeyValue(new MFVec3fObject(new float[] {0.0f,1.5f,0.0f,2.0f,1.5f,0.0f,2.0f,1.5f,-2.0f,-2.0f,1.5f,-2.0f,-2.0f,1.5f,0.0f,0.0f,1.5f,0.0f})))
    .addChild(new TimeSensorObject("OrbitClock").setCycleInterval(8.0).setLoop(true))
    .addChild(new ROUTEObject().setFromNode("OrbitClock").setFromField("fraction_changed").setToNode("BoxPathAnimator").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("BoxPathAnimator").setFromField("value_changed").setToNode("LogoGeometryTransform").setToField("set_translation"))
    .addChild(new TransformObject("TextTransform").setTranslation(0.0f,-1.5f,0.0f)
      .addChild(new ShapeObject()
        .setAppearance(new AppearanceObject()
          .setMaterial(new MaterialObject().setUSE("GreenMaterial")))
        .setGeometry(new TextObject().setString(new String[] {"X3D Java","SAI Library","X3DJSAIL"})
          .addComments(" Comment example A, plain quotation marks: He said, \"Immel did it!\" ")
          .addComments(" Comment example B, XML character entities: He said, &quot;Immel did it!&quot; ")
          .setMetadata(new MetadataSetObject().setName("EscapedQuotationMarksMetadataSet")
            .addValue(new MetadataStringObject().setName("quotesTestC").setValue(new String[] {"MFString example C, backslash-escaped quotes: He said, \"Immel did it!\""}))
            .addValue(new MetadataStringObject().setName("extraChildTest").setValue(new String[] {"checks MetadataSetObject addValue() method"})))
          .setFontStyle(new FontStyleObject().setJustify(FontStyleObject.JUSTIFY_MIDDLE_MIDDLE))))
      .addChild(new CollisionObject()
        .addComments(" test containerField='proxy' ")
        .setProxy(new ShapeObject("ProxyShape")
          .addComments(" alternative XML encoding: Text string='\"One, Two, Comment\" \"\" \"He said, \\&quot;Immel did it!\\&quot;\"' ")
          .addComments(" alternative XML encoding: Text string='\"One, Two, Comment\" \"\" \"He said, \\&quot;Immel did it!\\&quot;\" \"\"' ")
          .addComments(" alternative Java source: .setString(new String [] {\"One, Two, Comment\", \"\", \"He said, \\\"\"Immel did it!\\\"\\\"}) ")
          .addComments(" reference: http://www.web3d.org/x3d/content/examples/Basic/X3dSpecifications/StringArrayEncodingExamplesIndex.html ")
          .setGeometry(new TextObject().setString(new String[] {"One, Two, Text","","He said, \"Immel did it!\" \"\""}))))
      .addComments(" It's a beautiful world ")
      .addComments(" ... for you! ")
      .addComments(" https://en.wikipedia.org/wiki/Beautiful_World_(Devo_song) "))
    .addComments(" repeatedly spin 180 degrees as a readable special effect ")
    .addChild(new OrientationInterpolatorObject("SpinInterpolator").setKey(new float[] {0.0f,0.5f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,1.0f,0.0f,4.712389f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,1.5707964f})))
    .addChild(new TimeSensorObject("SpinClock").setCycleInterval(5.0).setLoop(true))
    .addChild(new ROUTEObject().setFromNode("SpinClock").setFromField("fraction_changed").setToNode("SpinInterpolator").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("SpinInterpolator").setFromField("value_changed").setToNode("TextTransform").setToField("rotation"))
    .addChild(new GroupObject("BackgroundGroup")
      .addChild(new BackgroundObject("GradualBackground"))
      .addChild(new ScriptObject("colorTypeConversionScript").setSourceCode("\n" + 
"\n" + 
"\n" + 
"\n" + 
"ecmascript:" + "\n" + 
"\n" + 
"function colorInput (eventValue) // Example source code" + "\n" + 
"{" + "\n" + 
"   colorsOutput = new MFColor(eventValue); // assigning value sends output event" + "\n" + 
"// Browser.print('colorInput=' + eventValue + ', colorsOutput=' + colorsOutput + '\\n');" + "\n" + 
"}" + "\n")
        .addField(new fieldObject().setName("colorInput").setType(fieldObject.TYPE_SFCOLOR).setAccessType(fieldObject.ACCESSTYPE_INPUTONLY))
        .addField(new fieldObject().setName("colorsOutput").setType(fieldObject.TYPE_MFCOLOR).setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY)))
      .addChild(new ColorInterpolatorObject("ColorAnimator").setKey(new float[] {0.0f,0.5f,1.0f}).setKeyValue(new MFColorObject(new float[] {0.9411765f,1.0f,1.0f,0.29411766f,0.0f,0.50980395f,0.9411765f,1.0f,1.0f}))
        .addComments(" AZURE to INDIGO and back again "))
      .addChild(new TimeSensorObject("ColorClock").setCycleInterval(60.0).setLoop(true))
      .addChild(new ROUTEObject().setFromNode("colorTypeConversionScript").setFromField("colorsOutput").setToNode("GradualBackground").setToField("skyColor"))
      .addChild(new ROUTEObject().setFromNode("ColorAnimator").setFromField("value_changed").setToNode("colorTypeConversionScript").setToField("colorInput"))
      .addChild(new ROUTEObject().setFromNode("ColorClock").setFromField("fraction_changed").setToNode("ColorAnimator").setToField("set_fraction")))
    .addChild(new ProtoDeclareObject("ArtDeco01Material").setName("ArtDeco01Material").setAppinfo("tooltip: ArtDeco01Material prototype is a Material node")
      .setProtoInterface(new ProtoInterfaceObject()
        .addField(new fieldObject().setName("description").setType(fieldObject.TYPE_SFSTRING).setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("ArtDeco01Material prototype is a Material node").setAppinfo("tooltip for descriptionField"))
        .addField(new fieldObject().setName("enabled").setType(fieldObject.TYPE_SFBOOL).setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue(true)))
      .setProtoBody(new ProtoBodyObject()
        .addComments(" Initial node of ProtoBody determines prototype node type ")
        .addChild(new MaterialObject().setAmbientIntensity(0.25f).setDiffuseColor(0.282435f,0.085159f,0.134462f).setShininess(0.127273f).setSpecularColor(0.276305f,0.11431f,0.139857f))
        .addComments(" [HelloWorldProgram diagnostic] should be connected to scene graph: ArtDeco01ProtoDeclare.getNodeType()=\"Material\" ")
        .addComments(" presence of follow-on TouchSensor shows that additional nodes are allowed in ProtoBody after initial node, regardless of node types ")
        .addChild(new TouchSensorObject().setDescription("within ProtoBody")
          .setIS(new ISObject()
            .addConnect(new connectObject().setNodeField("description").setProtoField("description"))
            .addConnect(new connectObject().setNodeField("enabled").setProtoField("enabled"))))))
    .addChild(new ExternProtoDeclareObject("ArtDeco02Material").setName("ArtDeco02Material").setAppinfo("this is a different Material node").setUrl(new String[] {"http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/ArtDecoPrototypesExcerpt.x3d#ArtDeco02Material","http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/ArtDecoPrototypesExcerpt.x3dv#ArtDeco02Material"})
      .addComments(" [HelloWorldProgram diagnostic] ArtDeco02ExternProtoDeclare.getNodeType()=\"ERROR_UNKNOWN_EXTERNPROTODECLARE_NODE_TYPE: ExternProtoDeclare name='ArtDeco02Material' type cannot be remotely accessed at run time, TODO X3DJSAIL needs to add further capability.\" ")
      .addField(new fieldObject().setName("description").setType(fieldObject.TYPE_SFSTRING).setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("tooltip for descriptionField")))
    .addComments(" Tested ArtDeco01ProtoInstance, ArtDeco02ProtoInstance for improper node type when ProtoInstance is added in wrong place ")
    .addChild(new ShapeObject("TestShape1")
      .setAppearance(new AppearanceObject("TestAppearance1")
        .addComments(" ArtDeco01Material prototype goes here... TODO ensure setContainerField is handled in exported Java ")
        .setMaterial(new ProtoInstanceObject("ArtDeco01Material")
          .addComments(" [HelloWorldProgram diagnostic] ArtDeco01ProtoInstance.getNodeType()=\"Material\" ")
          .addMaterial(new fieldValueObject().setName("description").setValue("ArtDeco01Material can substitute for a Material node"))))
      .setGeometry(new SphereObject().setRadius(0.001f)))
    .addChild(new ShapeObject("TestShape2")
      .setAppearance(new AppearanceObject("TestAppearance2")
        .addComments(" ArtDeco02Material prototype goes here... TODO ensure setContainerField is handled in exported Java ")
        .setMaterial(new ProtoInstanceObject("ArtDeco02Material", "ArtDeco02MaterialDEF")
          .addComments(" [HelloWorldProgram diagnostic] ArtDeco02ProtoInstance.getNodeType()=\"ERROR_UNKNOWN_EXTERNPROTODECLARE_NODE_TYPE: ExternProtoDeclare name='ArtDeco02Material' type cannot be remotely accessed at run time, TODO X3DJSAIL needs to add further capability.\" ")
          .addMaterial(new fieldValueObject().setName("description").setValue("ArtDeco02Material can substitute for another Material node"))))
      .setGeometry(new ConeObject().setBottomRadius(0.001f).setHeight(0.001f)))
    .addChild(new ShapeObject("TestShape3")
      .setAppearance(new AppearanceObject("TestAppearance3")
        .addComments(" ArtDeco02Material ProtoInstance USE goes here... ")
        .setMaterial(new ProtoInstanceObject().setUSE("ArtDeco02MaterialDEF")))
      .setGeometry(new CylinderObject().setHeight(0.001f).setRadius(0.001f)))
    .addChild(new InlineObject("inlineSceneDef").setUrl(new String[] {"someOtherScene.x3d"}))
    .addChild(new IMPORTObject().setImportedDEF("WorldInfoDEF").setInlineDEF("inlineSceneDef").setAS("WorldInfoDEF2"))
    .addChild(new EXPORTObject().setLocalDEF("WorldInfoDEF").setAS("WorldInfoDEF3"))
    .addChild(new ProtoDeclareObject("MaterialModulator").setName("MaterialModulator").setAppinfo("mimic a Material node and modulate fields as an animation effect").setDocumentation("http://x3dgraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/MaterialModulatorIndex.html")
      .setProtoInterface(new ProtoInterfaceObject()
        .addField(new fieldObject().setName("enabled").setType(fieldObject.TYPE_SFBOOL).setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue(true))
        .addField(new fieldObject().setName("diffuseColor").setType(fieldObject.TYPE_SFCOLOR).setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue(new SFColorObject(0.0f,0.0f,0.0f)))
        .addField(new fieldObject().setName("emissiveColor").setType(fieldObject.TYPE_SFCOLOR).setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue(new SFColorObject(0.05f,0.05f,0.5f)))
        .addField(new fieldObject().setName("specularColor").setType(fieldObject.TYPE_SFCOLOR).setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue(new SFColorObject(0.0f,0.0f,0.0f)))
        .addField(new fieldObject().setName("transparency").setType(fieldObject.TYPE_SFFLOAT).setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue(0.0f))
        .addField(new fieldObject().setName("shininess").setType(fieldObject.TYPE_SFFLOAT).setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue(0.0f))
        .addField(new fieldObject().setName("ambientIntensity").setType(fieldObject.TYPE_SFFLOAT).setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue(0.0f)))
      .setProtoBody(new ProtoBodyObject()
        .addChild(new MaterialObject("MaterialNode")
          .setIS(new ISObject()
            .addConnect(new connectObject().setNodeField("diffuseColor").setProtoField("diffuseColor"))
            .addConnect(new connectObject().setNodeField("emissiveColor").setProtoField("emissiveColor"))
            .addConnect(new connectObject().setNodeField("specularColor").setProtoField("specularColor"))
            .addConnect(new connectObject().setNodeField("transparency").setProtoField("transparency"))
            .addConnect(new connectObject().setNodeField("shininess").setProtoField("shininess"))
            .addConnect(new connectObject().setNodeField("ambientIntensity").setProtoField("ambientIntensity"))))
        .addComments(" Only first node (the node type) is renderable, others are along for the ride ")
        .addChild(new ScriptObject("MaterialModulatorScript").setSourceCode("\n" + 
"\n" + 
"\n" + 
"\n" + 
"ecmascript:" + "\n" + 
"function initialize ()" + "\n" + 
"{" + "\n" + 
"    newColor = diffuseColor; // start with correct color" + "\n" + 
"}" + "\n" + 
"function set_enabled (newValue)" + "\n" + 
"{" + "\n" + 
"	enabled = newValue;" + "\n" + 
"}" + "\n" + 
"function clockTrigger (timeValue)" + "\n" + 
"{" + "\n" + 
"    if (!enabled) return;" + "\n" + 
"    red   = newColor.r;" + "\n" + 
"    green = newColor.g;" + "\n" + 
"    blue  = newColor.b;" + "\n" + 
"\n" + 
"    // note different modulation rates for each color component, % is modulus operator" + "\n" + 
"    newColor = new SFColor ((red + 0.02) % 1, (green + 0.03) % 1, (blue + 0.04) % 1);" + "\n" + 
"	if (enabled)" + "\n" + 
"	{" + "\n" + 
"		Browser.print ('diffuseColor=(' + red + ',' + green + ',' + blue + ') newColor=' + newColor.toString() + '\\n');" + "\n" + 
"	}" + "\n" + 
"}" + "\n")
          .addField(new fieldObject().setName("enabled").setType(fieldObject.TYPE_SFBOOL).setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT))
          .addField(new fieldObject().setName("diffuseColor").setType(fieldObject.TYPE_SFCOLOR).setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT))
          .addField(new fieldObject().setName("newColor").setType(fieldObject.TYPE_SFCOLOR).setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY))
          .addField(new fieldObject().setName("clockTrigger").setType(fieldObject.TYPE_SFTIME).setAccessType(fieldObject.ACCESSTYPE_INPUTONLY))
          .setIS(new ISObject()
            .addConnect(new connectObject().setNodeField("enabled").setProtoField("enabled"))
            .addConnect(new connectObject().setNodeField("diffuseColor").setProtoField("diffuseColor"))))))
    .addComments(" Test success: declarative statement createDeclarativeShapeTests() ")
    .addChild(new GroupObject("DeclarativeGroupExample")
      .addChild(new ShapeObject()
        .setMetadata(new MetadataStringObject("FindableMetadataStringTest").setName("findThisNameValue").setValue(new String[] {"test case"}))
        .setAppearance(new AppearanceObject("DeclarativeAppearanceExample")
          .addComments(" DeclarativeMaterialExample gets overridden by subsequently added MaterialModulator ProtoInstance ")
          .setMaterial(new ProtoInstanceObject("MaterialModulator", "MyMaterialModulator")))
        .setGeometry(new ConeObject().setBottom(false).setBottomRadius(0.05f).setHeight(0.1f)))
      .addComments(" Test success: declarativeGroup.addChild() singleton pipeline method "))
    .addComments(" Test success: declarative statement addChild() ")
    .addComments(" Test success: x3dModel.findNodeByDEF(DeclarativeAppearanceExample) = <Appearance DEF='DeclarativeAppearanceExample'/> i.e. <Appearance DEF='DeclarativeAppearanceExample'> <!- - DeclarativeMaterialExample gets overridden by subsequently added MaterialModulator ProtoInstance - -> <ProtoInstance DEF='MyMaterialModulator' name='MaterialModulator' containerField='material'/> </Appearance> ")
    .addComments(" Test success: x3dModel.findElementByNameValue(findThisNameValue) = <MetadataString DEF='FindableMetadataStringTest' name='findThisNameValue' value='\"test case\"'/> ")
    .addComments(" Test success: x3dModel.findElementByNameValue(\"ArtDeco01Material\", \"ProtoDeclare\") found ")
    .addComments(" Test success: x3dModel.findElementByNameValue(\"MaterialModulator\", \"ProtoDeclare\") found ")
    .addComments(" Test success: x3dModel.findElementByNameValue(\"MaterialModulator\", \"ProtoInstance\") found ")
    .addChild(new GroupObject("TestFieldObjectsGroup")
      .addComments(" testFieldObjects() results ")
      .addComments(" SFBool default=true, true=true, false=false, negate()=true ")
      .addComments(" MFBool default=, initial=true false true, negate()=false true false ")
      .addComments(" SFFloat default=0.0, initial=1.0, setValue(2)=2.0, setValue(3.0f)=3.0, setValue(4.0)=4.0 ")
      .addComments(" MFFloat default=, initial=1 2 3, append(5)=1 2 3 5, inserts(3,4)(0,0)=0 1 2 3 4 5, append(6)=0 1 2 3 4 5 6, size()=7 ")
      .addComments(" ... get1Value[3]=3.0, remove[1]=0 2 3 4 5 6, set1Value(0,10)=10 2 3 4 5 6, multiply(2)=20 4 6 8 10 12, clear= ")
      .addComments(" SFVec3f default=0 0 0, initial=1 2 3, setValue=4 5 6, multiply(2)=8 10 12, normalize()=0.45584232 0.5698029 0.68376344 "))
    .addChild(new SoundObject().setLocation(0.0f,1.6f,0.0f)
      .addComments(" set sound-ellipsoid location height at 1.6m to match typical avatar height ")
      .setSource(new AudioClipObject().setDescription("chimes").setUrl(new String[] {"chimes.wav","http://www.web3d.org/x3d/content/examples/ConformanceNist/Sounds/AudioClip/chimes.wav"})
        .addComments(" Scene example fragment from http://www.web3d.org/x3d/content/examples/ConformanceNist/Sounds/AudioClip/default.x3d ")))
    .addChild(new SoundObject().setLocation(0.0f,1.6f,0.0f)
      .addComments(" set sound-ellipsoid location height at 1.6m to match typical avatar height ")
      .setSource(new MovieTextureObject().setDescription("mpgsys.mpg from ConformanceNist suite").setUrl(new String[] {"mpgsys.mpg","http://www.web3d.org/x3d/content/examples/ConformanceNist/Appearance/MovieTexture/mpgsys.mpg"})
        .addComments(" Scene example fragment from http://www.web3d.org/x3d/content/examples/ConformanceNist/Appearance/MovieTexture/mpeg1-systems.x3d ")
        .addComments(" Expected containerField='source', allowed containerField values=\"texture\" \"source\" \"back\" \"bottom\" \"front\" \"left\" \"right\" \"top\" \"backTexture\" \"bottomTexture\" \"frontTexture\" \"leftTexture\" \"rightTexture\" \"topTexture\" ")))
    .addComments(" Test success: AnchorObject.isNode()=true, siteAnchor.isNode()=true ")
    .addComments(" Test success: AnchorObject.isStatement()=false, siteAnchor.isStatement()=false ")
    .addComments(" Test success: ROUTEObject.isNode()=false, orbitPositionROUTE.isNode()=false ")
    .addComments(" Test success: ROUTEObject.isStatement()=true, orbitPositionROUTE.isStatement()=true ")
    .addComments(" Test success: CommentsBlock.isNode()=false, testComments.isNode()=false ")
    .addComments(" Test failure: CommentsBlock.isStatement()=true, testComments.isStatement()=true ")
    .addChild(new ShapeObject("ExtrusionShape")
      .addComments(" ExampleExtrusion isCrossSectionClosed()=true, crossSection='[1.0, 1.0, 1.0, -1.0, -1.0, -1.0, -1.0, 1.0, 1.0, 1.0]' ")
      .addComments(" ExampleExtrusion isSpineClosed()=false, spine='[0.0, 0.0, 0.0, 0.0, 1.0, 0.0]' ")
      .setAppearance(new AppearanceObject("TransparentAppearance")
        .setMaterial(new MaterialObject().setTransparency(1.0f)))
      .setGeometry(new ExtrusionObject("ExampleExtrusion"))));
    }
	// end of initialize() method

	/** The initialized model object, created within initialize() method. */
	private X3DObject x3dModel;

	/** Provide a 
	 * <a href="https://dzone.com/articles/java-copy-shallow-vs-deep-in-which-you-will-swim" target="_blank">shallow copy</a>
	 * of the X3D model.
	 * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/Core/X3DObject.html">X3DObject</a>
	 * @return Quotes model
	 */
	public X3DObject getX3dModel()
	{	  
		return x3dModel;
	}
	   
    /** Default main() method provided for test purposes, uses CommandLine to set global ConfigurationProperties for this object.
     * @param args array of input parameters, provided as arguments
	 * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/Core/X3DObject.html#handleArguments-java.lang.String:A-">X3DObject.handleArguments(args)</a>
	 * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/Core/X3DObject.html#validationReport--">X3DObject.validationReport()</a>
     * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/CommandLine.html">CommandLine</a>
     * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/CommandLine.html#USAGE">CommandLine.USAGE</a>
     * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/ConfigurationProperties.html">ConfigurationProperties</a>
     */
    public static void main(String args[])
    {
        X3DObject thisExampleX3dObject = new Quotes().getX3dModel();

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
				if (arg.toLowerCase().endsWith(X3DObject.FILE_EXTENSION_X3D) ||
					arg.toLowerCase().endsWith(X3DObject.FILE_EXTENSION_CLASSICVRML) ||
					arg.toLowerCase().endsWith(X3DObject.FILE_EXTENSION_X3DB) ||
					arg.toLowerCase().endsWith(X3DObject.FILE_EXTENSION_VRML97) ||
					arg.toLowerCase().endsWith(X3DObject.FILE_EXTENSION_EXI) ||
					arg.toLowerCase().endsWith(X3DObject.FILE_EXTENSION_GZIP) ||
					arg.toLowerCase().endsWith(X3DObject.FILE_EXTENSION_ZIP) ||
					arg.toLowerCase().endsWith(X3DObject.FILE_EXTENSION_HTML) ||
					arg.toLowerCase().endsWith(X3DObject.FILE_EXTENSION_XHTML))
				{
					argumentsLoadNewModel = true;
					fileName = arg;
				}
			}
		}
		if      (argumentsLoadNewModel)
			System.out.println("WARNING: \"Quotes\" model invocation is attempting to load file \"" + fileName + "\" instead of simply validating itself... file loading ignored.");
		else if (hasArguments) // if no arguments provided, this method produces usage warning
			thisExampleX3dObject.handleArguments(args);

		if (validate)
		{
			System.out.print("Java program \"Quotes\" self-validation test results: ");
			String validationResults = thisExampleX3dObject.validationReport();
			System.out.println(validationResults);
		}
    }
}
