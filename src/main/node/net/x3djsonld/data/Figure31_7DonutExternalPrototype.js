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
 * <p> A donut shape built using prototypes: the Donut geometry node and the LightOak appearance node. Also see Figures 30.5 and 31.6 for comparison. </p>
 <p> Related links: <a href="../../../Chapter31Prototypes/Figure31_7DonutExternalPrototype.java">Figure31_7DonutExternalPrototype.java</a> source, <a href="../../../Chapter31Prototypes/Figure31_7DonutExternalPrototypeIndex.html" target="_top">Figure31_7DonutExternalPrototype catalog page</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a> and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;" summary="Scene Metadata">
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="../../../Chapter31Prototypes/Figure31_7DonutExternalPrototype.x3d">Figure31_7DonutExternalPrototype.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> Figure 31.7, The VRML 2.0 Sourcebook, Copyright [1997] By Andrea L. Ames, David R. Nadeau, and John L. Moreland </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="http://www.wiley.com/legacy/compbooks/vrml2sbk/ch31/31fig07.htm" target="_blank">http://www.wiley.com/legacy/compbooks/vrml2sbk/ch31/31fig07.htm</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> translator </i> </td>
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
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> A donut shape built using prototypes: the Donut geometry node and the LightOak appearance node. Also see Figures 30.5 and 31.6 for comparison. </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/Vrml2Sourcebook/Chapter31Prototypes/Figure31_7DonutExternalPrototype.x3d" target="_blank">https://www.web3d.org/x3d/content/examples/Vrml2Sourcebook/Chapter31Prototypes/Figure31_7DonutExternalPrototype.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> generator </i> </td>
			<td> X3D-Edit 3.3, <a href="https://savage.nps.edu/X3D-Edit" target="_blank">https://savage.nps.edu/X3D-Edit</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> license </i> </td>
			<td> <a href="../../../Chapter31Prototypes/../../license.html">../../license.html</a> </td>
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

	* @author Figure 31.7, The VRML 2.0 Sourcebook, Copyright [1997] By Andrea L. Ames, David R. Nadeau, and John L. Moreland
 */

function Figure31_7DonutExternalPrototype
  /** Default constructor to create this object. */
  ()
  {
    /** The initialized model object, created within initialize() method. */
    this.x3dModel = {};
    this.initialize();
    return this;
  }
