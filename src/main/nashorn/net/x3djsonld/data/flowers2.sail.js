load('X3Dautoclass.js');

// Javadoc annotations follow, see below for source.
/**
 * <p> 2 random mathematical roses in spherical dimensions. rho = a + b * cos(c * theta) * cos(d * phi). </p>
 <p> Related links: flowers2_sail.java source, <a href="http://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a> and <a href="http://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;" summary="Scene Metadata">
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">net.x3djsonld.data.flowers2_sail&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="https://coderextreme.net/X3DJSONLD/src/main/data/flowers2.x3d">flowers2.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> John Carlson </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> transcriber </i> </td>
			<td> John Carlson </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> created </i> </td>
			<td> 23 January 2005 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> modified </i> </td>
			<td> 21 March 2018 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> 2 random mathematical roses in spherical dimensions. rho = a + b * cos(c * theta) * cos(d * phi) </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="https://coderextreme.net/X3DJSONLD/src/main/data/flowers2.x3d" target="_blank">https://coderextreme.net/X3DJSONLD/src/main/data/flowers2.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> generator </i> </td>
			<td> manually written </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> license </i> </td>
			<td> <a href="http://www.web3d.org/x3d/content/examples/license.html" target="_blank">http://www.web3d.org/x3d/content/examples/license.html</a> </td>
		</tr>
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center;" colspan="2">  &nbsp; </td>
		</tr>
	</table>

	<p>
		This program uses the
		<a href="http://www.web3d.org/specifications/java/X3DJSAIL.html" target="_blank">X3D Java Scene Access Interface Library (X3DJSAIL)</a>.
		It has been produced using the 
		<a href="http://www.web3d.org/x3d/stylesheets/X3dToES5.xslt" target="_blank">X3dToES5.xslt</a>
		stylesheet to create ES5 source code from an <code>.x3d</code> scene.
	</p>

	* @author John Carlson
 */

function flowers2_sail
  /** Default constructor to create this object. */
  ()
  {
    /** The initialized model object, created within initialize() method. */
    this.x3dModel = {};
    this.initialize();
    return this;
  }
