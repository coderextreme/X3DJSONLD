load('X3Dautoclass.js');

// Javadoc annotations follow, see below for source.
/**
 * <p> Prototype declarations defining values for X3D/VRML materials, originally converted from SGI's Open Inventor material examples. </p>
 <p> Related links: <a href="../../../UniversalMediaMaterials/NeedClassName.java">NeedClassName.java</a> source, <a href="../../../UniversalMediaMaterials/ArtDecoPrototypesIndex.html" target="_top">ArtDecoPrototypes catalog page</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a> and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;" summary="Scene Metadata">
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="../../../UniversalMediaMaterials/ArtDecoPrototypes.x3d">ArtDecoPrototypes.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> Prototype declarations defining values for X3D/VRML materials, originally converted from SGI's Open Inventor material examples. </td>
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
			<td> <a href="https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d" target="_blank">https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d</a> </td>
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

	/** Large attribute array: Text string field, scene-graph level=5, element #121, 21 total values */
	this.Text_5_121_string = new MFStringObject(new MFStringObject("\"ArtDecoExamples.x3d\" \"is a Materials Prototype declaration file.\" \"\" \"For an example scene using these node,\" \"click this text and view\" \"ArtDecoExamples.x3d\""));
  this.x3dModel = new X3DObject().setProfile("Immersive").setVersion("3.0")
  .setHead(new headObject()
    .addMeta(new metaObject().setName("title").setContent("ArtDecoPrototypes.x3d"))
    .addMeta(new metaObject().setName("description").setContent("Prototype declarations defining values for X3D/VRML materials, originally converted from SGI's Open Inventor material examples."))
    .addMeta(new metaObject().setName("creator").setContent("David Roussel"))
    .addMeta(new metaObject().setName("translator").setContent("James Harney, Don Brutzman NPS"))
    .addMeta(new metaObject().setName("created").setContent("7 April 2002"))
    .addMeta(new metaObject().setName("modified").setContent("20 October 2019"))
    .addMeta(new metaObject().setName("reference").setContent("http://vrmlstuff.free.fr/materials"))
    .addMeta(new metaObject().setName("subject").setContent("Universal Media Material Library"))
    .addMeta(new metaObject().setName("identifier").setContent("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d"))
    .addMeta(new metaObject().setName("generator").setContent("Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html"))
    .addMeta(new metaObject().setName("license").setContent("../license.html")))
  .setScene(new SceneObject()
    .addChild(new WorldInfoObject().setTitle("ArtDecoPrototypes.x3d"))
    .addChild(new ProtoDeclareObject().setName("ArtDeco00").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials")
      .setProtoBody(new ProtoBodyObject()
        .addChild(new MaterialObject().setShininess(0.127273).setAmbientIntensity(0.25).setSpecularColor(0.276305,0.11431,0.139857).setDiffuseColor(0.282435,0.085159,0.134462))))
    .addChild(new ProtoDeclareObject().setName("ArtDeco01").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials")
      .setProtoBody(new ProtoBodyObject()
        .addChild(new MaterialObject().setShininess(0.071429).setSpecularColor(0.122449,0.050035,0.050035).setAmbientIntensity(0.254777).setDiffuseColor(0.685208,0.134679,0.332385))))
    .addChild(new ProtoDeclareObject().setName("ArtDeco02").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials")
      .addComments(" computed conversion ambientIntensity=1.745282, normalized to 1.0 ")
      .setProtoBody(new ProtoBodyObject()
        .addChild(new MaterialObject().setDiffuseColor(0.536861,0.0529,0.245479).setSpecularColor(0.805292,0.765198,0.747416).setShininess(0.832432).setAmbientIntensity(1.0))))
    .addChild(new ProtoDeclareObject().setName("ArtDeco03").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials")
      .setProtoBody(new ProtoBodyObject()
        .addChild(new MaterialObject().setAmbientIntensity(0.248649).setSpecularColor(0.686486,0.396903,0.419275).setShininess(0.902703).setDiffuseColor(1.0,0.452381,0.40339))))
    .addChild(new ProtoDeclareObject().setName("ArtDeco04").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials")
      .setProtoBody(new ProtoBodyObject()
        .addChild(new MaterialObject().setAmbientIntensity(0.25).setSpecularColor(0.345455,0.345455,0.345455).setShininess(0.69697).setDiffuseColor(0.748016,0.298362,0.342624))))
    .addChild(new ProtoDeclareObject().setName("ArtDeco05").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials")
      .setProtoBody(new ProtoBodyObject()
        .addChild(new MaterialObject().setShininess(0.018182).setSpecularColor(0.072727,0.021705,0.010732).setAmbientIntensity(0.24359).setDiffuseColor(0.945455,0.318988,0.321717))))
    .addChild(new ProtoDeclareObject().setName("ArtDeco06").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials")
      .setProtoBody(new ProtoBodyObject()
        .addChild(new MaterialObject().setDiffuseColor(0.228655,0.195513,0.425484).setAmbientIntensity(0.25946).setSpecularColor(0.324504,0.404255,0.404255).setShininess(0.542553))))
    .addChild(new ProtoDeclareObject().setName("ArtDeco07").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials")
      .setProtoBody(new ProtoBodyObject()
        .addChild(new MaterialObject().setShininess(0.133333).setDiffuseColor(0.200348,0.100857,0.320833).setSpecularColor(0.311358,0.387879,0.387879).setAmbientIntensity(0.333333))))
    .addChild(new ProtoDeclareObject().setName("ArtDeco08").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials")
      .setProtoBody(new ProtoBodyObject()
        .addChild(new MaterialObject().setAmbientIntensity(0.242424).setSpecularColor(0.290909,0.290909,0.290909).setDiffuseColor(0.330519,0.3389,0.6).setShininess(0.787879))))
    .addChild(new ProtoDeclareObject().setName("ArtDeco09").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials")
      .setProtoBody(new ProtoBodyObject()
        .addChild(new MaterialObject().setShininess(0.133333).setDiffuseColor(0.237059,0.096273,0.215625).setSpecularColor(0.311358,0.387879,0.387879).setAmbientIntensity(0.333333))))
    .addChild(new ProtoDeclareObject().setName("ArtDeco10").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials")
      .setProtoBody(new ProtoBodyObject()
        .addChild(new MaterialObject().setShininess(0.072727).setAmbientIntensity(0.242425).setDiffuseColor(0.304,0.09025,0.207364).setSpecularColor(0.6665,0.579046,0.830303))))
    .addChild(new ProtoDeclareObject().setName("ArtDeco11").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials")
      .setProtoBody(new ProtoBodyObject()
        .addChild(new MaterialObject().setEmissiveColor(0.010638,0.010638,0.010638).setShininess(0.021277).setSpecularColor(0.198631,0.075403,0.138803).setAmbientIntensity(0.258928).setDiffuseColor(0.335631,0.207672,0.238304))))
    .addChild(new ProtoDeclareObject().setName("ArtDeco12").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials")
      .setProtoBody(new ProtoBodyObject()
        .addChild(new MaterialObject().setShininess(0.076531).setSpecularColor(0.193878,0.029416,0.029416).setAmbientIntensity(0.240838).setDiffuseColor(0.876873,0.14715,0.00856))))
    .addChild(new ProtoDeclareObject().setName("ArtDeco13").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials")
      .setProtoBody(new ProtoBodyObject()
        .addChild(new MaterialObject().setAmbientIntensity(0.25).setShininess(0.551515).setSpecularColor(0.62904,0.194211,0.033663).setDiffuseColor(0.794445,0.249425,0.0))))
    .addChild(new ProtoDeclareObject().setName("ArtDeco14").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials")
      .setProtoBody(new ProtoBodyObject()
        .addChild(new MaterialObject().setAmbientIntensity(0.25).setDiffuseColor(0.510609,0.17264,0.059872).setSpecularColor(0.533333,0.533333,0.533333).setShininess(0.933333))))
    .addChild(new ProtoDeclareObject().setName("ArtDeco15").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials")
      .setProtoBody(new ProtoBodyObject()
        .addChild(new MaterialObject().setShininess(0.12766).setAmbientIntensity(0.255814).setSpecularColor(0.345745,0.143066,0.0).setDiffuseColor(0.914894,0.444404,0.348914))))
    .addChild(new ProtoDeclareObject().setName("ArtDeco16").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials")
      .setProtoBody(new ProtoBodyObject()
        .addChild(new MaterialObject().setAmbientIntensity(0.240838).setShininess(0.80102).setSpecularColor(0.816327,0.278677,0.278677).setDiffuseColor(0.876873,0.323147,0.199564))))
    .addChild(new ProtoDeclareObject().setName("ArtDeco17").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials")
      .setProtoBody(new ProtoBodyObject()
        .addChild(new MaterialObject().setAmbientIntensity(0.242424).setDiffuseColor(0.515625,0.315496,0.252441).setSpecularColor(0.533333,0.533333,0.533333).setShininess(0.933333))))
    .addChild(new ProtoDeclareObject().setName("ArtDeco18").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials")
      .setProtoBody(new ProtoBodyObject()
        .addChild(new MaterialObject().setSpecularColor(0.0,0.311074,0.357143).setDiffuseColor(0.0,0.346939,0.253624).setAmbientIntensity(0.264706).setShininess(0.316327))))
    .addChild(new ProtoDeclareObject().setName("ArtDeco19").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials")
      .setProtoBody(new ProtoBodyObject()
        .addChild(new MaterialObject().setDiffuseColor(0.0,0.251004,0.239248).setShininess(0.060606).setSpecularColor(0.177935,0.249369,0.229278).setAmbientIntensity(0.259259))))
    .addChild(new ProtoDeclareObject().setName("ArtDeco20").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials")
      .setProtoBody(new ProtoBodyObject()
        .addChild(new MaterialObject().setSpecularColor(0.200464,0.300145,0.293518).setDiffuseColor(0.228298,0.385771,0.186794).setAmbientIntensity(0.24).setShininess(0.393939))))
    .addChild(new ProtoDeclareObject().setName("ArtDeco21").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials")
      .setProtoBody(new ProtoBodyObject()
        .addChild(new MaterialObject().setAmbientIntensity(0.25).setDiffuseColor(0.315389,0.544,0.258052).setSpecularColor(0.456,0.456,0.456).setShininess(0.509389))))
    .addChild(new ProtoDeclareObject().setName("ArtDeco22").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials")
      .setProtoBody(new ProtoBodyObject()
        .addChild(new MaterialObject().setShininess(0.086735).setSpecularColor(0.209184,0.113842,0.111328).setAmbientIntensity(0.246032).setDiffuseColor(0.251104,0.312562,0.201724))))
    .addChild(new ProtoDeclareObject().setName("ArtDeco23").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials")
      .setProtoBody(new ProtoBodyObject()
        .addChild(new MaterialObject().setAmbientIntensity(0.242424).setDiffuseColor(0.392348,0.456,0.417708).setSpecularColor(0.533333,0.533333,0.533333).setShininess(0.933333))))
    .addChild(new ProtoDeclareObject().setName("ArtDeco24").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials")
      .setProtoBody(new ProtoBodyObject()
        .addChild(new MaterialObject().setAmbientIntensity(0.253968).setSpecularColor(0.872449,0.247119,0.254214).setShininess(1.0).setDiffuseColor(1.0,0.854922,0.0))))
    .addChild(new ProtoDeclareObject().setName("ArtDeco25").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials")
      .setProtoBody(new ProtoBodyObject()
        .addChild(new MaterialObject().setAmbientIntensity(0.25641).setShininess(0.397959).setDiffuseColor(0.795918,0.505869,0.093315).setSpecularColor(0.923469,0.428866,0.006369))))
    .addChild(new ProtoDeclareObject().setName("ArtDeco26").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials")
      .addComments(" computed conversion ambientIntensity=2.226234, normalized to 1.0 ")
      .setProtoBody(new ProtoBodyObject()
        .addChild(new MaterialObject().setShininess(0.096939).setSpecularColor(0.311224,0.25183,0.133042).setDiffuseColor(0.331633,0.296582,0.279057).setAmbientIntensity(1.0))))
    .addChild(new ProtoDeclareObject().setName("ArtDeco27").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials")
      .setProtoBody(new ProtoBodyObject()
        .addChild(new MaterialObject().setShininess(0.048649).setSpecularColor(0.212121,0.107475,0.0).setAmbientIntensity(0.263158).setDiffuseColor(0.345455,0.163262,0.122622))))
    .addChild(new ProtoDeclareObject().setName("ArtDeco28").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials")
      .setProtoBody(new ProtoBodyObject()
        .addChild(new MaterialObject().setShininess(0.09697).setAmbientIntensity(0.240506).setDiffuseColor(0.277281,0.104336,0.0799).setSpecularColor(0.305587,0.141916,0.270572))))
    .addChild(new ProtoDeclareObject().setName("ArtDeco29").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials")
      .setProtoBody(new ProtoBodyObject()
        .addChild(new MaterialObject().setShininess(0.045918).setDiffuseColor(0.087034,0.025888,0.0).setAmbientIntensity(0.215686).setSpecularColor(0.224138,0.104091,0.104091))))
    .addChild(new ProtoDeclareObject().setName("ArtDeco30").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials")
      .setProtoBody(new ProtoBodyObject()
        .addChild(new MaterialObject().setAmbientIntensity(0.0).setDiffuseColor(0.0,0.0,0.0).setShininess(0.081633).setSpecularColor(0.293243,0.297387,0.290421))))
    .addChild(new ProtoDeclareObject().setName("ArtDeco31").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials")
      .setProtoBody(new ProtoBodyObject()
        .addChild(new MaterialObject().setShininess(0.054546).setDiffuseColor(0.236364,0.236364,0.236364).setAmbientIntensity(0.25641).setSpecularColor(0.29697,0.245839,0.295962))))
    .addChild(new ProtoDeclareObject().setName("ArtDeco32").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials")
      .setProtoBody(new ProtoBodyObject()
        .addChild(new MaterialObject().setAmbientIntensity(0.242424).setDiffuseColor(0.38087,0.382957,0.417708).setSpecularColor(0.533333,0.533333,0.533333).setShininess(0.933333))))
    .addChild(new ProtoDeclareObject().setName("ArtDeco33").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials")
      .setProtoBody(new ProtoBodyObject()
        .addChild(new MaterialObject().setAmbientIntensity(0.230089).setDiffuseColor(0.610811,0.610811,0.610811).setSpecularColor(0.767568,0.756757,0.764964).setShininess(0.897297))))
    .addChild(new ProtoDeclareObject().setName("ArtDeco34").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials")
      .setProtoBody(new ProtoBodyObject()
        .addChild(new MaterialObject().setShininess(0.0).setSpecularColor(0.2,0.2,0.2).setAmbientIntensity(0.25))))
    .addChild(new AnchorObject().setDescription("ArtDecoPrototypeExample").setParameter(new MFStringObject("\"target=_blank\"")).setUrl(new MFStringObject("\"../data/ArtDecoExamples.json\" \"../data/ArtDecoExamples.x3d\" \"ArtDecoExamples.json\" \"ArtDecoExamples.x3d\" "))
      .addChild(new ShapeObject()
        .setAppearance(new AppearanceObject()
          .setMaterial(new MaterialObject().setDiffuseColor(0.8,0.4,0.0)))
        .setGeometry(new TextObject().setString(this.Text_5_121_string)
          .setFontStyle(new FontStyleObject().setJustify(new MFStringObject("\"MIDDLE\" \"MIDDLE\"")).setSize(0.8))))));
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