Figure31_7DonutExternalPrototype.prototype = {
  /** Create and initialize the X3D model. */
  initialize : function ()
  {
  this.x3dModel = (new autoclass.X3D()).setProfile("Immersive").setVersion("3.0")
  .setHead((new autoclass.head())
    .addMeta((new autoclass.meta()).setName("title").setContent("Figure31_7DonutExternalPrototype.x3d"))
    .addMeta((new autoclass.meta()).setName("creator").setContent("Figure 31.7, The VRML 2.0 Sourcebook, Copyright [1997] By Andrea L. Ames, David R. Nadeau, and John L. Moreland"))
    .addMeta((new autoclass.meta()).setName("reference").setContent("http://www.wiley.com/legacy/compbooks/vrml2sbk/ch31/31fig07.htm"))
    .addMeta((new autoclass.meta()).setName("translator").setContent("Don Brutzman"))
    .addMeta((new autoclass.meta()).setName("created").setContent("22 November 2000"))
    .addMeta((new autoclass.meta()).setName("modified").setContent("20 October 2019"))
    .addMeta((new autoclass.meta()).setName("description").setContent("A donut shape built using prototypes: the Donut geometry node and the LightOak appearance node. Also see Figures 30.5 and 31.6 for comparison."))
    .addMeta((new autoclass.meta()).setName("identifier").setContent("https://www.web3d.org/x3d/content/examples/Vrml2Sourcebook/Chapter31Prototypes/Figure31_7DonutExternalPrototype.x3d"))
    .addMeta((new autoclass.meta()).setName("generator").setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
    .addMeta((new autoclass.meta()).setName("license").setContent("../../license.html")))
  .setScene((new autoclass.Scene())
    .addChild((new autoclass.WorldInfo()).setTitle("Figure31_7DonutExternalPrototype.x3d"))
    .addChild((new autoclass.ExternProtoDeclare()).setName("Donut").setUrl(new autoclass.MFString("\"Figure31_6DonutPrototype.wrl#Donut\" \"https://www.web3d.org/x3d/content/examples/Vrml2Sourcebook/Chapter31Prototypes/Figure31_6DonutPrototype.wrl#Donut\" \"Figure31_6DonutPrototype.x3d#Donut\" \"https://www.web3d.org/x3d/content/examples/Vrml2Sourcebook/Chapter31Prototypes/Figure31_6DonutPrototype.x3d#Donut\""))
      .addField((new autoclass.field()).setAccessType("initializeOnly").setName("crossSectionRadius").setType("SFFloat"))
      .addField((new autoclass.field()).setAccessType("initializeOnly").setName("spineRadius").setType("SFFloat"))
      .addField((new autoclass.field()).setAccessType("initializeOnly").setName("crossSectionResolution").setType("SFInt32"))
      .addField((new autoclass.field()).setAccessType("initializeOnly").setName("spineResolution").setType("SFInt32"))
      .addField((new autoclass.field()).setAccessType("inputOnly").setName("set_crossSectionRadius").setType("SFFloat"))
      .addField((new autoclass.field()).setAccessType("inputOnly").setName("set_spineRadius").setType("SFFloat")))
    .addChild((new autoclass.ExternProtoDeclare()).setName("LightOak").setUrl(new autoclass.MFString("\"Figure31_4WoodAppearancePrototypesLibrary.wrl#LightOak\" \"https://www.web3d.org/x3d/content/examples/Vrml2Sourcebook/Chapter31Prototypes/Figure31_4WoodAppearancePrototypesLibrary.wrl#LightOak\" \"Figure31_4WoodAppearancePrototypesLibrary.x3d#LightOak\" \"https://www.web3d.org/x3d/content/examples/Vrml2Sourcebook/Chapter31Prototypes/Figure31_4WoodAppearancePrototypesLibrary.x3d#LightOak\""))
      .addField((new autoclass.field()).setAccessType("inputOutput").setName("textureTransform").setType("SFNode")))
    .addChild((new autoclass.Viewpoint()).setDescription("Click to pick a size").setPosition(0.0,7.0,12.0).setOrientation(1.0,0.0,0.0,-0.52))
    .addComments(" Donut instances from prototypes ")
    .addChild((new autoclass.Transform()).setTranslation(0.0,2.0,0.0)
      .addChild((new autoclass.Shape())
        .setGeometry((new autoclass.ProtoInstance()).setName("Donut")
          .addFieldValue((new autoclass.fieldValue()).setName("crossSectionRadius").setValue("1"))
          .addFieldValue((new autoclass.fieldValue()).setName("spineRadius").setValue("2")))
        .setAppearance((new autoclass.ProtoInstance()).setName("LightOak")
          .addFieldValue((new autoclass.fieldValue()).setName("textureTransform")
            .addChild((new autoclass.TextureTransform()).setCenter(-0.0,5.0).setTranslation(0.5,0.0).setRotation(0.758).setScale(2.0,0.5))))))
    .addComments(" Hmmm, what size donut do you really want? ")
    .addChild((new autoclass.TimeSensor("Clock")).setCycleInterval(10).setLoop(true))
    .addChild((new autoclass.ScalarInterpolator("DonutThickness")).setKey(java.newArray("float", [0.0,0.4,0.5,0.9,1.0])).setKeyValue(java.newArray("float", [0.75,1.25,1.25,0.75,0.75])))
    .addChild((new autoclass.Transform()).setTranslation(0.0,-2.0,0.0)
      .addChild((new autoclass.Shape())
        .setGeometry((new autoclass.ProtoInstance("SpecialtyOfTheHouse", "Donut")).setDEF("SpecialtyOfTheHouse").setName("Donut")
          .addFieldValue((new autoclass.fieldValue()).setName("crossSectionRadius").setValue("0.5"))
          .addFieldValue((new autoclass.fieldValue()).setName("spineRadius").setValue("2")))
        .setAppearance((new autoclass.Appearance())
          .setTexture((new autoclass.ImageTexture()).setUrl(new autoclass.MFString("\"../Chapter17Textures/icing.jpg\" \"https://www.web3d.org/x3d/content/examples/Vrml2Sourcebook/Chapter17Textures/icing.jpg\"")))))
      .addChild((new autoclass.TouchSensor("StopSizeChanges")).setDescription("touch to stop size changes")))
    .addChild((new autoclass.ROUTE()).setFromNode("Clock").setFromField("fraction_changed").setToNode("DonutThickness").setToField("set_fraction"))
    .addChild((new autoclass.ROUTE()).setFromNode("DonutThickness").setFromField("value_changed").setToNode("SpecialtyOfTheHouse").setToField("set_crossSectionRadius"))
    .addChild((new autoclass.ROUTE()).setFromNode("StopSizeChanges").setFromField("touchTime").setToNode("Clock").setToField("stopTime")));
  },
  // end of initialize() method


  /** Provide a shallow copy of the X3D model.
   * @return Figure31_7DonutExternalPrototype model
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
		var testObject = new Figure31_7DonutExternalPrototype();
		console.log ("Figure31_7DonutExternalPrototype execution self-validation test results: " + testObject.validateSelf());
	}
}
new Figure31_7DonutExternalPrototype().main();