flowers2_sail.prototype = {
  /** Create and initialize the X3D model. */
  initialize : function ()
  {
  this.x3dModel = new X3DObject().setProfile("Immersive").setVersion("3.0")
  .setHead(new headObject()
    .addMeta(new metaObject().setName("title").setContent("flowers2.x3d"))
    .addMeta(new metaObject().setName("creator").setContent("John Carlson"))
    .addMeta(new metaObject().setName("transcriber").setContent("John Carlson"))
    .addMeta(new metaObject().setName("created").setContent("23 January 2005"))
    .addMeta(new metaObject().setName("modified").setContent("21 March 2018"))
    .addMeta(new metaObject().setName("description").setContent("2 random mathematical roses in spherical dimensions. rho = a + b * cos(c * theta) * cos(d * phi)"))
    .addMeta(new metaObject().setName("identifier").setContent("https://coderextreme.net/X3DJSONLD/src/main/data/flowers2.x3d"))
    .addMeta(new metaObject().setName("generator").setContent("manually written"))
    .addMeta(new metaObject().setName("license").setContent("http://www.web3d.org/x3d/content/examples/license.html")))
  .setScene(new SceneObject()
    .addChild(new NavigationInfoObject())
    .addChild(new ViewpointObject().setDescription("Two mathematical orbitals").setPosition(0.0,0.0,50.0))
    .addChild(new GroupObject()
      .addChild(new DirectionalLightObject().setDirection(1.0,1.0,1.0))
      .addChild(new ProtoDeclareObject().setName("orbit")
        .setProtoInterface(new ProtoInterfaceObject()
          .addField(new fieldObject().setAccessType("inputOutput").setName("translation").setType("SFVec3f").setValue("-8 0 0"))
          .addField(new fieldObject().setAccessType("inputOutput").setName("diffuseColor").setType("SFColor").setValue("1 0.5 0"))
          .addField(new fieldObject().setAccessType("inputOutput").setName("specularColor").setType("SFColor").setValue("1 0.5 0"))
          .addField(new fieldObject().setAccessType("inputOutput").setName("transparency").setType("SFFloat").setValue("0.75")))
        .setProtoBody(new ProtoBodyObject()
          .addChild(new GroupObject()
            .addChild(new TimeSensorObject("Clock").setCycleInterval(16).setLoop(true))
            .addChild(new OrientationInterpolatorObject("OrbitPath").setKey(Java.to([0.0,0.50,1.0], Java.type("float[]"))).setKeyValue(new MFRotationObject(Java.to([1.0,0.0,0.0,0.0,1.0,0.0,0.0,3.14,1.0,0.0,0.0,6.28], Java.type("float[]")))))
            .addChild(new TransformObject("OrbitTransform")
              .setIS(new ISObject()
                .addConnect(new connectObject().setNodeField("translation").setProtoField("translation")))
              .addChild(new ShapeObject()
                .setAppearance(new AppearanceObject()
                  .setMaterial(new MaterialObject()
                    .setIS(new ISObject()
                      .addConnect(new connectObject().setNodeField("diffuseColor").setProtoField("diffuseColor"))
                      .addConnect(new connectObject().setNodeField("specularColor").setProtoField("specularColor"))
                      .addConnect(new connectObject().setNodeField("transparency").setProtoField("transparency")))))
                .addComments(Java.to(["",
"				  <IndexedFaceSet DEF=\"Orbit\" creaseAngle=\"0\">",
"				    <Coordinate DEF=\"OrbitCoordinates\"/>",
"				  </IndexedFaceSet>"], Java.type("java.lang.String[]")))
                .setGeometry(new IndexedFaceSetObject("Orbit").setDEF("Orbit").setCcw(false).setConvex(false).setCoordIndex(Java.to([0,1,2,-1], Java.type("int[]")))
                  .setCoord(new CoordinateObject("OrbitCoordinates").setPoint(new MFVec3fObject(Java.to([0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0], Java.type("float[]"))))))))
            .addChild(new ScriptObject("OrbitScript").setSourceCode("\n" + 
"			" + "\n" + 
"			ecmascript:" + "\n" + 
"\n" + 
"			var e = 5;" + "\n" + 
"			var f = 5;" + "\n" + 
"			var g = 5;" + "\n" + 
"			var h = 5;" + "\n" + 
"			var resolution = 100;" + "\n" + 
"\n" + 
"			function initialize() {" + "\n" + 
"			     generateCoordinates();" + "\n" + 
"			     var localci = [];" + "\n" + 
"			     for ( i = 0; i < resolution-1; i++) {" + "\n" + 
"				for ( j = 0; j < resolution-1; j++) {" + "\n" + 
"				     localci.push(i*resolution+j);" + "\n" + 
"				     localci.push(i*resolution+j+1);" + "\n" + 
"				     localci.push((i+1)*resolution+j+1);" + "\n" + 
"				     localci.push((i+1)*resolution+j);" + "\n" + 
"				     localci.push(-1);" + "\n" + 
"				}" + "\n" + 
"			    }" + "\n" + 
"			    coordIndexes = new MFInt32(localci);" + "\n" + 
"			}" + "\n" + 
"\n" + 
"			function generateCoordinates() {" + "\n" + 
"			     theta = 0.0;" + "\n" + 
"			     phi = 0.0;" + "\n" + 
"			     delta = (2 * 3.141592653) / (resolution-1);" + "\n" + 
"			     var localc = [];" + "\n" + 
"			     for ( i = 0; i < resolution; i++) {" + "\n" + 
"				for ( j = 0; j < resolution; j++) {" + "\n" + 
"					rho = e + f * Math.cos(g * theta) * Math.cos(h * phi);" + "\n" + 
"					localc.push(new SFVec3f(" + "\n" + 
"						rho * Math.cos(phi) * Math.cos(theta)," + "\n" + 
"						rho * Math.cos(phi) * Math.sin(theta)," + "\n" + 
"						rho * Math.sin(phi)" + "\n" + 
"					));" + "\n" + 
"					theta += delta;" + "\n" + 
"				}" + "\n" + 
"				phi += delta;" + "\n" + 
"			     }" + "\n" + 
"			     " + "\n" + 
"			     coordinates = new MFVec3f(localc);" + "\n" + 
"			}" + "\n" + 
"\n" + 
"			function set_fraction(fraction, eventTime) {" + "\n" + 
"				choice = Math.floor(Math.random() * 4);" + "\n" + 
"				switch (choice) {" + "\n" + 
"				case 0:" + "\n" + 
"					e += Math.floor(Math.random() * 2) * 2 - 1;" + "\n" + 
"					break;" + "\n" + 
"				case 1:" + "\n" + 
"					f += Math.floor(Math.random() * 2) * 2 - 1;" + "\n" + 
"					break;" + "\n" + 
"				case 2:" + "\n" + 
"					g += Math.floor(Math.random() * 2) * 2 - 1;" + "\n" + 
"					break;" + "\n" + 
"				case 3:" + "\n" + 
"					h += Math.floor(Math.random() * 2) * 2 - 1;" + "\n" + 
"					break;" + "\n" + 
"				}" + "\n" + 
"				if (e < 1) {" + "\n" + 
"					f = 10;" + "\n" + 
"				}" + "\n" + 
"				if (f < 1) {" + "\n" + 
"					f = 10;" + "\n" + 
"				}" + "\n" + 
"				if (g < 1) {" + "\n" + 
"					g = 4;" + "\n" + 
"				}" + "\n" + 
"				if (h < 1) {" + "\n" + 
"					h = 4;" + "\n" + 
"				}" + "\n" + 
"				generateCoordinates();" + "\n" + 
"			}" + "\n")
              .addField(new fieldObject().setAccessType("inputOnly").setName("set_fraction").setType("SFFloat"))
              .addField(new fieldObject().setAccessType("outputOnly").setName("coordinates").setType("MFVec3f"))
              .addField(new fieldObject().setAccessType("outputOnly").setName("coordIndexes").setType("MFInt32"))
              .addField(new fieldObject().setAccessType("outputOnly").setName("e").setType("SFFloat").setValue("5"))
              .addField(new fieldObject().setAccessType("outputOnly").setName("f").setType("SFFloat").setValue("5"))
              .addField(new fieldObject().setAccessType("outputOnly").setName("g").setType("SFFloat").setValue("5"))
              .addField(new fieldObject().setAccessType("outputOnly").setName("h").setType("SFFloat").setValue("5"))
              .addField(new fieldObject().setAccessType("inputOutput").setName("resolution").setType("SFInt32").setValue("50")))
            .addChild(new ROUTEObject().setFromNode("OrbitScript").setFromField("coordIndexes").setToNode("Orbit").setToField("coordIndex"))
            .addChild(new ROUTEObject().setFromNode("OrbitScript").setFromField("coordinates").setToNode("OrbitCoordinates").setToField("point"))
            .addChild(new ROUTEObject().setFromNode("Clock").setFromField("fraction_changed").setToNode("OrbitScript").setToField("set_fraction"))
            .addChild(new ROUTEObject().setFromNode("OrbitPath").setFromField("value_changed").setToNode("OrbitTransform").setToField("rotation"))
            .addChild(new ROUTEObject().setFromNode("Clock").setFromField("fraction_changed").setToNode("OrbitPath").setToField("set_fraction")))))
      .addChild(new ProtoInstanceObject().setName("orbit")
        .addFieldValue(new fieldValueObject().setName("translation").setValue("-8 0 0"))
        .addFieldValue(new fieldValueObject().setName("diffuseColor").setValue("1 0.5 0"))
        .addFieldValue(new fieldValueObject().setName("specularColor").setValue("1 0.5 0"))
        .addFieldValue(new fieldValueObject().setName("transparency").setValue("0.75")))
      .addChild(new ProtoInstanceObject().setName("orbit")
        .addFieldValue(new fieldValueObject().setName("translation").setValue("8 0 0"))
        .addFieldValue(new fieldValueObject().setName("diffuseColor").setValue("0 0.5 1"))
        .addFieldValue(new fieldValueObject().setName("specularColor").setValue("0 0.5 1"))
        .addFieldValue(new fieldValueObject().setName("transparency").setValue("0.5")))));
  },
  // end of initialize() method


  /** Provide a shallow copy of the X3D model.
   * @return flowers2_sail model
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
		var testObject = new flowers2_sail();
		print ("flowers2_sail execution self-validation test results: " + testObject.validateSelf());
	}
}
new flowers2_sail().main();