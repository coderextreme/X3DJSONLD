var java = require('java');
java.asyncOptions = {
  asyncSuffix: undefined,     // Don't generate node-style methods taking callbacks
  syncSuffix: "",              // Sync methods use the base name(!!)
  promiseSuffix: "Promise",   // Generate methods returning promises, using the suffix Promise.
  promisify: require('util').promisify, // Needs Node.js version 8 or greater, see comment below
  ifReadOnlySuffix: "_alt"
};
var autoclass = require('./X3Dautoclass');

// Javadoc annotations follow, see below for source.
/**
 * <p> Example HelloWorldProgram creates an X3D model using the X3D Java Scene Access Interface (SAI) Library. </p>
 <p> Related links: Java.java source, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a> and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;" summary="Scene Metadata">
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">net.x3djsonld.data.Java&nbsp; Document Metadata </td>
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
			<td> 6 June 2018 </td>
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
			<td> 06 June 2018 </td>
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
		<a href="https://www.web3d.org/x3d/stylesheets/X3dToNodeJS.xslt" target="_blank">X3dToNodeJS.xslt</a>
		stylesheet to create NodeJS source code from an <code>.x3d</code> scene.
	</p>

	* @author Don Brutzman
 */

function Java
  /** Default constructor to create this object. */
  ()
  {
    /** The initialized model object, created within initialize() method. */
    this.x3dModel = {};
    this.initialize();
    return this;
  }
