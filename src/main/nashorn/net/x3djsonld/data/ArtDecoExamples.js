load('X3Dautoclass.js');

// Javadoc annotations follow, see below for source.
/**
 * <p> Example ExternProtoDeclare/ProtoInstance usage of X3D/VRML materials, originally converted from SGI's Open Inventor material examples. </p>
 <p> Related links: <a href="../../../UniversalMediaMaterials/NeedClassName.java">NeedClassName.java</a> source, <a href="../../../UniversalMediaMaterials/ArtDecoExamplesIndex.html" target="_top">ArtDecoExamples catalog page</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a> and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
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

function NeedClassName
  /** Default constructor to create this object. */
  ()
  {
    /** The initialized model object, created within initialize() method. */
    this.x3dModel = {};
    this.initialize();
    return this;
  }
NeedClassName.prototype = {
  /** Create and initialize the X3D model. */
  initialize : function ()
  {
  this.x3dModel = new X3DObject().setProfile("Immersive").setVersion("3.0")
  .setHead(new headObject()
    .addMeta(new metaObject().setName("title").setContent("ArtDecoExamples.x3d"))
    .addMeta(new metaObject().setName("description").setContent("Example ExternProtoDeclare/ProtoInstance usage of X3D/VRML materials, originally converted from SGI's Open Inventor material examples."))
    .addMeta(new metaObject().setName("creator").setContent("David Roussel"))
    .addMeta(new metaObject().setName("translator").setContent("James Harney, Don Brutzman NPS"))
    .addMeta(new metaObject().setName("created").setContent("7 April 2002"))
    .addMeta(new metaObject().setName("modified").setContent("20 October 2019"))
    .addMeta(new metaObject().setName("reference").setContent("http://vrmlstuff.free.fr/materials"))
    .addMeta(new metaObject().setName("subject").setContent("Universal Media Material Library"))
    .addMeta(new metaObject().setName("identifier").setContent("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoExamples.x3d"))
    .addMeta(new metaObject().setName("generator").setContent("Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html"))
    .addMeta(new metaObject().setName("license").setContent("../license.html")))
  .setScene(new SceneObject()
    .addChild(new WorldInfoObject().setTitle("ArtDecoExamples.x3d"))
    .addChild(new ExternProtoDeclareObject().setName("ArtDeco00").setAppinfo("UniversalMediaMaterials prototype").setUrl(new MFStringObject("\"ArtDecoPrototypes.x3d#ArtDeco00\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco00\" \"ArtDecoPrototypes.wrl#ArtDeco00\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco00\"")).setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"))
    .addChild(new ExternProtoDeclareObject().setName("ArtDeco01").setAppinfo("UniversalMediaMaterials prototype").setUrl(new MFStringObject("\"ArtDecoPrototypes.x3d#ArtDeco01\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco01\" \"ArtDecoPrototypes.wrl#ArtDeco01\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco01\"")).setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"))
    .addChild(new ExternProtoDeclareObject().setName("ArtDeco02").setAppinfo("UniversalMediaMaterials prototype").setUrl(new MFStringObject("\"ArtDecoPrototypes.x3d#ArtDeco02\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco02\" \"ArtDecoPrototypes.wrl#ArtDeco02\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco02\"")).setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"))
    .addChild(new ExternProtoDeclareObject().setName("ArtDeco03").setAppinfo("UniversalMediaMaterials prototype").setUrl(new MFStringObject("\"ArtDecoPrototypes.x3d#ArtDeco03\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco03\" \"ArtDecoPrototypes.wrl#ArtDeco03\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco03\"")).setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"))
    .addChild(new ExternProtoDeclareObject().setName("ArtDeco04").setAppinfo("UniversalMediaMaterials prototype").setUrl(new MFStringObject("\"ArtDecoPrototypes.x3d#ArtDeco04\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco04\" \"ArtDecoPrototypes.wrl#ArtDeco04\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco04\"")).setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"))
    .addChild(new ExternProtoDeclareObject().setName("ArtDeco05").setAppinfo("UniversalMediaMaterials prototype").setUrl(new MFStringObject("\"ArtDecoPrototypes.x3d#ArtDeco05\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco05\" \"ArtDecoPrototypes.wrl#ArtDeco05\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco05\"")).setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"))
    .addChild(new ExternProtoDeclareObject().setName("ArtDeco06").setAppinfo("UniversalMediaMaterials prototype").setUrl(new MFStringObject("\"ArtDecoPrototypes.x3d#ArtDeco06\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco06\" \"ArtDecoPrototypes.wrl#ArtDeco06\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco06\"")).setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"))
    .addChild(new ExternProtoDeclareObject().setName("ArtDeco07").setAppinfo("UniversalMediaMaterials prototype").setUrl(new MFStringObject("\"ArtDecoPrototypes.x3d#ArtDeco07\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco07\" \"ArtDecoPrototypes.wrl#ArtDeco07\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco07\"")).setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"))
    .addChild(new ExternProtoDeclareObject().setName("ArtDeco08").setAppinfo("UniversalMediaMaterials prototype").setUrl(new MFStringObject("\"ArtDecoPrototypes.x3d#ArtDeco08\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco08\" \"ArtDecoPrototypes.wrl#ArtDeco08\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco08\"")).setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"))
    .addChild(new ExternProtoDeclareObject().setName("ArtDeco09").setAppinfo("UniversalMediaMaterials prototype").setUrl(new MFStringObject("\"ArtDecoPrototypes.x3d#ArtDeco09\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco09\" \"ArtDecoPrototypes.wrl#ArtDeco09\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco09\"")).setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"))
    .addChild(new ExternProtoDeclareObject().setName("ArtDeco10").setAppinfo("UniversalMediaMaterials prototype").setUrl(new MFStringObject("\"ArtDecoPrototypes.x3d#ArtDeco10\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco10\" \"ArtDecoPrototypes.wrl#ArtDeco10\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco10\"")).setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"))
    .addChild(new ExternProtoDeclareObject().setName("ArtDeco11").setAppinfo("UniversalMediaMaterials prototype").setUrl(new MFStringObject("\"ArtDecoPrototypes.x3d#ArtDeco11\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco11\" \"ArtDecoPrototypes.wrl#ArtDeco11\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco11\"")).setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"))
    .addChild(new ExternProtoDeclareObject().setName("ArtDeco12").setAppinfo("UniversalMediaMaterials prototype").setUrl(new MFStringObject("\"ArtDecoPrototypes.x3d#ArtDeco12\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco12\" \"ArtDecoPrototypes.wrl#ArtDeco12\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco12\"")).setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"))
    .addChild(new ExternProtoDeclareObject().setName("ArtDeco13").setAppinfo("UniversalMediaMaterials prototype").setUrl(new MFStringObject("\"ArtDecoPrototypes.x3d#ArtDeco13\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco13\" \"ArtDecoPrototypes.wrl#ArtDeco13\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco13\"")).setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"))
    .addChild(new ExternProtoDeclareObject().setName("ArtDeco14").setAppinfo("UniversalMediaMaterials prototype").setUrl(new MFStringObject("\"ArtDecoPrototypes.x3d#ArtDeco14\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco14\" \"ArtDecoPrototypes.wrl#ArtDeco14\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco14\"")).setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"))
    .addChild(new ExternProtoDeclareObject().setName("ArtDeco15").setAppinfo("UniversalMediaMaterials prototype").setUrl(new MFStringObject("\"ArtDecoPrototypes.x3d#ArtDeco15\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco15\" \"ArtDecoPrototypes.wrl#ArtDeco15\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco15\"")).setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"))
    .addChild(new ExternProtoDeclareObject().setName("ArtDeco16").setAppinfo("UniversalMediaMaterials prototype").setUrl(new MFStringObject("\"ArtDecoPrototypes.x3d#ArtDeco16\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco16\" \"ArtDecoPrototypes.wrl#ArtDeco16\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco16\"")).setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"))
    .addChild(new ExternProtoDeclareObject().setName("ArtDeco17").setAppinfo("UniversalMediaMaterials prototype").setUrl(new MFStringObject("\"ArtDecoPrototypes.x3d#ArtDeco17\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco17\" \"ArtDecoPrototypes.wrl#ArtDeco17\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco17\"")).setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"))
    .addChild(new ExternProtoDeclareObject().setName("ArtDeco18").setAppinfo("UniversalMediaMaterials prototype").setUrl(new MFStringObject("\"ArtDecoPrototypes.x3d#ArtDeco18\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco18\" \"ArtDecoPrototypes.wrl#ArtDeco18\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco18\"")).setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"))
    .addChild(new ExternProtoDeclareObject().setName("ArtDeco19").setAppinfo("UniversalMediaMaterials prototype").setUrl(new MFStringObject("\"ArtDecoPrototypes.x3d#ArtDeco19\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco19\" \"ArtDecoPrototypes.wrl#ArtDeco19\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco19\"")).setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"))
    .addChild(new ExternProtoDeclareObject().setName("ArtDeco20").setAppinfo("UniversalMediaMaterials prototype").setUrl(new MFStringObject("\"ArtDecoPrototypes.x3d#ArtDeco20\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco20\" \"ArtDecoPrototypes.wrl#ArtDeco20\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco20\"")).setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"))
    .addChild(new ExternProtoDeclareObject().setName("ArtDeco21").setAppinfo("UniversalMediaMaterials prototype").setUrl(new MFStringObject("\"ArtDecoPrototypes.x3d#ArtDeco21\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco21\" \"ArtDecoPrototypes.wrl#ArtDeco21\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco21\"")).setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"))
    .addChild(new ExternProtoDeclareObject().setName("ArtDeco22").setAppinfo("UniversalMediaMaterials prototype").setUrl(new MFStringObject("\"ArtDecoPrototypes.x3d#ArtDeco22\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco22\" \"ArtDecoPrototypes.wrl#ArtDeco22\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco22\"")).setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"))
    .addChild(new ExternProtoDeclareObject().setName("ArtDeco23").setAppinfo("UniversalMediaMaterials prototype").setUrl(new MFStringObject("\"ArtDecoPrototypes.x3d#ArtDeco23\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco23\" \"ArtDecoPrototypes.wrl#ArtDeco23\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco23\"")).setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"))
    .addChild(new ExternProtoDeclareObject().setName("ArtDeco24").setAppinfo("UniversalMediaMaterials prototype").setUrl(new MFStringObject("\"ArtDecoPrototypes.x3d#ArtDeco24\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco24\" \"ArtDecoPrototypes.wrl#ArtDeco24\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco24\"")).setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"))
    .addChild(new ExternProtoDeclareObject().setName("ArtDeco25").setAppinfo("UniversalMediaMaterials prototype").setUrl(new MFStringObject("\"ArtDecoPrototypes.x3d#ArtDeco25\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco25\" \"ArtDecoPrototypes.wrl#ArtDeco25\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco25\"")).setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"))
    .addChild(new ExternProtoDeclareObject().setName("ArtDeco26").setAppinfo("UniversalMediaMaterials prototype").setUrl(new MFStringObject("\"ArtDecoPrototypes.x3d#ArtDeco26\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco26\" \"ArtDecoPrototypes.wrl#ArtDeco26\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco26\"")).setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"))
    .addChild(new ExternProtoDeclareObject().setName("ArtDeco27").setAppinfo("UniversalMediaMaterials prototype").setUrl(new MFStringObject("\"ArtDecoPrototypes.x3d#ArtDeco27\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco27\" \"ArtDecoPrototypes.wrl#ArtDeco27\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco27\"")).setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"))
    .addChild(new ExternProtoDeclareObject().setName("ArtDeco28").setAppinfo("UniversalMediaMaterials prototype").setUrl(new MFStringObject("\"ArtDecoPrototypes.x3d#ArtDeco28\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco28\" \"ArtDecoPrototypes.wrl#ArtDeco28\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco28\"")).setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"))
    .addChild(new ExternProtoDeclareObject().setName("ArtDeco29").setAppinfo("UniversalMediaMaterials prototype").setUrl(new MFStringObject("\"ArtDecoPrototypes.x3d#ArtDeco29\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco29\" \"ArtDecoPrototypes.wrl#ArtDeco29\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco29\"")).setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"))
    .addChild(new ExternProtoDeclareObject().setName("ArtDeco30").setAppinfo("UniversalMediaMaterials prototype").setUrl(new MFStringObject("\"ArtDecoPrototypes.x3d#ArtDeco30\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco30\" \"ArtDecoPrototypes.wrl#ArtDeco30\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco30\"")).setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"))
    .addChild(new ExternProtoDeclareObject().setName("ArtDeco31").setAppinfo("UniversalMediaMaterials prototype").setUrl(new MFStringObject("\"ArtDecoPrototypes.x3d#ArtDeco31\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco31\" \"ArtDecoPrototypes.wrl#ArtDeco31\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco31\"")).setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"))
    .addChild(new ExternProtoDeclareObject().setName("ArtDeco32").setAppinfo("UniversalMediaMaterials prototype").setUrl(new MFStringObject("\"ArtDecoPrototypes.x3d#ArtDeco32\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco32\" \"ArtDecoPrototypes.wrl#ArtDeco32\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco32\"")).setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"))
    .addChild(new ExternProtoDeclareObject().setName("ArtDeco33").setAppinfo("UniversalMediaMaterials prototype").setUrl(new MFStringObject("\"ArtDecoPrototypes.x3d#ArtDeco33\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco33\" \"ArtDecoPrototypes.wrl#ArtDeco33\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco33\"")).setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"))
    .addChild(new ExternProtoDeclareObject().setName("ArtDeco34").setAppinfo("UniversalMediaMaterials prototype").setUrl(new MFStringObject("\"ArtDecoPrototypes.x3d#ArtDeco34\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco34\" \"ArtDecoPrototypes.wrl#ArtDeco34\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco34\"")).setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"))
    .addChild(new GroupObject()
      .addChild(new NavigationInfoObject().setHeadlight(false))
      .addChild(new ViewpointObject("Front").setDescription("Front view").setPosition(0.0,0.0,12.0))
      .addChild(new ViewpointObject("PersRight").setDescription("Low Right").setOrientation(0.74291,0.30772,0.59447,1.2171).setPosition(6.9282,-6.9282,6.9282))
      .addChild(new ViewpointObject("PersLeft").setDescription("Low Left").setPosition(-6.9282,-6.9282,6.9282).setOrientation(0.74291,-0.30772,-0.59447,1.2171))
      .addChild(new ViewpointObject("Back").setDescription("Back view").setPosition(0.0,0.0,-12.0).setOrientation(0.0,1.0,0.0,3.1416))
      .addChild(new TransformObject("Close_travel")
        .addChild(new PositionInterpolatorObject("Close_Mover").setKey(Java.to([0.0,0.25,0.5,0.75,1.0], Java.type("float[]"))).setKeyValue(new MFVec3fObject(Java.to([0.0,2.5,0.0,0.0,0.0,0.0,0.0,-2.5,0.0,0.0,0.0,0.0,0.0,2.5,0.0], Java.type("float[]")))))
        .addChild(new TimeSensorObject("Close_Time").setCycleInterval(12.0).setLoop(true))
        .addChild(new ViewpointObject("Close").setDescription("Close Front").setPosition(0.0,0.0,6.0)))
      .addChild(new DirectionalLightObject().setDirection(1.0,-1.0,-1.0))
      .addChild(new DirectionalLightObject().setDirection(0.0,1.0,-0.5).setIntensity(0.5))
      .addChild(new AnchorObject().setDescription("Back to front view").setUrl(new MFStringObject("\"#Front\""))
        .addChild(new TransformObject().setTranslation(0.0,0.0,-0.5)
          .addChild(new InlineObject().setUrl(new MFStringObject("\"../data/gridBack.json\"")))))
      .addChild(new ViewpointObject("View00").setDescription("ArtDeco00").setPosition(-3.75,3.75,3.0))
      .addChild(new TransformObject().setTranslation(-3.75,3.75,0.0)
        .addChild(new AnchorObject().setDescription("ArtDeco00 view").setUrl(new MFStringObject("\"#View00\""))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject()
              .setMaterial(new ProtoInstanceObject().setName("ArtDeco00")))
            .setGeometry(new SphereObject("Ball").setRadius(0.5))))
        .addChild(new TransformObject().setTranslation(0.0,0.3,0.5)
          .addChild(new AnchorObject().setDescription("ArtDeco00").setParameter(new MFStringObject("\"target=_source\"")).setUrl(new MFStringObject("\"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco00\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco00\""))
            .addChild(new ShapeObject()
              .setAppearance(new AppearanceObject()
                .setMaterial(new MaterialObject("TextMat").setDiffuseColor(1.0,1.0,1.0)))
              .setGeometry(new TextObject().setString(new MFStringObject("\"ArtDeco00\""))
                .setFontStyle(new FontStyleObject("Style").setJustify(new MFStringObject("\"MIDDLE\" \"MIDDLE\"")).setFamily(new MFStringObject("\"SANS\"")).setSize(0.3).setStyle("BOLD")))))))
      .addChild(new ViewpointObject("View01").setDescription("ArtDeco01").setPosition(-2.25,3.75,3.0))
      .addChild(new TransformObject().setTranslation(-2.25,3.75,0.0)
        .addChild(new AnchorObject().setDescription("ArtDeco01 view").setUrl(new MFStringObject("\"#View01\""))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject()
              .setMaterial(new ProtoInstanceObject().setName("ArtDeco01")))
            .setGeometry(new SphereObject().setUSE("Ball"))))
        .addChild(new TransformObject().setTranslation(0.0,0.3,0.5)
          .addChild(new AnchorObject().setDescription("ArtDeco01").setParameter(new MFStringObject("\"target=_source\"")).setUrl(new MFStringObject("\"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco01\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco01\""))
            .addChild(new ShapeObject()
              .setAppearance(new AppearanceObject()
                .setMaterial(new MaterialObject().setUSE("TextMat")))
              .setGeometry(new TextObject().setString(new MFStringObject("\"ArtDeco01\""))
                .setFontStyle(new FontStyleObject().setUSE("Style")))))))
      .addChild(new ViewpointObject("View02").setDescription("ArtDeco02").setPosition(-0.75,3.75,3.0))
      .addChild(new TransformObject().setTranslation(-0.75,3.75,0.0)
        .addChild(new AnchorObject().setDescription("ArtDeco02 view").setUrl(new MFStringObject("\"#View02\""))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject()
              .setMaterial(new ProtoInstanceObject().setName("ArtDeco02")))
            .setGeometry(new SphereObject().setUSE("Ball"))))
        .addChild(new TransformObject().setTranslation(0.0,0.3,0.5)
          .addChild(new AnchorObject().setDescription("ArtDeco02").setParameter(new MFStringObject("\"target=_source\"")).setUrl(new MFStringObject("\"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco02\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco02\""))
            .addChild(new ShapeObject()
              .setAppearance(new AppearanceObject()
                .setMaterial(new MaterialObject().setUSE("TextMat")))
              .setGeometry(new TextObject().setString(new MFStringObject("\"ArtDeco02\""))
                .setFontStyle(new FontStyleObject().setUSE("Style")))))))
      .addChild(new ViewpointObject("View03").setDescription("ArtDeco03").setPosition(0.75,3.75,3.0))
      .addChild(new TransformObject().setTranslation(0.75,3.75,0.0)
        .addChild(new AnchorObject().setDescription("ArtDeco03 view").setUrl(new MFStringObject("\"#View03\""))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject()
              .setMaterial(new ProtoInstanceObject().setName("ArtDeco03")))
            .setGeometry(new SphereObject().setUSE("Ball"))))
        .addChild(new TransformObject().setTranslation(0.0,0.3,0.5)
          .addChild(new AnchorObject().setDescription("ArtDeco03").setParameter(new MFStringObject("\"target=_source\"")).setUrl(new MFStringObject("\"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco03\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco03\""))
            .addChild(new ShapeObject()
              .setAppearance(new AppearanceObject()
                .setMaterial(new MaterialObject().setUSE("TextMat")))
              .setGeometry(new TextObject().setString(new MFStringObject("\"ArtDeco03\""))
                .setFontStyle(new FontStyleObject().setUSE("Style")))))))
      .addChild(new ViewpointObject("View04").setDescription("ArtDeco04").setPosition(2.25,3.75,3.0))
      .addChild(new TransformObject().setTranslation(2.25,3.75,0.0)
        .addChild(new AnchorObject().setDescription("ArtDeco04 view").setUrl(new MFStringObject("\"#View04\""))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject()
              .setMaterial(new ProtoInstanceObject().setName("ArtDeco04")))
            .setGeometry(new SphereObject().setUSE("Ball"))))
        .addChild(new TransformObject().setTranslation(0.0,0.3,0.5)
          .addChild(new AnchorObject().setDescription("ArtDeco04").setParameter(new MFStringObject("\"target=_source\"")).setUrl(new MFStringObject("\"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco04\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco04\""))
            .addChild(new ShapeObject()
              .setAppearance(new AppearanceObject()
                .setMaterial(new MaterialObject().setUSE("TextMat")))
              .setGeometry(new TextObject().setString(new MFStringObject("\"ArtDeco04\""))
                .setFontStyle(new FontStyleObject().setUSE("Style")))))))
      .addChild(new ViewpointObject("View05").setDescription("ArtDeco05").setPosition(3.75,3.75,3.0))
      .addChild(new TransformObject().setTranslation(3.75,3.75,0.0)
        .addChild(new AnchorObject().setDescription("ArtDeco05 view").setUrl(new MFStringObject("\"#View05\""))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject()
              .setMaterial(new ProtoInstanceObject().setName("ArtDeco05")))
            .setGeometry(new SphereObject().setUSE("Ball"))))
        .addChild(new TransformObject().setTranslation(0.0,0.3,0.5)
          .addChild(new AnchorObject().setDescription("ArtDeco05").setParameter(new MFStringObject("\"target=_source\"")).setUrl(new MFStringObject("\"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco05\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco05\""))
            .addChild(new ShapeObject()
              .setAppearance(new AppearanceObject()
                .setMaterial(new MaterialObject().setUSE("TextMat")))
              .setGeometry(new TextObject().setString(new MFStringObject("\"ArtDeco05\""))
                .setFontStyle(new FontStyleObject().setUSE("Style")))))))
      .addChild(new ViewpointObject("View06").setDescription("ArtDeco06").setPosition(-3.75,2.25,3.0))
      .addChild(new TransformObject().setTranslation(-3.75,2.25,0.0)
        .addChild(new AnchorObject().setDescription("ArtDeco06 view").setUrl(new MFStringObject("\"#View06\""))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject()
              .setMaterial(new ProtoInstanceObject().setName("ArtDeco06")))
            .setGeometry(new SphereObject().setUSE("Ball"))))
        .addChild(new TransformObject().setTranslation(0.0,0.3,0.5)
          .addChild(new AnchorObject().setDescription("ArtDeco06").setParameter(new MFStringObject("\"target=_source\"")).setUrl(new MFStringObject("\"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco06\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco06\""))
            .addChild(new ShapeObject()
              .setAppearance(new AppearanceObject()
                .setMaterial(new MaterialObject().setUSE("TextMat")))
              .setGeometry(new TextObject().setString(new MFStringObject("\"ArtDeco06\""))
                .setFontStyle(new FontStyleObject().setUSE("Style")))))))
      .addChild(new ViewpointObject("View07").setDescription("ArtDeco07").setPosition(-2.25,2.25,3.0))
      .addChild(new TransformObject().setTranslation(-2.25,2.25,0.0)
        .addChild(new AnchorObject().setDescription("ArtDeco07 view").setUrl(new MFStringObject("\"#View07\""))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject()
              .setMaterial(new ProtoInstanceObject().setName("ArtDeco07")))
            .setGeometry(new SphereObject().setUSE("Ball"))))
        .addChild(new TransformObject().setTranslation(0.0,0.3,0.5)
          .addChild(new AnchorObject().setDescription("ArtDeco07").setParameter(new MFStringObject("\"target=_source\"")).setUrl(new MFStringObject("\"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco07\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco07\""))
            .addChild(new ShapeObject()
              .setAppearance(new AppearanceObject()
                .setMaterial(new MaterialObject().setUSE("TextMat")))
              .setGeometry(new TextObject().setString(new MFStringObject("\"ArtDeco07\""))
                .setFontStyle(new FontStyleObject().setUSE("Style")))))))
      .addChild(new ViewpointObject("View08").setDescription("ArtDeco08").setPosition(-0.75,2.25,3.0))
      .addChild(new TransformObject().setTranslation(-0.75,2.25,0.0)
        .addChild(new AnchorObject().setDescription("ArtDeco08 view").setUrl(new MFStringObject("\"#View08\""))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject()
              .setMaterial(new ProtoInstanceObject().setName("ArtDeco08")))
            .setGeometry(new SphereObject().setUSE("Ball"))))
        .addChild(new TransformObject().setTranslation(0.0,0.3,0.5)
          .addChild(new AnchorObject().setDescription("ArtDeco08").setParameter(new MFStringObject("\"target=_source\"")).setUrl(new MFStringObject("\"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco08\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco08\""))
            .addChild(new ShapeObject()
              .setAppearance(new AppearanceObject()
                .setMaterial(new MaterialObject().setUSE("TextMat")))
              .setGeometry(new TextObject().setString(new MFStringObject("\"ArtDeco08\""))
                .setFontStyle(new FontStyleObject().setUSE("Style")))))))
      .addChild(new ViewpointObject("View09").setDescription("ArtDeco09").setPosition(0.75,2.25,3.0))
      .addChild(new TransformObject().setTranslation(0.75,2.25,0.0)
        .addChild(new AnchorObject().setDescription("ArtDeco09 view").setUrl(new MFStringObject("\"#View09\""))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject()
              .setMaterial(new ProtoInstanceObject().setName("ArtDeco09")))
            .setGeometry(new SphereObject().setUSE("Ball"))))
        .addChild(new TransformObject().setTranslation(0.0,0.3,0.5)
          .addChild(new AnchorObject().setDescription("ArtDeco09").setParameter(new MFStringObject("\"target=_source\"")).setUrl(new MFStringObject("\"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco09\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco09\""))
            .addChild(new ShapeObject()
              .setAppearance(new AppearanceObject()
                .setMaterial(new MaterialObject().setUSE("TextMat")))
              .setGeometry(new TextObject().setString(new MFStringObject("\"ArtDeco09\""))
                .setFontStyle(new FontStyleObject().setUSE("Style")))))))
      .addChild(new ViewpointObject("View10").setDescription("ArtDeco10").setPosition(2.25,2.25,3.0))
      .addChild(new TransformObject().setTranslation(2.25,2.25,0.0)
        .addChild(new AnchorObject().setDescription("ArtDeco10 view").setUrl(new MFStringObject("\"#View10\""))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject()
              .setMaterial(new ProtoInstanceObject().setName("ArtDeco10")))
            .setGeometry(new SphereObject().setUSE("Ball"))))
        .addChild(new TransformObject().setTranslation(0.0,0.3,0.5)
          .addChild(new AnchorObject().setDescription("ArtDeco10").setParameter(new MFStringObject("\"target=_source\"")).setUrl(new MFStringObject("\"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco10\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco10\""))
            .addChild(new ShapeObject()
              .setAppearance(new AppearanceObject()
                .setMaterial(new MaterialObject().setUSE("TextMat")))
              .setGeometry(new TextObject().setString(new MFStringObject("\"ArtDeco10\""))
                .setFontStyle(new FontStyleObject().setUSE("Style")))))))
      .addChild(new ViewpointObject("View11").setDescription("ArtDeco11").setPosition(3.75,2.25,3.0))
      .addChild(new TransformObject().setTranslation(3.75,2.25,0.0)
        .addChild(new AnchorObject().setDescription("ArtDeco11 view").setUrl(new MFStringObject("\"#View11\""))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject()
              .setMaterial(new ProtoInstanceObject().setName("ArtDeco11")))
            .setGeometry(new SphereObject().setUSE("Ball"))))
        .addChild(new TransformObject().setTranslation(0.0,0.3,0.5)
          .addChild(new AnchorObject().setDescription("ArtDeco11").setParameter(new MFStringObject("\"target=_source\"")).setUrl(new MFStringObject("\"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco11\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco11\""))
            .addChild(new ShapeObject()
              .setAppearance(new AppearanceObject()
                .setMaterial(new MaterialObject().setUSE("TextMat")))
              .setGeometry(new TextObject().setString(new MFStringObject("\"ArtDeco11\""))
                .setFontStyle(new FontStyleObject().setUSE("Style")))))))
      .addChild(new ViewpointObject("View12").setDescription("ArtDeco12").setPosition(-3.75,0.75,3.0))
      .addChild(new TransformObject().setTranslation(-3.75,0.75,0.0)
        .addChild(new AnchorObject().setDescription("ArtDeco12 view").setUrl(new MFStringObject("\"#View12\""))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject()
              .setMaterial(new ProtoInstanceObject().setName("ArtDeco12")))
            .setGeometry(new SphereObject().setUSE("Ball"))))
        .addChild(new TransformObject().setTranslation(0.0,0.3,0.5)
          .addChild(new AnchorObject().setDescription("ArtDeco12").setParameter(new MFStringObject("\"target=_source\"")).setUrl(new MFStringObject("\"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco12\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco12\""))
            .addChild(new ShapeObject()
              .setAppearance(new AppearanceObject()
                .setMaterial(new MaterialObject().setUSE("TextMat")))
              .setGeometry(new TextObject().setString(new MFStringObject("\"ArtDeco12\""))
                .setFontStyle(new FontStyleObject().setUSE("Style")))))))
      .addChild(new ViewpointObject("View13").setDescription("ArtDeco13").setPosition(-2.25,0.75,3.0))
      .addChild(new TransformObject().setTranslation(-2.25,0.75,0.0)
        .addChild(new AnchorObject().setDescription("ArtDeco13 view").setUrl(new MFStringObject("\"#View13\""))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject()
              .setMaterial(new ProtoInstanceObject().setName("ArtDeco13")))
            .setGeometry(new SphereObject().setUSE("Ball"))))
        .addChild(new TransformObject().setTranslation(0.0,0.3,0.5)
          .addChild(new AnchorObject().setDescription("ArtDeco13").setParameter(new MFStringObject("\"target=_source\"")).setUrl(new MFStringObject("\"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco3\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco13\""))
            .addChild(new ShapeObject()
              .setAppearance(new AppearanceObject()
                .setMaterial(new MaterialObject().setUSE("TextMat")))
              .setGeometry(new TextObject().setString(new MFStringObject("\"ArtDeco13\""))
                .setFontStyle(new FontStyleObject().setUSE("Style")))))))
      .addChild(new ViewpointObject("View14").setDescription("ArtDeco14").setPosition(-0.75,0.75,3.0))
      .addChild(new TransformObject().setTranslation(-0.75,0.75,0.0)
        .addChild(new AnchorObject().setDescription("ArtDeco14 view").setUrl(new MFStringObject("\"#View14\""))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject()
              .setMaterial(new ProtoInstanceObject().setName("ArtDeco14")))
            .setGeometry(new SphereObject().setUSE("Ball"))))
        .addChild(new TransformObject().setTranslation(0.0,0.3,0.5)
          .addChild(new AnchorObject().setDescription("ArtDeco14").setParameter(new MFStringObject("\"target=_source\"")).setUrl(new MFStringObject("\"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco4\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco14\""))
            .addChild(new ShapeObject()
              .setAppearance(new AppearanceObject()
                .setMaterial(new MaterialObject().setUSE("TextMat")))
              .setGeometry(new TextObject().setString(new MFStringObject("\"ArtDeco14\""))
                .setFontStyle(new FontStyleObject().setUSE("Style")))))))
      .addChild(new ViewpointObject("View15").setDescription("ArtDeco15").setPosition(0.75,0.75,3.0))
      .addChild(new TransformObject().setTranslation(0.75,0.75,0.0)
        .addChild(new AnchorObject().setDescription("ArtDeco15 view").setUrl(new MFStringObject("\"#View15\""))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject()
              .setMaterial(new ProtoInstanceObject().setName("ArtDeco15")))
            .setGeometry(new SphereObject().setUSE("Ball"))))
        .addChild(new TransformObject().setTranslation(0.0,0.3,0.5)
          .addChild(new AnchorObject().setDescription("ArtDeco15").setParameter(new MFStringObject("\"target=_source\"")).setUrl(new MFStringObject("\"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco5\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco15\""))
            .addChild(new ShapeObject()
              .setAppearance(new AppearanceObject()
                .setMaterial(new MaterialObject().setUSE("TextMat")))
              .setGeometry(new TextObject().setString(new MFStringObject("\"ArtDeco15\""))
                .setFontStyle(new FontStyleObject().setUSE("Style")))))))
      .addChild(new ViewpointObject("View16").setDescription("ArtDeco16").setPosition(2.25,0.75,3.0))
      .addChild(new TransformObject().setTranslation(2.25,0.75,0.0)
        .addChild(new AnchorObject().setDescription("ArtDeco16 view").setUrl(new MFStringObject("\"#View16\""))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject()
              .setMaterial(new ProtoInstanceObject().setName("ArtDeco16")))
            .setGeometry(new SphereObject().setUSE("Ball"))))
        .addChild(new TransformObject().setTranslation(0.0,0.3,0.5)
          .addChild(new AnchorObject().setDescription("ArtDeco16").setParameter(new MFStringObject("\"target=_source\"")).setUrl(new MFStringObject("\"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco16\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco16\""))
            .addChild(new ShapeObject()
              .setAppearance(new AppearanceObject()
                .setMaterial(new MaterialObject().setUSE("TextMat")))
              .setGeometry(new TextObject().setString(new MFStringObject("\"ArtDeco16\""))
                .setFontStyle(new FontStyleObject().setUSE("Style")))))))
      .addChild(new ViewpointObject("View17").setDescription("ArtDeco17").setPosition(3.75,0.75,3.0))
      .addChild(new TransformObject().setTranslation(3.75,0.75,0.0)
        .addChild(new AnchorObject().setDescription("ArtDeco17 view").setUrl(new MFStringObject("\"#View17\""))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject()
              .setMaterial(new ProtoInstanceObject().setName("ArtDeco17")))
            .setGeometry(new SphereObject().setUSE("Ball"))))
        .addChild(new TransformObject().setTranslation(0.0,0.3,0.5)
          .addChild(new AnchorObject().setDescription("ArtDeco17").setParameter(new MFStringObject("\"target=_source\"")).setUrl(new MFStringObject("\"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco7\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco17\""))
            .addChild(new ShapeObject()
              .setAppearance(new AppearanceObject()
                .setMaterial(new MaterialObject().setUSE("TextMat")))
              .setGeometry(new TextObject().setString(new MFStringObject("\"ArtDeco17\""))
                .setFontStyle(new FontStyleObject().setUSE("Style")))))))
      .addChild(new ViewpointObject("View18").setDescription("ArtDeco18").setPosition(-3.75,-0.75,3.0))
      .addChild(new TransformObject().setTranslation(-3.75,-0.75,0.0)
        .addChild(new AnchorObject().setDescription("ArtDeco18 view").setUrl(new MFStringObject("\"#View18\""))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject()
              .setMaterial(new ProtoInstanceObject().setName("ArtDeco18")))
            .setGeometry(new SphereObject().setUSE("Ball"))))
        .addChild(new TransformObject().setTranslation(0.0,0.3,0.5)
          .addChild(new AnchorObject().setDescription("ArtDeco18").setParameter(new MFStringObject("\"target=_source\"")).setUrl(new MFStringObject("\"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco18\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco18\""))
            .addChild(new ShapeObject()
              .setAppearance(new AppearanceObject()
                .setMaterial(new MaterialObject().setUSE("TextMat")))
              .setGeometry(new TextObject().setString(new MFStringObject("\"ArtDeco18\""))
                .setFontStyle(new FontStyleObject().setUSE("Style")))))))
      .addChild(new ViewpointObject("View19").setDescription("ArtDeco19").setPosition(-2.25,-0.75,3.0))
      .addChild(new TransformObject().setTranslation(-2.25,-0.75,0.0)
        .addChild(new AnchorObject().setDescription("ArtDeco19 view").setUrl(new MFStringObject("\"#View19\""))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject()
              .setMaterial(new ProtoInstanceObject().setName("ArtDeco19")))
            .setGeometry(new SphereObject().setUSE("Ball"))))
        .addChild(new TransformObject().setTranslation(0.0,0.3,0.5)
          .addChild(new AnchorObject().setDescription("ArtDeco19").setParameter(new MFStringObject("\"target=_source\"")).setUrl(new MFStringObject("\"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco9\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco19\""))
            .addChild(new ShapeObject()
              .setAppearance(new AppearanceObject()
                .setMaterial(new MaterialObject().setUSE("TextMat")))
              .setGeometry(new TextObject().setString(new MFStringObject("\"ArtDeco19\""))
                .setFontStyle(new FontStyleObject().setUSE("Style")))))))
      .addChild(new ViewpointObject("View20").setDescription("ArtDeco20").setPosition(-0.75,-0.75,3.0))
      .addChild(new TransformObject().setTranslation(-0.75,-0.75,0.0)
        .addChild(new AnchorObject().setDescription("ArtDeco20 view").setUrl(new MFStringObject("\"#View20\""))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject()
              .setMaterial(new ProtoInstanceObject().setName("ArtDeco20")))
            .setGeometry(new SphereObject().setUSE("Ball"))))
        .addChild(new TransformObject().setTranslation(0.0,0.3,0.5)
          .addChild(new AnchorObject().setDescription("ArtDeco20").setParameter(new MFStringObject("\"target=_source\"")).setUrl(new MFStringObject("\"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco20\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco20\""))
            .addChild(new ShapeObject()
              .setAppearance(new AppearanceObject()
                .setMaterial(new MaterialObject().setUSE("TextMat")))
              .setGeometry(new TextObject().setString(new MFStringObject("\"ArtDeco20\""))
                .setFontStyle(new FontStyleObject().setUSE("Style")))))))
      .addChild(new ViewpointObject("View21").setDescription("ArtDeco21").setPosition(0.75,-0.75,3.0))
      .addChild(new TransformObject().setTranslation(0.75,-0.75,0.0)
        .addChild(new AnchorObject().setDescription("ArtDeco21 view").setUrl(new MFStringObject("\"#View21\""))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject()
              .setMaterial(new ProtoInstanceObject().setName("ArtDeco21")))
            .setGeometry(new SphereObject().setUSE("Ball"))))
        .addChild(new TransformObject().setTranslation(0.0,0.3,0.5)
          .addChild(new AnchorObject().setDescription("ArtDeco21").setParameter(new MFStringObject("\"target=_source\"")).setUrl(new MFStringObject("\"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco21\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco21\""))
            .addChild(new ShapeObject()
              .setAppearance(new AppearanceObject()
                .setMaterial(new MaterialObject().setUSE("TextMat")))
              .setGeometry(new TextObject().setString(new MFStringObject("\"ArtDeco21\""))
                .setFontStyle(new FontStyleObject().setUSE("Style")))))))
      .addChild(new ViewpointObject("View22").setDescription("ArtDeco22").setPosition(2.25,-0.75,3.0))
      .addChild(new TransformObject().setTranslation(2.25,-0.75,0.0)
        .addChild(new AnchorObject().setDescription("ArtDeco22 view").setUrl(new MFStringObject("\"#View22\""))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject()
              .setMaterial(new ProtoInstanceObject().setName("ArtDeco22")))
            .setGeometry(new SphereObject().setUSE("Ball"))))
        .addChild(new TransformObject().setTranslation(0.0,0.3,0.5)
          .addChild(new AnchorObject().setDescription("ArtDeco22").setParameter(new MFStringObject("\"target=_source\"")).setUrl(new MFStringObject("\"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco22\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco22\""))
            .addChild(new ShapeObject()
              .setAppearance(new AppearanceObject()
                .setMaterial(new MaterialObject().setUSE("TextMat")))
              .setGeometry(new TextObject().setString(new MFStringObject("\"ArtDeco22\""))
                .setFontStyle(new FontStyleObject().setUSE("Style")))))))
      .addChild(new ViewpointObject("View23").setDescription("ArtDeco23").setPosition(3.75,-0.75,3.0))
      .addChild(new TransformObject().setTranslation(3.75,-0.75,0.0)
        .addChild(new AnchorObject().setDescription("ArtDeco23 view").setUrl(new MFStringObject("\"#View23\""))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject()
              .setMaterial(new ProtoInstanceObject().setName("ArtDeco23")))
            .setGeometry(new SphereObject().setUSE("Ball"))))
        .addChild(new TransformObject().setTranslation(0.0,0.3,0.5)
          .addChild(new AnchorObject().setDescription("ArtDeco23").setParameter(new MFStringObject("\"target=_source\"")).setUrl(new MFStringObject("\"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco23\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco23\""))
            .addChild(new ShapeObject()
              .setAppearance(new AppearanceObject()
                .setMaterial(new MaterialObject().setUSE("TextMat")))
              .setGeometry(new TextObject().setString(new MFStringObject("\"ArtDeco23\""))
                .setFontStyle(new FontStyleObject().setUSE("Style")))))))
      .addChild(new ViewpointObject("View24").setDescription("ArtDeco24").setPosition(-3.75,-2.25,3.0))
      .addChild(new TransformObject().setTranslation(-3.75,-2.25,0.0)
        .addChild(new AnchorObject().setDescription("ArtDeco24 view").setUrl(new MFStringObject("\"#View24\""))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject()
              .setMaterial(new ProtoInstanceObject().setName("ArtDeco24")))
            .setGeometry(new SphereObject().setUSE("Ball"))))
        .addChild(new TransformObject().setTranslation(0.0,0.3,0.5)
          .addChild(new AnchorObject().setDescription("ArtDeco24").setParameter(new MFStringObject("\"target=_source\"")).setUrl(new MFStringObject("\"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco24\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco24\""))
            .addChild(new ShapeObject()
              .setAppearance(new AppearanceObject()
                .setMaterial(new MaterialObject().setUSE("TextMat")))
              .setGeometry(new TextObject().setString(new MFStringObject("\"ArtDeco24\""))
                .setFontStyle(new FontStyleObject().setUSE("Style")))))))
      .addChild(new ViewpointObject("View25").setDescription("ArtDeco25").setPosition(-2.25,-2.25,3.0))
      .addChild(new TransformObject().setTranslation(-2.25,-2.25,0.0)
        .addChild(new AnchorObject().setDescription("ArtDeco25 view").setUrl(new MFStringObject("\"#View25\""))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject()
              .setMaterial(new ProtoInstanceObject().setName("ArtDeco25")))
            .setGeometry(new SphereObject().setUSE("Ball"))))
        .addChild(new TransformObject().setTranslation(0.0,0.3,0.5)
          .addChild(new AnchorObject().setDescription("ArtDeco25").setParameter(new MFStringObject("\"target=_source\"")).setUrl(new MFStringObject("\"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco25\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco25\""))
            .addChild(new ShapeObject()
              .setAppearance(new AppearanceObject()
                .setMaterial(new MaterialObject().setUSE("TextMat")))
              .setGeometry(new TextObject().setString(new MFStringObject("\"ArtDeco25\""))
                .setFontStyle(new FontStyleObject().setUSE("Style")))))))
      .addChild(new ViewpointObject("View26").setDescription("ArtDeco26").setPosition(-0.75,-2.25,3.0))
      .addChild(new TransformObject().setTranslation(-0.75,-2.25,0.0)
        .addChild(new AnchorObject().setDescription("ArtDeco26 view").setUrl(new MFStringObject("\"#View26\""))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject()
              .setMaterial(new ProtoInstanceObject().setName("ArtDeco26")))
            .setGeometry(new SphereObject().setUSE("Ball"))))
        .addChild(new TransformObject().setTranslation(0.0,0.3,0.5)
          .addChild(new AnchorObject().setDescription("ArtDeco26").setParameter(new MFStringObject("\"target=_source\"")).setUrl(new MFStringObject("\"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco26\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco26\""))
            .addChild(new ShapeObject()
              .setAppearance(new AppearanceObject()
                .setMaterial(new MaterialObject().setUSE("TextMat")))
              .setGeometry(new TextObject().setString(new MFStringObject("\"ArtDeco26\""))
                .setFontStyle(new FontStyleObject().setUSE("Style")))))))
      .addChild(new ViewpointObject("View27").setDescription("ArtDeco27").setPosition(0.75,-2.25,3.0))
      .addChild(new TransformObject().setTranslation(0.75,-2.25,0.0)
        .addChild(new AnchorObject().setDescription("ArtDeco27 view").setUrl(new MFStringObject("\"#View27\""))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject()
              .setMaterial(new ProtoInstanceObject().setName("ArtDeco27")))
            .setGeometry(new SphereObject().setUSE("Ball"))))
        .addChild(new TransformObject().setTranslation(0.0,0.3,0.5)
          .addChild(new AnchorObject().setDescription("ArtDeco27").setParameter(new MFStringObject("\"target=_source\"")).setUrl(new MFStringObject("\"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco27\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco27\""))
            .addChild(new ShapeObject()
              .setAppearance(new AppearanceObject()
                .setMaterial(new MaterialObject().setUSE("TextMat")))
              .setGeometry(new TextObject().setString(new MFStringObject("\"ArtDeco27\""))
                .setFontStyle(new FontStyleObject().setUSE("Style")))))))
      .addChild(new ViewpointObject("View28").setDescription("ArtDeco28").setPosition(2.25,-2.25,3.0))
      .addChild(new TransformObject().setTranslation(2.25,-2.25,0.0)
        .addChild(new AnchorObject().setDescription("ArtDeco28 view").setUrl(new MFStringObject("\"#View28\""))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject()
              .setMaterial(new ProtoInstanceObject().setName("ArtDeco28")))
            .setGeometry(new SphereObject().setUSE("Ball"))))
        .addChild(new TransformObject().setTranslation(0.0,0.3,0.5)
          .addChild(new AnchorObject().setDescription("ArtDeco28").setParameter(new MFStringObject("\"target=_source\"")).setUrl(new MFStringObject("\"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco28\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco28\""))
            .addChild(new ShapeObject()
              .setAppearance(new AppearanceObject()
                .setMaterial(new MaterialObject().setUSE("TextMat")))
              .setGeometry(new TextObject().setString(new MFStringObject("\"ArtDeco28\""))
                .setFontStyle(new FontStyleObject().setUSE("Style")))))))
      .addChild(new ViewpointObject("View29").setDescription("ArtDeco29").setPosition(3.75,-2.25,3.0))
      .addChild(new TransformObject().setTranslation(3.75,-2.25,0.0)
        .addChild(new AnchorObject().setDescription("ArtDeco29 view").setUrl(new MFStringObject("\"#View29\""))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject()
              .setMaterial(new ProtoInstanceObject().setName("ArtDeco29")))
            .setGeometry(new SphereObject().setUSE("Ball"))))
        .addChild(new TransformObject().setTranslation(0.0,0.3,0.5)
          .addChild(new AnchorObject().setDescription("ArtDeco29").setParameter(new MFStringObject("\"target=_source\"")).setUrl(new MFStringObject("\"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco29\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco29\""))
            .addChild(new ShapeObject()
              .setAppearance(new AppearanceObject()
                .setMaterial(new MaterialObject().setUSE("TextMat")))
              .setGeometry(new TextObject().setString(new MFStringObject("\"ArtDeco29\""))
                .setFontStyle(new FontStyleObject().setUSE("Style")))))))
      .addChild(new ViewpointObject("View30").setDescription("ArtDeco30").setPosition(-3.75,-3.75,3.0))
      .addChild(new TransformObject().setTranslation(-3.75,-3.75,0.0)
        .addChild(new AnchorObject().setDescription("ArtDeco30 view").setUrl(new MFStringObject("\"#View30\""))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject()
              .setMaterial(new ProtoInstanceObject().setName("ArtDeco30")))
            .setGeometry(new SphereObject().setUSE("Ball"))))
        .addChild(new TransformObject().setTranslation(0.0,0.3,0.5)
          .addChild(new AnchorObject().setDescription("ArtDeco30").setParameter(new MFStringObject("\"target=_source\"")).setUrl(new MFStringObject("\"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco30\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco30\""))
            .addChild(new ShapeObject()
              .setAppearance(new AppearanceObject()
                .setMaterial(new MaterialObject().setUSE("TextMat")))
              .setGeometry(new TextObject().setString(new MFStringObject("\"ArtDeco30\""))
                .setFontStyle(new FontStyleObject().setUSE("Style")))))))
      .addChild(new ViewpointObject("View31").setDescription("ArtDeco31").setPosition(-2.25,-3.75,3.0))
      .addChild(new TransformObject().setTranslation(-2.25,-3.75,0.0)
        .addChild(new AnchorObject().setDescription("ArtDeco31 view").setUrl(new MFStringObject("\"#View31\""))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject()
              .setMaterial(new ProtoInstanceObject().setName("ArtDeco31")))
            .setGeometry(new SphereObject().setUSE("Ball"))))
        .addChild(new TransformObject().setTranslation(0.0,0.3,0.5)
          .addChild(new AnchorObject().setDescription("ArtDeco31").setParameter(new MFStringObject("\"target=_source\"")).setUrl(new MFStringObject("\"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco31\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco31\""))
            .addChild(new ShapeObject()
              .setAppearance(new AppearanceObject()
                .setMaterial(new MaterialObject().setUSE("TextMat")))
              .setGeometry(new TextObject().setString(new MFStringObject("\"ArtDeco31\""))
                .setFontStyle(new FontStyleObject().setUSE("Style")))))))
      .addChild(new ViewpointObject("View32").setDescription("ArtDeco32").setPosition(-0.75,-3.75,3.0))
      .addChild(new TransformObject().setTranslation(-0.75,-3.75,0.0)
        .addChild(new AnchorObject().setDescription("ArtDeco32 view").setUrl(new MFStringObject("\"#View32\""))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject()
              .setMaterial(new ProtoInstanceObject().setName("ArtDeco32")))
            .setGeometry(new SphereObject().setUSE("Ball"))))
        .addChild(new TransformObject().setTranslation(0.0,0.3,0.5)
          .addChild(new AnchorObject().setDescription("ArtDeco32").setParameter(new MFStringObject("\"target=_source\"")).setUrl(new MFStringObject("\"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco32\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco32\""))
            .addChild(new ShapeObject()
              .setAppearance(new AppearanceObject()
                .setMaterial(new MaterialObject().setUSE("TextMat")))
              .setGeometry(new TextObject().setString(new MFStringObject("\"ArtDeco32\""))
                .setFontStyle(new FontStyleObject().setUSE("Style")))))))
      .addChild(new ViewpointObject("View33").setDescription("ArtDeco33").setPosition(0.75,-3.75,3.0))
      .addChild(new TransformObject().setTranslation(0.75,-3.75,0.0)
        .addChild(new AnchorObject().setDescription("ArtDeco33 view").setUrl(new MFStringObject("\"#View33\""))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject()
              .setMaterial(new ProtoInstanceObject().setName("ArtDeco33")))
            .setGeometry(new SphereObject().setUSE("Ball"))))
        .addChild(new TransformObject().setTranslation(0.0,0.3,0.5)
          .addChild(new AnchorObject().setDescription("ArtDeco33").setParameter(new MFStringObject("\"target=_source\"")).setUrl(new MFStringObject("\"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco33\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco33\""))
            .addChild(new ShapeObject()
              .setAppearance(new AppearanceObject()
                .setMaterial(new MaterialObject().setUSE("TextMat")))
              .setGeometry(new TextObject().setString(new MFStringObject("\"ArtDeco33\""))
                .setFontStyle(new FontStyleObject().setUSE("Style")))))))
      .addChild(new ViewpointObject("View34").setDescription("ArtDeco34").setPosition(2.25,-3.75,3.0))
      .addChild(new TransformObject().setTranslation(2.25,-3.75,0.0)
        .addChild(new AnchorObject().setDescription("ArtDeco34 view").setUrl(new MFStringObject("\"#View34\""))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject()
              .setMaterial(new ProtoInstanceObject().setName("ArtDeco34")))
            .setGeometry(new SphereObject().setUSE("Ball"))))
        .addChild(new TransformObject().setTranslation(0.0,0.3,0.5)
          .addChild(new AnchorObject().setDescription("ArtDeco34").setParameter(new MFStringObject("\"target=_source\"")).setUrl(new MFStringObject("\"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco34\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco34\""))
            .addChild(new ShapeObject()
              .setAppearance(new AppearanceObject()
                .setMaterial(new MaterialObject().setUSE("TextMat")))
              .setGeometry(new TextObject().setString(new MFStringObject("\"ArtDeco34\""))
                .setFontStyle(new FontStyleObject().setUSE("Style"))))))))
    .addChild(new ROUTEObject().setFromNode("Close_Time").setFromField("fraction_changed").setToNode("Close_Mover").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("Close_Mover").setFromField("value_changed").setToNode("Close_travel").setToField("set_translation")));
  },
  // end of initialize() method


  /** Provide a shallow copy of the X3D model.
   * @return NeedClassName model
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
		var testObject = new NeedClassName();
		print ("NeedClassName execution self-validation test results: " + testObject.validateSelf());
	}
}
new NeedClassName().main();