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
 * <p> A flower proto with configurable shaders. </p>
 <p> Related links: flowerproto.java source, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a> and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;" summary="Scene Metadata">
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">net.x3djsonld.data.flowerproto&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="https://coderextreme.net/X3DJSONLD/flowerproto.x3d">flowerproto.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> John Carlson </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> A flower proto with configurable shaders </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> generator </i> </td>
			<td> X3D-Edit, <a href="https://savage.nps.edu/X3D-Edit" target="_blank">https://savage.nps.edu/X3D-Edit</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="https://coderextreme.net/X3DJSONLD/flowerproto.x3d" target="_blank">https://coderextreme.net/X3DJSONLD/flowerproto.x3d</a> </td>
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

	* @author John Carlson
 */

function flowerproto
  /** Default constructor to create this object. */
  ()
  {
    /** The initialized model object, created within initialize() method. */
    this.x3dModel = {};
    this.initialize();
    return this;
  }
flowerproto.prototype = {
  /** Create and initialize the X3D model. */
  initialize : function ()
  {
  this.x3dModel = (new autoclass.X3D()).setProfile("Immersive").setVersion("4.0")
  .setHead((new autoclass.head())
    .addComponent((new autoclass.component()).setName("Shaders").setLevel(1))
    .addComponent((new autoclass.component()).setName("CubeMapTexturing").setLevel(1))
    .addComponent((new autoclass.component()).setName("Texturing").setLevel(1))
    .addComponent((new autoclass.component()).setName("Rendering").setLevel(1))
    .addComponent((new autoclass.component()).setName("Shape").setLevel(4))
    .addComponent((new autoclass.component()).setName("Grouping").setLevel(3))
    .addMeta((new autoclass.meta()).setName("title").setContent("flowerproto.x3d"))
    .addMeta((new autoclass.meta()).setName("creator").setContent("John Carlson"))
    .addMeta((new autoclass.meta()).setName("description").setContent("A flower proto with configurable shaders"))
    .addMeta((new autoclass.meta()).setName("generator").setContent("X3D-Edit, https://savage.nps.edu/X3D-Edit"))
    .addMeta((new autoclass.meta()).setName("identifier").setContent("https://coderextreme.net/X3DJSONLD/flowerproto.x3d")))
  .setScene((new autoclass.Scene())
    .addChild((new autoclass.ProtoDeclare()).setName("FlowerProto")
      .setProtoInterface((new autoclass.ProtoInterface())
        .addField((new autoclass.field()).setName("vertex").setType("MFString").setAccessType("inputOutput").setValue("\"../shaders/gl_flowers_chromatic.vs\""))
        .addField((new autoclass.field()).setName("fragment").setType("MFString").setAccessType("inputOutput").setValue("\"../shaders/pc_flowers.fs\"")))
      .setProtoBody((new autoclass.ProtoBody())
        .addChild((new autoclass.Transform("transform"))
          .addChild((new autoclass.Shape())
            .setAppearance((new autoclass.Appearance())
              .setMaterial((new autoclass.Material()).setDiffuseColor(.7,.7,.7).setSpecularColor(.5,.5,.5))
              .setTexture((new autoclass.ComposedCubeMapTexture("texture"))
                .setBack((new autoclass.ImageTexture()).setUrl(new autoclass.MFString("\"../resources/images/all_probes/stpeters_cross/stpeters_back.png\" \"https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_back.png\"")))
                .setBottom((new autoclass.ImageTexture()).setUrl(new autoclass.MFString("\"../resources/images/all_probes/stpeters_cross/stpeters_bottom.png\" \"https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_bottom.png\"")))
                .setFront((new autoclass.ImageTexture()).setUrl(new autoclass.MFString("\"../resources/images/all_probes/stpeters_cross/stpeters_front.png\" \"https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_front.png\"")))
                .setLeft((new autoclass.ImageTexture()).setUrl(new autoclass.MFString("\"../resources/images/all_probes/stpeters_cross/stpeters_left.png\" \"https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_left.png\"")))
                .setRight((new autoclass.ImageTexture()).setUrl(new autoclass.MFString("\"../resources/images/all_probes/stpeters_cross/stpeters_right.png\" \"https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_right.png\"")))
                .setTop((new autoclass.ImageTexture()).setUrl(new autoclass.MFString("\"../resources/images/all_probes/stpeters_cross/stpeters_top.png\" \"https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_top.png\""))))
              .addShaders((new autoclass.ComposedShader("shader")).setLanguage("GLSL")
                .addField((new autoclass.field()).setName("cube").setType("SFInt32").setAccessType("inputOutput").setValue("0"))
                .addComments(java.newArray("java.lang.String",[" ",
"		       <field name='cube' type='SFNode' accessType=\"inputOutput\">",
"			  <ComposedCubeMapTexture USE=\"texture\"/>",
"		  </field>"]))
                .addField((new autoclass.field()).setName("chromaticDispertion").setType("SFVec3f").setAccessType("initializeOnly").setValue("0.98 1.0 1.033"))
                .addField((new autoclass.field()).setName("bias").setType("SFFloat").setAccessType("inputOutput").setValue("0.5"))
                .addField((new autoclass.field()).setName("scale").setType("SFFloat").setAccessType("inputOutput").setValue("0.5"))
                .addField((new autoclass.field()).setName("power").setType("SFFloat").setAccessType("inputOutput").setValue("2"))
                .addField((new autoclass.field()).setName("a").setType("SFFloat").setAccessType("inputOutput").setValue("10"))
                .addField((new autoclass.field()).setName("b").setType("SFFloat").setAccessType("inputOutput").setValue("1"))
                .addField((new autoclass.field()).setName("c").setType("SFFloat").setAccessType("inputOutput").setValue("20"))
                .addField((new autoclass.field()).setName("d").setType("SFFloat").setAccessType("inputOutput").setValue("20"))
                .addField((new autoclass.field()).setName("tdelta").setType("SFFloat").setAccessType("inputOutput").setValue("0"))
                .addField((new autoclass.field()).setName("pdelta").setType("SFFloat").setAccessType("inputOutput").setValue("0"))
                .addParts((new autoclass.ShaderPart())
                  .setIS((new autoclass.IS())
                    .addConnect((new autoclass.connect()).setNodeField("url").setProtoField("vertex"))))
                .addParts((new autoclass.ShaderPart()).setType("FRAGMENT")
                  .setIS((new autoclass.IS())
                    .addConnect((new autoclass.connect()).setNodeField("url").setProtoField("fragment"))))))
            .setGeometry((new autoclass.Sphere())))
          .addChild((new autoclass.Script("Animate")).setSourceCode("\n" + 
"\n" + 
"  " + "\n" + 
"ecmascript:" + "\n" + 
"			function initialize() {" + "\n" + 
"			    translation = new SFVec3f(0, 0, 0);" + "\n" + 
"			    velocity = new SFVec3f(" + "\n" + 
"			    	Math.random() - 0.5," + "\n" + 
"				Math.random() - 0.5," + "\n" + 
"				Math.random() - 0.5);" + "\n" + 
"			}" + "\n" + 
"			function set_fraction() {" + "\n" + 
"			    translation = new SFVec3f(" + "\n" + 
"			    	translation.x + velocity.x," + "\n" + 
"				translation.y + velocity.y," + "\n" + 
"				translation.z + velocity.z);" + "\n" + 
"			    for (var j = 0; j <= 2; j++) {" + "\n" + 
"				    if (Math.abs(translation.x) > 10) {" + "\n" + 
"					initialize();" + "\n" + 
"				    } else if (Math.abs(translation.y) > 10) {" + "\n" + 
"					initialize();" + "\n" + 
"				    } else if (Math.abs(translation.z) > 10) {" + "\n" + 
"					initialize();" + "\n" + 
"				    } else {" + "\n" + 
"					velocity.x += Math.random() * 0.2 - 0.1;" + "\n" + 
"					velocity.y += Math.random() * 0.2 - 0.1;" + "\n" + 
"					velocity.z += Math.random() * 0.2 - 0.1;" + "\n" + 
"				    }" + "\n" + 
"			    }" + "\n" + 
"			    animate_flowers();" + "\n" + 
"			}" + "\n" + 
"\n" + 
"			function animate_flowers(fraction, eventTime) {" + "\n" + 
"				var choice = Math.floor(Math.random() * 4);" + "\n" + 
"				switch (choice) {" + "\n" + 
"				case 0:" + "\n" + 
"					a += Math.random() * 0.2 - 0.1;" + "\n" + 
"					break;" + "\n" + 
"				case 1:" + "\n" + 
"					b += Math.random() * 0.2 - 0.1;" + "\n" + 
"					break;" + "\n" + 
"				case 2:" + "\n" + 
"					c += Math.random() * 2 - 1;" + "\n" + 
"					break;" + "\n" + 
"				case 3:" + "\n" + 
"					d += Math.random() * 2 - 1;" + "\n" + 
"					break;" + "\n" + 
"				}" + "\n" + 
"				tdelta += 0.5;" + "\n" + 
"				pdelta += 0.5;" + "\n" + 
"				if (a > 1) {" + "\n" + 
"					a =  0.5;" + "\n" + 
"				}" + "\n" + 
"				if (b > 1) {" + "\n" + 
"					b =  0.5;" + "\n" + 
"				}" + "\n" + 
"				if (c < 1) {" + "\n" + 
"					c =  4;" + "\n" + 
"				}" + "\n" + 
"				if (d < 1) {" + "\n" + 
"					d =  4;" + "\n" + 
"				}" + "\n" + 
"				if (c > 10) {" + "\n" + 
"					c = 4;" + "\n" + 
"				}" + "\n" + 
"				if (d > 10) {" + "\n" + 
"					d = 4;" + "\n" + 
"				}" + "\n" + 
"			}" + "\n")
            .addField((new autoclass.field()).setName("translation").setType("SFVec3f").setAccessType("inputOutput").setValue("0 0 0"))
            .addField((new autoclass.field()).setName("velocity").setType("SFVec3f").setAccessType("inputOutput").setValue("0 0 0"))
            .addField((new autoclass.field()).setName("set_fraction").setType("SFFloat").setAccessType("inputOnly"))
            .addField((new autoclass.field()).setName("a").setType("SFFloat").setAccessType("inputOutput").setValue("0.5"))
            .addField((new autoclass.field()).setName("b").setType("SFFloat").setAccessType("inputOutput").setValue("0.5"))
            .addField((new autoclass.field()).setName("c").setType("SFFloat").setAccessType("inputOutput").setValue("3"))
            .addField((new autoclass.field()).setName("d").setType("SFFloat").setAccessType("inputOutput").setValue("3"))
            .addField((new autoclass.field()).setName("tdelta").setType("SFFloat").setAccessType("inputOutput").setValue("0.5"))
            .addField((new autoclass.field()).setName("pdelta").setType("SFFloat").setAccessType("inputOutput").setValue("0.5")))
          .addChild((new autoclass.TimeSensor("TourTime")).setCycleInterval(5).setLoop(true))
          .addChild((new autoclass.ROUTE()).setFromNode("TourTime").setFromField("fraction_changed").setToNode("Animate").setToField("set_fraction"))
          .addChild((new autoclass.ROUTE()).setFromNode("Animate").setFromField("translation_changed").setToNode("transform").setToField("set_translation"))
          .addChild((new autoclass.ROUTE()).setFromNode("Animate").setFromField("a").setToNode("shader").setToField("a"))
          .addChild((new autoclass.ROUTE()).setFromNode("Animate").setFromField("b").setToNode("shader").setToField("b"))
          .addChild((new autoclass.ROUTE()).setFromNode("Animate").setFromField("c").setToNode("shader").setToField("c"))
          .addChild((new autoclass.ROUTE()).setFromNode("Animate").setFromField("d").setToNode("shader").setToField("d"))
          .addChild((new autoclass.ROUTE()).setFromNode("Animate").setFromField("tdelta").setToNode("shader").setToField("tdelta"))
          .addChild((new autoclass.ROUTE()).setFromNode("Animate").setFromField("pdelta").setToNode("shader").setToField("pdelta"))))));
  },
  // end of initialize() method


  /** Provide a shallow copy of the X3D model.
   * @return flowerproto model
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
		var testObject = new flowerproto();
		console.log ("flowerproto execution self-validation test results: " + testObject.validateSelf());
	}
}
new flowerproto().main();