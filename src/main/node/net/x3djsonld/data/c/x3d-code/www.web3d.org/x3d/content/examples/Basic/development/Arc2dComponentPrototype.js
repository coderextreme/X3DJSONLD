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
 * <p> X3D Geometry2D component node, implemented as prototype for backwards compatibility with VRML 97. Arc2D specifies a 2D linear circular arc. </p>
 <p> Related links: <a href="../../../development/Arc2dComponentPrototype.java">Arc2dComponentPrototype.java</a> source, <a href="../../../development/Arc2dComponentPrototypeIndex.html" target="_top">Arc2dComponentPrototype catalog page</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a> and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;" summary="Scene Metadata">
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="../../../development/Arc2dComponentPrototype.x3d">Arc2dComponentPrototype.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> X3D Geometry2D component node, implemented as prototype for backwards compatibility with VRML 97. Arc2D specifies a 2D linear circular arc. </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> Christos Kalogrias, Don Brutzman, Ken Curtin, Duane Davis </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> created </i> </td>
			<td> 14 November 2003 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> modified </i> </td>
			<td> 20 October 2019 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="https://www.web3d.org/documents/specifications/19775-1/V3.3/Part01/components/geometry2D.html" target="_blank">https://www.web3d.org/documents/specifications/19775-1/V3.3/Part01/components/geometry2D.html</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> subject </i> </td>
			<td> Geometry2D component node (Arc2D) </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/Basic/development/Arc2dComponentPrototype.x3d" target="_blank">https://www.web3d.org/x3d/content/examples/Basic/development/Arc2dComponentPrototype.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> generator </i> </td>
			<td> X3D-Edit 3.3, <a href="https://savage.nps.edu/X3D-Edit" target="_blank">https://savage.nps.edu/X3D-Edit</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> license </i> </td>
			<td> <a href="../../../development/../license.html">../license.html</a> </td>
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

	* @author Christos Kalogrias, Don Brutzman, Ken Curtin, Duane Davis
 */

function Arc2dComponentPrototype
  /** Default constructor to create this object. */
  ()
  {
    /** The initialized model object, created within initialize() method. */
    this.x3dModel = {};
    this.initialize();
    return this;
  }
