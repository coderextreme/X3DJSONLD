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
 * <p> Create a half arch with parameters clearSpanWidth=4; riseHeight=2; depth=3; topAbutmentHeight=0.5; pierWidth=0.5; pierHeight=1. Parameter clearSpanWidth measure refers to a full arc, consider clearSpanWidth/2 for the archHalf width. Modify them with Transform &gt; scale or editing the IndexedFileSet node. See the reference file ArchModelingDiagrams.pdf and the ArchScript_more_readable.js script to find further information. </p>
 <p> Related links: <a href="../../../Buildings/ArchHalf.java">ArchHalf.java</a> source, <a href="../../../Buildings/ArchHalfIndex.html" target="_top">ArchHalf catalog page</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a> and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;" summary="Scene Metadata">
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="../../../Buildings/ArchHalf.x3d">ArchHalf.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> Create a half arch with parameters clearSpanWidth=4; riseHeight=2; depth=3; topAbutmentHeight=0.5; pierWidth=0.5; pierHeight=1. Parameter clearSpanWidth measure refers to a full arc, consider clearSpanWidth/2 for the archHalf width. Modify them with Transform &gt; scale or editing the IndexedFileSet node. See the reference file ArchModelingDiagrams.pdf and the ArchScript_more_readable.js script to find further information. </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> Michele Foti, Don Brutzman </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> created </i> </td>
			<td> 15 December 2014 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> modified </i> </td>
			<td> 16 February 2016 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="../../../Buildings/ArchModelingDiagrams.pdf">ArchModelingDiagrams.pdf</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="https://en.wikipedia.org/wiki/Arch" target="_blank">https://en.wikipedia.org/wiki/Arch</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="http://X3dGraphics.com/examples/X3dForAdvancedModeling/Buildings/ArchHalf.x3d" target="_blank">http://X3dGraphics.com/examples/X3dForAdvancedModeling/Buildings/ArchHalf.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> generator </i> </td>
			<td> X3D-Edit 3.3, <a href="https://savage.nps.edu/X3D-Edit" target="_blank">https://savage.nps.edu/X3D-Edit</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> license </i> </td>
			<td> <a href="../../../Buildings/../license.html">../license.html</a> </td>
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

	* @author Michele Foti, Don Brutzman
 */

function ArchHalf
  /** Default constructor to create this object. */
  ()
  {
    /** The initialized model object, created within initialize() method. */
    this.x3dModel = {};
    this.initialize();
    return this;
  }
