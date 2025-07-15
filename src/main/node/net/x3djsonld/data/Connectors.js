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
 * <p> Example scene Connectors. </p>
 <p> Related links: Connectors.java source, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a> and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;" summary="Scene Metadata">
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">net.x3djsonld.data.Connectors&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> comment </i> </td>
			<td> World of Titania </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> created </i> </td>
			<td> Fri, 04 Sep 2015 10:19:01 GMT </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> Holger Seelig </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> generator </i> </td>
			<td> Titania V3.0.4, <a href="http://titania.create3000.de" target="_blank">http://titania.create3000.de</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> file:///home/holger/Projekte/Cobweb/excite/tests/Components/Shape/Connectors.x3d </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> modified </i> </td>
			<td> Tue, 25 Jul 2017 09:42:17 GMT </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="file:///home/holger/Projekte/Cobweb/excite/tests/Components/Shape/Connectors">Connectors</a> </td>
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

	* @author Holger Seelig
 */

function Connectors
  /** Default constructor to create this object. */
  ()
  {
    /** The initialized model object, created within initialize() method. */
    this.x3dModel = {};
    this.initialize();
    return this;
  }
Connectors.prototype = {
  /** Create and initialize the X3D model. */
  initialize : function ()
  {
  this.x3dModel = (new autoclass.X3D()).setProfile("Full").setVersion("4.0")
  .setHead((new autoclass.head())
    .addMeta((new autoclass.meta()).setName("comment").setContent("World of Titania"))
    .addMeta((new autoclass.meta()).setName("created").setContent("Fri, 04 Sep 2015 10:19:01 GMT"))
    .addMeta((new autoclass.meta()).setName("creator").setContent("Holger Seelig"))
    .addMeta((new autoclass.meta()).setName("generator").setContent("Titania V3.0.4, http://titania.create3000.de"))
    .addMeta((new autoclass.meta()).setName("identifier").setContent("file:///home/holger/Projekte/Cobweb/excite/tests/Components/Shape/Connectors.x3d"))
    .addMeta((new autoclass.meta()).setName("modified").setContent("Tue, 25 Jul 2017 09:42:17 GMT"))
    .addMeta((new autoclass.meta()).setName("title").setContent("Connectors")))
  .setScene((new autoclass.Scene())
    .addChild((new autoclass.ProtoDeclare()).setName("RoundedRectangle2D")
      .setProtoInterface((new autoclass.ProtoInterface())
        .addField((new autoclass.field()).setName(cornerRadius).setType(SFFloat).setAccessType(initializeOnly).setValue(1))
        .addField((new autoclass.field()).setName(size).setType(SFVec2f).setAccessType(initializeOnly).setValue(2.0,2.0))
        .addField((new autoclass.field()).setName(solid).setType(SFBool).setAccessType(initializeOnly).setValue(true)))
      .setProtoBody((new autoclass.ProtoBody())
        .addChild((new autoclass.IndexedFaceSet("Geometry")).setDEF("Geometry")
          .setIS((new autoclass.IS())
            .addConnect((new autoclass.connect()).setNodeField("solid").setProtoField("solid")))
          .setCoord((new autoclass.Coordinate())))
        .addChild((new autoclass.Script("RoundedRectangle2D")).setDirectOutput(true).setSourceCode("\n" + 
"vrmlscript:" + "\n" + 
"\n" + 
"function initialize ()" + "\n" + 
"{" + "\n" + 
"	var point         = new SFVec3f (cornerRadius, 0, 0);" + "\n" + 
"	var startRotation = new SFRotation ();" + "\n" + 
"	var endRotation   = new SFRotation (0, 0, 1, Math .PI / 2);" + "\n" + 
"	var corner        = new MFVec3f ();" + "\n" + 
"	var coordIndex    = new MFInt32 ();" + "\n" + 
"	var points        = new MFVec3f ();" + "\n" + 
"\n" + 
"	for (var i = 0; i < cornerDimension * 4; ++ i)" + "\n" + 
"		coordIndex [coordIndex .length] = i;" + "\n" + 
"\n" + 
"	geometry .coordIndex = coordIndex;" + "\n" + 
"\n" + 
"	for (var i = 0; i < cornerDimension; ++i)" + "\n" + 
"		corner [i] = startRotation .slerp (endRotation, i / (cornerDimension - 1)) .multVec (point);" + "\n" + 
"\n" + 
"	var translation = new SFVec3f (size .x / 2 - cornerRadius, size .y / 2 - cornerRadius, 0);" + "\n" + 
"\n" + 
"	for (var i = 0; i < cornerDimension; ++ i)" + "\n" + 
"		points [points .length] = corner [i] .add (translation);" + "\n" + 
"\n" + 
"	var translation = new SFVec3f (-size .x / 2 + cornerRadius, size .y / 2 - cornerRadius, 0);" + "\n" + 
"	var rotation    = new SFRotation (0, 0, 1, Math .PI * 0.5);" + "\n" + 
"\n" + 
"	for (var i = 0; i < cornerDimension; ++ i)" + "\n" + 
"		points [points .length] = rotation .multVec (corner [i]) .add (translation);" + "\n" + 
"\n" + 
"	var translation = new SFVec3f (-size .x / 2 + cornerRadius, -size .y / 2 + cornerRadius, 0);" + "\n" + 
"	var rotation    = new SFRotation (0, 0, 1, Math .PI);" + "\n" + 
"\n" + 
"	for (var i = 0; i < cornerDimension; ++ i)" + "\n" + 
"		points [points .length] = rotation .multVec (corner [i]) .add (translation);" + "\n" + 
"\n" + 
"	var translation = new SFVec3f (size .x / 2 - cornerRadius, -size .y / 2 + cornerRadius, 0);" + "\n" + 
"	var rotation    = new SFRotation (0, 0, 1, Math .PI * 1.5);" + "\n" + 
"\n" + 
"	for (var i = 0; i < cornerDimension; ++ i)" + "\n" + 
"		points [points .length] = rotation .multVec (corner [i]) .add (translation);" + "\n" + 
"\n" + 
"	geometry .coord .point = points;" + "\n" + 
"}" + "\n")
          .addField((new autoclass.field()).setName(cornerDimension).setType(SFFloat).setAccessType(initializeOnly).setValue(10))
          .addField((new autoclass.field()).setName(cornerRadius).setType(SFFloat).setAccessType(initializeOnly))
          .addField((new autoclass.field()).setName(size).setType(SFVec2f).setAccessType(initializeOnly))
          .addField((new autoclass.field()).setName(geometry).setType(SFNode).setAccessType(initializeOnly)
            .addChild((new autoclass.IndexedFaceSet())))
          .setIS((new autoclass.IS())
            .addConnect((new autoclass.connect()).setNodeField("cornerRadius").setProtoField("cornerRadius"))
            .addConnect((new autoclass.connect()).setNodeField("size").setProtoField("size"))))))
    .addChild((new autoclass.ProtoDeclare()).setName("Widget")
      .setProtoInterface((new autoclass.ProtoInterface())
        .addField((new autoclass.field()).setName(fillColor.0).setType(SFColor.0).setAccessType(inputOutput.0).setValue(0.1,0.1,0.1))
        .addField((new autoclass.field()).setName(lineColor).setType(SFColor.0).setAccessType(inputOutput.0).setValue(0.4,0.4,0.4))
        .addField((new autoclass.field()).setName(linewidthScaleFactor).setType(SFFloat).setAccessType(inputOutput).setValue(1))
        .addField((new autoclass.field()).setName(geometry).setType(SFNode).setAccessType(inputOutput)))
      .setProtoBody((new autoclass.ProtoBody())
        .addChild((new autoclass.Transform("Shape"))
          .addChild((new autoclass.Shape())
            .setIS((new autoclass.IS())
              .addConnect((new autoclass.connect()).setNodeField("geometry").setProtoField("geometry")))
            .setAppearance((new autoclass.Appearance())
              .setMaterial((new autoclass.Material())
                .setIS((new autoclass.IS())
                  .addConnect((new autoclass.connect()).setNodeField("diffuseColor").setProtoField("fillColor"))))))
          .addChild((new autoclass.Shape())
            .setIS((new autoclass.IS())
              .addConnect((new autoclass.connect()).setNodeField("geometry").setProtoField("geometry")))
            .setAppearance((new autoclass.Appearance())
              .setFillProperties((new autoclass.FillProperties()).setFilled(false).setHatched(false))
              .setLineProperties((new autoclass.LineProperties())
                .setIS((new autoclass.IS())
                  .addConnect((new autoclass.connect()).setNodeField("linewidthScaleFactor").setProtoField("linewidthScaleFactor"))))
              .setMaterial((new autoclass.Material()).setDiffuseColor(0.0,0.0,0.0)
                .setIS((new autoclass.IS())
                  .addConnect((new autoclass.connect()).setNodeField("emissiveColor").setProtoField("lineColor")))))))))
    .addChild((new autoclass.ProtoDeclare()).setName("Node")
      .setProtoInterface((new autoclass.ProtoInterface())
        .addField((new autoclass.field()).setName(translation.0).setType(SFVec3f).setAccessType(inputOutput.0)))
      .setProtoBody((new autoclass.ProtoBody())
        .addChild((new autoclass.Group())
          .addChild((new autoclass.PlaneSensor("PlaneSensor")))
          .addChild((new autoclass.Transform("Node"))
            .setIS((new autoclass.IS())
              .addConnect((new autoclass.connect()).setNodeField("translation").setProtoField("translation")))
            .addChild((new autoclass.ProtoInstance())
              .addFieldValue((new autoclass.fieldValue()).setName("geometry")
                .addChild((new autoclass.ProtoInstance())
                  .addFieldValue((new autoclass.fieldValue()).setName("cornerRadius").setValue(0.12))
                  .addFieldValue((new autoclass.fieldValue()).setName("size").setValue(2 1)))))
            .addChild((new autoclass.Transform("Input")).setTranslation(-1.0,0.0,0.0)
              .addChild((new autoclass.ProtoInstance())
                .addFieldValue((new autoclass.fieldValue()).setName("lineColor").setValue(0.72 0.14 0.23))
                .addFieldValue((new autoclass.fieldValue()).setName("geometry")
                  .addChild((new autoclass.Disk2D("Connector")).setOuterRadius(0.2)))))
            .addChild((new autoclass.Transform("Output")).setTranslation(1.0,0.0,0.0)
              .addChild((new autoclass.ProtoInstance())
                .addFieldValue((new autoclass.fieldValue()).setName("lineColor").setValue(0.44 0.5 0.72))
                .addFieldValue((new autoclass.fieldValue()).setName("geometry")
                  .addChild((new autoclass.Disk2D())))))))
        .addChild((new autoclass.Script()).setDirectOutput(true).setSourceCode("\n" + 
"vrmlscript:" + "\n" + 
"function initialize ()" + "\n" + 
"{" + "\n" + 
"	sensor .offset = translation;" + "\n" + 
"}" + "\n")
          .addField((new autoclass.field()).setName(translation.0).setType(SFVec3f).setAccessType(inputOutput.0))
          .addField((new autoclass.field()).setName(sensor).setType(SFNode).setAccessType(initializeOnly)
            .addChild((new autoclass.PlaneSensor())))
          .addField((new autoclass.field()).setName(transform).setType(SFNode).setAccessType(initializeOnly)
            .addChild((new autoclass.Transform())))
          .setIS((new autoclass.IS())
            .addConnect((new autoclass.connect()).setNodeField("translation").setProtoField("translation"))))
        .addChild((new autoclass.ROUTE()).setFromNode("PlaneSensor").setFromField("translation_changed").setToNode("Node").setToField("set_translation"))))
    .addChild((new autoclass.ProtoDeclare()).setName("Route")
      .setProtoInterface((new autoclass.ProtoInterface())
        .addField((new autoclass.field()).setName(lineColor).setType(SFColor.0).setAccessType(inputOutput.0).setValue(0.43,0.43,0.98))
        .addField((new autoclass.field()).setName(linewidthScaleFactor).setType(SFFloat).setAccessType(inputOutput).setValue(2))
        .addField((new autoclass.field()).setName(output).setType(SFNode).setAccessType(initializeOnly))
        .addField((new autoclass.field()).setName(input).setType(SFNode).setAccessType(initializeOnly)))
      .setProtoBody((new autoclass.ProtoBody())
        .addChild((new autoclass.Shape())
          .setAppearance((new autoclass.Appearance())
            .setLineProperties((new autoclass.LineProperties())
              .setIS((new autoclass.IS())
                .addConnect((new autoclass.connect()).setNodeField("linewidthScaleFactor").setProtoField("linewidthScaleFactor"))))
            .setMaterial((new autoclass.Material()).setDiffuseColor(0.0,0.0,0.0)
              .setIS((new autoclass.IS())
                .addConnect((new autoclass.connect()).setNodeField("emissiveColor").setProtoField("lineColor")))))
          .setGeometry((new autoclass.LineSet("Geometry_1")).setVertexCount(java.newArray("int", [2]))
            .setCoord((new autoclass.Coordinate()).setPoint(new autoclass.MFVec3f(java.newArray("float", [-1.0,0.0,0.0,.0,1.0,0.0,0.0]))))))
        .addChild((new autoclass.Script("Route")).setDirectOutput(true).setSourceCode("\n" + 
"vrmlscript:" + "\n" + 
"function initialize ()" + "\n" + 
"{" + "\n" + 
"	Browser .addRoute (output, 'translation_changed', self, 'set_translation');" + "\n" + 
"	Browser .addRoute (input,  'translation_changed', self, 'set_translation');" + "\n" + 
"\n" + 
"	set_translation ();" + "\n" + 
"}" + "\n" + 
"\n" + 
"function set_translation ()" + "\n" + 
"{" + "\n" + 
"	geometry .vertexCount [0] = routeDimension;" + "\n" + 
"\n" + 
"	var outPoint = output .translation .add (new SFVec3f ( 1, 0, 0));" + "\n" + 
"	var inPoint  = input  .translation .add (new SFVec3f (-1, 0, 0));" + "\n" + 
"\n" + 
"	var w = inPoint .x - outPoint .x;" + "\n" + 
"	var h = outPoint .y - inPoint .y;" + "\n" + 
"\n" + 
"	for (var i = 0; i < routeDimension; ++ i)" + "\n" + 
"	{" + "\n" + 
"		var t = i / (routeDimension - 1);" + "\n" + 
"		var y = h / 2 * (Math .cos (t * Math .PI) - 1);" + "\n" + 
"\n" + 
"		geometry .coord .point [i] = outPoint .add (new SFVec3f (t * w, y, 0));" + "\n" + 
"	}" + "\n" + 
"}" + "\n")
          .addField((new autoclass.field()).setName(set_translation).setType(SFVec3f).setAccessType(inputOnly.0))
          .addField((new autoclass.field()).setName(routeDimension).setType(SFInt32).setAccessType(initializeOnly).setValue(21))
          .addField((new autoclass.field()).setName(output).setType(SFNode).setAccessType(initializeOnly))
          .addField((new autoclass.field()).setName(input).setType(SFNode).setAccessType(initializeOnly))
          .addField((new autoclass.field()).setName(geometry).setType(SFNode).setAccessType(initializeOnly)
            .addChild((new autoclass.LineSet())))
          .addField((new autoclass.field()).setName(self).setType(SFNode).setAccessType(initializeOnly)
            .addChild((new autoclass.Script())))
          .setIS((new autoclass.IS())
            .addConnect((new autoclass.connect()).setNodeField("output").setProtoField("output"))
            .addConnect((new autoclass.connect()).setNodeField("input").setProtoField("input"))))))
    .addChild((new autoclass.NavigationInfo()).setType("\"PLANE_create3000.de\", \"ANY\""))
    .addChild((new autoclass.Background()).setSkyColor(new autoclass.MFColor(java.newArray("float", [0.2,0.2,0.2]))))
    .addChild((new autoclass.OrthoViewpoint()).setDescription("OthoViewpoint").setCenterOfRotation(-3.13496,-4.19776,0.0).setFieldOfView(0.0,.0,0.0,.0,10.0,.0,10.0).setPosition(-3.13496,-4.19776,10.0))
    .addChild((new autoclass.Viewpoint()).setDescription("Viewpoint"))
    .addChild((new autoclass.Transform("Connectors"))
      .addChild((new autoclass.ProtoInstance())
        .addFieldValue((new autoclass.fieldValue()).setName("output")
          .addChild((new autoclass.ProtoInstance("N1", "Node"))
            .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue(-3.98323 2.88948 0))))
        .addFieldValue((new autoclass.fieldValue()).setName("input")
          .addChild((new autoclass.ProtoInstance("N2", "Node"))
            .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue(-0.0890862 2.96049 0)))))
      .addChild((new autoclass.ProtoInstance())
        .addFieldValue((new autoclass.fieldValue()).setName("output")
          .addChild((new autoclass.ProtoInstance())))
        .addFieldValue((new autoclass.fieldValue()).setName("input")
          .addChild((new autoclass.ProtoInstance("N3", "Node"))
            .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue(-0.104169 1.16371 0)))))
      .addChild((new autoclass.ProtoInstance())
        .addFieldValue((new autoclass.fieldValue()).setName("output")
          .addChild((new autoclass.ProtoInstance())))
        .addFieldValue((new autoclass.fieldValue()).setName("input")
          .addChild((new autoclass.ProtoInstance("N4", "Node"))
            .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue(-0.0998688 -0.40172 0)))))
      .addChild((new autoclass.ProtoInstance())
        .addFieldValue((new autoclass.fieldValue()).setName("output")
          .addChild((new autoclass.ProtoInstance())))
        .addFieldValue((new autoclass.fieldValue()).setName("input")
          .addChild((new autoclass.ProtoInstance("N5", "Node"))
            .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue(-0.0998687 -2.14742 0)))))
      .addChild((new autoclass.ProtoInstance())
        .addFieldValue((new autoclass.fieldValue()).setName("output")
          .addChild((new autoclass.ProtoInstance())))
        .addFieldValue((new autoclass.fieldValue()).setName("input")
          .addChild((new autoclass.ProtoInstance("N6", "Node"))
            .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue(3.55694 2.4116 0)))))
      .addChild((new autoclass.ProtoInstance())
        .addFieldValue((new autoclass.fieldValue()).setName("output")
          .addChild((new autoclass.ProtoInstance())))
        .addFieldValue((new autoclass.fieldValue()).setName("input")
          .addChild((new autoclass.ProtoInstance()))))
      .addChild((new autoclass.ProtoInstance())
        .addFieldValue((new autoclass.fieldValue()).setName("output")
          .addChild((new autoclass.ProtoInstance())))
        .addFieldValue((new autoclass.fieldValue()).setName("input")
          .addChild((new autoclass.ProtoInstance("N7", "Node"))
            .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue(3.75106 -0.0794556 0)))))
      .addChild((new autoclass.ProtoInstance())
        .addFieldValue((new autoclass.fieldValue()).setName("output")
          .addChild((new autoclass.ProtoInstance())))
        .addFieldValue((new autoclass.fieldValue()).setName("input")
          .addChild((new autoclass.ProtoInstance()))))
      .addChild((new autoclass.ProtoInstance())
        .addFieldValue((new autoclass.fieldValue()).setName("output")
          .addChild((new autoclass.ProtoInstance())))
        .addFieldValue((new autoclass.fieldValue()).setName("input")
          .addChild((new autoclass.ProtoInstance("N8", "Node"))
            .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue(7.68077 1.21228 0)))))
      .addChild((new autoclass.ProtoInstance())
        .addFieldValue((new autoclass.fieldValue()).setName("output")
          .addChild((new autoclass.ProtoInstance())))
        .addFieldValue((new autoclass.fieldValue()).setName("input")
          .addChild((new autoclass.ProtoInstance()))))
      .addChild((new autoclass.ProtoInstance()))
      .addChild((new autoclass.ProtoInstance()))
      .addChild((new autoclass.ProtoInstance()))
      .addChild((new autoclass.ProtoInstance()))
      .addChild((new autoclass.ProtoInstance()))
      .addChild((new autoclass.ProtoInstance()))
      .addChild((new autoclass.ProtoInstance()))
      .addChild((new autoclass.ProtoInstance()))));
  },
  // end of initialize() method


  /** Provide a shallow copy of the X3D model.
   * @return Connectors model
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
		var testObject = new Connectors();
		console.log ("Connectors execution self-validation test results: " + testObject.validateSelf());
	}
}
new Connectors().main();