Java.prototype = {
  /** Create and initialize the X3D model. */
  initialize : function ()
  {
  this.x3dModel = (new autoclass.X3D()).setProfile("Immersive").setVersion("3.3")
  .setHead((new autoclass.head())
    .addComments(" comment #1 ")
    .addComments(" comment #2 ")
    .addComments(" comment #3 ")
    .addComments(" comment #4 ")
    .addComponent((new autoclass.component()).setName("Navigation").setLevel(3))
    .addComponent((new autoclass.component()).setName("Layering").setLevel(1))
    .addUnit((new autoclass.unit()).setName("AngleUnitConversion").setConversionFactor(1.0).setCategory("angle"))
    .addUnit((new autoclass.unit()).setName("LengthUnitConversion").setConversionFactor(1.0).setCategory("length"))
    .addMeta((new autoclass.meta()).setName("title").setContent("Java.x3d"))
    .addMeta((new autoclass.meta()).setName("description").setContent("Example HelloWorldProgram creates an X3D model using the X3D Java Scene Access Interface (SAI) Library"))
    .addMeta((new autoclass.meta()).setName("reference").setContent("http://www.web3d.org/specifications/java/X3DJSAIL.html"))
    .addMeta((new autoclass.meta()).setName("generator").setContent("Java.java"))
    .addMeta((new autoclass.meta()).setName("created").setContent("6 September 2016"))
    .addMeta((new autoclass.meta()).setName("modified").setContent("6 June 2018"))
    .addMeta((new autoclass.meta()).setName("generator").setContent("X3D Java Scene Access Interface Library (X3DJSAIL)"))
    .addMeta((new autoclass.meta()).setName("generator").setContent("http://www.web3d.org/specifications/java/examples/HelloWorldProgram.java"))
    .addMeta((new autoclass.meta()).setName("generator").setContent("Netbeans http://www.netbeans.org"))
    .addMeta((new autoclass.meta()).setName("creator").setContent("Don Brutzman"))
    .addMeta((new autoclass.meta()).setName("reference").setContent("https://sourceforge.net/p/x3d/code/HEAD/tree/www.web3d.org/x3d/stylesheets/java/examples/Java.x3d"))
    .addMeta((new autoclass.meta()).setName("reference").setContent("Console output, ClassicVRML encoding, VRML97 encoding and pretty-print documentation:"))
    .addMeta((new autoclass.meta()).setName("reference").setContent("Java.txt"))
    .addMeta((new autoclass.meta()).setName("reference").setContent("Java.x3dv"))
    .addMeta((new autoclass.meta()).setName("reference").setContent("Java.wrl"))
    .addMeta((new autoclass.meta()).setName("reference").setContent("Java.html"))
    .addMeta((new autoclass.meta()).setName("reference").setContent("X3dValidator https://savage.nps.edu/X3dValidator?url=http://www.web3d.org/specifications/java/examples/Java.x3d"))
    .addMeta((new autoclass.meta()).setName("identifier").setContent("http://www.web3d.org/specifications/java/examples/Java.x3d"))
    .addMeta((new autoclass.meta()).setName("license").setContent("../license.html"))
    .addMeta((new autoclass.meta()).setName("info").setContent("tested sat: name value cannot contain embedded space character"))
    .addMeta((new autoclass.meta()).setName("translated").setContent("06 June 2018"))
    .addMeta((new autoclass.meta()).setName("generator").setContent("X3dToJson.xslt, http://www.web3d.org/x3d/stylesheets/X3dToJson.html"))
    .addMeta((new autoclass.meta()).setName("reference").setContent("X3D JSON encoding: http://www.web3d.org/wiki/index.php/X3D_JSON_Encoding")))
  .setScene((new autoclass.Scene())
    .addChild((new autoclass.ViewpointGroup()).setDescription("Available viewpoints"))
    .addChild((new autoclass.WorldInfo("WorldInfoDEF")).setTitle("HelloWorldProgram produced by X3D Java SAI Library (X3DJSAIL)"))
    .addChild((new autoclass.WorldInfo()).setUSE("WorldInfoDEF"))
    .addChild((new autoclass.WorldInfo()).setUSE("WorldInfoDEF"))
    .addMetadata((new autoclass.MetadataString("scene.addChildMetadata")).setName("test").setValue(new autoclass.MFString("\"Top-level root Metadata node beneath Scene needs to be one of '-children' in JSON encoding\"")))
    .addChild((new autoclass.LayerSet("scene.addChildLayerSetTest")))
    .addChild((new autoclass.Transform("LogoGeometryTransform")).setTranslation(0.0,1.5,0.0)
      .addChild((new autoclass.Anchor()).setDescription("select for X3D Java SAI Library (X3DJSAIL) description").setUrl(new autoclass.MFString("\"../X3DJSAIL.html\" \"http://www.web3d.org/specifications/java/X3DJSAIL.html\""))
        .addChild((new autoclass.Shape("BoxShape"))
          .setAppearance((new autoclass.Appearance())
            .setMaterial((new autoclass.Material("GreenMaterial")).setDiffuseColor(0.0,1.0,1.0).setTransparency(0.1).setEmissiveColor(0.8,0.0,0.0))
            .setTexture((new autoclass.ImageTexture()).setUrl(new autoclass.MFString("\"images/X3dJavaSceneAccessInterfaceSaiLibrary.png\" \"http://www.web3d.org/specifications/java/examples/images/X3dJavaSceneAccessInterfaceSaiLibrary.png\""))))
          .setGeometry((new autoclass.Box("test-NMTOKEN_regex.0123456789")).setCssClass("untextured")))))
    .addChild((new autoclass.Shape("LineShape"))
      .setAppearance((new autoclass.Appearance())
        .setMaterial((new autoclass.Material()).setEmissiveColor(0.6,0.19607843,0.8)))
      .setGeometry((new autoclass.IndexedLineSet()).setCoordIndex(java.newArray("int", [0,1,2,3,4,0]))
        .addComments(" Coordinate 3-tuple point count: 6 ")
        .setCoord((new autoclass.Coordinate()).setPoint(new autoclass.MFVec3f(java.newArray("float", [0.0,1.5,0.0,2.0,1.5,0.0,2.0,1.5,-2.0,-2.0,1.5,-2.0,-2.0,1.5,0.0,0.0,1.5,0.0]))))))
    .addChild((new autoclass.PositionInterpolator("BoxPathAnimator")).setKey(java.newArray("float", [0.0,0.125,0.375,0.625,0.875,1.0])).setKeyValue(new autoclass.MFVec3f(java.newArray("float", [0.0,1.5,0.0,2.0,1.5,0.0,2.0,1.5,-2.0,-2.0,1.5,-2.0,-2.0,1.5,0.0,0.0,1.5,0.0]))))
    .addChild((new autoclass.TimeSensor("OrbitClock")).setCycleInterval(8.0).setLoop(true))
    .addChild((new autoclass.ROUTE()).setFromNode("OrbitClock").setFromField("fraction_changed").setToNode("BoxPathAnimator").setToField("set_fraction"))
    .addChild((new autoclass.ROUTE()).setFromNode("BoxPathAnimator").setFromField("value_changed").setToNode("LogoGeometryTransform").setToField("set_translation"))
    .addChild((new autoclass.Transform("TextTransform")).setTranslation(0.0,-1.5,0.0)
      .addChild((new autoclass.Shape())
        .setAppearance((new autoclass.Appearance())
          .setMaterial((new autoclass.Material()).setUSE("GreenMaterial")))
        .setGeometry((new autoclass.Text()).setString(new autoclass.MFString("\"X3D Java\" \"SAI Library\" \"X3DJSAIL\""))
          .addComments(" Comment example A, plain quotation marks: He said, \"Immel did it!\" ")
          .addComments(" Comment example B, XML character entities: He said, &quot;Immel did it!&quot; ")
          .setMetadata((new autoclass.MetadataSet()).setName("EscapedQuotationMarksMetadataSet")
            .addValue((new autoclass.MetadataString()).setName("quotesTestC").setValue(new autoclass.MFString("\"MFString example C, backslash-escaped quotes: He said, \\\"Immel did it!\\\"\"")))
            .addValue((new autoclass.MetadataString()).setName("extraChildTest").setValue(new autoclass.MFString("\"checks MetadataSetObject addValue() method\""))))
          .setFontStyle((new autoclass.FontStyle()).setJustify(new autoclass.MFString("\"MIDDLE\" \"MIDDLE\"")))))
      .addChild((new autoclass.Collision())
        .addComments(" test containerField='proxy' ")
        .setProxy((new autoclass.Shape("ProxyShape"))
          .addComments(" alternative XML encoding: Text string='\"One, Two, Comment\" \"\" \"He said, \\&quot;Immel did it!\\&quot;\"' ")
          .addComments(" alternative XML encoding: Text string='\"One, Two, Comment\" \"\" \"He said, \\&quot;Immel did it!\\&quot;\" \"\"' ")
          .addComments(" alternative Java source: .setString(new String [] {\"One, Two, Comment\", \"\", \"He said, \\\"Immel did it!\\\"\"}) ")
          .addComments(" reference: http://www.web3d.org/x3d/content/examples/Basic/X3dSpecifications/StringArrayEncodingExamplesIndex.html ")
          .setGeometry((new autoclass.Text()).setString(new autoclass.MFString("\"One, Two, Text\" \"\" \"He said, \\\"Immel did it!\\\" \\\"\\\"\"")))))
      .addComments(" It's a beautiful world ")
      .addComments(" ... for you! ")
      .addComments(" https://en.wikipedia.org/wiki/Beautiful_World_(Devo_song) "))
    .addComments(" repeatedly spin 180 degrees as a readable special effect ")
    .addChild((new autoclass.OrientationInterpolator("SpinInterpolator")).setKey(java.newArray("float", [0.0,0.5,1.0])).setKeyValue(new autoclass.MFRotation(java.newArray("float", [0.0,1.0,0.0,4.712389,0.0,1.0,0.0,0.0,0.0,1.0,0.0,1.5707964]))))
    .addChild((new autoclass.TimeSensor("SpinClock")).setCycleInterval(5.0).setLoop(true))
    .addChild((new autoclass.ROUTE()).setFromNode("SpinClock").setFromField("fraction_changed").setToNode("SpinInterpolator").setToField("set_fraction"))
    .addChild((new autoclass.ROUTE()).setFromNode("SpinInterpolator").setFromField("value_changed").setToNode("TextTransform").setToField("rotation"))
    .addChild((new autoclass.Group("BackgroundGroup"))
      .addChild((new autoclass.Background("GradualBackground")))
      .addChild((new autoclass.Script("colorTypeConversionScript")).setSourceCode("\n" + 
"\n" + 
"ecmascript:" + "\n" + 
"\n" + 
"function colorInput (eventValue) // Example source code" + "\n" + 
"{" + "\n" + 
"   colorsOutput = new MFColor(eventValue); // assigning value sends output event" + "\n" + 
"// Browser.print('colorInput=' + eventValue + ', colorsOutput=' + colorsOutput + '\\n');" + "\n" + 
"}" + "\n")
        .addField((new autoclass.field()).setAccessType("inputOnly").setName("colorInput").setType("SFColor"))
        .addField((new autoclass.field()).setAccessType("outputOnly").setName("colorsOutput").setType("MFColor")))
      .addChild((new autoclass.ColorInterpolator("ColorAnimator")).setKey(java.newArray("float", [0.0,0.5,1.0])).setKeyValue(new autoclass.MFColor(java.newArray("float", [0.9411765,1.0,1.0,0.29411766,0.0,0.50980395,0.9411765,1.0,1.0])))
        .addComments(" AZURE to INDIGO and back again "))
      .addChild((new autoclass.TimeSensor("ColorClock")).setCycleInterval(60.0).setLoop(true))
      .addChild((new autoclass.ROUTE()).setFromNode("colorTypeConversionScript").setFromField("colorsOutput").setToNode("GradualBackground").setToField("skyColor"))
      .addChild((new autoclass.ROUTE()).setFromNode("ColorAnimator").setFromField("value_changed").setToNode("colorTypeConversionScript").setToField("colorInput"))
      .addChild((new autoclass.ROUTE()).setFromNode("ColorClock").setFromField("fraction_changed").setToNode("ColorAnimator").setToField("set_fraction")))
    .addChild((new autoclass.ProtoDeclare()).setName("ArtDeco01Material").setAppinfo("tooltip: ArtDeco01Material prototype is a Material node")
      .setProtoInterface((new autoclass.ProtoInterface())
        .addField((new autoclass.field()).setAccessType("inputOutput").setName("description").setType("SFString").setValue("ArtDeco01Material prototype is a Material node").setAppinfo("tooltip for descriptionField"))
        .addField((new autoclass.field()).setAccessType("inputOutput").setName("enabled").setType("SFBool").setValue("true")))
      .setProtoBody((new autoclass.ProtoBody())
        .addComments(" Initial node of ProtoBody determines prototype node type ")
        .addChild((new autoclass.Material()).setShininess(0.127273).setAmbientIntensity(0.25).setSpecularColor(0.276305,0.11431,0.139857).setDiffuseColor(0.282435,0.085159,0.134462))
        .addComments(" [HelloWorldProgram diagnostic] should be connected to scene graph: ArtDeco01ProtoDeclare.getNodeType()=\"Material\" ")
        .addComments(" presence of follow-on TouchSensor shows that additional nodes are allowed in ProtoBody after initial node, regardless of node types ")
        .addChild((new autoclass.TouchSensor()).setDescription("within ProtoBody")
          .setIS((new autoclass.IS())
            .addConnect((new autoclass.connect()).setNodeField("description").setProtoField("description"))
            .addConnect((new autoclass.connect()).setNodeField("enabled").setProtoField("enabled"))))))
    .addChild((new autoclass.ExternProtoDeclare()).setName("ArtDeco02Material").setAppinfo("this is a different Material node").setUrl(new autoclass.MFString("\"http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/ArtDecoPrototypesExcerpt.x3d#ArtDeco02Material\" \"http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/ArtDecoPrototypesExcerpt.x3dv#ArtDeco02Material\""))
      .addComments(" [HelloWorldProgram diagnostic] ArtDeco02ExternProtoDeclare.getNodeType()=\"ERROR_UNKNOWN_EXTERNPROTODECLARE_NODE_TYPE: ExternProtoDeclare name='ArtDeco02Material' type cannot be remotely accessed at run time, TODO X3DJSAIL needs to add further capability.\" ")
      .addField((new autoclass.field()).setAccessType("inputOutput").setName("description").setType("SFString").setAppinfo("tooltip for descriptionField")))
    .addComments(" Tested ArtDeco01ProtoInstance, ArtDeco02ProtoInstance for improper node type when ProtoInstance is added in wrong place ")
    .addChild((new autoclass.Shape("TestShape1"))
      .setAppearance((new autoclass.Appearance("TestAppearance1"))
        .addComments(" ArtDeco01Material prototype goes here... TODO ensure setContainerField is handled in exported Java ")
        .setMaterial((new autoclass.ProtoInstance()).setName("ArtDeco01Material")
          .addComments(" [HelloWorldProgram diagnostic] ArtDeco01ProtoInstance.getNodeType()=\"Material\" ")
          .addFieldValue((new autoclass.fieldValue()).setName("description").setValue("ArtDeco01Material can substitute for a Material node"))))
      .setGeometry((new autoclass.Sphere()).setRadius(0.001)))
    .addChild((new autoclass.Shape("TestShape2"))
      .setAppearance((new autoclass.Appearance("TestAppearance2"))
        .addComments(" ArtDeco02Material prototype goes here... TODO ensure setContainerField is handled in exported Java ")
        .setMaterial((new autoclass.ProtoInstance("ArtDeco02MaterialDEF", "ArtDeco02Material")).setDEF("ArtDeco02MaterialDEF").setName("ArtDeco02Material")
          .addComments(" [HelloWorldProgram diagnostic] ArtDeco02ProtoInstance.getNodeType()=\"ERROR_UNKNOWN_EXTERNPROTODECLARE_NODE_TYPE: ExternProtoDeclare name='ArtDeco02Material' type cannot be remotely accessed at run time, TODO X3DJSAIL needs to add further capability.\" ")
          .addFieldValue((new autoclass.fieldValue()).setName("description").setValue("ArtDeco02Material can substitute for another Material node"))))
      .setGeometry((new autoclass.Cone()).setBottomRadius(0.001).setHeight(0.001)))
    .addChild((new autoclass.Shape("TestShape3"))
      .setAppearance((new autoclass.Appearance("TestAppearance3"))
        .addComments(" ArtDeco02Material ProtoInstance USE goes here... ")
        .setMaterial((new autoclass.ProtoInstance()).setUSE("ArtDeco02MaterialDEF")))
      .setGeometry((new autoclass.Cylinder()).setHeight(0.001).setRadius(0.001)))
    .addChild((new autoclass.Inline("inlineSceneDef")).setUrl(new autoclass.MFString("\"someOtherScene.x3d\"")))
    .addChild((new autoclass.IMPORT()).setImportedDEF("WorldInfoDEF").setInlineDEF("inlineSceneDef").setAS("WorldInfoDEF2"))
    .addChild((new autoclass.EXPORT()).setLocalDEF("WorldInfoDEF").setAS("WorldInfoDEF3"))
    .addChild((new autoclass.ProtoDeclare()).setName("MaterialModulator").setAppinfo("mimic a Material node and modulate fields as an animation effect").setDocumentation("http://x3dgraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/MaterialModulatorIndex.html")
      .setProtoInterface((new autoclass.ProtoInterface())
        .addField((new autoclass.field()).setAccessType("inputOutput").setName("enabled").setType("SFBool").setValue("true"))
        .addField((new autoclass.field()).setAccessType("inputOutput").setName("diffuseColor").setType("SFColor").setValue("0 0 0"))
        .addField((new autoclass.field()).setAccessType("inputOutput").setName("emissiveColor").setType("SFColor").setValue("0.05 0.05 0.5"))
        .addField((new autoclass.field()).setAccessType("inputOutput").setName("specularColor").setType("SFColor").setValue("0 0 0"))
        .addField((new autoclass.field()).setAccessType("inputOutput").setName("transparency").setType("SFFloat").setValue("0.0"))
        .addField((new autoclass.field()).setAccessType("inputOutput").setName("shininess").setType("SFFloat").setValue("0.0"))
        .addField((new autoclass.field()).setAccessType("inputOutput").setName("ambientIntensity").setType("SFFloat").setValue("0.0")))
      .setProtoBody((new autoclass.ProtoBody())
        .addChild((new autoclass.Material("MaterialNode"))
          .setIS((new autoclass.IS())
            .addConnect((new autoclass.connect()).setNodeField("diffuseColor").setProtoField("diffuseColor"))
            .addConnect((new autoclass.connect()).setNodeField("emissiveColor").setProtoField("emissiveColor"))
            .addConnect((new autoclass.connect()).setNodeField("specularColor").setProtoField("specularColor"))
            .addConnect((new autoclass.connect()).setNodeField("transparency").setProtoField("transparency"))
            .addConnect((new autoclass.connect()).setNodeField("shininess").setProtoField("shininess"))
            .addConnect((new autoclass.connect()).setNodeField("ambientIntensity").setProtoField("ambientIntensity"))))
        .addComments(" Only first node (the node type) is renderable, others are along for the ride ")
        .addChild((new autoclass.Script("MaterialModulatorScript")).setSourceCode("\n" + 
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
          .addField((new autoclass.field()).setAccessType("inputOutput").setName("enabled").setType("SFBool"))
          .addField((new autoclass.field()).setAccessType("inputOutput").setName("diffuseColor").setType("SFColor"))
          .addField((new autoclass.field()).setAccessType("outputOnly").setName("newColor").setType("SFColor"))
          .addField((new autoclass.field()).setAccessType("inputOnly").setName("clockTrigger").setType("SFTime"))
          .setIS((new autoclass.IS())
            .addConnect((new autoclass.connect()).setNodeField("enabled").setProtoField("enabled"))
            .addConnect((new autoclass.connect()).setNodeField("diffuseColor").setProtoField("diffuseColor"))))))
    .addComments(" Test success: declarative statement createDeclarativeShapeTests() ")
    .addChild((new autoclass.Group("DeclarativeGroupExample"))
      .addChild((new autoclass.Shape())
        .setMetadata((new autoclass.MetadataString("FindableMetadataStringTest")).setName("findThisNameValue").setValue(new autoclass.MFString("\"test case\"")))
        .setAppearance((new autoclass.Appearance("DeclarativeAppearanceExample"))
          .addComments(" DeclarativeMaterialExample gets overridden by subsequently added MaterialModulator ProtoInstance ")
          .setMaterial((new autoclass.ProtoInstance("MyMaterialModulator", "MaterialModulator")).setDEF("MyMaterialModulator").setName("MaterialModulator")))
        .setGeometry((new autoclass.Cone()).setBottomRadius(0.05).setHeight(0.1).setBottom(false)))
      .addComments(" Test success: declarativeGroup.addChild() singleton pipeline method "))
    .addComments(" Test success: declarative statement addChild() ")
    .addComments(" Test success: x3dModel.findNodeByDEF(DeclarativeAppearanceExample) = <Appearance DEF='DeclarativeAppearanceExample'/> i.e. <Appearance DEF='DeclarativeAppearanceExample'> <!- - DeclarativeMaterialExample gets overridden by subsequently added MaterialModulator ProtoInstance - -> <ProtoInstance DEF='MyMaterialModulator' name='MaterialModulator' containerField='material'/> </Appearance> ")
    .addComments(" Test success: x3dModel.findElementByNameValue(findThisNameValue) = <MetadataString DEF='FindableMetadataStringTest' name='findThisNameValue' value='\"test case\"'/> ")
    .addComments(" Test success: x3dModel.findElementByNameValue(\"ArtDeco01Material\", \"ProtoDeclare\") found ")
    .addComments(" Test success: x3dModel.findElementByNameValue(\"MaterialModulator\", \"ProtoDeclare\") found ")
    .addComments(" Test success: x3dModel.findElementByNameValue(\"MaterialModulator\", \"ProtoInstance\") found ")
    .addChild((new autoclass.Group("TestFieldObjectsGroup"))
      .addComments(" testFieldObjects() results ")
      .addComments(" SFBool default=true, true=true, false=false, negate()=true ")
      .addComments(" MFBool default=, initial=true false true, negate()=false true false ")
      .addComments(" SFFloat default=0.0, initial=1.0, setValue(2)=2.0, setValue(3.0f)=3.0, setValue(4.0)=4.0 ")
      .addComments(" MFFloat default=, initial=1 2 3, append(5)=1 2 3 5, inserts(3,4)(0,0)=0 1 2 3 4 5, append(6)=0 1 2 3 4 5 6, size()=7 ")
      .addComments(" ... get1Value[3]=3.0, remove[1]=0 2 3 4 5 6, set1Value(0,10)=10 2 3 4 5 6, multiply(2)=20 4 6 8 10 12, clear= ")
      .addComments(" SFVec3f default=0 0 0, initial=1 2 3, setValue=4 5 6, multiply(2)=8 10 12, normalize()=0.45584232 0.5698029 0.68376344 "))
    .addChild((new autoclass.Sound()).setLocation(0.0,1.6,0.0)
      .addComments(" set sound-ellipsoid location height at 1.6m to match typical avatar height ")
      .setSource((new autoclass.AudioClip()).setDescription("chimes").setUrl(new autoclass.MFString("\"chimes.wav\" \"http://www.web3d.org/x3d/content/examples/ConformanceNist/Sounds/AudioClip/chimes.wav\""))
        .addComments(" Scene example fragment from http://www.web3d.org/x3d/content/examples/ConformanceNist/Sounds/AudioClip/default.x3d ")))
    .addChild((new autoclass.Sound()).setLocation(0.0,1.6,0.0)
      .addComments(" set sound-ellipsoid location height at 1.6m to match typical avatar height ")
      .setSource((new autoclass.MovieTexture()).setDescription("mpgsys.mpg from ConformanceNist suite").setUrl(new autoclass.MFString("\"mpgsys.mpg\" \"http://www.web3d.org/x3d/content/examples/ConformanceNist/Appearance/MovieTexture/mpgsys.mpg\""))
        .addComments(" Scene example fragment from http://www.web3d.org/x3d/content/examples/ConformanceNist/Appearance/MovieTexture/mpeg1-systems.x3d ")
        .addComments(" Expected containerField='source', allowed containerField values=\"texture\" \"source\" \"back\" \"bottom\" \"front\" \"left\" \"right\" \"top\" \"backTexture\" \"bottomTexture\" \"frontTexture\" \"leftTexture\" \"rightTexture\" \"topTexture\" ")))
    .addComments(" Test success: AnchorObject.isNode()=true, siteAnchor.isNode()=true ")
    .addComments(" Test success: AnchorObject.isStatement()=false, siteAnchor.isStatement()=false ")
    .addComments(" Test success: ROUTEObject.isNode()=false, orbitPositionROUTE.isNode()=false ")
    .addComments(" Test success: ROUTEObject.isStatement()=true, orbitPositionROUTE.isStatement()=true ")
    .addComments(" Test success: CommentsBlock.isNode()=false, testComments.isNode()=false ")
    .addComments(" Test failure: CommentsBlock.isStatement()=true, testComments.isStatement()=true ")
    .addChild((new autoclass.Shape("ExtrusionShape"))
      .addComments(" ExampleExtrusion isCrossSectionClosed()=true, crossSection='[1.0, 1.0, 1.0, -1.0, -1.0, -1.0, -1.0, 1.0, 1.0, 1.0]' ")
      .addComments(" ExampleExtrusion isSpineClosed()=false, spine='[0.0, 0.0, 0.0, 0.0, 1.0, 0.0]' ")
      .setAppearance((new autoclass.Appearance("TransparentAppearance"))
        .setMaterial((new autoclass.Material()).setTransparency(1.0)))
      .setGeometry((new autoclass.Extrusion("ExampleExtrusion")))));
  },
  // end of initialize() method


  /** Provide a shallow copy of the X3D model.
   * @return Java model
   */
  getX3dModel : function()
  {	  
	  return this.x3dModel;
  },
  
  /** Indicate X3DJSAIL validation results for this X3D model.
   * @return validation results plus exception information, if any
   */
  validateSelf : function()
  {
	var       metaResult = "";
	var validationResult = "";
	var  exceptionResult = "";
	try
	{
		this.initialize();
		
		if ((this.getX3dModel() == null) || (this.getX3dModel().getHead() == null))
		{
			validationResult = "empty scene, nothing to validate. " + this.x3dModel.validate();
			return validationResult;
		}
		// first list informational meta elements of interest
		var metaList = this.getX3dModel().getHead().getMetaList();
		for (var m in metaList) {
			meta = metaList[m];
			if (meta.getName().equals(meta.NAME_ERROR) ||
				meta.getName().equals(meta.NAME_WARNING) ||
				meta.getName().equals(meta.NAME_HINT) ||
				meta.getName().equals(meta.NAME_INFO) ||
				meta.getName().equals(meta.NAME_TODO))
			{
				metaResult += meta.toStringX3D();
			}
		}
		validationResult += this.x3dModel.validate(); // walk entire tree to validate correctness
	}
	catch (e)
	{
		exceptionResult = e; // report exception failures, if any
	}
	if  (metaResult === "" && exceptionResult === "" && validationResult === "")
	     return "success";
	else
	{
		var returnMessage = metaResult;
		if  (exceptionResult !== "" && validationResult !== "")
			returnMessage += "\n*** ";
		returnMessage += exceptionResult;
		if  (exceptionResult === "" && validationResult !== "")
			returnMessage = "\n" + returnMessage; // skip line before meta tags, etc.
		returnMessage += validationResult;
		return returnMessage;
	}
  },
    /** Default main() method provided for test purposes.
     * @param argv input parameters
     */
    main : function (argv)
    {
		var testObject = new Java();
		console.log ("Java execution self-validation test results: " + testObject.validateSelf());
	}
}
new Java().main();