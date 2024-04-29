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
 * <p> Simple shader example. </p>
 <p> Related links: <a href="../../../Shaders/SimpleShader.java">SimpleShader.java</a> source, <a href="../../../Shaders/SimpleShaderIndex.html" target="_top">SimpleShader catalog page</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a> and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;" summary="Scene Metadata">
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="../../../Shaders/SimpleShader.x3d">SimpleShader.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> Simple shader example </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> John Stewart </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> translator </i> </td>
			<td> Holger Seelig, John Carlson, Don Brutzman and Jeff Malnick </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> created </i> </td>
			<td> 26 May 2009 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> translated </i> </td>
			<td> 15 October 2009 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> modified </i> </td>
			<td> 20 October 2019 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="http://www.opengl.org/wiki/Fragment_Shader" target="_blank">http://www.opengl.org/wiki/Fragment_Shader</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="http://www.opengl.org/wiki/http://www.opengl.org/wiki/Vertex_Shader" target="_blank">http://www.opengl.org/wiki/http://www.opengl.org/wiki/Vertex_Shader</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="https://www.web3d.org/x3d/wiki/index.php/X3D_Plugfest" target="_blank">https://www.web3d.org/x3d/wiki/index.php/X3D_Plugfest</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> subject </i> </td>
			<td> X3D shader example </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="../../../Shaders/originals/simpleShader.x3dv">originals/simpleShader.x3dv</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="../../../Shaders/ShaderTutorialInstantReality.pdf">ShaderTutorialInstantReality.pdf</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> generator </i> </td>
			<td> Titania V3.0.3, <a href="http://titania.create3000.de" target="_blank">http://titania.create3000.de</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> info </i> </td>
			<td> World of Titania </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> outputStyle </i> </td>
			<td> nicest </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> generator </i> </td>
			<td> X3D-Edit 3.3, <a href="https://savage.nps.edu/X3D-Edit" target="_blank">https://savage.nps.edu/X3D-Edit</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/Basic/Shaders/SimpleShader.x3d" target="_blank">https://www.web3d.org/x3d/content/examples/Basic/Shaders/SimpleShader.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> license </i> </td>
			<td> <a href="../../../Shaders/../../license.html">../../license.html</a> </td>
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

	* @author John Stewart
 */

function SimpleShader
  /** Default constructor to create this object. */
  ()
  {
    /** The initialized model object, created within initialize() method. */
    this.x3dModel = {};
    this.initialize();
    return this;
  }
