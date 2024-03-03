load('X3Dautoclass.js');

// Javadoc annotations follow, see below for source.
/**
 * <p> geo bubbles. </p>
 <p> Related links: geobubbles.java source, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a> and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;" summary="Scene Metadata">
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">net.x3djsonld.data.geobubbles&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="https://coderextreme.net/X3DJSONLD/src/main/data/geobubbles.x3d">geobubbles.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> John Carlson </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> generator </i> </td>
			<td> manual </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="https://coderextreme.net/X3DJSONLD/src/main/data/geobubbles.x3d" target="_blank">https://coderextreme.net/X3DJSONLD/src/main/data/geobubbles.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> geo bubbles </td>
		</tr>
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center;" colspan="2">  &nbsp; </td>
		</tr>
	</table>

	<p>
		This program uses the
		<a href="https://www.web3d.org/specifications/java/X3DJSAIL.html" target="_blank">X3D Java Scene Access Interface Library (X3DJSAIL)</a>.
		It has been produced using the 
		<a href="https://www.web3d.org/x3d/stylesheets/X3dToES5.xslt" target="_blank">X3dToES5.xslt</a>
		stylesheet to create ES5 source code from an <code>.x3d</code> scene.
	</p>

	* @author John Carlson
 */

function geobubbles
  /** Default constructor to create this object. */
  ()
  {
    /** The initialized model object, created within initialize() method. */
    this.x3dModel = {};
    this.initialize();
    return this;
  }
  function doubleToFloat(d) {
    if (Float32Array) {
        return new Float32Array([d])[0];
    }
  }
geobubbles.prototype = {
  /** Create and initialize the X3D model. */
  initialize : function ()
  {
  this.x3dModel = new X3D().setProfile("Immersive").setVersion("3.3")
  .setHead(new head()
    .addComponent(new component().setName("Geospatial").setLevel(1))
    .addMeta(new meta().setName("title").setContent("geobubbles.x3d"))
    .addMeta(new meta().setName("creator").setContent("John Carlson"))
    .addMeta(new meta().setName("generator").setContent("manual"))
    .addMeta(new meta().setName("identifier").setContent("https://coderextreme.net/X3DJSONLD/src/main/data/geobubbles.x3d"))
    .addMeta(new meta().setName("description").setContent("geo bubbles")))
  .setScene(new Scene()
    .addComments("Viewpoint DEF='Tour' position='0 0 4' orientation='1 0 0 0' description='Tour Views'/")
    .addComments("PositionInterpolator DEF='TourPosition' key='0 1' keyValue='-0.5 -0.5 4 -0.5 0.5 4'/")
    .addChild(new GeoViewpoint("Tour").setDescription("Tour Views").setOrientation(doubleToFloat(1.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.0)).setPosition(doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(4.0)))
    .addChild(new Background().setBackUrl(new MFString("\"../resources/images/BK.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/BK.png\"")).setBottomUrl(new MFString("\"../resources/images/BT.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/BT.png\"")).setFrontUrl(new MFString("\"../resources/images/FR.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/FR.png\"")).setLeftUrl(new MFString("\"../resources/images/LF.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/LF.png\"")).setRightUrl(new MFString("\"../resources/images/RT.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/RT.png\"")).setTopUrl(new MFString("\"../resources/images/TP.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/TP.png\"")))
    .addChild(new Transform()
      .addChild(new Shape()
        .setGeometry(new Sphere())
        .setAppearance(new Appearance()
          .setMaterial(new Material().setDiffuseColor(doubleToFloat(0.7),doubleToFloat(0.7),doubleToFloat(0.7)).setSpecularColor(doubleToFloat(0.5),doubleToFloat(0.5),doubleToFloat(0.5))))))
    .addChild(new TimeSensor("TourTime").setCycleInterval(5).setLoop(true))
    .addChild(new GeoPositionInterpolator("TourPosition").setKey(Java.to([doubleToFloat(0.0),doubleToFloat(1.0)], Java.type("float[]"))).setKeyValue(new MFVec3d(Java.to([0.0015708,0.0,4.0,0.0,0.0015708,4.0], Java.type("double[]")))))
    .addChild(new Script("RandomTourTime").setSourceCode("ecmascript:" + "\n" + 
"\n" + 
"               function set_cycle(value) {" + "\n" + 
"                        var cartesianMult = -150;  // -150 if cartesian, 1 if geo" + "\n" + 
"                        var ov = val;" + "\n" + 
"			// Browser.print('old '+ov);" + "\n" + 
"                        do {" + "\n" + 
"                                val = Math.floor(Math.random()*2);" + "\n" + 
"                                var vc = val;" + "\n" + 
"                                positions[vc] = new SFVec3d(Math.round(Math.random()*2)*0.0015708*cartesianMult, Math.round(Math.random()*2)*0.0015708*cartesianMult, 4);" + "\n" + 
"                        } while ( positions[ov][0] === positions[vc][0] && positions[ov][1] === positions[vc][1] && positions[ov][2] === positions[vc][2]);" + "\n" + 
"			// Browser.println(positions[ov]);" + "\n" + 
"			// Browser.println(positions[vc]);" + "\n" + 
"                        position = new MFVec3d();" + "\n" + 
"                        position[0] = new SFVec3d(positions[ov][0],positions[ov][1],positions[ov][2]);" + "\n" + 
"                        position[1] = new SFVec3d(positions[vc][0],positions[vc][1],positions[vc][2]);" + "\n" + 
"               }")
      .addField(new field().setName("set_cycle").setType("SFTime").setAccessType("inputOnly"))
      .addField(new field().setName("val").setType("SFFloat").setAccessType("inputOutput").setValue("0"))
      .addField(new field().setName("positions").setType("MFVec3d").setAccessType("inputOutput").setValue("0.0015708 0 4 0 0.0015708 4"))
      .addField(new field().setName("position").setType("MFVec3d").setAccessType("inputOutput").setValue("0.0015708 0 4 0 0.0015708 4")))
    .addChild(new ROUTE().setFromNode("TourTime").setFromField("cycleTime").setToNode("RandomTourTime").setToField("set_cycle"))
    .addChild(new ROUTE().setFromNode("RandomTourTime").setFromField("position").setToNode("TourPosition").setToField("keyValue"))
    .addChild(new ROUTE().setFromNode("TourTime").setFromField("fraction_changed").setToNode("TourPosition").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("TourPosition").setFromField("geovalue_changed").setToNode("Tour").setToField("set_position")));
  },
  // end of initialize() method


  /** Provide a shallow copy of the X3D model.
   * @return geobubbles model
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
		var testObject = new geobubbles();
		print ("geobubbles execution self-validation test results: " + testObject.validateSelf());
	}
}
new geobubbles().main();