ArchHalf.prototype = {
  /** Create and initialize the X3D model. */
  initialize : function ()
  {

	/** Large attribute array: IndexedFaceSet DEF='ArchIndex' coordIndex field, scene-graph level=4, element #12, 318 total numbers */
	this.ArchIndex_4_12_coordIndex = new autoclass.MFInt32(java.newArray("int", [31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,144,-1,149,31,144,147,-1,134,147,144,145,-1,145,144,62,141,-1,132,133,141,62,-1,94,95,96,97,98,99,100,101,102,103,104,105,106,107,108,109,110,111,112,113,114,115,116,117,118,119,120,121,122,123,124,125,143,-1,148,94,143,146,-1,142,128,146,143,-1,140,125,143,142,-1,125,126,127,140,-1,31,94,95,32,-1,32,95,96,33,-1,33,96,97,34,-1,34,97,98,35,-1,35,98,99,36,-1,36,99,100,37,-1,37,100,101,38,-1,38,101,102,39,-1,39,102,103,40,-1,40,103,104,41,-1,41,104,105,42,-1,42,105,106,43,-1,43,106,107,44,-1,44,107,108,45,-1,45,108,109,46,-1,46,109,110,47,-1,47,110,111,48,-1,48,111,112,49,-1,49,112,113,50,-1,50,113,114,51,-1,51,114,115,52,-1,52,115,116,53,-1,53,116,117,54,-1,54,117,118,55,-1,55,118,119,56,-1,56,119,120,57,-1,57,120,121,58,-1,58,121,122,59,-1,59,122,123,60,-1,60,123,124,61,-1,61,124,125,62,-1,148,149,147,146,-1,146,147,134,128,-1,128,134,145,142,-1,140,141,145,142,-1,127,133,141,140,-1,127,126,132,133,-1,126,132,62,125,-1,31,94,143,144,-1,142,143,144,145,-1,140,125,62,141,-1,31,94,148,149,-1]));

	/** Large attribute array: Coordinate DEF='ArchChord' point field, scene-graph level=5, element #12, 468 total numbers made up of 156 3-tuple values */
	this.ArchChord_5_12_point = new autoclass.MFVec3f() /* splitting up long array to improve readability */
	.append(new autoclass.MFVec3f(java.newArray("float", [2.0,0.0,0.0,1.9974984355438178,0.1,0.0,1.98997487421324,0.2,0.0,1.977371993328519,0.3,0.0,1.9595917942265423,0.4,0.0,1.9364916731037084,0.5,0.0,1.9078784028338912,0.6,0.0,1.8734993995195193,0.7,0.0,1.833030277982336,0.8,0.0,1.786057109949175,0.9,0.0])))
	.append(new autoclass.MFVec3f(java.newArray("float", [1.7320508075688775,1.0,0.0,1.6703293088490067,1.1,0.0,1.60,1.2,0.0,1.5198684153570664,1.3,0.0,1.42828568570857,1.4,0.0,1.3228756555322953,1.5,0.0,1.20,1.6,0.0,1.0535653752852738,1.7,0.0,0.9020947843768965,1.785,0.0,0.7599342076785332,1.85,0.0])))
	.append(new autoclass.MFVec3f(java.newArray("float", [0.6244997998398398,1.9,0.0,0.5425633603552677,1.925,0.0,0.4444097208657794,1.95,0.0,0.36181625170796194,1.967,0.0,0.2821347195933173,1.98,0.0,0.19974984355438343,1.99,0.0,0.16718552568927703,1.993,0.0,0.14133294025102578,1.995,0.0,0.10950342460398415,1.997,0.0,0.08942035562443252,1.998,0.0])))
	.append(new autoclass.MFVec3f(java.newArray("float", [0.06323764701505419,1.999,0.0,0.0,2.0,0.0,-0.06323764701505419,1.999,0.0,-0.08942035562443252,1.998,0.0,-0.10950342460398415,1.997,0.0,-0.14133294025102578,1.995,0.0,-0.16718552568927703,1.993,0.0,-0.19974984355438343,1.99,0.0,-0.2821347195933173,1.98,0.0,-0.36181625170796194,1.967,0.0])))
	.append(new autoclass.MFVec3f(java.newArray("float", [-0.4444097208657794,1.95,0.0,-0.5425633603552677,1.925,0.0,-0.6244997998398398,1.9,0.0,-0.7599342076785332,1.85,0.0,-0.9020947843768965,1.785,0.0,-1.0535653752852738,1.7,0.0,-1.20,1.6,0.0,-1.3228756555322953,1.5,0.0,-1.42828568570857,1.4,0.0,-1.5198684153570664,1.3,0.0])))
	.append(new autoclass.MFVec3f(java.newArray("float", [-1.60,1.2,0.0,-1.6703293088490067,1.1,0.0,-1.7320508075688775,1.0,0.0,-1.786057109949175,0.9,0.0,-1.833030277982336,0.8,0.0,-1.8734993995195193,0.7,0.0,-1.9078784028338912,0.6,0.0,-1.9364916731037084,0.5,0.0,-1.9595917942265423,0.4,0.0,-1.977371993328519,0.3,0.0])))
	.append(new autoclass.MFVec3f(java.newArray("float", [-1.98997487421324,0.2,0.0,-1.9974984355438178,0.1,0.0,-2.0,0.0,0.0,2.0,0.0,3.0,1.9974984355438178,0.1,3.0,1.98997487421324,0.2,3.0,1.977371993328519,0.3,3.0,1.9595917942265423,0.4,3.0,1.9364916731037084,0.5,3.0,1.9078784028338912,0.6,3.0])))
	.append(new autoclass.MFVec3f(java.newArray("float", [1.8734993995195193,0.7,3.0,1.833030277982336,0.8,3.0,1.786057109949175,0.9,3.0,1.7320508075688775,1.0,3.0,1.6703293088490067,1.1,3.0,1.60,1.2,3.0,1.5198684153570664,1.3,3.0,1.42828568570857,1.4,3.0,1.3228756555322953,1.5,3.0,1.20,1.6,3.0])))
	.append(new autoclass.MFVec3f(java.newArray("float", [1.0535653752852738,1.7,3.0,0.9020947843768965,1.785,3.0,0.7599342076785332,1.85,3.0,0.6244997998398398,1.9,3.0,0.5425633603552677,1.925,3.0,0.4444097208657794,1.95,3.0,0.36181625170796194,1.967,3.0,0.2821347195933173,1.98,3.0,0.19974984355438343,1.99,3.0,0.16718552568927703,1.993,3.0])))
	.append(new autoclass.MFVec3f(java.newArray("float", [0.14133294025102578,1.995,3.0,0.10950342460398415,1.997,3.0,0.08942035562443252,1.998,3.0,0.06323764701505419,1.999,3.0,0.0,2.0,3.0,-0.06323764701505419,1.999,3.0,-0.08942035562443252,1.998,3.0,-0.10950342460398415,1.997,3.0,-0.14133294025102578,1.995,3.0,-0.16718552568927703,1.993,3.0])))
	.append(new autoclass.MFVec3f(java.newArray("float", [-0.19974984355438343,1.99,3.0,-0.2821347195933173,1.98,3.0,-0.36181625170796194,1.967,3.0,-0.4444097208657794,1.95,3.0,-0.5425633603552677,1.925,3.0,-0.6244997998398398,1.9,3.0,-0.7599342076785332,1.85,3.0,-0.9020947843768965,1.785,3.0,-1.0535653752852738,1.7,3.0,-1.20,1.6,3.0])))
	.append(new autoclass.MFVec3f(java.newArray("float", [-1.3228756555322953,1.5,3.0,-1.42828568570857,1.4,3.0,-1.5198684153570664,1.3,3.0,-1.60,1.2,3.0,-1.6703293088490067,1.1,3.0,-1.7320508075688775,1.0,3.0,-1.786057109949175,0.9,3.0,-1.833030277982336,0.8,3.0,-1.8734993995195193,0.7,3.0,-1.9078784028338912,0.6,3.0])))
	.append(new autoclass.MFVec3f(java.newArray("float", [-1.9364916731037084,0.5,3.0,-1.9595917942265423,0.4,3.0,-1.977371993328519,0.3,3.0,-1.98997487421324,0.2,3.0,-1.9974984355438178,0.1,3.0,-2.0,0.0,3.0,-2.0,-1.0,3.0,-2.5,-1.0,3.0,-2.5,2.5,3.0,2.5,2.5,3.0])))
	.append(new autoclass.MFVec3f(java.newArray("float", [2.5,-1.0,3.0,2.0,-1.0,3.0,-2.0,-1.0,0.0,-2.5,-1.0,0.0,-2.5,2.5,0.0,2.5,2.5,0.0,2.5,-1.0,0.0,2.0,-1.0,0.0,2.5,0.0,3.0,2.5,0.0,0.0])))
	.append(new autoclass.MFVec3f(java.newArray("float", [-2.5,0.0,3.0,-2.5,0.0,0.0,-2.5,2.0,3.0,-2.0,2.0,3.0,-2.0,2.0,0.0,-2.5,2.0,0.0,-2.0,2.5,3.0,-2.0,2.5,0.0,0.0,2.5,3.0,0.0,2.5,0.0])))
	.append(new autoclass.MFVec3f(java.newArray("float", [2.0,2.0,3.0,2.5,2.0,3.0,2.5,2.0,0.0,2.0,2.0,0.0,2.0,2.5,3.0,2.0,2.5,0.0])));
  this.x3dModel = (new autoclass.X3D()).setProfile("Interchange").setVersion("3.3")
  .setHead((new autoclass.head())
    .addMeta((new autoclass.meta()).setName("title").setContent("ArchHalf.x3d"))
    .addMeta((new autoclass.meta()).setName("description").setContent("Create a half arch with parameters clearSpanWidth=4; riseHeight=2; depth=3; topAbutmentHeight=0.5; pierWidth=0.5; pierHeight=1. Parameter clearSpanWidth measure refers to a full arc, consider clearSpanWidth/2 for the archHalf width. Modify them with Transform > scale or editing the IndexedFileSet node. See the reference file ArchModelingDiagrams.pdf and the ArchScript_more_readable.js script to find further information."))
    .addMeta((new autoclass.meta()).setName("creator").setContent("Michele Foti, Don Brutzman"))
    .addMeta((new autoclass.meta()).setName("created").setContent("15 December 2014"))
    .addMeta((new autoclass.meta()).setName("modified").setContent("16 February 2016"))
    .addMeta((new autoclass.meta()).setName("reference").setContent("ArchModelingDiagrams.pdf"))
    .addMeta((new autoclass.meta()).setName("reference").setContent("https://en.wikipedia.org/wiki/Arch"))
    .addMeta((new autoclass.meta()).setName("identifier").setContent("http://X3dGraphics.com/examples/X3dForAdvancedModeling/Buildings/ArchHalf.x3d"))
    .addMeta((new autoclass.meta()).setName("generator").setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
    .addMeta((new autoclass.meta()).setName("license").setContent("../license.html")))
  .setScene((new autoclass.Scene())
    .addChild((new autoclass.Shape("Arch"))
      .addComments(" note that convex='false' (meaning concave geometry) is crucial for this IFS of a geometric chord to render properly ")
      .setGeometry((new autoclass.IndexedFaceSet("ArchIndex")).setDEF("ArchIndex").setConvex(false).setSolid(false).setCoordIndex(this.ArchIndex_4_12_coordIndex)
        .setCoord((new autoclass.Coordinate("ArchChord")).setPoint(this.ArchChord_5_12_point)))
      .setAppearance((new autoclass.Appearance())
        .setMaterial((new autoclass.Material("MaterialNode")).setDiffuseColor(1.0,0.75,0.25)))));
  },
  // end of initialize() method


  /** Provide a shallow copy of the X3D model.
   * @return ArchHalf model
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
		var testObject = new ArchHalf();
		console.log ("ArchHalf execution self-validation test results: " + testObject.validateSelf());
		process.exit();
	}
}
new ArchHalf().main();