load('X3Dautoclass.js');

// Javadoc annotations follow, see below for source.
/**
 * <p> Example scene flower_sail. </p>
 <p> Related links: flower_sail.java source, <a href="http://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a> and <a href="http://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<p>
		This program uses the
		<a href="http://www.web3d.org/specifications/java/X3DJSAIL.html" target="_blank">X3D Java Scene Access Interface Library (X3DJSAIL)</a>.
		It has been produced using the 
		<a href="http://www.web3d.org/x3d/stylesheets/X3dToES5.xslt" target="_blank">X3dToES5.xslt</a>
		stylesheet to create ES5 source code from an <code>.x3d</code> scene.
	</p>

 */

function flower_sail
  /** Default constructor to create this object. */
  ()
  {
    /** The initialized model object, created within initialize() method. */
    this.x3dModel = {};
    this.initialize();
    return this;
  }
flower_sail.prototype = {
  /** Create and initialize the X3D model. */
  initialize : function ()
  {
  this.x3dModel = new X3DObject().setProfile("Immersive").setVersion("3.3")
  .setScene(new SceneObject()
    .addChild(new NavigationInfoObject())
    .addChild(new DirectionalLightObject().setDirection(0.0,-0.8,-0.2).setIntensity(0.5))
    .addChild(new BackgroundObject().setSkyColor(new MFColorObject(Java.to([1.000,1.000,1.000], Java.type("float[]")))))
    .addChild(new ViewpointObject().setDescription("One mathematical orbital").setPosition(0.0,0.0,50.0))
    .addChild(new TransformObject().setTranslation(0.0,-1.0,1.0).setRotation(0.0,1.0,0.0,3.1415926).setScale(1.5,1.5,1.5)
      .addChild(new ShapeObject()
        .setAppearance(new AppearanceObject()
          .setMaterial(new MaterialObject().setTransparency(0.1).setShininess(0.145).setSpecularColor(0.8,0.8,0.8).setDiffuseColor(0.9,0.3,0.3)))
        .setGeometry(new IndexedFaceSetObject("ifs").setDEF("ifs").setCcw(false).setConvex(false).setCoordIndex(Java.to([0,1,2,-1], Java.type("int[]")))
          .setCoord(new CoordinateObject("crd").setPoint(new MFVec3fObject(Java.to([0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0], Java.type("float[]"))))))))
    .addChild(new ScriptObject("FlowerScript").setSourceCode(
"<![CDATA[" + "\n" +
"\n" + 
"ecmascript:" + "\n" + 
"    " + "\n" + 
"var e = 5;" + "\n" + 
"var f = 5;" + "\n" + 
"var g = 5;" + "\n" + 
"var h = 5;" + "\n" + 
"var resolution = 150;" + "\n" + 
"var t = 0;" + "\n" + 
"var p = 0;" + "\n" + 
"\n" + 
"function initialize() {" + "\n" + 
"     var localci = new Array();" + "\n" + 
"     var ci = 0;" + "\n" + 
"     var buf = [];" + "\n" + 
"     for (var i = 0; i < resolution-1; i++) {" + "\n" + 
"     	for (var j = 0; j < resolution-1; j++) {" + "\n" + 
"	     localci[ci] = i*resolution+j;" + "\n" + 
"	     localci[ci+1] = i*resolution+j+1;" + "\n" + 
"	     localci[ci+2] = (i+1)*resolution+j+1;" + "\n" + 
"	     localci[ci+3] = (i+1)*resolution+j;" + "\n" + 
"	     localci[ci+4] = -1;" + "\n" + 
"	     buf.push(localci[ci]);" + "\n" + 
"	     buf.push(localci[ci+1]);" + "\n" + 
"	     buf.push(localci[ci+3]);" + "\n" + 
"	     buf.push(localci[ci+4]);" + "\n" + 
"\n" + 
"	     buf.push(localci[ci+1]);" + "\n" + 
"	     buf.push(localci[ci+2]);" + "\n" + 
"	     buf.push(localci[ci+3]);" + "\n" + 
"	     buf.push(localci[ci+4]);" + "\n" + 
"	     ci += 5;" + "\n" + 
"	}" + "\n" + 
"    }" + "\n" + 
"    updateCoordinates(resolution);" + "\n" + 
"    coordIndexes = new x3dom.fields.MFInt32(buf);" + "\n" + 
"}" + "\n" + 
"\n" + 
"function updateCoordinates(resolution) {" + "\n" + 
"     theta = 0.0;" + "\n" + 
"     phi = 0.0;" + "\n" + 
"     delta = (2 * 3.141592653) / (resolution-1);" + "\n" + 
"     var buf = [];" + "\n" + 
"     for ( i = 0; i < resolution; i++) {" + "\n" + 
"     	for ( j = 0; j < resolution; j++) {" + "\n" + 
"		rho = e + f * Math.cos(g * theta + t) * Math.cos(h * phi + p);" + "\n" + 
"		var coord = new x3dom.fields.SFVec3f(" + "\n" + 
"			rho * Math.cos(phi) * Math.cos(theta)," + "\n" + 
"			rho * Math.cos(phi) * Math.sin(theta)," + "\n" + 
"			rho * Math.sin(phi)" + "\n" + 
"		);" + "\n" + 
"	     	buf.push(coord);" + "\n" + 
"		theta += delta;" + "\n" + 
"	}" + "\n" + 
"	phi += delta;" + "\n" + 
"     }" + "\n" + 
"     coordinates = new x3dom.fields.MFVec3f(buf);" + "\n" + 
"}" + "\n" + 
"\n" + 
"function set_fraction() {" + "\n" + 
"	choice = Math.floor(Math.random() * 4);" + "\n" + 
"	switch (choice) {" + "\n" + 
"	case 0:" + "\n" + 
"		e += Math.floor(Math.random() * 2) * 2 - 1;" + "\n" + 
"		break;" + "\n" + 
"	case 1:" + "\n" + 
"		f += Math.floor(Math.random() * 2) * 2 - 1;" + "\n" + 
"		break;" + "\n" + 
"	case 2:" + "\n" + 
"		g += Math.floor(Math.random() * 2) * 2 - 1;" + "\n" + 
"		break;" + "\n" + 
"	case 3:" + "\n" + 
"		h += Math.floor(Math.random() * 2) * 2 - 1;" + "\n" + 
"		break;" + "\n" + 
"	}" + "\n" + 
"	t += 0.5;" + "\n" + 
"	p += 0.5;" + "\n" + 
"	if (f < 1) {" + "\n" + 
"		f = 10;" + "\n" + 
"	}" + "\n" + 
"	if (g < 1) {" + "\n" + 
"		g = 4;" + "\n" + 
"	}" + "\n" + 
"	if (h < 1) {" + "\n" + 
"		h = 4;" + "\n" + 
"	}" + "\n" + 
"	updateCoordinates(resolution);" + "\n" + 
"}" + "\n" + "]]>"
)
      .addField(new fieldObject().setAccessType("inputOnly").setName("set_fraction").setType("SFFloat"))
      .addField(new fieldObject().setAccessType("outputOnly").setName("coordinates").setType("MFVec3f"))
      .addField(new fieldObject().setAccessType("outputOnly").setName("coordIndexes").setType("MFInt32")))
    .addChild(new TimeSensorObject("Clock").setCycleInterval(16).setLoop(true))
    .addChild(new ROUTEObject().setFromNode("FlowerScript").setFromField("coordIndexes").setToNode("ifs").setToField("coordIndex"))
    .addChild(new ROUTEObject().setFromNode("FlowerScript").setFromField("coordinates").setToNode("crd").setToField("point"))
    .addChild(new ROUTEObject().setFromNode("Clock").setFromField("fraction_changed").setToNode("FlowerScript").setToField("set_fraction")));
  },
  // end of initialize() method


  /** Provide a shallow copy of the X3D model.
   * @return flower_sail model
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
			if (meta.getName().equals(metaObject.NAME_ERROR) ||
				meta.getName().equals(metaObject.NAME_WARNING) ||
				meta.getName().equals(metaObject.NAME_HINT) ||
				meta.getName().equals(metaObject.NAME_INFO) ||
				meta.getName().equals(metaObject.NAME_TODO))
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
		var testObject = new flower_sail();
		print ("flower_sail execution self-validation test results: " + testObject.validateSelf());
	}
}
new flower_sail().main();