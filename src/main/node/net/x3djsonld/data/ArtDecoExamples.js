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
 * <p> Example ExternProtoDeclare/ProtoInstance usage of X3D/VRML materials, originally converted from SGI's Open Inventor material examples. </p>
 <p> Related links: <a href="../../../UniversalMediaMaterials/ArtDecoExamples.java">ArtDecoExamples.java</a> source, <a href="../../../UniversalMediaMaterials/ArtDecoExamplesIndex.html" target="_top">ArtDecoExamples catalog page</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a> and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;" summary="Scene Metadata">
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="../../../UniversalMediaMaterials/ArtDecoExamples.x3d">ArtDecoExamples.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> Example ExternProtoDeclare/ProtoInstance usage of X3D/VRML materials, originally converted from SGI's Open Inventor material examples. </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> David Roussel </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> translator </i> </td>
			<td> James Harney, Don Brutzman NPS </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> created </i> </td>
			<td> 7 April 2002 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> modified </i> </td>
			<td> 20 October 2019 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="http://vrmlstuff.free.fr/materials" target="_blank">http://vrmlstuff.free.fr/materials</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> subject </i> </td>
			<td> Universal Media Material Library </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoExamples.x3d" target="_blank">https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoExamples.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> generator </i> </td>
			<td> Vrml97ToX3dNist, <a href="http://ovrt.nist.gov/v2_x3d.html" target="_blank">http://ovrt.nist.gov/v2_x3d.html</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> license </i> </td>
			<td> <a href="../../../UniversalMediaMaterials/../license.html">../license.html</a> </td>
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

	* @author David Roussel
 */

function ArtDecoExamples
  /** Default constructor to create this object. */
  ()
  {
    /** The initialized model object, created within initialize() method. */
    this.x3dModel = {};
    this.initialize();
    return this;
  }
