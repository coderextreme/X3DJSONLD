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
 * <p> Example HelloWorldProgram creates an X3D model using the X3D Java Scene Access Interface Library (X3DJSAIL). </p>
 <p> Related links: NeedClassName.java source, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a> and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;" summary="Scene Metadata">
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">net.x3djsonld.data.NeedClassName&nbsp; Document Metadata </td>
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
			<td> 20 December 2020 </td>
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
			<td> Netbeans <a href="http://www.netbeans.org" target="_blank">http://www.netbeans.org</a> </td>
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

function NeedClassName
  /** Default constructor to create this object. */
  ()
  {
    /** The initialized model object, created within initialize() method. */
    this.x3dModel = {};
    this.initialize();
    return this;
  }
NeedClassName.prototype = {
  /** Create and initialize the X3D model. */
  initialize : function ()
  {
  this.x3dModel = (new autoclass.X3D()).setProfile("Full").setVersion("4.0")
  .addComments(" x3dVersionComparisonTest for this model: supportsX3dVersion(X3D.VERSION_3_0)=true ")
  .setHead((new autoclass.head())
    .addComments(" comment #1 ")
    .addComments(" comment #2 ")
    .addComments(" comment #3 ")
    .addComments(" comment #4 ")
    .addComponent((new autoclass.component()).setName("Navigation").setLevel(3))
    .addComponent((new autoclass.component()).setName("Shaders").setLevel(1))
    .addComponent((new autoclass.component()).setName("CADGeometry").setLevel(2))
    .addComponent((new autoclass.component()).setName("DIS").setLevel(2))
    .addComponent((new autoclass.component()).setName("H-Anim").setLevel(1))
    .addComponent((new autoclass.component()).setName("Grouping").setLevel(1))
    .addComponent((new autoclass.component()).setName("Layering").setLevel(1))
    .addUnit((new autoclass.unit()).setName("AngleUnitConversion").setConversionFactor(1.0).setCategory("angle"))
    .addUnit((new autoclass.unit()).setName("LengthUnitConversion").setConversionFactor(1.0).setCategory("length"))
    .addUnit((new autoclass.unit()).setName("ForceFromPoundsToNewtons").setConversionFactor(4.4482).setCategory("force"))
    .addMeta((new autoclass.meta()).setName("title").setContent("HelloWorldProgramOutput.x3d"))
    .addMeta((new autoclass.meta()).setName("info").setContent("continued development and testing in progress"))
    .addMeta((new autoclass.meta()).setName("description").setContent("Example HelloWorldProgram creates an X3D model using the X3D Java Scene Access Interface Library (X3DJSAIL)"))
    .addMeta((new autoclass.meta()).setName("reference").setContent("https://www.web3d.org/specifications/java/X3DJSAIL.html"))
    .addMeta((new autoclass.meta()).setName("generator").setContent("HelloWorldProgramOutput.java"))
    .addMeta((new autoclass.meta()).setName("created").setContent("6 September 2016"))
    .addMeta((new autoclass.meta()).setName("modified").setContent("20 December 2020"))
    .addMeta((new autoclass.meta()).setName("generator").setContent("X3D Java Scene Access Interface Library (X3DJSAIL)"))
    .addMeta((new autoclass.meta()).setName("generator").setContent("https://www.web3d.org/specifications/java/examples/HelloWorldProgram.java"))
    .addMeta((new autoclass.meta()).setName("generator").setContent("Netbeans http://www.netbeans.org"))
    .addMeta((new autoclass.meta()).setName("creator").setContent("Don Brutzman"))
    .addMeta((new autoclass.meta()).setName("reference").setContent("https://sourceforge.net/p/x3d/code/HEAD/tree/www.web3d.org/x3d/stylesheets/java/examples/HelloWorldProgramOutput.x3d"))
    .addMeta((new autoclass.meta()).setName("reference").setContent("Console output, ClassicVRML encoding, VRML97 encoding and pretty-print documentation:"))
    .addMeta((new autoclass.meta()).setName("reference").setContent("HelloWorldProgramOutput.txt"))
    .addMeta((new autoclass.meta()).setName("reference").setContent("HelloWorldProgramOutput.x3dv"))
    .addMeta((new autoclass.meta()).setName("reference").setContent("HelloWorldProgramOutput.wrl"))
    .addMeta((new autoclass.meta()).setName("reference").setContent("HelloWorldProgramOutput.html"))
    .addMeta((new autoclass.meta()).setName("reference").setContent("https://savage.nps.edu/X3dValidator?url=https://www.web3d.org/specifications/java/examples/HelloWorldProgramOutput.x3d"))
    .addMeta((new autoclass.meta()).setName("identifier").setContent("https://www.web3d.org/specifications/java/examples/HelloWorldProgramOutput.x3d"))
    .addMeta((new autoclass.meta()).setName("license").setContent("../license.html")))
  .setScene((new autoclass.Scene())
    .addMetadata((new autoclass.MetadataSet()).setName("topLevelSceneMetadata"))
    .addChild((new autoclass.ViewpointGroup()).setDescription("Available viewpoints")
      .addChild((new autoclass.Viewpoint("DefaultView")).setDescription("Hello X3DJSAIL"))
      .addChild((new autoclass.Viewpoint("TopDownView")).setDescription("top-down view from above").setPosition(0.0,100.0,0.0).setOrientation(1.0,0.0,0.0,-1.570796)))
    .addChild((new autoclass.NavigationInfo()).setType(new autoclass.MFString("\"EXAMINE\" \"FLY\" \"ANY\"")))
    .addChild((new autoclass.WorldInfo("WorldInfoDEF")).setTitle("HelloWorldProgram produced by X3D Java SAI Library (X3DJSAIL)"))
    .addChild((new autoclass.WorldInfo()).setUSE("WorldInfoDEF"))
    .addChild((new autoclass.WorldInfo()).setUSE("WorldInfoDEF"))
    .addMetadata((new autoclass.MetadataString("scene.addChildMetadata")).setName("test").setValue(new autoclass.MFString("\"Top-level root Metadata node beneath Scene needs to be one of '-children' in JSON encoding\"")))
    .addLayerSet((new autoclass.LayerSet("scene.addChildLayerSetTest")))
    .addChild((new autoclass.Transform("LogoGeometryTransform")).setTranslation(0.0,1.5,0.0)
      .addChild((new autoclass.Anchor("siteAnchor")).setDescription("select for X3D Java SAI Library (X3DJSAIL) description").setUrl(new autoclass.MFString("\"../X3DJSAIL.html\" \"https://www.web3d.org/specifications/java/X3DJSAIL.html\""))
        .addChild((new autoclass.Shape("BoxShape"))
          .setAppearance((new autoclass.Appearance())
            .setMaterial((new autoclass.Material("GreenMaterial")).setDiffuseColor(0.0,1.0,1.0).setTransparency(0.1).setEmissiveColor(0.8,0.0,0.0))
            .setTexture((new 