SimpleShader.prototype = {
  /** Create and initialize the X3D model. */
  initialize : function ()
  {
  this.x3dModel = (new autoclass.X3D()).setProfile("Immersive").setVersion("3.2")
  .setHead((new autoclass.head())
    .addComponent((new autoclass.component()).setName("Shaders").setLevel(1))
    .addMeta((new autoclass.meta()).setName("title").setContent("SimpleShader.x3d"))
    .addMeta((new autoclass.meta()).setName("description").setContent("Simple shader example"))
    .addMeta((new autoclass.meta()).setName("creator").setContent("John Stewart"))
    .addMeta((new autoclass.meta()).setName("translator").setContent("Holger Seelig, John Carlson, Don Brutzman and Jeff Malnick"))
    .addMeta((new autoclass.meta()).setName("created").setContent("26 May 2009"))
    .addMeta((new autoclass.meta()).setName("translated").setContent("15 October 2009"))
    .addMeta((new autoclass.meta()).setName("modified").setContent("20 October 2019"))
    .addMeta((new autoclass.meta()).setName("reference").setContent("http://www.opengl.org/wiki/Fragment_Shader"))
    .addMeta((new autoclass.meta()).setName("reference").setContent("http://www.opengl.org/wiki/http://www.opengl.org/wiki/Vertex_Shader"))
    .addMeta((new autoclass.meta()).setName("reference").setContent("https://www.web3d.org/x3d/wiki/index.php/X3D_Plugfest"))
    .addMeta((new autoclass.meta()).setName("subject").setContent("X3D shader example"))
    .addMeta((new autoclass.meta()).setName("reference").setContent("originals/simpleShader.x3dv"))
    .addMeta((new autoclass.meta()).setName("reference").setContent("ShaderTutorialInstantReality.pdf"))
    .addMeta((new autoclass.meta()).setName("generator").setContent("Titania V3.0.3, http://titania.create3000.de"))
    .addMeta((new autoclass.meta()).setName("info").setContent("World of Titania"))
    .addMeta((new autoclass.meta()).setName("outputStyle").setContent("nicest"))
    .addComments("meta content='under development' name='warning'/")
    .addMeta((new autoclass.meta()).setName("generator").setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
    .addMeta((new autoclass.meta()).setName("identifier").setContent("https://www.web3d.org/x3d/content/examples/Basic/Shaders/SimpleShader.x3d"))
    .addMeta((new autoclass.meta()).setName("license").setContent("../../license.html")))
  .setScene((new autoclass.Scene())
    .addChild((new autoclass.ProtoDeclare()).setName("myPrototype")
      .setProtoInterface((new autoclass.ProtoInterface())
        .addField((new autoclass.field()).setName("myInputRange").setType("SFVec3f").setAccessType("initializeOnly").setValue("0.95 0.44 0.22")))
      .setProtoBody((new autoclass.ProtoBody())
        .addChild((new autoclass.Transform("TR"))
          .addChild((new autoclass.Shape())
            .setAppearance((new autoclass.Appearance())
              .setMaterial((new autoclass.Material()).setDiffuseColor(0.5,0.5,0.9))
              .addShaders((new autoclass.ComposedShader()).setLanguage("GLSL")
                .addField((new autoclass.field()).setName("decis").setType("SFVec3f").setAccessType("initializeOnly"))
                .setIS((new autoclass.IS())
                  .addConnect((new autoclass.connect()).setNodeField("decis").setProtoField("myInputRange")))
                .addParts((new autoclass.ShaderPart()))
                .addParts((new autoclass.ShaderPart()).setType("FRAGMENT")))
              .addShaders((new autoclass.ComposedShader("Cobweb")).setLanguage("GLSL")
                .addField((new autoclass.field()).setName("decis").setType("SFVec3f").setAccessType("initializeOnly").setValue("0.95 0.77 0.44"))
                .addParts((new autoclass.ShaderPart()))
                .addParts((new autoclass.ShaderPart("_1")).setType("FRAGMENT"))))
            .setGeometry((new autoclass.Sphere()).setRadius(1.75))))))
    .addChild((new autoclass.WorldInfo()).setTitle("SimpleShader")
      .setMetadata((new autoclass.MetadataSet("Titania")).setName("Titania").setReference("http://titania.create3000.de")
        .addValue((new autoclass.MetadataSet("Selection")).setName("Selection").setReference("http://titania.create3000.de")
          .addValue((new autoclass.MetadataSet("nodes")).setName("nodes").setReference("http://titania.create3000.de")
            .addComments(" NULL ")))
        .addValue((new autoclass.MetadataSet("NavigationInfo")).setName("NavigationInfo").setReference("http://titania.create3000.de")
          .addValue((new autoclass.MetadataString("type")).setName("type").setReference("http://titania.create3000.de").setValue(new autoclass.MFString("\"EXAMINE\""))))
        .addValue((new autoclass.MetadataSet("Viewpoint")).setName("Viewpoint").setReference("http://titania.create3000.de")
          .addValue((new autoclass.MetadataDouble("position")).setName("position").setReference("http://titania.create3000.de").setValue(java.newArray("double", [6.24067728185014,0.00250837343276661,2.92117542307615])))
          .addValue((new autoclass.MetadataDouble("orientation")).setName("orientation").setReference("http://titania.create3000.de").setValue(java.newArray("double", [-0.110173424710488,0.990158061907379,-0.0863065984000336,1.21146676119191])))
          .addValue((new autoclass.MetadataDouble("centerOfRotation")).setName("centerOfRotation").setReference("http://titania.create3000.de").setValue(java.newArray("double", [-0.808320198626341,-0.358072370409949,0.22817191560906]))))))
    .addChild((new autoclass.ProtoInstance())));
  },
  // end of initialize() method


  /** Provide a shallow copy of the X3D model.
   * @return SimpleShader model
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
		validationResult += this.x3dModel.validate(); // walk entire tree to validate correctness
	}
	catch (e)
	{
		exceptionResult = e; // report exception failures, if any
	}
	if  (exceptionResult === "" && validationResult === "")
	     return "success";
	else
	{
		var returnMessage = "";
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
		var testObject = new SimpleShader();
		console.log ("SimpleShader execution self-validation test results: " + testObject.validateSelf());
		process.exit();
	}
}
new SimpleShader().main();