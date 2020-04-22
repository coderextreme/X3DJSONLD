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
 * <p> 12 extrusions to test prototype expander. </p>
 <p> Related links: qq3.java source, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a> and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;" summary="Scene Metadata">
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">net.x3djsonld.data.qq3&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="https://coderextreme.net/x3d/qq3.x3d">qq3.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> John Carlson </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> translator </i> </td>
			<td> John Carlson </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> created </i> </td>
			<td> 11 Jan 2015 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> modified </i> </td>
			<td> 05 May 2017 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> 12 extrusions to test prototype expander </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="https://coderextreme.net/x3d/qq3.x3d" target="_blank">https://coderextreme.net/x3d/qq3.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> generator </i> </td>
			<td> manual </td>
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

function qq3
  /** Default constructor to create this object. */
  ()
  {
    /** The initialized model object, created within initialize() method. */
    this.x3dModel = {};
    this.initialize();
    return this;
  }
qq3.prototype = {
  /** Create and initialize the X3D model. */
  initialize : function ()
  {

	/** Large attribute array: Extrusion crossSection field, scene-graph level=8, element #12, 34 total numbers made up of 17 2-tuple values */
	this.Extrusion_8_12_crossSection = new autoclass.MFVec2f() /* splitting up long array to improve readability */
	.append(new autoclass.MFVec2f(java.to([1.00,0.00,0.92,-0.38,0.71,-0.71,0.38,-0.92,0.00,-1.00,-0.38,-0.92,-0.71,-0.71,-0.92,-0.38,-1.00,-0.00,-0.92,0.38], java.type("float[]"))))
	.append(new autoclass.MFVec2f(java.to([-0.71,0.71,-0.38,0.92,0.00,1.00,0.38,0.92,0.71,0.71,0.92,0.38,1.00,0.00], java.type("float[]"))));

	/** Large attribute array: Extrusion crossSection field, scene-graph level=8, element #17, 34 total numbers made up of 17 2-tuple values */
	this.Extrusion_8_17_crossSection = new autoclass.MFVec2f() /* splitting up long array to improve readability */
	.append(new autoclass.MFVec2f(java.to([1.00,0.00,0.92,-0.38,0.71,-0.71,0.38,-0.92,0.00,-1.00,-0.38,-0.92,-0.71,-0.71,-0.92,-0.38,-1.00,-0.00,-0.92,0.38], java.type("float[]"))))
	.append(new autoclass.MFVec2f(java.to([-0.71,0.71,-0.38,0.92,0.00,1.00,0.38,0.92,0.71,0.71,0.92,0.38,1.00,0.00], java.type("float[]"))));
  this.x3dModel = (new autoclass.X3D()).setProfile("Immersive").setVersion("3.3")
  .setHead((new autoclass.head())
    .addMeta((new autoclass.meta()).setName("title").setContent("qq3.x3d"))
    .addMeta((new autoclass.meta()).setName("creator").setContent("John Carlson"))
    .addMeta((new autoclass.meta()).setName("translator").setContent("John Carlson"))
    .addMeta((new autoclass.meta()).setName("created").setContent("11 Jan 2015"))
    .addMeta((new autoclass.meta()).setName("modified").setContent("05 May 2017"))
    .addMeta((new autoclass.meta()).setName("description").setContent("12 extrusions to test prototype expander"))
    .addMeta((new autoclass.meta()).setName("identifier").setContent("https://coderextreme.net/x3d/qq3.x3d"))
    .addMeta((new autoclass.meta()).setName("generator").setContent("manual")))
  .setScene((new autoclass.Scene())
    .addChild((new autoclass.ProtoDeclare()).setName("Process")
      .setProtoBody((new autoclass.ProtoBody())
        .addChild((new autoclass.Group())
          .addComments(" left ")
          .addChild((new autoclass.Transform()).setScale(0.5,0.5,0.5)
            .addChild((new autoclass.Shape("ShapeLeftDown"))
              .setAppearance((new autoclass.Appearance())
                .setMaterial((new autoclass.Material()).setDiffuseColor(0.7,1.0,0.0)))
              .setGeometry((new autoclass.Extrusion()).setSpine(new autoclass.MFVec3f(java.to([-2.5,0.0,0.0,-1.5,0.0,0.0], java.type("float[]")))).setCreaseAngle(0.785).setCrossSection(this.Extrusion_8_12_crossSection))))
          .addComments(" right ")
          .addChild((new autoclass.Transform()).setScale(0.5,0.5,0.5)
            .addChild((new autoclass.Shape("ShapeUpRight"))
              .setAppearance((new autoclass.Appearance())
                .setMaterial((new autoclass.Material()).setDiffuseColor(0.0,0.7,1.0)))
              .setGeometry((new autoclass.Extrusion()).setCreaseAngle(0.785).setCrossSection(this.Extrusion_8_17_crossSection).setSpine(new autoclass.MFVec3f(java.to([1.5,0.0,0.0,2.5,0.0,0.0], java.type("float[]")))))))
          .addComments(" up ")
          .addChild((new autoclass.Transform()).setScale(0.5,0.5,0.5)
            .addChild((new autoclass.Shape()).setUSE("ShapeUpRight")))
          .addComments(" down ")
          .addChild((new autoclass.Transform()).setScale(0.5,0.5,0.5)
            .addChild((new autoclass.Shape()).setUSE("ShapeLeftDown"))))))
    .addChild((new autoclass.Viewpoint()).setDescription("Process pipes").setPosition(0.0,5.0,12.0).setOrientation(1.0,0.0,0.0,-0.4))
    .addChild((new autoclass.Transform()).setTranslation(0.0,-2.5,0.0)
      .addChild((new autoclass.ProtoInstance()).setName("Process")))
    .addChild((new autoclass.Transform())
      .addChild((new autoclass.ProtoInstance()).setName("Process")))
    .addChild((new autoclass.Transform()).setTranslation(0.0,2.5,0.0)
      .addChild((new autoclass.ProtoInstance()).setName("Process"))));
  },
  // end of initialize() method


  /** Provide a shallow copy of the X3D model.
   * @return qq3 model
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
		var testObject = new autoclass.qq3();
		print ("qq3 execution self-validation test results: " + testObject.validateSelf());
	}
}
new qq3().main();