Arc2dComponentPrototype.prototype = {
  /** Create and initialize the X3D model. */
  initialize : function ()
  {
  this.x3dModel = (new autoclass.X3D()).setProfile("Immersive").setVersion("3.1")
  .setHead((new autoclass.head())
    .addMeta((new autoclass.meta()).setName("title").setContent("Arc2dComponentPrototype.x3d"))
    .addMeta((new autoclass.meta()).setName("description").setContent("X3D Geometry2D component node, implemented as prototype for backwards compatibility with VRML 97. Arc2D specifies a 2D linear circular arc."))
    .addMeta((new autoclass.meta()).setName("creator").setContent("Christos Kalogrias, Don Brutzman, Ken Curtin, Duane Davis"))
    .addMeta((new autoclass.meta()).setName("created").setContent("14 November 2003"))
    .addMeta((new autoclass.meta()).setName("modified").setContent("20 October 2019"))
    .addMeta((new autoclass.meta()).setName("reference").setContent("https://www.web3d.org/documents/specifications/19775-1/V3.3/Part01/components/geometry2D.html"))
    .addMeta((new autoclass.meta()).setName("subject").setContent("Geometry2D component node (Arc2D)"))
    .addMeta((new autoclass.meta()).setName("identifier").setContent("https://www.web3d.org/x3d/content/examples/Basic/development/Arc2dComponentPrototype.x3d"))
    .addMeta((new autoclass.meta()).setName("generator").setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
    .addMeta((new autoclass.meta()).setName("license").setContent("../license.html")))
  .setScene((new autoclass.Scene())
    .addComments(" ==================== ")
    .addChild((new autoclass.WorldInfo()).setTitle("Arc2dComponentPrototype.x3d"))
    .addChild((new autoclass.ProtoDeclare()).setName("Arc2D")
      .setProtoInterface((new autoclass.ProtoInterface())
        .addField((new autoclass.field()).setAccessType("initializeOnly").setName("startAngle").setType("SFFloat").setValue("0"))
        .addField((new autoclass.field()).setAccessType("initializeOnly").setName("endAngle").setType("SFFloat").setValue("1.5707963265"))
        .addField((new autoclass.field()).setAccessType("initializeOnly").setName("radius").setType("SFFloat").setValue("1"))
        .addField((new autoclass.field()).setAccessType("inputOutput").setName("metadata").setType("SFNode").setAppinfo("Metadata node only")))
      .setProtoBody((new autoclass.ProtoBody())
        .addComments(" Only the first node counts as the node type of a prototype. This node must be a geometry node. ")
        .addChild((new autoclass.IndexedLineSet("ArcIndexPoints")).setDEF("ArcIndexPoints")
          .setCoord((new autoclass.Coordinate("Arc3DPoints"))))
        .addComments(" Any nodes after initial node in a ProtoBody is not rendered. ")
        .addChild((new autoclass.Group())
          .setIS((new autoclass.IS())
            .addConnect((new autoclass.connect()).setNodeField("metadata").setProtoField("metadata")))
          .addChild((new autoclass.Script("Arc2dToFaceSet3d")).setSourceCode("\n" + 
"            " + "\n" + 
"ecmascript:" + "\n" + 
"\n" + 
"function initialize()" + "\n" + 
"{" + "\n" + 
"   numOfPoints = 100;" + "\n" + 
"\n" + 
"   if (radius < 0)" + "\n" + 
"   {" + "\n" + 
"      Browser.print ('[Arc2D] Warning:  invalid value, radius=' + value + ' must instead be >= 0');" + "\n" + 
"   }" + "\n" + 
"\n" + 
"   if ((startAngle < 0) || (startAngle >= 2 * Math.PI))" + "\n" + 
"   {" + "\n" + 
"      Browser.print ('[Arc2D] Warning: startAngle=' + startAngle + ' must be within range [0..2pi)');" + "\n" + 
"   }" + "\n" + 
"\n" + 
"   if ((endAngle < 0) || (endAngle >= 2 * Math.PI))" + "\n" + 
"   {" + "\n" + 
"      Browser.print ('[Arc2D] Warning: endAngle=' + endAngle + ' must be within range [0..2pi)');" + "\n" + 
"   }" + "\n" + 
"\n" + 
"   // equal startAngle, endAngle means draw full circle." + "\n" + 
"   // high out-of-range endAngle is OK for local computation." + "\n" + 
"   if (startAngle >= endAngle)" + "\n" + 
"      endAngle += (2 * Math.PI);" + "\n" + 
"\n" + 
"   differAng = Math.abs((endAngle - startAngle))/numOfPoints;" + "\n" + 
"\n" + 
"   for (i = 0; i <= numOfPoints; i++)" + "\n" + 
"   {" + "\n" + 
"      arcSet3d[i] = new SFVec3f (radius * Math.cos(startAngle + i * differAng), radius * Math.sin(startAngle + i * differAng), 0.0);" + "\n" + 
"      arcIndexSet3d[i] = i;" + "\n" + 
"   }" + "\n" + 
"\n" + 
"} // initialize" + "\n")
            .addField((new autoclass.field()).setAccessType("initializeOnly").setName("startAngle").setType("SFFloat"))
            .addField((new autoclass.field()).setAccessType("initializeOnly").setName("endAngle").setType("SFFloat"))
            .addField((new autoclass.field()).setAccessType("initializeOnly").setName("radius").setType("SFFloat"))
            .addField((new autoclass.field()).setAccessType("outputOnly").setName("arcSet3d").setType("MFVec3f"))
            .addField((new autoclass.field()).setAccessType("outputOnly").setName("arcIndexSet3d").setType("MFInt32"))
            .setIS((new autoclass.IS())
              .addConnect((new autoclass.connect()).setNodeField("startAngle").setProtoField("startAngle"))
              .addConnect((new autoclass.connect()).setNodeField("endAngle").setProtoField("endAngle"))
              .addConnect((new autoclass.connect()).setNodeField("radius").setProtoField("radius"))))
          .addChild((new autoclass.ROUTE()).setFromNode("Arc2dToFaceSet3d").setFromField("arcSet3d").setToNode("Arc3DPoints").setToField("point"))
          .addChild((new autoclass.ROUTE()).setFromNode("Arc2dToFaceSet3d").setFromField("arcIndexSet3d").setToNode("ArcIndexPoints").setToField("set_coordIndex"))))));
  },
  // end of initialize() method


  /** Provide a shallow copy of the X3D model.
   * @return Arc2dComponentPrototype model
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
		var testObject = new Arc2dComponentPrototype();
		console.log ("Arc2dComponentPrototype execution self-validation test results: " + testObject.validateSelf());
	}
}
new Arc2dComponentPrototype().main();
process.exit(0);