ArtDecoExamples.prototype = {
  /** Create and initialize the X3D model. */
  initialize : function ()
  {
  this.x3dModel = (new autoclass.X3D()).setProfile("Immersive").setVersion("3.0")
  .setHead((new autoclass.head())
    .addMeta((new autoclass.meta()).setName("title").setContent("ArtDecoExamples.x3d"))
    .addMeta((new autoclass.meta()).setName("description").setContent("Example ExternProtoDeclare/ProtoInstance usage of X3D/VRML materials, originally converted from SGI's Open Inventor material examples."))
    .addMeta((new autoclass.meta()).setName("creator").setContent("David Roussel"))
    .addMeta((new autoclass.meta()).setName("translator").setContent("James Harney, Don Brutzman NPS"))
    .addMeta((new autoclass.meta()).setName("created").setContent("7 April 2002"))
    .addMeta((new autoclass.meta()).setName("modified").setContent("20 October 2019"))
    .addMeta((new autoclass.meta()).setName("reference").setContent("http://vrmlstuff.free.fr/materials"))
    .addMeta((new autoclass.meta()).setName("subject").setContent("Universal Media Material Library"))
    .addMeta((new autoclass.meta()).setName("identifier").setContent("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoExamples.x3d"))
    .addMeta((new autoclass.meta()).setName("generator").setContent("Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html"))
    .addMeta((new autoclass.meta()).setName("license").setContent("../license.html")))
  .setScene((new autoclass.Scene())
    .addChild((new autoclass.WorldInfo()).setTitle("ArtDecoExamples.x3d"))
    .addChild((new autoclass.ExternProtoDeclare()).setName("ArtDeco00").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials").setUrl(new autoclass.MFString("\"ArtDecoPrototypes.x3d#ArtDeco00\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco00\" \"ArtDecoPrototypes.wrl#ArtDeco00\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco00\"")))
    .addChild((new autoclass.ExternProtoDeclare()).setName("ArtDeco01").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials").setUrl(new autoclass.MFString("\"ArtDecoPrototypes.x3d#ArtDeco01\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco01\" \"ArtDecoPrototypes.wrl#ArtDeco01\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco01\"")))
    .addChild((new autoclass.ExternProtoDeclare()).setName("ArtDeco02").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials").setUrl(new autoclass.MFString("\"ArtDecoPrototypes.x3d#ArtDeco02\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco02\" \"ArtDecoPrototypes.wrl#ArtDeco02\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco02\"")))
    .addChild((new autoclass.ExternProtoDeclare()).setName("ArtDeco03").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials").setUrl(new autoclass.MFString("\"ArtDecoPrototypes.x3d#ArtDeco03\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco03\" \"ArtDecoPrototypes.wrl#ArtDeco03\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco03\"")))
    .addChild((new autoclass.ExternProtoDeclare()).setName("ArtDeco04").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials").setUrl(new autoclass.MFString("\"ArtDecoPrototypes.x3d#ArtDeco04\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco04\" \"ArtDecoPrototypes.wrl#ArtDeco04\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco04\"")))
    .addChild((new autoclass.ExternProtoDeclare()).setName("ArtDeco05").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials").setUrl(new autoclass.MFString("\"ArtDecoPrototypes.x3d#ArtDeco05\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco05\" \"ArtDecoPrototypes.wrl#ArtDeco05\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco05\"")))
    .addChild((new autoclass.ExternProtoDeclare()).setName("ArtDeco06").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials").setUrl(new autoclass.MFString("\"ArtDecoPrototypes.x3d#ArtDeco06\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco06\" \"ArtDecoPrototypes.wrl#ArtDeco06\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco06\"")))
    .addChild((new autoclass.ExternProtoDeclare()).setName("ArtDeco07").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials").setUrl(new autoclass.MFString("\"ArtDecoPrototypes.x3d#ArtDeco07\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco07\" \"ArtDecoPrototypes.wrl#ArtDeco07\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco07\"")))
    .addChild((new autoclass.ExternProtoDeclare()).setName("ArtDeco08").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials").setUrl(new autoclass.MFString("\"ArtDecoPrototypes.x3d#ArtDeco08\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco08\" \"ArtDecoPrototypes.wrl#ArtDeco08\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco08\"")))
    .addChild((new autoclass.ExternProtoDeclare()).setName("ArtDeco09").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials").setUrl(new autoclass.MFString("\"ArtDecoPrototypes.x3d#ArtDeco09\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco09\" \"ArtDecoPrototypes.wrl#ArtDeco09\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco09\"")))
    .addChild((new autoclass.ExternProtoDeclare()).setName("ArtDeco10").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials").setUrl(new autoclass.MFString("\"ArtDecoPrototypes.x3d#ArtDeco10\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco10\" \"ArtDecoPrototypes.wrl#ArtDeco10\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco10\"")))
    .addChild((new autoclass.ExternProtoDeclare()).setName("ArtDeco11").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials").setUrl(new autoclass.MFString("\"ArtDecoPrototypes.x3d#ArtDeco11\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco11\" \"ArtDecoPrototypes.wrl#ArtDeco11\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco11\"")))
    .addChild((new autoclass.ExternProtoDeclare()).setName("ArtDeco12").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials").setUrl(new autoclass.MFString("\"ArtDecoPrototypes.x3d#ArtDeco12\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco12\" \"ArtDecoPrototypes.wrl#ArtDeco12\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco12\"")))
    .addChild((new autoclass.ExternProtoDeclare()).setName("ArtDeco13").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials").setUrl(new autoclass.MFString("\"ArtDecoPrototypes.x3d#ArtDeco13\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco13\" \"ArtDecoPrototypes.wrl#ArtDeco13\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco13\"")))
    .addChild((new autoclass.ExternProtoDeclare()).setName("ArtDeco14").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials").setUrl(new autoclass.MFString("\"ArtDecoPrototypes.x3d#ArtDeco14\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco14\" \"ArtDecoPrototypes.wrl#ArtDeco14\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco14\"")))
    .addChild((new autoclass.ExternProtoDeclare()).setName("ArtDeco15").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials").setUrl(new autoclass.MFString("\"ArtDecoPrototypes.x3d#ArtDeco15\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco15\" \"ArtDecoPrototypes.wrl#ArtDeco15\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco15\"")))
    .addChild((new autoclass.ExternProtoDeclare()).setName("ArtDeco16").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials").setUrl(new autoclass.MFString("\"ArtDecoPrototypes.x3d#ArtDeco16\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco16\" \"ArtDecoPrototypes.wrl#ArtDeco16\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco16\"")))
    .addChild((new autoclass.ExternProtoDeclare()).setName("ArtDeco17").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials").setUrl(new autoclass.MFString("\"ArtDecoPrototypes.x3d#ArtDeco17\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco17\" \"ArtDecoPrototypes.wrl#ArtDeco17\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco17\"")))
    .addChild((new autoclass.ExternProtoDeclare()).setName("ArtDeco18").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials").setUrl(new autoclass.MFString("\"ArtDecoPrototypes.x3d#ArtDeco18\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco18\" \"ArtDecoPrototypes.wrl#ArtDeco18\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco18\"")))
    .addChild((new autoclass.ExternProtoDeclare()).setName("ArtDeco19").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials").setUrl(new autoclass.MFString("\"ArtDecoPrototypes.x3d#ArtDeco19\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco19\" \"ArtDecoPrototypes.wrl#ArtDeco19\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco19\"")))
    .addChild((new autoclass.ExternProtoDeclare()).setName("ArtDeco20").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials").setUrl(new autoclass.MFString("\"ArtDecoPrototypes.x3d#ArtDeco20\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco20\" \"ArtDecoPrototypes.wrl#ArtDeco20\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco20\"")))
    .addChild((new autoclass.ExternProtoDeclare()).setName("ArtDeco21").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials").setUrl(new autoclass.MFString("\"ArtDecoPrototypes.x3d#ArtDeco21\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco21\" \"ArtDecoPrototypes.wrl#ArtDeco21\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco21\"")))
    .addChild((new autoclass.ExternProtoDeclare()).setName("ArtDeco22").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials").setUrl(new autoclass.MFString("\"ArtDecoPrototypes.x3d#ArtDeco22\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco22\" \"ArtDecoPrototypes.wrl#ArtDeco22\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco22\"")))
    .addChild((new autoclass.ExternProtoDeclare()).setName("ArtDeco23").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials").setUrl(new autoclass.MFString("\"ArtDecoPrototypes.x3d#ArtDeco23\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco23\" \"ArtDecoPrototypes.wrl#ArtDeco23\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco23\"")))
    .addChild((new autoclass.ExternProtoDeclare()).setName("ArtDeco24").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials").setUrl(new autoclass.MFString("\"ArtDecoPrototypes.x3d#ArtDeco24\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco24\" \"ArtDecoPrototypes.wrl#ArtDeco24\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco24\"")))
    .addChild((new autoclass.ExternProtoDeclare()).setName("ArtDeco25").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials").setUrl(new autoclass.MFString("\"ArtDecoPrototypes.x3d#ArtDeco25\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco25\" \"ArtDecoPrototypes.wrl#ArtDeco25\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco25\"")))
    .addChild((new autoclass.ExternProtoDeclare()).setName("ArtDeco26").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials").setUrl(new autoclass.MFString("\"ArtDecoPrototypes.x3d#ArtDeco26\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco26\" \"ArtDecoPrototypes.wrl#ArtDeco26\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco26\"")))
    .addChild((new autoclass.ExternProtoDeclare()).setName("ArtDeco27").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials").setUrl(new autoclass.MFString("\"ArtDecoPrototypes.x3d#ArtDeco27\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco27\" \"ArtDecoPrototypes.wrl#ArtDeco27\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco27\"")))
    .addChild((new autoclass.ExternProtoDeclare()).setName("ArtDeco28").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials").setUrl(new autoclass.MFString("\"ArtDecoPrototypes.x3d#ArtDeco28\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco28\" \"ArtDecoPrototypes.wrl#ArtDeco28\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco28\"")))
    .addChild((new autoclass.ExternProtoDeclare()).setName("ArtDeco29").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials").setUrl(new autoclass.MFString("\"ArtDecoPrototypes.x3d#ArtDeco29\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco29\" \"ArtDecoPrototypes.wrl#ArtDeco29\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco29\"")))
    .addChild((new autoclass.ExternProtoDeclare()).setName("ArtDeco30").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials").setUrl(new autoclass.MFString("\"ArtDecoPrototypes.x3d#ArtDeco30\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco30\" \"ArtDecoPrototypes.wrl#ArtDeco30\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco30\"")))
    .addChild((new autoclass.ExternProtoDeclare()).setName("ArtDeco31").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials").setUrl(new autoclass.MFString("\"ArtDecoPrototypes.x3d#ArtDeco31\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco31\" \"ArtDecoPrototypes.wrl#ArtDeco31\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco31\"")))
    .addChild((new autoclass.ExternProtoDeclare()).setName("ArtDeco32").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials").setUrl(new autoclass.MFString("\"ArtDecoPrototypes.x3d#ArtDeco32\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco32\" \"ArtDecoPrototypes.wrl#ArtDeco32\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco32\"")))
    .addChild((new autoclass.ExternProtoDeclare()).setName("ArtDeco33").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials").setUrl(new autoclass.MFString("\"ArtDecoPrototypes.x3d#ArtDeco33\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco33\" \"ArtDecoPrototypes.wrl#ArtDeco33\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco33\"")))
    .addChild((new autoclass.ExternProtoDeclare()).setName("ArtDeco34").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials").setUrl(new autoclass.MFString("\"ArtDecoPrototypes.x3d#ArtDeco34\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco34\" \"ArtDecoPrototypes.wrl#ArtDeco34\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco34\"")))
    .addChild((new autoclass.Group())
      .addChild((new autoclass.NavigationInfo()).setHeadlight(false))
      .addChild((new autoclass.Viewpoint("Front")).setDescription("Front view").setPosition(0.0,0.0,12.0))
      .addChild((new autoclass.Viewpoint("PersRight")).setDescription("Low Right").setOrientation(0.74291,0.30772,0.59447,1.2171).setPosition(6.9282,-6.9282,6.9282))
      .addChild((new autoclass.Viewpoint("PersLeft")).setDescription("Low Left").setOrientation(0.74291,-0.30772,-0.59447,1.2171).setPosition(-6.9282,-6.9282,6.9282))
      .addChild((new autoclass.Viewpoint("Back")).setDescription("Back view").setOrientation(0.0,1.0,0.0,3.1416).setPosition(0.0,0.0,-12.0))
      .addChild((new autoclass.Transform("Close_travel"))
        .addChild((new autoclass.PositionInterpolator("Close_Mover")).setKey(java.newArray("float", [0.0,0.25,0.5,0.75,1.0])).setKeyValue(new autoclass.MFVec3f(java.newArray("float", [0.0,2.5,0.0,0.0,0.0,0.0,0.0,-2.5,0.0,0.0,0.0,0.0,0.0,2.5,0.0]))))
        .addChild((new autoclass.TimeSensor("Close_Time")).setCycleInterval(12.0).setLoop(true))
        .addChild((new autoclass.Viewpoint("Close")).setDescription("Close Front").setPosition(0.0,0.0,6.0)))
      .addChild((new autoclass.DirectionalLight()).setDirection(1.0,-1.0,-1.0))
      .addChild((new autoclass.DirectionalLight()).setDirection(0.0,1.0,-0.5).setIntensity(0.5))
      .addChild((new autoclass.Anchor()).setDescription("Back to front view").setUrl(new autoclass.MFString("\"#Front\""))
        .addChild((new autoclass.Transform()).setTranslation(0.0,0.0,-0.5)
          .addChild((new autoclass.Inline()).setUrl(new autoclass.MFString("\"../data/gridBack.json\" \"../data/gridBack.x3d\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/gridBack.x3d\" \"gridBack.wrl\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/gridBack.wrl\"")))))
      .addChild((new autoclass.Viewpoint("View00")).setDescription("ArtDeco00").setPosition(-3.75,3.75,3.0))
      .addChild((new autoclass.Transform()).setTranslation(-3.75,3.75,0.0)
        .addChild((new autoclass.Anchor()).setDescription("ArtDeco00 view").setUrl(new autoclass.MFString("\"#View00\""))
          .addChild((new autoclass.Shape())
            .setAppearance((new autoclass.Appearance())
              .setMaterial((new autoclass.ProtoInstance())))
            .setGeometry((new autoclass.Sphere("Ball")).setRadius(0.5))))
        .addChild((new autoclass.Transform()).setTranslation(0.0,0.3,0.5)
          .addChild((new autoclass.Anchor()).setDescription("ArtDeco00").setParameter(new autoclass.MFString("\"target=_source\"")).setUrl(new autoclass.MFString("\"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco00\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco00\""))
            .addChild((new autoclass.Shape())
              .setAppearance((new autoclass.Appearance())
                .setMaterial((new autoclass.Material("TextMat")).setDiffuseColor(1.0,1.0,1.0)))
              .setGeometry((new autoclass.Text()).setString(new autoclass.MFString("\"ArtDeco00\""))
                .setFontStyle((new autoclass.FontStyle("Style")).setFamily(new autoclass.MFString("\"SANS\"")).setJustify(new autoclass.MFString("\"MIDDLE\" \"MIDDLE\"")).setSize(0.3).setStyle("BOLD")))))))
      .addChild((new autoclass.Viewpoint("View01")).setDescription("ArtDeco01").setPosition(-2.25,3.75,3.0))
      .addChild((new autoclass.Transform()).setTranslation(-2.25,3.75,0.0)
        .addChild((new autoclass.Anchor()).setDescription("ArtDeco01 view").setUrl(new autoclass.MFString("\"#View01\""))
          .addChild((new autoclass.Shape())
            .setAppearance((new autoclass.Appearance())
              .setMaterial((new autoclass.ProtoInstance())))
            .setGeometry((new autoclass.Sphere()).setUSE("Ball"))))
        .addChild((new autoclass.Transform()).setTranslation(0.0,0.3,0.5)
          .addChild((new autoclass.Anchor()).setDescription("ArtDeco01").setParameter(new autoclass.MFString("\"target=_source\"")).setUrl(new autoclass.MFString("\"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco01\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco01\""))
            .addChild((new autoclass.Shape())
              .setAppearance((new autoclass.Appearance())
                .setMaterial((new autoclass.Material()).setUSE("TextMat")))
              .setGeometry((new autoclass.Text()).setString(new autoclass.MFString("\"ArtDeco01\""))
                .setFontStyle((new autoclass.FontStyle()).setUSE("Style")))))))
      .addChild((new autoclass.Viewpoint("View02")).setDescription("ArtDeco02").setPosition(-0.75,3.75,3.0))
      .addChild((new autoclass.Transform()).setTranslation(-0.75,3.75,0.0)
        .addChild((new autoclass.Anchor()).setDescription("ArtDeco02 view").setUrl(new autoclass.MFString("\"#View02\""))
          .addChild((new autoclass.Shape())
            .setAppearance((new autoclass.Appearance())
              .setMaterial((new autoclass.ProtoInstance())))
            .setGeometry((new autoclass.Sphere()).setUSE("Ball"))))
        .addChild((new autoclass.Transform()).setTranslation(0.0,0.3,0.5)
          .addChild((new autoclass.Anchor()).setDescription("ArtDeco02").setParameter(new autoclass.MFString("\"target=_source\"")).setUrl(new autoclass.MFString("\"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco02\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco02\""))
            .addChild((new autoclass.Shape())
              .setAppearance((new autoclass.Appearance())
                .setMaterial((new autoclass.Material()).setUSE("TextMat")))
              .setGeometry((new autoclass.Text()).setString(new autoclass.MFString("\"ArtDeco02\""))
                .setFontStyle((new autoclass.FontStyle()).setUSE("Style")))))))
      .addChild((new autoclass.Viewpoint("View03")).setDescription("ArtDeco03").setPosition(0.75,3.75,3.0))
      .addChild((new autoclass.Transform()).setTranslation(0.75,3.75,0.0)
        .addChild((new autoclass.Anchor()).setDescription("ArtDeco03 view").setUrl(new autoclass.MFString("\"#View03\""))
          .addChild((new autoclass.Shape())
            .setAppearance((new autoclass.Appearance())
              .setMaterial((new autoclass.ProtoInstance())))
            .setGeometry((new autoclass.Sphere()).setUSE("Ball"))))
        .addChild((new autoclass.Transform()).setTranslation(0.0,0.3,0.5)
          .addChild((new autoclass.Anchor()).setDescription("ArtDeco03").setParameter(new autoclass.MFString("\"target=_source\"")).setUrl(new autoclass.MFString("\"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco03\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco03\""))
            .addChild((new autoclass.Shape())
              .setAppearance((new autoclass.Appearance())
                .setMaterial((new autoclass.Material()).setUSE("TextMat")))
              .setGeometry((new autoclass.Text()).setString(new autoclass.MFString("\"ArtDeco03\""))
                .setFontStyle((new autoclass.FontStyle()).setUSE("Style")))))))
      .addChild((new autoclass.Viewpoint("View04")).setDescription("ArtDeco04").setPosition(2.25,3.75,3.0))
      .addChild((new autoclass.Transform()).setTranslation(2.25,3.75,0.0)
        .addChild((new autoclass.Anchor()).setDescription("ArtDeco04 view").setUrl(new autoclass.MFString("\"#View04\""))
          .addChild((new autoclass.Shape())
            .setAppearance((new autoclass.Appearance())
              .setMaterial((new autoclass.ProtoInstance())))
            .setGeometry((new autoclass.Sphere()).setUSE("Ball"))))
        .addChild((new autoclass.Transform()).setTranslation(0.0,0.3,0.5)
          .addChild((new autoclass.Anchor()).setDescription("ArtDeco04").setParameter(new autoclass.MFString("\"target=_source\"")).setUrl(new autoclass.MFString("\"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco04\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco04\""))
            .addChild((new autoclass.Shape())
              .setAppearance((new autoclass.Appearance())
                .setMaterial((new autoclass.Material()).setUSE("TextMat")))
              .setGeometry((new autoclass.Text()).setString(new autoclass.MFString("\"ArtDeco04\""))
                .setFontStyle((new autoclass.FontStyle()).setUSE("Style")))))))
      .addChild((new autoclass.Viewpoint("View05")).setDescription("ArtDeco05").setPosition(3.75,3.75,3.0))
      .addChild((new autoclass.Transform()).setTranslation(3.75,3.75,0.0)
        .addChild((new autoclass.Anchor()).setDescription("ArtDeco05 view").setUrl(new autoclass.MFString("\"#View05\""))
          .addChild((new autoclass.Shape())
            .setAppearance((new autoclass.Appearance())
              .setMaterial((new autoclass.ProtoInstance())))
            .setGeometry((new autoclass.Sphere()).setUSE("Ball"))))
        .addChild((new autoclass.Transform()).setTranslation(0.0,0.3,0.5)
          .addChild((new autoclass.Anchor()).setDescription("ArtDeco05").setParameter(new autoclass.MFString("\"target=_source\"")).setUrl(new autoclass.MFString("\"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco05\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco05\""))
            .addChild((new autoclass.Shape())
              .setAppearance((new autoclass.Appearance())
                .setMaterial((new autoclass.Material()).setUSE("TextMat")))
              .setGeometry((new autoclass.Text()).setString(new autoclass.MFString("\"ArtDeco05\""))
                .setFontStyle((new autoclass.FontStyle()).setUSE("Style")))))))
      .addChild((new autoclass.Viewpoint("View06")).setDescription("ArtDeco06").setPosition(-3.75,2.25,3.0))
      .addChild((new autoclass.Transform()).setTranslation(-3.75,2.25,0.0)
        .addChild((new autoclass.Anchor()).setDescription("ArtDeco06 view").setUrl(new autoclass.MFString("\"#View06\""))
          .addChild((new autoclass.Shape())
            .setAppearance((new autoclass.Appearance())
              .setMaterial((new autoclass.ProtoInstance())))
            .setGeometry((new autoclass.Sphere()).setUSE("Ball"))))
        .addChild((new autoclass.Transform()).setTranslation(0.0,0.3,0.5)
          .addChild((new autoclass.Anchor()).setDescription("ArtDeco06").setParameter(new autoclass.MFString("\"target=_source\"")).setUrl(new autoclass.MFString("\"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco06\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco06\""))
            .addChild((new autoclass.Shape())
              .setAppearance((new autoclass.Appearance())
                .setMaterial((new autoclass.Material()).setUSE("TextMat")))
              .setGeometry((new autoclass.Text()).setString(new autoclass.MFString("\"ArtDeco06\""))
                .setFontStyle((new autoclass.FontStyle()).setUSE("Style")))))))
      .addChild((new autoclass.Viewpoint("View07")).setDescription("ArtDeco07").setPosition(-2.25,2.25,3.0))
      .addChild((new autoclass.Transform()).setTranslation(-2.25,2.25,0.0)
        .addChild((new autoclass.Anchor()).setDescription("ArtDeco07 view").setUrl(new autoclass.MFString("\"#View07\""))
          .addChild((new autoclass.Shape())
            .setAppearance((new autoclass.Appearance())
              .setMaterial((new autoclass.ProtoInstance())))
            .setGeometry((new autoclass.Sphere()).setUSE("Ball"))))
        .addChild((new autoclass.Transform()).setTranslation(0.0,0.3,0.5)
          .addChild((new autoclass.Anchor()).setDescription("ArtDeco07").setParameter(new autoclass.MFString("\"target=_source\"")).setUrl(new autoclass.MFString("\"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco07\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco07\""))
            .addChild((new autoclass.Shape())
              .setAppearance((new autoclass.Appearance())
                .setMaterial((new autoclass.Material()).setUSE("TextMat")))
              .setGeometry((new autoclass.Text()).setString(new autoclass.MFString("\"ArtDeco07\""))
                .setFontStyle((new autoclass.FontStyle()).setUSE("Style")))))))
      .addChild((new autoclass.Viewpoint("View08")).setDescription("ArtDeco08").setPosition(-0.75,2.25,3.0))
      .addChild((new autoclass.Transform()).setTranslation(-0.75,2.25,0.0)
        .addChild((new autoclass.Anchor()).setDescription("ArtDeco08 view").setUrl(new autoclass.MFString("\"#View08\""))
          .addChild((new autoclass.Shape())
            .setAppearance((new autoclass.Appearance())
              .setMaterial((new autoclass.ProtoInstance())))
            .setGeometry((new autoclass.Sphere()).setUSE("Ball"))))
        .addChild((new autoclass.Transform()).setTranslation(0.0,0.3,0.5)
          .addChild((new autoclass.Anchor()).setDescription("ArtDeco08").setParameter(new autoclass.MFString("\"target=_source\"")).setUrl(new autoclass.MFString("\"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco08\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco08\""))
            .addChild((new autoclass.Shape())
              .setAppearance((new autoclass.Appearance())
                .setMaterial((new autoclass.Material()).setUSE("TextMat")))
              .setGeometry((new autoclass.Text()).setString(new autoclass.MFString("\"ArtDeco08\""))
                .setFontStyle((new autoclass.FontStyle()).setUSE("Style")))))))
      .addChild((new autoclass.Viewpoint("View09")).setDescription("ArtDeco09").setPosition(0.75,2.25,3.0))
      .addChild((new autoclass.Transform()).setTranslation(0.75,2.25,0.0)
        .addChild((new autoclass.Anchor()).setDescription("ArtDeco09 view").setUrl(new autoclass.MFString("\"#View09\""))
          .addChild((new autoclass.Shape())
            .setAppearance((new autoclass.Appearance())
              .setMaterial((new autoclass.ProtoInstance())))
            .setGeometry((new autoclass.Sphere()).setUSE("Ball"))))
        .addChild((new autoclass.Transform()).setTranslation(0.0,0.3,0.5)
          .addChild((new autoclass.Anchor()).setDescription("ArtDeco09").setParameter(new autoclass.MFString("\"target=_source\"")).setUrl(new autoclass.MFString("\"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco09\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco09\""))
            .addChild((new autoclass.Shape())
              .setAppearance((new autoclass.Appearance())
                .setMaterial((new autoclass.Material()).setUSE("TextMat")))
              .setGeometry((new autoclass.Text()).setString(new autoclass.MFString("\"ArtDeco09\""))
                .setFontStyle((new autoclass.FontStyle()).setUSE("Style")))))))
      .addChild((new autoclass.Viewpoint("View10")).setDescription("ArtDeco10").setPosition(2.25,2.25,3.0))
      .addChild((new autoclass.Transform()).setTranslation(2.25,2.25,0.0)
        .addChild((new autoclass.Anchor()).setDescription("ArtDeco10 view").setUrl(new autoclass.MFString("\"#View10\""))
          .addChild((new autoclass.Shape())
            .setAppearance((new autoclass.Appearance())
              .setMaterial((new autoclass.ProtoInstance())))
            .setGeometry((new autoclass.Sphere()).setUSE("Ball"))))
        .addChild((new autoclass.Transform()).setTranslation(0.0,0.3,0.5)
          .addChild((new autoclass.Anchor()).setDescription("ArtDeco10").setParameter(new autoclass.MFString("\"target=_source\"")).setUrl(new autoclass.MFString("\"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco10\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco10\""))
            .addChild((new autoclass.Shape())
              .setAppearance((new autoclass.Appearance())
                .setMaterial((new autoclass.Material()).setUSE("TextMat")))
              .setGeometry((new autoclass.Text()).setString(new autoclass.MFString("\"ArtDeco10\""))
                .setFontStyle((new autoclass.FontStyle()).setUSE("Style")))))))
      .addChild((new autoclass.Viewpoint("View11")).setDescription("ArtDeco11").setPosition(3.75,2.25,3.0))
      .addChild((new autoclass.Transform()).setTranslation(3.75,2.25,0.0)
        .addChild((new autoclass.Anchor()).setDescription("ArtDeco11 view").setUrl(new autoclass.MFString("\"#View11\""))
          .addChild((new autoclass.Shape())
            .setAppearance((new autoclass.Appearance())
              .setMaterial((new autoclass.ProtoInstance())))
            .setGeometry((new autoclass.Sphere()).setUSE("Ball"))))
        .addChild((new autoclass.Transform()).setTranslation(0.0,0.3,0.5)
          .addChild((new autoclass.Anchor()).setDescription("ArtDeco11").setParameter(new autoclass.MFString("\"target=_source\"")).setUrl(new autoclass.MFString("\"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco11\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco11\""))
            .addChild((new autoclass.Shape())
              .setAppearance((new autoclass.Appearance())
                .setMaterial((new autoclass.Material()).setUSE("TextMat")))
              .setGeometry((new autoclass.Text()).setString(new autoclass.MFString("\"ArtDeco11\""))
                .setFontStyle((new autoclass.FontStyle()).setUSE("Style")))))))
      .addChild((new autoclass.Viewpoint("View12")).setDescription("ArtDeco12").setPosition(-3.75,0.75,3.0))
      .addChild((new autoclass.Transform()).setTranslation(-3.75,0.75,0.0)
        .addChild((new autoclass.Anchor()).setDescription("ArtDeco12 view").setUrl(new autoclass.MFString("\"#View12\""))
          .addChild((new autoclass.Shape())
            .setAppearance((new autoclass.Appearance())
              .setMaterial((new autoclass.ProtoInstance())))
            .setGeometry((new autoclass.Sphere()).setUSE("Ball"))))
        .addChild((new autoclass.Transform()).setTranslation(0.0,0.3,0.5)
          .addChild((new autoclass.Anchor()).setDescription("ArtDeco12").setParameter(new autoclass.MFString("\"target=_source\"")).setUrl(new autoclass.MFString("\"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco12\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco12\""))
            .addChild((new autoclass.Shape())
              .setAppearance((new autoclass.Appearance())
                .setMaterial((new autoclass.Material()).setUSE("TextMat")))
              .setGeometry((new autoclass.Text()).setString(new autoclass.MFString("\"ArtDeco12\""))
                .setFontStyle((new autoclass.FontStyle()).setUSE("Style")))))))
      .addChild((new autoclass.Viewpoint("View13")).setDescription("ArtDeco13").setPosition(-2.25,0.75,3.0))
      .addChild((new autoclass.Transform()).setTranslation(-2.25,0.75,0.0)
        .addChild((new autoclass.Anchor()).setDescription("ArtDeco13 view").setUrl(new autoclass.MFString("\"#View13\""))
          .addChild((new autoclass.Shape())
            .setAppearance((new autoclass.Appearance())
              .setMaterial((new autoclass.ProtoInstance())))
            .setGeometry((new autoclass.Sphere()).setUSE("Ball"))))
        .addChild((new autoclass.Transform()).setTranslation(0.0,0.3,0.5)
          .addChild((new autoclass.Anchor()).setDescription("ArtDeco13").setParameter(new autoclass.MFString("\"target=_source\"")).setUrl(new autoclass.MFString("\"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco3\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco13\""))
            .addChild((new autoclass.Shape())
              .setAppearance((new autoclass.Appearance())
                .setMaterial((new autoclass.Material()).setUSE("TextMat")))
              .setGeometry((new autoclass.Text()).setString(new autoclass.MFString("\"ArtDeco13\""))
                .setFontStyle((new autoclass.FontStyle()).setUSE("Style")))))))
      .addChild((new autoclass.Viewpoint("View14")).setDescription("ArtDeco14").setPosition(-0.75,0.75,3.0))
      .addChild((new autoclass.Transform()).setTranslation(-0.75,0.75,0.0)
        .addChild((new autoclass.Anchor()).setDescription("ArtDeco14 view").setUrl(new autoclass.MFString("\"#View14\""))
          .addChild((new autoclass.Shape())
            .setAppearance((new autoclass.Appearance())
              .setMaterial((new autoclass.ProtoInstance())))
            .setGeometry((new autoclass.Sphere()).setUSE("Ball"))))
        .addChild((new autoclass.Transform()).setTranslation(0.0,0.3,0.5)
          .addChild((new autoclass.Anchor()).setDescription("ArtDeco14").setParameter(new autoclass.MFString("\"target=_source\"")).setUrl(new autoclass.MFString("\"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco4\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco14\""))
            .addChild((new autoclass.Shape())
              .setAppearance((new autoclass.Appearance())
                .setMaterial((new autoclass.Material()).setUSE("TextMat")))
              .setGeometry((new autoclass.Text()).setString(new autoclass.MFString("\"ArtDeco14\""))
                .setFontStyle((new autoclass.FontStyle()).setUSE("Style")))))))
      .addChild((new autoclass.Viewpoint("View15")).setDescription("ArtDeco15").setPosition(0.75,0.75,3.0))
      .addChild((new autoclass.Transform()).setTranslation(0.75,0.75,0.0)
        .addChild((new autoclass.Anchor()).setDescription("ArtDeco15 view").setUrl(new autoclass.MFString("\"#View15\""))
          .addChild((new autoclass.Shape())
            .setAppearance((new autoclass.Appearance())
              .setMaterial((new autoclass.ProtoInstance())))
            .setGeometry((new autoclass.Sphere()).setUSE("Ball"))))
        .addChild((new autoclass.Transform()).setTranslation(0.0,0.3,0.5)
          .addChild((new autoclass.Anchor()).setDescription("ArtDeco15").setParameter(new autoclass.MFString("\"target=_source\"")).setUrl(new autoclass.MFString("\"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco5\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco15\""))
            .addChild((new autoclass.Shape())
              .setAppearance((new autoclass.Appearance())
                .setMaterial((new autoclass.Material()).setUSE("TextMat")))
              .setGeometry((new autoclass.Text()).setString(new autoclass.MFString("\"ArtDeco15\""))
                .setFontStyle((new autoclass.FontStyle()).setUSE("Style")))))))
      .addChild((new autoclass.Viewpoint("View16")).setDescription("ArtDeco16").setPosition(2.25,0.75,3.0))
      .addChild((new autoclass.Transform()).setTranslation(2.25,0.75,0.0)
        .addChild((new autoclass.Anchor()).setDescription("ArtDeco16 view").setUrl(new autoclass.MFString("\"#View16\""))
          .addChild((new autoclass.Shape())
            .setAppearance((new autoclass.Appearance())
              .setMaterial((new autoclass.ProtoInstance())))
            .setGeometry((new autoclass.Sphere()).setUSE("Ball"))))
        .addChild((new autoclass.Transform()).setTranslation(0.0,0.3,0.5)
          .addChild((new autoclass.Anchor()).setDescription("ArtDeco16").setParameter(new autoclass.MFString("\"target=_source\"")).setUrl(new autoclass.MFString("\"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco16\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco16\""))
            .addChild((new autoclass.Shape())
              .setAppearance((new autoclass.Appearance())
                .setMaterial((new autoclass.Material()).setUSE("TextMat")))
              .setGeometry((new autoclass.Text()).setString(new autoclass.MFString("\"ArtDeco16\""))
                .setFontStyle((new autoclass.FontStyle()).setUSE("Style")))))))
      .addChild((new autoclass.Viewpoint("View17")).setDescription("ArtDeco17").setPosition(3.75,0.75,3.0))
      .addChild((new autoclass.Transform()).setTranslation(3.75,0.75,0.0)
        .addChild((new autoclass.Anchor()).setDescription("ArtDeco17 view").setUrl(new autoclass.MFString("\"#View17\""))
          .addChild((new autoclass.Shape())
            .setAppearance((new autoclass.Appearance())
              .setMaterial((new autoclass.ProtoInstance())))
            .setGeometry((new autoclass.Sphere()).setUSE("Ball"))))
        .addChild((new autoclass.Transform()).setTranslation(0.0,0.3,0.5)
          .addChild((new autoclass.Anchor()).setDescription("ArtDeco17").setParameter(new autoclass.MFString("\"target=_source\"")).setUrl(new autoclass.MFString("\"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco7\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco17\""))
            .addChild((new autoclass.Shape())
              .setAppearance((new autoclass.Appearance())
                .setMaterial((new autoclass.Material()).setUSE("TextMat")))
              .setGeometry((new autoclass.Text()).setString(new autoclass.MFString("\"ArtDeco17\""))
                .setFontStyle((new autoclass.FontStyle()).setUSE("Style")))))))
      .addChild((new autoclass.Viewpoint("View18")).setDescription("ArtDeco18").setPosition(-3.75,-0.75,3.0))
      .addChild((new autoclass.Transform()).setTranslation(-3.75,-0.75,0.0)
        .addChild((new autoclass.Anchor()).setDescription("ArtDeco18 view").setUrl(new autoclass.MFString("\"#View18\""))
          .addChild((new autoclass.Shape())
            .setAppearance((new autoclass.Appearance())
              .setMaterial((new autoclass.ProtoInstance())))
            .setGeometry((new autoclass.Sphere()).setUSE("Ball"))))
        .addChild((new autoclass.Transform()).setTranslation(0.0,0.3,0.5)
          .addChild((new autoclass.Anchor()).setDescription("ArtDeco18").setParameter(new autoclass.MFString("\"target=_source\"")).setUrl(new autoclass.MFString("\"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco18\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco18\""))
            .addChild((new autoclass.Shape())
              .setAppearance((new autoclass.Appearance())
                .setMaterial((new autoclass.Material()).setUSE("TextMat")))
              .setGeometry((new autoclass.Text()).setString(new autoclass.MFString("\"ArtDeco18\""))
                .setFontStyle((new autoclass.FontStyle()).setUSE("Style")))))))
      .addChild((new autoclass.Viewpoint("View19")).setDescription("ArtDeco19").setPosition(-2.25,-0.75,3.0))
      .addChild((new autoclass.Transform()).setTranslation(-2.25,-0.75,0.0)
        .addChild((new autoclass.Anchor()).setDescription("ArtDeco19 view").setUrl(new autoclass.MFString("\"#View19\""))
          .addChild((new autoclass.Shape())
            .setAppearance((new autoclass.Appearance())
              .setMaterial((new autoclass.ProtoInstance())))
            .setGeometry((new autoclass.Sphere()).setUSE("Ball"))))
        .addChild((new autoclass.Transform()).setTranslation(0.0,0.3,0.5)
          .addChild((new autoclass.Anchor()).setDescription("ArtDeco19").setParameter(new autoclass.MFString("\"target=_source\"")).setUrl(new autoclass.MFString("\"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco9\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco19\""))
            .addChild((new autoclass.Shape())
              .setAppearance((new autoclass.Appearance())
                .setMaterial((new autoclass.Material()).setUSE("TextMat")))
              .setGeometry((new autoclass.Text()).setString(new autoclass.MFString("\"ArtDeco19\""))
                .setFontStyle((new autoclass.FontStyle()).setUSE("Style")))))))
      .addChild((new autoclass.Viewpoint("View20")).setDescription("ArtDeco20").setPosition(-0.75,-0.75,3.0))
      .addChild((new autoclass.Transform()).setTranslation(-0.75,-0.75,0.0)
        .addChild((new autoclass.Anchor()).setDescription("ArtDeco20 view").setUrl(new autoclass.MFString("\"#View20\""))
          .addChild((new autoclass.Shape())
            .setAppearance((new autoclass.Appearance())
              .setMaterial((new autoclass.ProtoInstance())))
            .setGeometry((new autoclass.Sphere()).setUSE("Ball"))))
        .addChild((new autoclass.Transform()).setTranslation(0.0,0.3,0.5)
          .addChild((new autoclass.Anchor()).setDescription("ArtDeco20").setParameter(new autoclass.MFString("\"target=_source\"")).setUrl(new autoclass.MFString("\"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco20\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco20\""))
            .addChild((new autoclass.Shape())
              .setAppearance((new autoclass.Appearance())
                .setMaterial((new autoclass.Material()).setUSE("TextMat")))
              .setGeometry((new autoclass.Text()).setString(new autoclass.MFString("\"ArtDeco20\""))
                .setFontStyle((new autoclass.FontStyle()).setUSE("Style")))))))
      .addChild((new autoclass.Viewpoint("View21")).setDescription("ArtDeco21").setPosition(0.75,-0.75,3.0))
      .addChild((new autoclass.Transform()).setTranslation(0.75,-0.75,0.0)
        .addChild((new autoclass.Anchor()).setDescription("ArtDeco21 view").setUrl(new autoclass.MFString("\"#View21\""))
          .addChild((new autoclass.Shape())
            .setAppearance((new autoclass.Appearance())
              .setMaterial((new autoclass.ProtoInstance())))
            .setGeometry((new autoclass.Sphere()).setUSE("Ball"))))
        .addChild((new autoclass.Transform()).setTranslation(0.0,0.3,0.5)
          .addChild((new autoclass.Anchor()).setDescription("ArtDeco21").setParameter(new autoclass.MFString("\"target=_source\"")).setUrl(new autoclass.MFString("\"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco21\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco21\""))
            .addChild((new autoclass.Shape())
              .setAppearance((new autoclass.Appearance())
                .setMaterial((new autoclass.Material()).setUSE("TextMat")))
              .setGeometry((new autoclass.Text()).setString(new autoclass.MFString("\"ArtDeco21\""))
                .setFontStyle((new autoclass.FontStyle()).setUSE("Style")))))))
      .addChild((new autoclass.Viewpoint("View22")).setDescription("ArtDeco22").setPosition(2.25,-0.75,3.0))
      .addChild((new autoclass.Transform()).setTranslation(2.25,-0.75,0.0)
        .addChild((new autoclass.Anchor()).setDescription("ArtDeco22 view").setUrl(new autoclass.MFString("\"#View22\""))
          .addChild((new autoclass.Shape())
            .setAppearance((new autoclass.Appearance())
              .setMaterial((new autoclass.ProtoInstance())))
            .setGeometry((new autoclass.Sphere()).setUSE("Ball"))))
        .addChild((new autoclass.Transform()).setTranslation(0.0,0.3,0.5)
          .addChild((new autoclass.Anchor()).setDescription("ArtDeco22").setParameter(new autoclass.MFString("\"target=_source\"")).setUrl(new autoclass.MFString("\"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco22\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco22\""))
            .addChild((new autoclass.Shape())
              .setAppearance((new autoclass.Appearance())
                .setMaterial((new autoclass.Material()).setUSE("TextMat")))
              .setGeometry((new autoclass.Text()).setString(new autoclass.MFString("\"ArtDeco22\""))
                .setFontStyle((new autoclass.FontStyle()).setUSE("Style")))))))
      .addChild((new autoclass.Viewpoint("View23")).setDescription("ArtDeco23").setPosition(3.75,-0.75,3.0))
      .addChild((new autoclass.Transform()).setTranslation(3.75,-0.75,0.0)
        .addChild((new autoclass.Anchor()).setDescription("ArtDeco23 view").setUrl(new autoclass.MFString("\"#View23\""))
          .addChild((new autoclass.Shape())
            .setAppearance((new autoclass.Appearance())
              .setMaterial((new autoclass.ProtoInstance())))
            .setGeometry((new autoclass.Sphere()).setUSE("Ball"))))
        .addChild((new autoclass.Transform()).setTranslation(0.0,0.3,0.5)
          .addChild((new autoclass.Anchor()).setDescription("ArtDeco23").setParameter(new autoclass.MFString("\"target=_source\"")).setUrl(new autoclass.MFString("\"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco23\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco23\""))
            .addChild((new autoclass.Shape())
              .setAppearance((new autoclass.Appearance())
                .setMaterial((new autoclass.Material()).setUSE("TextMat")))
              .setGeometry((new autoclass.Text()).setString(new autoclass.MFString("\"ArtDeco23\""))
                .setFontStyle((new autoclass.FontStyle()).setUSE("Style")))))))
      .addChild((new autoclass.Viewpoint("View24")).setDescription("ArtDeco24").setPosition(-3.75,-2.25,3.0))
      .addChild((new autoclass.Transform()).setTranslation(-3.75,-2.25,0.0)
        .addChild((new autoclass.Anchor()).setDescription("ArtDeco24 view").setUrl(new autoclass.MFString("\"#View24\""))
          .addChild((new autoclass.Shape())
            .setAppearance((new autoclass.Appearance())
              .setMaterial((new autoclass.ProtoInstance())))
            .setGeometry((new autoclass.Sphere()).setUSE("Ball"))))
        .addChild((new autoclass.Transform()).setTranslation(0.0,0.3,0.5)
          .addChild((new autoclass.Anchor()).setDescription("ArtDeco24").setParameter(new autoclass.MFString("\"target=_source\"")).setUrl(new autoclass.MFString("\"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco24\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco24\""))
            .addChild((new autoclass.Shape())
              .setAppearance((new autoclass.Appearance())
                .setMaterial((new autoclass.Material()).setUSE("TextMat")))
              .setGeometry((new autoclass.Text()).setString(new autoclass.MFString("\"ArtDeco24\""))
                .setFontStyle((new autoclass.FontStyle()).setUSE("Style")))))))
      .addChild((new autoclass.Viewpoint("View25")).setDescription("ArtDeco25").setPosition(-2.25,-2.25,3.0))
      .addChild((new autoclass.Transform()).setTranslation(-2.25,-2.25,0.0)
        .addChild((new autoclass.Anchor()).setDescription("ArtDeco25 view").setUrl(new autoclass.MFString("\"#View25\""))
          .addChild((new autoclass.Shape())
            .setAppearance((new autoclass.Appearance())
              .setMaterial((new autoclass.ProtoInstance())))
            .setGeometry((new autoclass.Sphere()).setUSE("Ball"))))
        .addChild((new autoclass.Transform()).setTranslation(0.0,0.3,0.5)
          .addChild((new autoclass.Anchor()).setDescription("ArtDeco25").setParameter(new autoclass.MFString("\"target=_source\"")).setUrl(new autoclass.MFString("\"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco25\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco25\""))
            .addChild((new autoclass.Shape())
              .setAppearance((new autoclass.Appearance())
                .setMaterial((new autoclass.Material()).setUSE("TextMat")))
              .setGeometry((new autoclass.Text()).setString(new autoclass.MFString("\"ArtDeco25\""))
                .setFontStyle((new autoclass.FontStyle()).setUSE("Style")))))))
      .addChild((new autoclass.Viewpoint("View26")).setDescription("ArtDeco26").setPosition(-0.75,-2.25,3.0))
      .addChild((new autoclass.Transform()).setTranslation(-0.75,-2.25,0.0)
        .addChild((new autoclass.Anchor()).setDescription("ArtDeco26 view").setUrl(new autoclass.MFString("\"#View26\""))
          .addChild((new autoclass.Shape())
            .setAppearance((new autoclass.Appearance())
              .setMaterial((new autoclass.ProtoInstance())))
            .setGeometry((new autoclass.Sphere()).setUSE("Ball"))))
        .addChild((new autoclass.Transform()).setTranslation(0.0,0.3,0.5)
          .addChild((new autoclass.Anchor()).setDescription("ArtDeco26").setParameter(new autoclass.MFString("\"target=_source\"")).setUrl(new autoclass.MFString("\"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco26\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco26\""))
            .addChild((new autoclass.Shape())
              .setAppearance((new autoclass.Appearance())
                .setMaterial((new autoclass.Material()).setUSE("TextMat")))
              .setGeometry((new autoclass.Text()).setString(new autoclass.MFString("\"ArtDeco26\""))
                .setFontStyle((new autoclass.FontStyle()).setUSE("Style")))))))
      .addChild((new autoclass.Viewpoint("View27")).setDescription("ArtDeco27").setPosition(0.75,-2.25,3.0))
      .addChild((new autoclass.Transform()).setTranslation(0.75,-2.25,0.0)
        .addChild((new autoclass.Anchor()).setDescription("ArtDeco27 view").setUrl(new autoclass.MFString("\"#View27\""))
          .addChild((new autoclass.Shape())
            .setAppearance((new autoclass.Appearance())
              .setMaterial((new autoclass.ProtoInstance())))
            .setGeometry((new autoclass.Sphere()).setUSE("Ball"))))
        .addChild((new autoclass.Transform()).setTranslation(0.0,0.3,0.5)
          .addChild((new autoclass.Anchor()).setDescription("ArtDeco27").setParameter(new autoclass.MFString("\"target=_source\"")).setUrl(new autoclass.MFString("\"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco27\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco27\""))
            .addChild((new autoclass.Shape())
              .setAppearance((new autoclass.Appearance())
                .setMaterial((new autoclass.Material()).setUSE("TextMat")))
              .setGeometry((new autoclass.Text()).setString(new autoclass.MFString("\"ArtDeco27\""))
                .setFontStyle((new autoclass.FontStyle()).setUSE("Style")))))))
      .addChild((new autoclass.Viewpoint("View28")).setDescription("ArtDeco28").setPosition(2.25,-2.25,3.0))
      .addChild((new autoclass.Transform()).setTranslation(2.25,-2.25,0.0)
        .addChild((new autoclass.Anchor()).setDescription("ArtDeco28 view").setUrl(new autoclass.MFString("\"#View28\""))
          .addChild((new autoclass.Shape())
            .setAppearance((new autoclass.Appearance())
              .setMaterial((new autoclass.ProtoInstance())))
            .setGeometry((new autoclass.Sphere()).setUSE("Ball"))))
        .addChild((new autoclass.Transform()).setTranslation(0.0,0.3,0.5)
          .addChild((new autoclass.Anchor()).setDescription("ArtDeco28").setParameter(new autoclass.MFString("\"target=_source\"")).setUrl(new autoclass.MFString("\"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco28\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco28\""))
            .addChild((new autoclass.Shape())
              .setAppearance((new autoclass.Appearance())
                .setMaterial((new autoclass.Material()).setUSE("TextMat")))
              .setGeometry((new autoclass.Text()).setString(new autoclass.MFString("\"ArtDeco28\""))
                .setFontStyle((new autoclass.FontStyle()).setUSE("Style")))))))
      .addChild((new autoclass.Viewpoint("View29")).setDescription("ArtDeco29").setPosition(3.75,-2.25,3.0))
      .addChild((new autoclass.Transform()).setTranslation(3.75,-2.25,0.0)
        .addChild((new autoclass.Anchor()).setDescription("ArtDeco29 view").setUrl(new autoclass.MFString("\"#View29\""))
          .addChild((new autoclass.Shape())
            .setAppearance((new autoclass.Appearance())
              .setMaterial((new autoclass.ProtoInstance())))
            .setGeometry((new autoclass.Sphere()).setUSE("Ball"))))
        .addChild((new autoclass.Transform()).setTranslation(0.0,0.3,0.5)
          .addChild((new autoclass.Anchor()).setDescription("ArtDeco29").setParameter(new autoclass.MFString("\"target=_source\"")).setUrl(new autoclass.MFString("\"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco29\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco29\""))
            .addChild((new autoclass.Shape())
              .setAppearance((new autoclass.Appearance())
                .setMaterial((new autoclass.Material()).setUSE("TextMat")))
              .setGeometry((new autoclass.Text()).setString(new autoclass.MFString("\"ArtDeco29\""))
                .setFontStyle((new autoclass.FontStyle()).setUSE("Style")))))))
      .addChild((new autoclass.Viewpoint("View30")).setDescription("ArtDeco30").setPosition(-3.75,-3.75,3.0))
      .addChild((new autoclass.Transform()).setTranslation(-3.75,-3.75,0.0)
        .addChild((new autoclass.Anchor()).setDescription("ArtDeco30 view").setUrl(new autoclass.MFString("\"#View30\""))
          .addChild((new autoclass.Shape())
            .setAppearance((new autoclass.Appearance())
              .setMaterial((new autoclass.ProtoInstance())))
            .setGeometry((new autoclass.Sphere()).setUSE("Ball"))))
        .addChild((new autoclass.Transform()).setTranslation(0.0,0.3,0.5)
          .addChild((new autoclass.Anchor()).setDescription("ArtDeco30").setParameter(new autoclass.MFString("\"target=_source\"")).setUrl(new autoclass.MFString("\"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco30\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco30\""))
            .addChild((new autoclass.Shape())
              .setAppearance((new autoclass.Appearance())
                .setMaterial((new autoclass.Material()).setUSE("TextMat")))
              .setGeometry((new autoclass.Text()).setString(new autoclass.MFString("\"ArtDeco30\""))
                .setFontStyle((new autoclass.FontStyle()).setUSE("Style")))))))
      .addChild((new autoclass.Viewpoint("View31")).setDescription("ArtDeco31").setPosition(-2.25,-3.75,3.0))
      .addChild((new autoclass.Transform()).setTranslation(-2.25,-3.75,0.0)
        .addChild((new autoclass.Anchor()).setDescription("ArtDeco31 view").setUrl(new autoclass.MFString("\"#View31\""))
          .addChild((new autoclass.Shape())
            .setAppearance((new autoclass.Appearance())
              .setMaterial((new autoclass.ProtoInstance())))
            .setGeometry((new autoclass.Sphere()).setUSE("Ball"))))
        .addChild((new autoclass.Transform()).setTranslation(0.0,0.3,0.5)
          .addChild((new autoclass.Anchor()).setDescription("ArtDeco31").setParameter(new autoclass.MFString("\"target=_source\"")).setUrl(new autoclass.MFString("\"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco31\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco31\""))
            .addChild((new autoclass.Shape())
              .setAppearance((new autoclass.Appearance())
                .setMaterial((new autoclass.Material()).setUSE("TextMat")))
              .setGeometry((new autoclass.Text()).setString(new autoclass.MFString("\"ArtDeco31\""))
                .setFontStyle((new autoclass.FontStyle()).setUSE("Style")))))))
      .addChild((new autoclass.Viewpoint("View32")).setDescription("ArtDeco32").setPosition(-0.75,-3.75,3.0))
      .addChild((new autoclass.Transform()).setTranslation(-0.75,-3.75,0.0)
        .addChild((new autoclass.Anchor()).setDescription("ArtDeco32 view").setUrl(new autoclass.MFString("\"#View32\""))
          .addChild((new autoclass.Shape())
            .setAppearance((new autoclass.Appearance())
              .setMaterial((new autoclass.ProtoInstance())))
            .setGeometry((new autoclass.Sphere()).setUSE("Ball"))))
        .addChild((new autoclass.Transform()).setTranslation(0.0,0.3,0.5)
          .addChild((new autoclass.Anchor()).setDescription("ArtDeco32").setParameter(new autoclass.MFString("\"target=_source\"")).setUrl(new autoclass.MFString("\"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco32\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco32\""))
            .addChild((new autoclass.Shape())
              .setAppearance((new autoclass.Appearance())
                .setMaterial((new autoclass.Material()).setUSE("TextMat")))
              .setGeometry((new autoclass.Text()).setString(new autoclass.MFString("\"ArtDeco32\""))
                .setFontStyle((new autoclass.FontStyle()).setUSE("Style")))))))
      .addChild((new autoclass.Viewpoint("View33")).setDescription("ArtDeco33").setPosition(0.75,-3.75,3.0))
      .addChild((new autoclass.Transform()).setTranslation(0.75,-3.75,0.0)
        .addChild((new autoclass.Anchor()).setDescription("ArtDeco33 view").setUrl(new autoclass.MFString("\"#View33\""))
          .addChild((new autoclass.Shape())
            .setAppearance((new autoclass.Appearance())
              .setMaterial((new autoclass.ProtoInstance())))
            .setGeometry((new autoclass.Sphere()).setUSE("Ball"))))
        .addChild((new autoclass.Transform()).setTranslation(0.0,0.3,0.5)
          .addChild((new autoclass.Anchor()).setDescription("ArtDeco33").setParameter(new autoclass.MFString("\"target=_source\"")).setUrl(new autoclass.MFString("\"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco33\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco33\""))
            .addChild((new autoclass.Shape())
              .setAppearance((new autoclass.Appearance())
                .setMaterial((new autoclass.Material()).setUSE("TextMat")))
              .setGeometry((new autoclass.Text()).setString(new autoclass.MFString("\"ArtDeco33\""))
                .setFontStyle((new autoclass.FontStyle()).setUSE("Style")))))))
      .addChild((new autoclass.Viewpoint("View34")).setDescription("ArtDeco34").setPosition(2.25,-3.75,3.0))
      .addChild((new autoclass.Transform()).setTranslation(2.25,-3.75,0.0)
        .addChild((new autoclass.Anchor()).setDescription("ArtDeco34 view").setUrl(new autoclass.MFString("\"#View34\""))
          .addChild((new autoclass.Shape())
            .setAppearance((new autoclass.Appearance())
              .setMaterial((new autoclass.ProtoInstance())))
            .setGeometry((new autoclass.Sphere()).setUSE("Ball"))))
        .addChild((new autoclass.Transform()).setTranslation(0.0,0.3,0.5)
          .addChild((new autoclass.Anchor()).setDescription("ArtDeco34").setParameter(new autoclass.MFString("\"target=_source\"")).setUrl(new autoclass.MFString("\"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco34\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco34\""))
            .addChild((new autoclass.Shape())
              .setAppearance((new autoclass.Appearance())
                .setMaterial((new autoclass.Material()).setUSE("TextMat")))
              .setGeometry((new autoclass.Text()).setString(new autoclass.MFString("\"ArtDeco34\""))
                .setFontStyle((new autoclass.FontStyle()).setUSE("Style"))))))))
    .addChild((new autoclass.ROUTE()).setFromNode("Close_Time").setFromField("fraction_changed").setToNode("Close_Mover").setToField("set_fraction"))
    .addChild((new autoclass.ROUTE()).setFromNode("Close_Mover").setFromField("value_changed").setToNode("Close_travel").setToField("set_translation")));
  },
  // end of initialize() method


  /** Provide a shallow copy of the X3D model.
   * @return ArtDecoExamples model
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
		var testObject = new ArtDecoExamples();
		console.log ("ArtDecoExamples execution self-validation test results: " + testObject.validateSelf());
		process.exit();
	}
}
new ArtDecoExamples().main();