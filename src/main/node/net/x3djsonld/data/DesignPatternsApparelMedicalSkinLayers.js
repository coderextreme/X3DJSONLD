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
 * <p> Design patterns for skin and apparel using HAnim2 standard in X3D4. </p>
 <p> Related links: DesignPatternsApparelMedicalSkinLayers.java source, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a> and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;" summary="Scene Metadata">
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">net.x3djsonld.data.DesignPatternsApparelMedicalSkinLayers&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Skin/DesignPatternsApparelMedicalSkinLayers.x3d">DesignPatternsApparelMedicalSkinLayers.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> Design patterns for skin and apparel using HAnim2 standard in X3D4 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> Don Brutzman </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> Joe D. Williams </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> Dick Puk </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> created </i> </td>
			<td> 23 December 2022 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> modified </i> </td>
			<td> 26 December 2022 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> DesignPatternsApparelVariations.txt </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> HAnim2 Part 1, HAnim architecture, 4.3 Humanoid object <a href="https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/concepts.html#HumanoidObject" target="_blank">https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/concepts.html#HumanoidObject</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> HAnim2 Part 1, HAnim architecture, E.4 Multiple humanoids per file <a href="https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/Guidelines.html#MultipleHumanoidsPerFile" target="_blank">https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/Guidelines.html#MultipleHumanoidsPerFile</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> X3D4 Architecture, clause 26 HAnim component, 26.3.2 HAnimHumanoid <a href="https://www.web3d.org/specifications/X3Dv4Draft/ISO-IEC19775-1v4-DIS/Part01/components/hanim.html#HAnimHumanoid" target="_blank">https://www.web3d.org/specifications/X3Dv4Draft/ISO-IEC19775-1v4-DIS/Part01/components/hanim.html#HAnimHumanoid</a> </td>
		</tr>
		<tr style="color:burntorange">
			<td style="text-align:right; vertical-align: text-top;"> <i> warning </i> </td>
			<td> Under development. This template example does not produce renderable HAnim models. </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Skin/DesignPatternsApparelMedicalSkinLayers.x3d" target="_blank">https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Skin/DesignPatternsApparelMedicalSkinLayers.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> generator </i> </td>
			<td> X3D-Edit 4.0, <a href="https://savage.nps.edu/X3D-Edit" target="_blank">https://savage.nps.edu/X3D-Edit</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> license </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Skin/../license.html">../license.html</a> </td>
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

	* @author Don Brutzman
	* @author Joe D. Williams
	* @author Dick Puk
 */

function DesignPatternsApparelMedicalSkinLayers
  /** Default constructor to create this object. */
  ()
  {
    /** The initialized model object, created within initialize() method. */
    this.x3dModel = {};
    this.initialize();
    return this;
  }
