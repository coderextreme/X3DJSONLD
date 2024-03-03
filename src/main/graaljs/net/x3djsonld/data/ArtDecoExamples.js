load('X3Dautoclass.js');

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
		<a href="https://www.web3d.org/x3d/stylesheets/X3dToES5.xslt" target="_blank">X3dToES5.xslt</a>
		stylesheet to create ES5 source code from an <code>.x3d</code> scene.
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
  function doubleToFloat(d) {
    if (Float32Array) {
        return new Float32Array([d])[0];
    }
  }
ArtDecoExamples.prototype = {
  /** Create and initialize the X3D model. */
  initialize : function ()
  {
  this.x3dModel = new X3D().setProfile("Immersive").setVersion("3.0")
  .setHead(new head()
    .addMeta(new meta().setName("title").setContent("ArtDecoExamples.x3d"))
    .addMeta(new meta().setName("description").setContent("Example ExternProtoDeclare/ProtoInstance usage of X3D/VRML materials, originally converted from SGI's Open Inventor material examples."))
    .addMeta(new meta().setName("creator").setContent("David Roussel"))
    .addMeta(new meta().setName("translator").setContent("James Harney, Don Brutzman NPS"))
    .addMeta(new meta().setName("created").setContent("7 April 2002"))
    .addMeta(new meta().setName("modified").setContent("20 October 2019"))
    .addMeta(new meta().setName("reference").setContent("http://vrmlstuff.free.fr/materials"))
    .addMeta(new meta().setName("subject").setContent("Universal Media Material Library"))
    .addMeta(new meta().setName("identifier").setContent("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoExamples.x3d"))
    .addMeta(new meta().setName("generator").setContent("Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html"))
    .addMeta(new meta().setName("license").setContent("../license.html")))
  .setScene(new Scene()
    .addChild(new WorldInfo().setTitle("ArtDecoExamples.x3d"))
    .addChild(new ExternProtoDeclare().setName("ArtDeco00").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials").setUrl(new MFString("\"ArtDecoPrototypes.x3d#ArtDeco00\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco00\" \"ArtDecoPrototypes.wrl#ArtDeco00\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco00\"")))
    .addChild(new ExternProtoDeclare().setName("ArtDeco01").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials").setUrl(new MFString("\"ArtDecoPrototypes.x3d#ArtDeco01\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco01\" \"ArtDecoPrototypes.wrl#ArtDeco01\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco01\"")))
    .addChild(new ExternProtoDeclare().setName("ArtDeco02").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials").setUrl(new MFString("\"ArtDecoPrototypes.x3d#ArtDeco02\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco02\" \"ArtDecoPrototypes.wrl#ArtDeco02\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco02\"")))
    .addChild(new ExternProtoDeclare().setName("ArtDeco03").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials").setUrl(new MFString("\"ArtDecoPrototypes.x3d#ArtDeco03\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco03\" \"ArtDecoPrototypes.wrl#ArtDeco03\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco03\"")))
    .addChild(new ExternProtoDeclare().setName("ArtDeco04").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials").setUrl(new MFString("\"ArtDecoPrototypes.x3d#ArtDeco04\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco04\" \"ArtDecoPrototypes.wrl#ArtDeco04\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco04\"")))
    .addChild(new ExternProtoDeclare().setName("ArtDeco05").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials").setUrl(new MFString("\"ArtDecoPrototypes.x3d#ArtDeco05\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco05\" \"ArtDecoPrototypes.wrl#ArtDeco05\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco05\"")))
    .addChild(new ExternProtoDeclare().setName("ArtDeco06").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials").setUrl(new MFString("\"ArtDecoPrototypes.x3d#ArtDeco06\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco06\" \"ArtDecoPrototypes.wrl#ArtDeco06\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco06\"")))
    .addChild(new ExternProtoDeclare().setName("ArtDeco07").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials").setUrl(new MFString("\"ArtDecoPrototypes.x3d#ArtDeco07\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco07\" \"ArtDecoPrototypes.wrl#ArtDeco07\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco07\"")))
    .addChild(new ExternProtoDeclare().setName("ArtDeco08").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials").setUrl(new MFString("\"ArtDecoPrototypes.x3d#ArtDeco08\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco08\" \"ArtDecoPrototypes.wrl#ArtDeco08\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco08\"")))
    .addChild(new ExternProtoDeclare().setName("ArtDeco09").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials").setUrl(new MFString("\"ArtDecoPrototypes.x3d#ArtDeco09\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco09\" \"ArtDecoPrototypes.wrl#ArtDeco09\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco09\"")))
    .addChild(new ExternProtoDeclare().setName("ArtDeco10").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials").setUrl(new MFString("\"ArtDecoPrototypes.x3d#ArtDeco10\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco10\" \"ArtDecoPrototypes.wrl#ArtDeco10\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco10\"")))
    .addChild(new ExternProtoDeclare().setName("ArtDeco11").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials").setUrl(new MFString("\"ArtDecoPrototypes.x3d#ArtDeco11\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco11\" \"ArtDecoPrototypes.wrl#ArtDeco11\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco11\"")))
    .addChild(new ExternProtoDeclare().setName("ArtDeco12").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials").setUrl(new MFString("\"ArtDecoPrototypes.x3d#ArtDeco12\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco12\" \"ArtDecoPrototypes.wrl#ArtDeco12\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco12\"")))
    .addChild(new ExternProtoDeclare().setName("ArtDeco13").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials").setUrl(new MFString("\"ArtDecoPrototypes.x3d#ArtDeco13\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco13\" \"ArtDecoPrototypes.wrl#ArtDeco13\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco13\"")))
    .addChild(new ExternProtoDeclare().setName("ArtDeco14").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials").setUrl(new MFString("\"ArtDecoPrototypes.x3d#ArtDeco14\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco14\" \"ArtDecoPrototypes.wrl#ArtDeco14\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco14\"")))
    .addChild(new ExternProtoDeclare().setName("ArtDeco15").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials").setUrl(new MFString("\"ArtDecoPrototypes.x3d#ArtDeco15\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco15\" \"ArtDecoPrototypes.wrl#ArtDeco15\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco15\"")))
    .addChild(new ExternProtoDeclare().setName("ArtDeco16").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials").setUrl(new MFString("\"ArtDecoPrototypes.x3d#ArtDeco16\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco16\" \"ArtDecoPrototypes.wrl#ArtDeco16\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco16\"")))
    .addChild(new ExternProtoDeclare().setName("ArtDeco17").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials").setUrl(new MFString("\"ArtDecoPrototypes.x3d#ArtDeco17\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco17\" \"ArtDecoPrototypes.wrl#ArtDeco17\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco17\"")))
    .addChild(new ExternProtoDeclare().setName("ArtDeco18").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials").setUrl(new MFString("\"ArtDecoPrototypes.x3d#ArtDeco18\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco18\" \"ArtDecoPrototypes.wrl#ArtDeco18\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco18\"")))
    .addChild(new ExternProtoDeclare().setName("ArtDeco19").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials").setUrl(new MFString("\"ArtDecoPrototypes.x3d#ArtDeco19\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco19\" \"ArtDecoPrototypes.wrl#ArtDeco19\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco19\"")))
    .addChild(new ExternProtoDeclare().setName("ArtDeco20").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials").setUrl(new MFString("\"ArtDecoPrototypes.x3d#ArtDeco20\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco20\" \"ArtDecoPrototypes.wrl#ArtDeco20\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco20\"")))
    .addChild(new ExternProtoDeclare().setName("ArtDeco21").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials").setUrl(new MFString("\"ArtDecoPrototypes.x3d#ArtDeco21\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco21\" \"ArtDecoPrototypes.wrl#ArtDeco21\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco21\"")))
    .addChild(new ExternProtoDeclare().setName("ArtDeco22").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials").setUrl(new MFString("\"ArtDecoPrototypes.x3d#ArtDeco22\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco22\" \"ArtDecoPrototypes.wrl#ArtDeco22\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco22\"")))
    .addChild(new ExternProtoDeclare().setName("ArtDeco23").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials").setUrl(new MFString("\"ArtDecoPrototypes.x3d#ArtDeco23\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco23\" \"ArtDecoPrototypes.wrl#ArtDeco23\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco23\"")))
    .addChild(new ExternProtoDeclare().setName("ArtDeco24").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials").setUrl(new MFString("\"ArtDecoPrototypes.x3d#ArtDeco24\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco24\" \"ArtDecoPrototypes.wrl#ArtDeco24\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco24\"")))
    .addChild(new ExternProtoDeclare().setName("ArtDeco25").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials").setUrl(new MFString("\"ArtDecoPrototypes.x3d#ArtDeco25\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco25\" \"ArtDecoPrototypes.wrl#ArtDeco25\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco25\"")))
    .addChild(new ExternProtoDeclare().setName("ArtDeco26").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials").setUrl(new MFString("\"ArtDecoPrototypes.x3d#ArtDeco26\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco26\" \"ArtDecoPrototypes.wrl#ArtDeco26\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco26\"")))
    .addChild(new ExternProtoDeclare().setName("ArtDeco27").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials").setUrl(new MFString("\"ArtDecoPrototypes.x3d#ArtDeco27\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco27\" \"ArtDecoPrototypes.wrl#ArtDeco27\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco27\"")))
    .addChild(new ExternProtoDeclare().setName("ArtDeco28").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials").setUrl(new MFString("\"ArtDecoPrototypes.x3d#ArtDeco28\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco28\" \"ArtDecoPrototypes.wrl#ArtDeco28\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco28\"")))
    .addChild(new ExternProtoDeclare().setName("ArtDeco29").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials").setUrl(new MFString("\"ArtDecoPrototypes.x3d#ArtDeco29\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco29\" \"ArtDecoPrototypes.wrl#ArtDeco29\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco29\"")))
    .addChild(new ExternProtoDeclare().setName("ArtDeco30").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials").setUrl(new MFString("\"ArtDecoPrototypes.x3d#ArtDeco30\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco30\" \"ArtDecoPrototypes.wrl#ArtDeco30\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco30\"")))
    .addChild(new ExternProtoDeclare().setName("ArtDeco31").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials").setUrl(new MFString("\"ArtDecoPrototypes.x3d#ArtDeco31\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco31\" \"ArtDecoPrototypes.wrl#ArtDeco31\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco31\"")))
    .addChild(new ExternProtoDeclare().setName("ArtDeco32").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials").setUrl(new MFString("\"ArtDecoPrototypes.x3d#ArtDeco32\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco32\" \"ArtDecoPrototypes.wrl#ArtDeco32\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco32\"")))
    .addChild(new ExternProtoDeclare().setName("ArtDeco33").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials").setUrl(new MFString("\"ArtDecoPrototypes.x3d#ArtDeco33\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco33\" \"ArtDecoPrototypes.wrl#ArtDeco33\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco33\"")))
    .addChild(new ExternProtoDeclare().setName("ArtDeco34").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials").setUrl(new MFString("\"ArtDecoPrototypes.x3d#ArtDeco34\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco34\" \"ArtDecoPrototypes.wrl#ArtDeco34\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco34\"")))
    .addChild(new Group()
      .addChild(new NavigationInfo().setHeadlight(false))
      .addChild(new Viewpoint("Front").setDescription("Front view").setPosition(doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(12.0)))
      .addChild(new Viewpoint("PersRight").setDescription("Low Right").setOrientation(doubleToFloat(0.74291),doubleToFloat(0.30772),doubleToFloat(0.59447),doubleToFloat(1.2171)).setPosition(doubleToFloat(6.9282),doubleToFloat(-6.9282),doubleToFloat(6.9282)))
      .addChild(new Viewpoint("PersLeft").setDescription("Low Left").setOrientation(doubleToFloat(0.74291),doubleToFloat(-0.30772),doubleToFloat(-0.59447),doubleToFloat(1.2171)).setPosition(doubleToFloat(-6.9282),doubleToFloat(-6.9282),doubleToFloat(6.9282)))
      .addChild(new Viewpoint("Back").setDescription("Back view").setOrientation(doubleToFloat(0.0),doubleToFloat(1.0),doubleToFloat(0.0),doubleToFloat(3.1416)).setPosition(doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(-12.0)))
      .addChild(new Transform("Close_travel")
        .addChild(new PositionInterpolator("Close_Mover").setKey(Java.to([doubleToFloat(0.0),doubleToFloat(0.25),doubleToFloat(0.5),doubleToFloat(0.75),doubleToFloat(1.0)], Java.type("float[]"))).setKeyValue(new MFVec3f(Java.to([doubleToFloat(0.0),doubleToFloat(2.5),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(-2.5),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(2.5),doubleToFloat(0.0)], Java.type("float[]")))))
        .addChild(new TimeSensor("Close_Time").setCycleInterval(12.0).setLoop(true))
        .addChild(new Viewpoint("Close").setDescription("Close Front").setPosition(doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(6.0))))
      .addChild(new DirectionalLight().setDirection(doubleToFloat(1.0),doubleToFloat(-1.0),doubleToFloat(-1.0)))
      .addChild(new DirectionalLight().setDirection(doubleToFloat(0.0),doubleToFloat(1.0),doubleToFloat(-0.5)).setIntensity(0.5))
      .addChild(new Anchor().setDescription("Back to front view").setUrl(new MFString("\"#Front\""))
        .addChild(new Transform().setTranslation(doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(-0.5))
          .addChild(new Inline().setUrl(new MFString("\"../data/gridBack.json\" \"../data/gridBack.x3d\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/gridBack.x3d\" \"gridBack.wrl\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/gridBack.wrl\"")))))
      .addChild(new Viewpoint("View00").setDescription("ArtDeco00").setPosition(doubleToFloat(-3.75),doubleToFloat(3.75),doubleToFloat(3.0)))
      .addChild(new Transform().setTranslation(doubleToFloat(-3.75),doubleToFloat(3.75),doubleToFloat(0.0))
        .addChild(new Anchor().setDescription("ArtDeco00 view").setUrl(new MFString("\"#View00\""))
          .addChild(new Shape()
            .setAppearance(new Appearance()
              .setMaterial(new ProtoInstance()))
            .setGeometry(new Sphere("Ball").setRadius(0.5))))
        .addChild(new Transform().setTranslation(doubleToFloat(0.0),doubleToFloat(0.3),doubleToFloat(0.5))
          .addChild(new Anchor().setDescription("ArtDeco00").setParameter(new MFString("\"target=_source\"")).setUrl(new MFString("\"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco00\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco00\""))
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material("TextMat").setDiffuseColor(doubleToFloat(1.0),doubleToFloat(1.0),doubleToFloat(1.0))))
              .setGeometry(new Text().setString(new MFString("\"ArtDeco00\""))
                .setFontStyle(new FontStyle("Style").setFamily(new MFString("\"SANS\"")).setJustify(new MFString("\"MIDDLE\" \"MIDDLE\"")).setSize(0.3).setStyle("BOLD")))))))
      .addChild(new Viewpoint("View01").setDescription("ArtDeco01").setPosition(doubleToFloat(-2.25),doubleToFloat(3.75),doubleToFloat(3.0)))
      .addChild(new Transform().setTranslation(doubleToFloat(-2.25),doubleToFloat(3.75),doubleToFloat(0.0))
        .addChild(new Anchor().setDescription("ArtDeco01 view").setUrl(new MFString("\"#View01\""))
          .addChild(new Shape()
            .setAppearance(new Appearance()
              .setMaterial(new ProtoInstance()))
            .setGeometry(new Sphere())))
        .addChild(new Transform().setTranslation(doubleToFloat(0.0),doubleToFloat(0.3),doubleToFloat(0.5))
          .addChild(new Anchor().setDescription("ArtDeco01").setParameter(new MFString("\"target=_source\"")).setUrl(new MFString("\"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco01\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco01\""))
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material()))
              .setGeometry(new Text().setString(new MFString("\"ArtDeco01\""))
                .setFontStyle(new FontStyle()))))))
      .addChild(new Viewpoint("View02").setDescription("ArtDeco02").setPosition(doubleToFloat(-0.75),doubleToFloat(3.75),doubleToFloat(3.0)))
      .addChild(new Transform().setTranslation(doubleToFloat(-0.75),doubleToFloat(3.75),doubleToFloat(0.0))
        .addChild(new Anchor().setDescription("ArtDeco02 view").setUrl(new MFString("\"#View02\""))
          .addChild(new Shape()
            .setAppearance(new Appearance()
              .setMaterial(new ProtoInstance()))
            .setGeometry(new Sphere())))
        .addChild(new Transform().setTranslation(doubleToFloat(0.0),doubleToFloat(0.3),doubleToFloat(0.5))
          .addChild(new Anchor().setDescription("ArtDeco02").setParameter(new MFString("\"target=_source\"")).setUrl(new MFString("\"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco02\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco02\""))
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material()))
              .setGeometry(new Text().setString(new MFString("\"ArtDeco02\""))
                .setFontStyle(new FontStyle()))))))
      .addChild(new Viewpoint("View03").setDescription("ArtDeco03").setPosition(doubleToFloat(0.75),doubleToFloat(3.75),doubleToFloat(3.0)))
      .addChild(new Transform().setTranslation(doubleToFloat(0.75),doubleToFloat(3.75),doubleToFloat(0.0))
        .addChild(new Anchor().setDescription("ArtDeco03 view").setUrl(new MFString("\"#View03\""))
          .addChild(new Shape()
            .setAppearance(new Appearance()
              .setMaterial(new ProtoInstance()))
            .setGeometry(new Sphere())))
        .addChild(new Transform().setTranslation(doubleToFloat(0.0),doubleToFloat(0.3),doubleToFloat(0.5))
          .addChild(new Anchor().setDescription("ArtDeco03").setParameter(new MFString("\"target=_source\"")).setUrl(new MFString("\"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco03\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco03\""))
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material()))
              .setGeometry(new Text().setString(new MFString("\"ArtDeco03\""))
                .setFontStyle(new FontStyle()))))))
      .addChild(new Viewpoint("View04").setDescription("ArtDeco04").setPosition(doubleToFloat(2.25),doubleToFloat(3.75),doubleToFloat(3.0)))
      .addChild(new Transform().setTranslation(doubleToFloat(2.25),doubleToFloat(3.75),doubleToFloat(0.0))
        .addChild(new Anchor().setDescription("ArtDeco04 view").setUrl(new MFString("\"#View04\""))
          .addChild(new Shape()
            .setAppearance(new Appearance()
              .setMaterial(new ProtoInstance()))
            .setGeometry(new Sphere())))
        .addChild(new Transform().setTranslation(doubleToFloat(0.0),doubleToFloat(0.3),doubleToFloat(0.5))
          .addChild(new Anchor().setDescription("ArtDeco04").setParameter(new MFString("\"target=_source\"")).setUrl(new MFString("\"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco04\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco04\""))
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material()))
              .setGeometry(new Text().setString(new MFString("\"ArtDeco04\""))
                .setFontStyle(new FontStyle()))))))
      .addChild(new Viewpoint("View05").setDescription("ArtDeco05").setPosition(doubleToFloat(3.75),doubleToFloat(3.75),doubleToFloat(3.0)))
      .addChild(new Transform().setTranslation(doubleToFloat(3.75),doubleToFloat(3.75),doubleToFloat(0.0))
        .addChild(new Anchor().setDescription("ArtDeco05 view").setUrl(new MFString("\"#View05\""))
          .addChild(new Shape()
            .setAppearance(new Appearance()
              .setMaterial(new ProtoInstance()))
            .setGeometry(new Sphere())))
        .addChild(new Transform().setTranslation(doubleToFloat(0.0),doubleToFloat(0.3),doubleToFloat(0.5))
          .addChild(new Anchor().setDescription("ArtDeco05").setParameter(new MFString("\"target=_source\"")).setUrl(new MFString("\"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco05\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco05\""))
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material()))
              .setGeometry(new Text().setString(new MFString("\"ArtDeco05\""))
                .setFontStyle(new FontStyle()))))))
      .addChild(new Viewpoint("View06").setDescription("ArtDeco06").setPosition(doubleToFloat(-3.75),doubleToFloat(2.25),doubleToFloat(3.0)))
      .addChild(new Transform().setTranslation(doubleToFloat(-3.75),doubleToFloat(2.25),doubleToFloat(0.0))
        .addChild(new Anchor().setDescription("ArtDeco06 view").setUrl(new MFString("\"#View06\""))
          .addChild(new Shape()
            .setAppearance(new Appearance()
              .setMaterial(new ProtoInstance()))
            .setGeometry(new Sphere())))
        .addChild(new Transform().setTranslation(doubleToFloat(0.0),doubleToFloat(0.3),doubleToFloat(0.5))
          .addChild(new Anchor().setDescription("ArtDeco06").setParameter(new MFString("\"target=_source\"")).setUrl(new MFString("\"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco06\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco06\""))
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material()))
              .setGeometry(new Text().setString(new MFString("\"ArtDeco06\""))
                .setFontStyle(new FontStyle()))))))
      .addChild(new Viewpoint("View07").setDescription("ArtDeco07").setPosition(doubleToFloat(-2.25),doubleToFloat(2.25),doubleToFloat(3.0)))
      .addChild(new Transform().setTranslation(doubleToFloat(-2.25),doubleToFloat(2.25),doubleToFloat(0.0))
        .addChild(new Anchor().setDescription("ArtDeco07 view").setUrl(new MFString("\"#View07\""))
          .addChild(new Shape()
            .setAppearance(new Appearance()
              .setMaterial(new ProtoInstance()))
            .setGeometry(new Sphere())))
        .addChild(new Transform().setTranslation(doubleToFloat(0.0),doubleToFloat(0.3),doubleToFloat(0.5))
          .addChild(new Anchor().setDescription("ArtDeco07").setParameter(new MFString("\"target=_source\"")).setUrl(new MFString("\"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco07\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco07\""))
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material()))
              .setGeometry(new Text().setString(new MFString("\"ArtDeco07\""))
                .setFontStyle(new FontStyle()))))))
      .addChild(new Viewpoint("View08").setDescription("ArtDeco08").setPosition(doubleToFloat(-0.75),doubleToFloat(2.25),doubleToFloat(3.0)))
      .addChild(new Transform().setTranslation(doubleToFloat(-0.75),doubleToFloat(2.25),doubleToFloat(0.0))
        .addChild(new Anchor().setDescription("ArtDeco08 view").setUrl(new MFString("\"#View08\""))
          .addChild(new Shape()
            .setAppearance(new Appearance()
              .setMaterial(new ProtoInstance()))
            .setGeometry(new Sphere())))
        .addChild(new Transform().setTranslation(doubleToFloat(0.0),doubleToFloat(0.3),doubleToFloat(0.5))
          .addChild(new Anchor().setDescription("ArtDeco08").setParameter(new MFString("\"target=_source\"")).setUrl(new MFString("\"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco08\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco08\""))
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material()))
              .setGeometry(new Text().setString(new MFString("\"ArtDeco08\""))
                .setFontStyle(new FontStyle()))))))
      .addChild(new Viewpoint("View09").setDescription("ArtDeco09").setPosition(doubleToFloat(0.75),doubleToFloat(2.25),doubleToFloat(3.0)))
      .addChild(new Transform().setTranslation(doubleToFloat(0.75),doubleToFloat(2.25),doubleToFloat(0.0))
        .addChild(new Anchor().setDescription("ArtDeco09 view").setUrl(new MFString("\"#View09\""))
          .addChild(new Shape()
            .setAppearance(new Appearance()
              .setMaterial(new ProtoInstance()))
            .setGeometry(new Sphere())))
        .addChild(new Transform().setTranslation(doubleToFloat(0.0),doubleToFloat(0.3),doubleToFloat(0.5))
          .addChild(new Anchor().setDescription("ArtDeco09").setParameter(new MFString("\"target=_source\"")).setUrl(new MFString("\"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco09\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco09\""))
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material()))
              .setGeometry(new Text().setString(new MFString("\"ArtDeco09\""))
                .setFontStyle(new FontStyle()))))))
      .addChild(new Viewpoint("View10").setDescription("ArtDeco10").setPosition(doubleToFloat(2.25),doubleToFloat(2.25),doubleToFloat(3.0)))
      .addChild(new Transform().setTranslation(doubleToFloat(2.25),doubleToFloat(2.25),doubleToFloat(0.0))
        .addChild(new Anchor().setDescription("ArtDeco10 view").setUrl(new MFString("\"#View10\""))
          .addChild(new Shape()
            .setAppearance(new Appearance()
              .setMaterial(new ProtoInstance()))
            .setGeometry(new Sphere())))
        .addChild(new Transform().setTranslation(doubleToFloat(0.0),doubleToFloat(0.3),doubleToFloat(0.5))
          .addChild(new Anchor().setDescription("ArtDeco10").setParameter(new MFString("\"target=_source\"")).setUrl(new MFString("\"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco10\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco10\""))
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material()))
              .setGeometry(new Text().setString(new MFString("\"ArtDeco10\""))
                .setFontStyle(new FontStyle()))))))
      .addChild(new Viewpoint("View11").setDescription("ArtDeco11").setPosition(doubleToFloat(3.75),doubleToFloat(2.25),doubleToFloat(3.0)))
      .addChild(new Transform().setTranslation(doubleToFloat(3.75),doubleToFloat(2.25),doubleToFloat(0.0))
        .addChild(new Anchor().setDescription("ArtDeco11 view").setUrl(new MFString("\"#View11\""))
          .addChild(new Shape()
            .setAppearance(new Appearance()
              .setMaterial(new ProtoInstance()))
            .setGeometry(new Sphere())))
        .addChild(new Transform().setTranslation(doubleToFloat(0.0),doubleToFloat(0.3),doubleToFloat(0.5))
          .addChild(new Anchor().setDescription("ArtDeco11").setParameter(new MFString("\"target=_source\"")).setUrl(new MFString("\"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco11\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco11\""))
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material()))
              .setGeometry(new Text().setString(new MFString("\"ArtDeco11\""))
                .setFontStyle(new FontStyle()))))))
      .addChild(new Viewpoint("View12").setDescription("ArtDeco12").setPosition(doubleToFloat(-3.75),doubleToFloat(0.75),doubleToFloat(3.0)))
      .addChild(new Transform().setTranslation(doubleToFloat(-3.75),doubleToFloat(0.75),doubleToFloat(0.0))
        .addChild(new Anchor().setDescription("ArtDeco12 view").setUrl(new MFString("\"#View12\""))
          .addChild(new Shape()
            .setAppearance(new Appearance()
              .setMaterial(new ProtoInstance()))
            .setGeometry(new Sphere())))
        .addChild(new Transform().setTranslation(doubleToFloat(0.0),doubleToFloat(0.3),doubleToFloat(0.5))
          .addChild(new Anchor().setDescription("ArtDeco12").setParameter(new MFString("\"target=_source\"")).setUrl(new MFString("\"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco12\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco12\""))
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material()))
              .setGeometry(new Text().setString(new MFString("\"ArtDeco12\""))
                .setFontStyle(new FontStyle()))))))
      .addChild(new Viewpoint("View13").setDescription("ArtDeco13").setPosition(doubleToFloat(-2.25),doubleToFloat(0.75),doubleToFloat(3.0)))
      .addChild(new Transform().setTranslation(doubleToFloat(-2.25),doubleToFloat(0.75),doubleToFloat(0.0))
        .addChild(new Anchor().setDescription("ArtDeco13 view").setUrl(new MFString("\"#View13\""))
          .addChild(new Shape()
            .setAppearance(new Appearance()
              .setMaterial(new ProtoInstance()))
            .setGeometry(new Sphere())))
        .addChild(new Transform().setTranslation(doubleToFloat(0.0),doubleToFloat(0.3),doubleToFloat(0.5))
          .addChild(new Anchor().setDescription("ArtDeco13").setParameter(new MFString("\"target=_source\"")).setUrl(new MFString("\"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco3\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco13\""))
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material()))
              .setGeometry(new Text().setString(new MFString("\"ArtDeco13\""))
                .setFontStyle(new FontStyle()))))))
      .addChild(new Viewpoint("View14").setDescription("ArtDeco14").setPosition(doubleToFloat(-0.75),doubleToFloat(0.75),doubleToFloat(3.0)))
      .addChild(new Transform().setTranslation(doubleToFloat(-0.75),doubleToFloat(0.75),doubleToFloat(0.0))
        .addChild(new Anchor().setDescription("ArtDeco14 view").setUrl(new MFString("\"#View14\""))
          .addChild(new Shape()
            .setAppearance(new Appearance()
              .setMaterial(new ProtoInstance()))
            .setGeometry(new Sphere())))
        .addChild(new Transform().setTranslation(doubleToFloat(0.0),doubleToFloat(0.3),doubleToFloat(0.5))
          .addChild(new Anchor().setDescription("ArtDeco14").setParameter(new MFString("\"target=_source\"")).setUrl(new MFString("\"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco4\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco14\""))
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material()))
              .setGeometry(new Text().setString(new MFString("\"ArtDeco14\""))
                .setFontStyle(new FontStyle()))))))
      .addChild(new Viewpoint("View15").setDescription("ArtDeco15").setPosition(doubleToFloat(0.75),doubleToFloat(0.75),doubleToFloat(3.0)))
      .addChild(new Transform().setTranslation(doubleToFloat(0.75),doubleToFloat(0.75),doubleToFloat(0.0))
        .addChild(new Anchor().setDescription("ArtDeco15 view").setUrl(new MFString("\"#View15\""))
          .addChild(new Shape()
            .setAppearance(new Appearance()
              .setMaterial(new ProtoInstance()))
            .setGeometry(new Sphere())))
        .addChild(new Transform().setTranslation(doubleToFloat(0.0),doubleToFloat(0.3),doubleToFloat(0.5))
          .addChild(new Anchor().setDescription("ArtDeco15").setParameter(new MFString("\"target=_source\"")).setUrl(new MFString("\"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco5\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco15\""))
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material()))
              .setGeometry(new Text().setString(new MFString("\"ArtDeco15\""))
                .setFontStyle(new FontStyle()))))))
      .addChild(new Viewpoint("View16").setDescription("ArtDeco16").setPosition(doubleToFloat(2.25),doubleToFloat(0.75),doubleToFloat(3.0)))
      .addChild(new Transform().setTranslation(doubleToFloat(2.25),doubleToFloat(0.75),doubleToFloat(0.0))
        .addChild(new Anchor().setDescription("ArtDeco16 view").setUrl(new MFString("\"#View16\""))
          .addChild(new Shape()
            .setAppearance(new Appearance()
              .setMaterial(new ProtoInstance()))
            .setGeometry(new Sphere())))
        .addChild(new Transform().setTranslation(doubleToFloat(0.0),doubleToFloat(0.3),doubleToFloat(0.5))
          .addChild(new Anchor().setDescription("ArtDeco16").setParameter(new MFString("\"target=_source\"")).setUrl(new MFString("\"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco16\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco16\""))
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material()))
              .setGeometry(new Text().setString(new MFString("\"ArtDeco16\""))
                .setFontStyle(new FontStyle()))))))
      .addChild(new Viewpoint("View17").setDescription("ArtDeco17").setPosition(doubleToFloat(3.75),doubleToFloat(0.75),doubleToFloat(3.0)))
      .addChild(new Transform().setTranslation(doubleToFloat(3.75),doubleToFloat(0.75),doubleToFloat(0.0))
        .addChild(new Anchor().setDescription("ArtDeco17 view").setUrl(new MFString("\"#View17\""))
          .addChild(new Shape()
            .setAppearance(new Appearance()
              .setMaterial(new ProtoInstance()))
            .setGeometry(new Sphere())))
        .addChild(new Transform().setTranslation(doubleToFloat(0.0),doubleToFloat(0.3),doubleToFloat(0.5))
          .addChild(new Anchor().setDescription("ArtDeco17").setParameter(new MFString("\"target=_source\"")).setUrl(new MFString("\"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco7\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco17\""))
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material()))
              .setGeometry(new Text().setString(new MFString("\"ArtDeco17\""))
                .setFontStyle(new FontStyle()))))))
      .addChild(new Viewpoint("View18").setDescription("ArtDeco18").setPosition(doubleToFloat(-3.75),doubleToFloat(-0.75),doubleToFloat(3.0)))
      .addChild(new Transform().setTranslation(doubleToFloat(-3.75),doubleToFloat(-0.75),doubleToFloat(0.0))
        .addChild(new Anchor().setDescription("ArtDeco18 view").setUrl(new MFString("\"#View18\""))
          .addChild(new Shape()
            .setAppearance(new Appearance()
              .setMaterial(new ProtoInstance()))
            .setGeometry(new Sphere())))
        .addChild(new Transform().setTranslation(doubleToFloat(0.0),doubleToFloat(0.3),doubleToFloat(0.5))
          .addChild(new Anchor().setDescription("ArtDeco18").setParameter(new MFString("\"target=_source\"")).setUrl(new MFString("\"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco18\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco18\""))
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material()))
              .setGeometry(new Text().setString(new MFString("\"ArtDeco18\""))
                .setFontStyle(new FontStyle()))))))
      .addChild(new Viewpoint("View19").setDescription("ArtDeco19").setPosition(doubleToFloat(-2.25),doubleToFloat(-0.75),doubleToFloat(3.0)))
      .addChild(new Transform().setTranslation(doubleToFloat(-2.25),doubleToFloat(-0.75),doubleToFloat(0.0))
        .addChild(new Anchor().setDescription("ArtDeco19 view").setUrl(new MFString("\"#View19\""))
          .addChild(new Shape()
            .setAppearance(new Appearance()
              .setMaterial(new ProtoInstance()))
            .setGeometry(new Sphere())))
        .addChild(new Transform().setTranslation(doubleToFloat(0.0),doubleToFloat(0.3),doubleToFloat(0.5))
          .addChild(new Anchor().setDescription("ArtDeco19").setParameter(new MFString("\"target=_source\"")).setUrl(new MFString("\"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco9\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco19\""))
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material()))
              .setGeometry(new Text().setString(new MFString("\"ArtDeco19\""))
                .setFontStyle(new FontStyle()))))))
      .addChild(new Viewpoint("View20").setDescription("ArtDeco20").setPosition(doubleToFloat(-0.75),doubleToFloat(-0.75),doubleToFloat(3.0)))
      .addChild(new Transform().setTranslation(doubleToFloat(-0.75),doubleToFloat(-0.75),doubleToFloat(0.0))
        .addChild(new Anchor().setDescription("ArtDeco20 view").setUrl(new MFString("\"#View20\""))
          .addChild(new Shape()
            .setAppearance(new Appearance()
              .setMaterial(new ProtoInstance()))
            .setGeometry(new Sphere())))
        .addChild(new Transform().setTranslation(doubleToFloat(0.0),doubleToFloat(0.3),doubleToFloat(0.5))
          .addChild(new Anchor().setDescription("ArtDeco20").setParameter(new MFString("\"target=_source\"")).setUrl(new MFString("\"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco20\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco20\""))
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material()))
              .setGeometry(new Text().setString(new MFString("\"ArtDeco20\""))
                .setFontStyle(new FontStyle()))))))
      .addChild(new Viewpoint("View21").setDescription("ArtDeco21").setPosition(doubleToFloat(0.75),doubleToFloat(-0.75),doubleToFloat(3.0)))
      .addChild(new Transform().setTranslation(doubleToFloat(0.75),doubleToFloat(-0.75),doubleToFloat(0.0))
        .addChild(new Anchor().setDescription("ArtDeco21 view").setUrl(new MFString("\"#View21\""))
          .addChild(new Shape()
            .setAppearance(new Appearance()
              .setMaterial(new ProtoInstance()))
            .setGeometry(new Sphere())))
        .addChild(new Transform().setTranslation(doubleToFloat(0.0),doubleToFloat(0.3),doubleToFloat(0.5))
          .addChild(new Anchor().setDescription("ArtDeco21").setParameter(new MFString("\"target=_source\"")).setUrl(new MFString("\"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco21\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco21\""))
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material()))
              .setGeometry(new Text().setString(new MFString("\"ArtDeco21\""))
                .setFontStyle(new FontStyle()))))))
      .addChild(new Viewpoint("View22").setDescription("ArtDeco22").setPosition(doubleToFloat(2.25),doubleToFloat(-0.75),doubleToFloat(3.0)))
      .addChild(new Transform().setTranslation(doubleToFloat(2.25),doubleToFloat(-0.75),doubleToFloat(0.0))
        .addChild(new Anchor().setDescription("ArtDeco22 view").setUrl(new MFString("\"#View22\""))
          .addChild(new Shape()
            .setAppearance(new Appearance()
              .setMaterial(new ProtoInstance()))
            .setGeometry(new Sphere())))
        .addChild(new Transform().setTranslation(doubleToFloat(0.0),doubleToFloat(0.3),doubleToFloat(0.5))
          .addChild(new Anchor().setDescription("ArtDeco22").setParameter(new MFString("\"target=_source\"")).setUrl(new MFString("\"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco22\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco22\""))
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material()))
              .setGeometry(new Text().setString(new MFString("\"ArtDeco22\""))
                .setFontStyle(new FontStyle()))))))
      .addChild(new Viewpoint("View23").setDescription("ArtDeco23").setPosition(doubleToFloat(3.75),doubleToFloat(-0.75),doubleToFloat(3.0)))
      .addChild(new Transform().setTranslation(doubleToFloat(3.75),doubleToFloat(-0.75),doubleToFloat(0.0))
        .addChild(new Anchor().setDescription("ArtDeco23 view").setUrl(new MFString("\"#View23\""))
          .addChild(new Shape()
            .setAppearance(new Appearance()
              .setMaterial(new ProtoInstance()))
            .setGeometry(new Sphere())))
        .addChild(new Transform().setTranslation(doubleToFloat(0.0),doubleToFloat(0.3),doubleToFloat(0.5))
          .addChild(new Anchor().setDescription("ArtDeco23").setParameter(new MFString("\"target=_source\"")).setUrl(new MFString("\"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco23\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco23\""))
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material()))
              .setGeometry(new Text().setString(new MFString("\"ArtDeco23\""))
                .setFontStyle(new FontStyle()))))))
      .addChild(new Viewpoint("View24").setDescription("ArtDeco24").setPosition(doubleToFloat(-3.75),doubleToFloat(-2.25),doubleToFloat(3.0)))
      .addChild(new Transform().setTranslation(doubleToFloat(-3.75),doubleToFloat(-2.25),doubleToFloat(0.0))
        .addChild(new Anchor().setDescription("ArtDeco24 view").setUrl(new MFString("\"#View24\""))
          .addChild(new Shape()
            .setAppearance(new Appearance()
              .setMaterial(new ProtoInstance()))
            .setGeometry(new Sphere())))
        .addChild(new Transform().setTranslation(doubleToFloat(0.0),doubleToFloat(0.3),doubleToFloat(0.5))
          .addChild(new Anchor().setDescription("ArtDeco24").setParameter(new MFString("\"target=_source\"")).setUrl(new MFString("\"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco24\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco24\""))
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material()))
              .setGeometry(new Text().setString(new MFString("\"ArtDeco24\""))
                .setFontStyle(new FontStyle()))))))
      .addChild(new Viewpoint("View25").setDescription("ArtDeco25").setPosition(doubleToFloat(-2.25),doubleToFloat(-2.25),doubleToFloat(3.0)))
      .addChild(new Transform().setTranslation(doubleToFloat(-2.25),doubleToFloat(-2.25),doubleToFloat(0.0))
        .addChild(new Anchor().setDescription("ArtDeco25 view").setUrl(new MFString("\"#View25\""))
          .addChild(new Shape()
            .setAppearance(new Appearance()
              .setMaterial(new ProtoInstance()))
            .setGeometry(new Sphere())))
        .addChild(new Transform().setTranslation(doubleToFloat(0.0),doubleToFloat(0.3),doubleToFloat(0.5))
          .addChild(new Anchor().setDescription("ArtDeco25").setParameter(new MFString("\"target=_source\"")).setUrl(new MFString("\"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco25\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco25\""))
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material()))
              .setGeometry(new Text().setString(new MFString("\"ArtDeco25\""))
                .setFontStyle(new FontStyle()))))))
      .addChild(new Viewpoint("View26").setDescription("ArtDeco26").setPosition(doubleToFloat(-0.75),doubleToFloat(-2.25),doubleToFloat(3.0)))
      .addChild(new Transform().setTranslation(doubleToFloat(-0.75),doubleToFloat(-2.25),doubleToFloat(0.0))
        .addChild(new Anchor().setDescription("ArtDeco26 view").setUrl(new MFString("\"#View26\""))
          .addChild(new Shape()
            .setAppearance(new Appearance()
              .setMaterial(new ProtoInstance()))
            .setGeometry(new Sphere())))
        .addChild(new Transform().setTranslation(doubleToFloat(0.0),doubleToFloat(0.3),doubleToFloat(0.5))
          .addChild(new Anchor().setDescription("ArtDeco26").setParameter(new MFString("\"target=_source\"")).setUrl(new MFString("\"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco26\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco26\""))
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material()))
              .setGeometry(new Text().setString(new MFString("\"ArtDeco26\""))
                .setFontStyle(new FontStyle()))))))
      .addChild(new Viewpoint("View27").setDescription("ArtDeco27").setPosition(doubleToFloat(0.75),doubleToFloat(-2.25),doubleToFloat(3.0)))
      .addChild(new Transform().setTranslation(doubleToFloat(0.75),doubleToFloat(-2.25),doubleToFloat(0.0))
        .addChild(new Anchor().setDescription("ArtDeco27 view").setUrl(new MFString("\"#View27\""))
          .addChild(new Shape()
            .setAppearance(new Appearance()
              .setMaterial(new ProtoInstance()))
            .setGeometry(new Sphere())))
        .addChild(new Transform().setTranslation(doubleToFloat(0.0),doubleToFloat(0.3),doubleToFloat(0.5))
          .addChild(new Anchor().setDescription("ArtDeco27").setParameter(new MFString("\"target=_source\"")).setUrl(new MFString("\"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco27\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco27\""))
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material()))
              .setGeometry(new Text().setString(new MFString("\"ArtDeco27\""))
                .setFontStyle(new FontStyle()))))))
      .addChild(new Viewpoint("View28").setDescription("ArtDeco28").setPosition(doubleToFloat(2.25),doubleToFloat(-2.25),doubleToFloat(3.0)))
      .addChild(new Transform().setTranslation(doubleToFloat(2.25),doubleToFloat(-2.25),doubleToFloat(0.0))
        .addChild(new Anchor().setDescription("ArtDeco28 view").setUrl(new MFString("\"#View28\""))
          .addChild(new Shape()
            .setAppearance(new Appearance()
              .setMaterial(new ProtoInstance()))
            .setGeometry(new Sphere())))
        .addChild(new Transform().setTranslation(doubleToFloat(0.0),doubleToFloat(0.3),doubleToFloat(0.5))
          .addChild(new Anchor().setDescription("ArtDeco28").setParameter(new MFString("\"target=_source\"")).setUrl(new MFString("\"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco28\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco28\""))
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material()))
              .setGeometry(new Text().setString(new MFString("\"ArtDeco28\""))
                .setFontStyle(new FontStyle()))))))
      .addChild(new Viewpoint("View29").setDescription("ArtDeco29").setPosition(doubleToFloat(3.75),doubleToFloat(-2.25),doubleToFloat(3.0)))
      .addChild(new Transform().setTranslation(doubleToFloat(3.75),doubleToFloat(-2.25),doubleToFloat(0.0))
        .addChild(new Anchor().setDescription("ArtDeco29 view").setUrl(new MFString("\"#View29\""))
          .addChild(new Shape()
            .setAppearance(new Appearance()
              .setMaterial(new ProtoInstance()))
            .setGeometry(new Sphere())))
        .addChild(new Transform().setTranslation(doubleToFloat(0.0),doubleToFloat(0.3),doubleToFloat(0.5))
          .addChild(new Anchor().setDescription("ArtDeco29").setParameter(new MFString("\"target=_source\"")).setUrl(new MFString("\"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco29\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco29\""))
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material()))
              .setGeometry(new Text().setString(new MFString("\"ArtDeco29\""))
                .setFontStyle(new FontStyle()))))))
      .addChild(new Viewpoint("View30").setDescription("ArtDeco30").setPosition(doubleToFloat(-3.75),doubleToFloat(-3.75),doubleToFloat(3.0)))
      .addChild(new Transform().setTranslation(doubleToFloat(-3.75),doubleToFloat(-3.75),doubleToFloat(0.0))
        .addChild(new Anchor().setDescription("ArtDeco30 view").setUrl(new MFString("\"#View30\""))
          .addChild(new Shape()
            .setAppearance(new Appearance()
              .setMaterial(new ProtoInstance()))
            .setGeometry(new Sphere())))
        .addChild(new Transform().setTranslation(doubleToFloat(0.0),doubleToFloat(0.3),doubleToFloat(0.5))
          .addChild(new Anchor().setDescription("ArtDeco30").setParameter(new MFString("\"target=_source\"")).setUrl(new MFString("\"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco30\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco30\""))
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material()))
              .setGeometry(new Text().setString(new MFString("\"ArtDeco30\""))
                .setFontStyle(new FontStyle()))))))
      .addChild(new Viewpoint("View31").setDescription("ArtDeco31").setPosition(doubleToFloat(-2.25),doubleToFloat(-3.75),doubleToFloat(3.0)))
      .addChild(new Transform().setTranslation(doubleToFloat(-2.25),doubleToFloat(-3.75),doubleToFloat(0.0))
        .addChild(new Anchor().setDescription("ArtDeco31 view").setUrl(new MFString("\"#View31\""))
          .addChild(new Shape()
            .setAppearance(new Appearance()
              .setMaterial(new ProtoInstance()))
            .setGeometry(new Sphere())))
        .addChild(new Transform().setTranslation(doubleToFloat(0.0),doubleToFloat(0.3),doubleToFloat(0.5))
          .addChild(new Anchor().setDescription("ArtDeco31").setParameter(new MFString("\"target=_source\"")).setUrl(new MFString("\"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco31\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco31\""))
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material()))
              .setGeometry(new Text().setString(new MFString("\"ArtDeco31\""))
                .setFontStyle(new FontStyle()))))))
      .addChild(new Viewpoint("View32").setDescription("ArtDeco32").setPosition(doubleToFloat(-0.75),doubleToFloat(-3.75),doubleToFloat(3.0)))
      .addChild(new Transform().setTranslation(doubleToFloat(-0.75),doubleToFloat(-3.75),doubleToFloat(0.0))
        .addChild(new Anchor().setDescription("ArtDeco32 view").setUrl(new MFString("\"#View32\""))
          .addChild(new Shape()
            .setAppearance(new Appearance()
              .setMaterial(new ProtoInstance()))
            .setGeometry(new Sphere())))
        .addChild(new Transform().setTranslation(doubleToFloat(0.0),doubleToFloat(0.3),doubleToFloat(0.5))
          .addChild(new Anchor().setDescription("ArtDeco32").setParameter(new MFString("\"target=_source\"")).setUrl(new MFString("\"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco32\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco32\""))
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material()))
              .setGeometry(new Text().setString(new MFString("\"ArtDeco32\""))
                .setFontStyle(new FontStyle()))))))
      .addChild(new Viewpoint("View33").setDescription("ArtDeco33").setPosition(doubleToFloat(0.75),doubleToFloat(-3.75),doubleToFloat(3.0)))
      .addChild(new Transform().setTranslation(doubleToFloat(0.75),doubleToFloat(-3.75),doubleToFloat(0.0))
        .addChild(new Anchor().setDescription("ArtDeco33 view").setUrl(new MFString("\"#View33\""))
          .addChild(new Shape()
            .setAppearance(new Appearance()
              .setMaterial(new ProtoInstance()))
            .setGeometry(new Sphere())))
        .addChild(new Transform().setTranslation(doubleToFloat(0.0),doubleToFloat(0.3),doubleToFloat(0.5))
          .addChild(new Anchor().setDescription("ArtDeco33").setParameter(new MFString("\"target=_source\"")).setUrl(new MFString("\"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco33\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco33\""))
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material()))
              .setGeometry(new Text().setString(new MFString("\"ArtDeco33\""))
                .setFontStyle(new FontStyle()))))))
      .addChild(new Viewpoint("View34").setDescription("ArtDeco34").setPosition(doubleToFloat(2.25),doubleToFloat(-3.75),doubleToFloat(3.0)))
      .addChild(new Transform().setTranslation(doubleToFloat(2.25),doubleToFloat(-3.75),doubleToFloat(0.0))
        .addChild(new Anchor().setDescription("ArtDeco34 view").setUrl(new MFString("\"#View34\""))
          .addChild(new Shape()
            .setAppearance(new Appearance()
              .setMaterial(new ProtoInstance()))
            .setGeometry(new Sphere())))
        .addChild(new Transform().setTranslation(doubleToFloat(0.0),doubleToFloat(0.3),doubleToFloat(0.5))
          .addChild(new Anchor().setDescription("ArtDeco34").setParameter(new MFString("\"target=_source\"")).setUrl(new MFString("\"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco34\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco34\""))
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material()))
              .setGeometry(new Text().setString(new MFString("\"ArtDeco34\""))
                .setFontStyle(new FontStyle())))))))
    .addChild(new ROUTE().setFromNode("Close_Time").setFromField("fraction_changed").setToNode("Close_Mover").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("Close_Mover").setFromField("value_changed").setToNode("Close_travel").setToField("set_translation")));
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
		var testObject = new ArtDecoExamples();
		print ("ArtDecoExamples execution self-validation test results: " + testObject.validateSelf());
	}
}
new ArtDecoExamples().main();