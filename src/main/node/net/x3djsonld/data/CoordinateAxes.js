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
 * <p> a box. </p>
 <p> Related links: CoordinateAxes.java source, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a> and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;" summary="Scene Metadata">
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">net.x3djsonld.data.CoordinateAxes&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="https://coderextreme.net/X3DJSONLD/CoordinateAxes.x3d">CoordinateAxes.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> Unknown, see X3D Resources Archives </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> generator </i> </td>
			<td> manual </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="https://coderextreme.net/X3DJSONLD/CoordinateAxes.x3d" target="_blank">https://coderextreme.net/X3DJSONLD/CoordinateAxes.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> a box </td>
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

	* @author Unknown, see X3D Resources Archives
 */

function CoordinateAxes
  /** Default constructor to create this object. */
  ()
  {
    /** The initialized model object, created within initialize() method. */
    this.x3dModel = {};
    this.initialize();
    return this;
  }
CoordinateAxes.prototype = {
  /** Create and initialize the X3D model. */
  initialize : function ()
  {
  this.x3dModel = (new autoclass.X3D()).setProfile("Immersive").setVersion("3.3")
  .setHead((new autoclass.head())
    .addMeta((new autoclass.meta()).setName("title").setContent("CoordinateAxes.x3d"))
    .addMeta((new autoclass.meta()).setName("creator").setContent("Unknown, see X3D Resources Archives"))
    .addMeta((new autoclass.meta()).setName("generator").setContent("manual"))
    .addMeta((new autoclass.meta()).setName("identifier").setContent("https://coderextreme.net/X3DJSONLD/CoordinateAxes.x3d"))
    .addMeta((new autoclass.meta()).setName("description").setContent("a box")))
  .setScene((new autoclass.Scene())
    .addChild((new autoclass.Collision("DoNotCollideWithVisualizationWidget"))
      .addComments(" Invoke CoordinateAxes in other scenes as an Inline child inside a scaling Transform node, at the topmost level of the scene graph. ")
      .addComments(" This NavigationInfo allows examine mode and will be overridden by any parent scene. ")
      .addComments(" Each arrow goes from +1m to -1m to allow linear scaling to fit a scene ")
      .addComments(" Note each label rotates about the scene's vertical Y axis for consistency, enabling local orientation by user ")
      .addChild((new autoclass.Group())
        .addComments(" Vertical Y arrow and label ")
        .addChild((new autoclass.Group("ArrowGreen"))
          .addChild((new autoclass.Shape())
            .setGeometry((new autoclass.Cylinder("ArrowCylinder")).setRadius(.025).setTop(false))
            .setAppearance((new autoclass.Appearance("Green"))
              .setMaterial((new autoclass.Material()).setEmissiveColor(.05,.2,.05).setDiffuseColor(.1,.6,.1))))
          .addChild((new autoclass.Transform()).setTranslation(0.0,1.0,0.0)
            .addChild((new autoclass.Shape())
              .setGeometry((new autoclass.Cone("ArrowCone")).setBottomRadius(.05).setHeight(.1))
              .setAppearance((new autoclass.Appearance()).setUSE("Green")))))
        .addChild((new autoclass.Transform()).setTranslation(0.0,1.08,0.0)
          .addChild((new autoclass.Billboard())
            .addChild((new autoclass.Shape())
              .setAppearance((new autoclass.Appearance("LABEL_APPEARANCE"))
                .setMaterial((new autoclass.Material()).setEmissiveColor(.33,.33,.1).setDiffuseColor(1.0,1.0,.3)))
              .setGeometry((new autoclass.Text()).setString(new autoclass.MFString("\"Y\""))
                .setFontStyle((new autoclass.FontStyle("LABEL_FONT")).setJustify(new autoclass.MFString("\"MIDDLE\" \"MIDDLE\"")).setFamily(new autoclass.MFString("\"SANS\"")).setSize(.2)))))))
      .addChild((new autoclass.Transform()).setRotation(0.0,0.0,1.0,-1.57079)
        .addComments(" Horizontal X arrow and label ")
        .addChild((new autoclass.Group())
          .addChild((new autoclass.Group("ArrowRed"))
            .addChild((new autoclass.Shape())
              .setGeometry((new autoclass.Cylinder()).setUSE("ArrowCylinder"))
              .setAppearance((new autoclass.Appearance("Red"))
                .setMaterial((new autoclass.Material()).setEmissiveColor(.33,0.0,0.0).setDiffuseColor(.7,.1,.1))))
            .addChild((new autoclass.Transform()).setTranslation(0.0,1.0,0.0)
              .addChild((new autoclass.Shape())
                .setGeometry((new autoclass.Cone()).setUSE("ArrowCone"))
                .setAppearance((new autoclass.Appearance()).setUSE("Red")))))
          .addChild((new autoclass.Transform()).setTranslation(.072,1.1,0.0).setRotation(0.0,0.0,1.0,1.57079)
            .addComments(" note label rotated back to original coordinate frame ")
            .addChild((new autoclass.Billboard())
              .addChild((new autoclass.Shape())
                .setAppearance((new autoclass.Appearance()).setUSE("LABEL_APPEARANCE"))
                .setGeometry((new autoclass.Text()).setString(new autoclass.MFString("\"X\""))
                  .setFontStyle((new autoclass.FontStyle()).setUSE("LABEL_FONT"))))))))
      .addChild((new autoclass.Transform()).setRotation(1.0,0.0,0.0,1.57079)
        .addComments(" Perpendicular Z arrow and label, note right-hand rule ")
        .addChild((new autoclass.Group())
          .addChild((new autoclass.Group("ArrowBlue"))
            .addChild((new autoclass.Shape())
              .setGeometry((new autoclass.Cylinder()).setUSE("ArrowCylinder"))
              .setAppearance((new autoclass.Appearance("Blue"))
                .setMaterial((new autoclass.Material()).setEmissiveColor(.1,.1,.33).setDiffuseColor(.3,.3,1.0))))
            .addChild((new autoclass.Transform()).setTranslation(0.0,1.0,0.0)
              .addChild((new autoclass.Shape())
                .setGeometry((new autoclass.Cone()).setUSE("ArrowCone"))
                .setAppearance((new autoclass.Appearance()).setUSE("Blue")))))
          .addChild((new autoclass.Transform()).setTranslation(0.0,1.1,.072).setRotation(1.0,0.0,0.0,-1.57079)
            .addComments(" note label rotated back to original coordinate frame ")
            .addChild((new autoclass.Billboard())
              .addChild((new autoclass.Shape())
                .setAppearance((new autoclass.Appearance()).setUSE("LABEL_APPEARANCE"))
                .setGeometry((new autoclass.Text()).setString(new autoclass.MFString("\"Z\""))
                  .setFontStyle((new autoclass.FontStyle()).setUSE("LABEL_FONT"))))))))));
  },
  // end of initialize() method


  /** Provide a shallow copy of the X3D model.
   * @return CoordinateAxes model
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
		var testObject = new autoclass.CoordinateAxes();
		print ("CoordinateAxes execution self-validation test results: " + testObject.validateSelf());
	}
}
new CoordinateAxes().main();