DesignPatternsApparelMedicalSkinLayers.prototype = {
  /** Create and initialize the X3D model. */
  initialize : function ()
  {

	/** Large attribute array: MetadataString reference field, scene-graph level=4, element #19, 1 total value */
	this.MetadataString_HAnimArchitecture_4_19_reference = new autoclass.SFString("https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/Guidelines.html#MultipleHumanoidsPerFile");
  this.x3dModel = (new autoclass.X3D()).setProfile("Immersive").setVersion("4.0")
  .setHead((new autoclass.head())
    .addMeta((new autoclass.meta()).setName("title").setContent("DesignPatternsApparelMedicalSkinLayers.x3d"))
    .addMeta((new autoclass.meta()).setName("description").setContent("Design patterns for skin and apparel using HAnim2 standard in X3D4"))
    .addMeta((new autoclass.meta()).setName("creator").setContent("Don Brutzman"))
    .addMeta((new autoclass.meta()).setName("creator").setContent("Joe D. Williams"))
    .addMeta((new autoclass.meta()).setName("creator").setContent("Dick Puk"))
    .addMeta((new autoclass.meta()).setName("created").setContent("23 December 2022"))
    .addMeta((new autoclass.meta()).setName("modified").setContent("26 December 2022"))
    .addMeta((new autoclass.meta()).setName("reference").setContent("DesignPatternsApparelVariations.txt"))
    .addMeta((new autoclass.meta()).setName("reference").setContent("HAnim2 Part 1, HAnim architecture, 4.3 Humanoid object https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/concepts.html#HumanoidObject"))
    .addMeta((new autoclass.meta()).setName("reference").setContent("HAnim2 Part 1, HAnim architecture, E.4 Multiple humanoids per file https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/Guidelines.html#MultipleHumanoidsPerFile"))
    .addMeta((new autoclass.meta()).setName("reference").setContent("X3D4 Architecture, clause 26 HAnim component, 26.3.2 HAnimHumanoid https://www.web3d.org/specifications/X3Dv4Draft/ISO-IEC19775-1v4-DIS/Part01/components/hanim.html#HAnimHumanoid"))
    .addMeta((new autoclass.meta()).setName("warning").setContent("Under development. This template example does not produce renderable HAnim models."))
    .addMeta((new autoclass.meta()).setName("identifier").setContent("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Skin/DesignPatternsApparelMedicalSkinLayers.x3d"))
    .addMeta((new autoclass.meta()).setName("generator").setContent("X3D-Edit 4.0, https://savage.nps.edu/X3D-Edit"))
    .addMeta((new autoclass.meta()).setName("license").setContent("../license.html")))
  .setScene((new autoclass.Scene())
    .addChild((new autoclass.WorldInfo()).setTitle("HAnimHumanoid skin design patterns for apparel, medical"))
    .addChild((new autoclass.Background()).setSkyColor(new autoclass.MFColor(java.newArray("float", [0.0,0.6,0.6]))))
    .addChild((new autoclass.Group("MultipleHumanoids"))
      .setValue((new autoclass.MetadataString()).setName("HAnimArchitecture").setReference(this.MetadataString_HAnimArchitecture_4_19_reference).setValue(new autoclass.MFString("\"E.4 Multiple humanoids per file\"")))
      .addComments(" ============================== ")
      .addChild((new autoclass.HAnimHumanoid("a_SimpleSkeleton")).setName("SimpleSkeleton").setVersion("2.0")
        .addSkeleton((new autoclass.HAnimJoint()).setName("humanoid_root").setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
          .addChild((new autoclass.HAnimSegment()).setName("sacrum")
            .addChild((new autoclass.Shape("JointVisualization")))
            .addChild((new autoclass.Shape("SegmentVisualization")))
            .addChild((new autoclass.HAnimSite("a_feature01_tip")).setName("feature01_tip")
              .addChild((new autoclass.Shape("SiteVisualization")))))))
      .addComments(" ============================== ")
      .addChild((new autoclass.HAnimHumanoid("b_SimpleSkeletonMesh")).setName("SimpleSkeletonMesh").setVersion("2.0")
        .addSkeleton((new autoclass.HAnimJoint()).setName("humanoid_root").setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
          .addChild((new autoclass.HAnimSegment()).setName("sacrum")
            .addChild((new autoclass.Shape())
              .setGeometry((new autoclass.IndexedFaceSet("SegmentBoneMesh")).setDEF("SegmentBoneMesh"))))))
      .addComments(" ============================== ")
      .addChild((new autoclass.HAnimHumanoid("c_SkinIndexedGeometry")).setName("SkinIndexedGeometry").setVersion("2.0")
        .addSkeleton((new autoclass.HAnimJoint()).setName("humanoid_root").setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
          .addChild((new autoclass.HAnimSegment()).setName("sacrum")))
        .addSkin((new autoclass.IndexedFaceSet("SkinMeshIFS")).setDEF("SkinMeshIFS")))
      .addComments(" ============================== ")
      .addChild((new autoclass.HAnimHumanoid("d_SkinShapeIndexedGeometry")).setName("SkinShapeIndexedGeometry").setVersion("2.0")
        .addSkeleton((new autoclass.HAnimJoint()).setName("humanoid_root").setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
          .addChild((new autoclass.HAnimSegment()).setName("sacrum")))
        .addSkin((new autoclass.Shape())
          .setGeometry((new autoclass.IndexedFaceSet()))))
      .addComments(" ============================== ")
      .addChild((new autoclass.HAnimHumanoid("e_SkinSwitchShapeIndexedGeometry")).setName("SkinSwitchShapeIndexedGeometry").setVersion("2.0")
        .addSkeleton((new autoclass.HAnimJoint()).setName("humanoid_root").setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
          .addChild((new autoclass.HAnimSegment()).setName("sacrum")))
        .addComments(" TODO proposed for X3D4 <Switch DEF='AlternativeSkins' containerField='skin'> ")
        .addChild((new autoclass.Shape())
          .setGeometry((new autoclass.IndexedFaceSet("IndexedSkinMeshIFS")).setDEF("IndexedSkinMeshIFS")
            .setCoord((new autoclass.Coordinate("SkinMeshCoordinate")))))
        .addComments(" TODO proposed for X3D4 </Switch> "))
      .addComments(" similarly for LOD ")
      .addComments(" ============================== ")
      .addChild((new autoclass.HAnimHumanoid("f_SynthesizedSkinShapeIndexedTwoPartGeometry")).setName("SynthesizedSkinShapeIndexedTwoPartGeometry").setVersion("2.0")
        .addSkeleton((new autoclass.HAnimJoint()).setName("humanoid_root").setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
          .addChild((new autoclass.HAnimSegment()).setName("sacrum")))
        .addSkin((new autoclass.Shape())
          .setGeometry((new autoclass.IndexedFaceSet("TwoPartIndexedSkinMesh")).setDEF("TwoPartIndexedSkinMesh")
            .setCoord((new autoclass.Coordinate("TwoPartSkinMesh"))))))
      .addComments(" ============================== ")
      .addChild((new autoclass.HAnimHumanoid("g_ApparelSkinIndexedGeometryMultipleShapes")).setName("ApparelSkinIndexedGeometryMultipleShapes").setVersion("2.0")
        .addSkeleton((new autoclass.HAnimJoint()).setName("humanoid_root").setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
          .addChild((new autoclass.HAnimSegment()).setName("sacrum")))
        .addSkin((new autoclass.Shape()))
        .addComments(" allow multiple Shape nodes with containerField='apparel', one for each layer of clothing ")
        .addComments(" TODO proposed for X3D4.1 <Shape containerField='apparel'/> "))
      .addComments(" ============================== ")
      .addChild((new autoclass.HAnimHumanoid("h_AnatomySkinIndexedGeometryMultipleShapes")).setName("AnatomySkinIndexedGeometryMultipleShapes").setVersion("2.0")
        .addSkeleton((new autoclass.HAnimJoint()).setName("humanoid_root").setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
          .addChild((new autoclass.HAnimSegment()).setName("sacrum")))
        .addComments(" allow multiple Shape nodes with containerField='skin', one for each layer of skin ")
        .addSkin((new autoclass.Shape()))
        .addComments(" TODO proposed for X3D4.1 <Shape containerField='skin'/> ")
        .addComments(" TODO proposed for X3D4.1 <Shape containerField='skin'/> "))
      .addComments(" ============================== "))
    .addChild((new autoclass.Viewpoint("ViewHelpText")).setDescription("Select text to see website").setPosition(0.0,0.0,12.0))
    .addComments(" Selectable Text design pattern has transparent Box and TouchSensor description as a tooltip ")
    .addChild((new autoclass.Anchor()).setDescription("DesignPatternsApparelMedicalSkinLayers.x3d explores potential apparel approaches").setParameter(new autoclass.MFString("\"target=blank\"")).setUrl(new autoclass.MFString("\"https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Skin/DesignPatternsApparelMedicalSkinLayersIndex.html\""))
      .addChild((new autoclass.Shape())
        .addComments(" TODO adjust Text string and Box size, then set Material transparency='1' ")
        .setGeometry((new autoclass.Text()).setString(new autoclass.MFString("\"DesignPatternsApparelMedicalSkinLayers.x3d\" \"\" \"explores potential apparel approaches\""))
          .setFontStyle((new autoclass.FontStyle()).setFamily(new autoclass.MFString("\"SANS\"")).setJustify(new autoclass.MFString("\"MIDDLE\" \"MIDDLE\"")).setSize(0.6).setStyle("BOLD")))
        .setAppearance((new autoclass.Appearance())
          .setMaterial((new autoclass.Material()).setDiffuseColor(0.9,0.9,0.9))))
      .addChild((new autoclass.Shape())
        .addComments(" Author TODO: to adjust transparent Box as text-selection assist, set width and height to match size, then set transparency='1' to make invisible. ")
        .setGeometry((new autoclass.Box()).setSize(11.0,2.0,.001))
        .setAppearance((new autoclass.Appearance())
          .setMaterial((new autoclass.Material()).setTransparency(1))))));
  },
  // end of initialize() method


  /** Provide a shallow copy of the X3D model.
   * @return DesignPatternsApparelMedicalSkinLayers model
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
		var testObject = new DesignPatternsApparelMedicalSkinLayers();
		console.log ("DesignPatternsApparelMedicalSkinLayers execution self-validation test results: " + testObject.validateSelf());
	}
}
new DesignPatternsApparelMedicalSkinLayers().main();