load('X3Dautoclass.js');

// Javadoc annotations follow, see below for source.
/**
 * <p> HAnim Specification reference example providing full coverage (and no illustrated visibility) of all specified HAnim constructs, also suitable for re-use as an authoring template. </p>
 <p> Related links: HAnim2SpecificationLOA3Ilustrated.java source, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a> and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;" summary="Scene Metadata">
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">net.x3djsonld.data.HAnim2SpecificationLOA3Ilustrated&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Specifications/HAnim2SpecificationLOA3Illustrated.x3d">HAnim2SpecificationLOA3Illustrated.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> HAnim Specification reference example providing full coverage (and no illustrated visibility) of all specified HAnim constructs, also suitable for re-use as an authoring template. </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="https://www.web3d.org/files/specifications/19774/V1.0/HAnim/BodyDimensionsAndLOAs.html#LOA3ExampleSourceWithDiamonds" target="_blank">https://www.web3d.org/files/specifications/19774/V1.0/HAnim/BodyDimensionsAndLOAs.html#LOA3ExampleSourceWithDiamonds</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> created </i> </td>
			<td> 18 February 2021 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> modified </i> </td>
			<td> 18 February 2021 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> Don Brutzman </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Specifications/HAnim2SpecificationLOA3Invisible.x3d">HAnim2SpecificationLOA3Invisible.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Specifications/HAnim2SpecificationLOA3Animation.x3d">HAnim2SpecificationLOA3Animation.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> HAnimSpecificationExampleChangeLog.txt </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> Image </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Specifications/images/BonesAllSkeletonFrontViewLOA1.png">images/BonesAllSkeletonFrontViewLOA1.png</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> Image </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Specifications/images/BonesAllSkeletonFrontViewLOA2.png">images/BonesAllSkeletonFrontViewLOA2.png</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> Image </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Specifications/images/BonesAllSkeletonFrontViewLOA3.png">images/BonesAllSkeletonFrontViewLOA3.png</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> TODO </i> </td>
			<td> move relevant HAnimSite/Viewpoint pairs into skeleton at appropriate locations </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> TODO </i> </td>
			<td> insert MetadataInteger nodes indicating LOA for each Joint and Segment </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> Norman Badler et al., ANTHROPOMETRY FOR COMPUTER GRAPHICS HUMAN FIGURES, University of Pennsylvania, 1989. </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="http://www.cis.upenn.edu/~badler/anthro/89-71.ps" target="_blank">http://www.cis.upenn.edu/~badler/anthro/89-71.ps</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Specifications/tables/AnthropometryForComputerGraphicsHumanFigures89-71.pdf">tables/AnthropometryForComputerGraphicsHumanFigures89-71.pdf</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> translator </i> </td>
			<td> Don Brutzman and Joe Williams </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> generator </i> </td>
			<td> BS Contact Geo 8.001, <a href="http://www.bitmanagement.de/en/products/interactive-3d-clients/bs-contact-geo" target="_blank">http://www.bitmanagement.de/en/products/interactive-3d-clients/bs-contact-geo</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> originals/LOA3ExampleSourceWithDiamondsOriginal.wrl </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Specifications/originals/LOA3ExampleSourceWithDiamondsOriginal.x3d">originals/LOA3ExampleSourceWithDiamondsOriginal.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Specifications/originals/LOA3ExampleSourceWithDiamondsOriginalBsContactExport.x3d">originals/LOA3ExampleSourceWithDiamondsOriginalBsContactExport.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> HAnim Specification Table 4.4 - Face Joint object names, <a href="https://www.web3d.org/files/specifications/19774/V1.0/HAnim/concepts.html#FaceJointObjectNames" target="_blank">https://www.web3d.org/files/specifications/19774/V1.0/HAnim/concepts.html#FaceJointObjectNames</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> generator </i> </td>
			<td> X3D-Edit 3.3, <a href="https://savage.nps.edu/X3D-Edit" target="_blank">https://savage.nps.edu/X3D-Edit</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Specifications/HAnim2SpecificationLOA3Illustrated.x3d" target="_blank">https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Specifications/HAnim2SpecificationLOA3Illustrated.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> license </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Specifications/../license.html">../license.html</a> </td>
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

	* @author Don Brutzman
 */

function HAnim2SpecificationLOA3Ilustrated
  /** Default constructor to create this object. */
  ()
  {
    /** The initialized model object, created within initialize() method. */
    this.x3dModel = {};
    this.initialize();
    return this;
  }
HAnim2SpecificationLOA3Ilustrated.prototype = {
  /** Create and initialize the X3D model. */
  initialize : function ()
  {

	/** Large attribute array: WorldInfo info field, scene-graph level=4, element #31, 93 total values */
	this.WorldInfo_4_31_info = new MFString(new MFString("\" HANIM 200x Default Joint Centers, Level-Of-Articulation 3 HANIM 200x (VRML97) Author name: eMpTy (a.k.a. Matthew T. Beitler) HANIM 200x (VRML97) Author email: beitler@cis.upenn.edu or beitler@acm.org HANIM 200x (VRML97) Author homepage: http://www.cis.upenn.edu/~beitler HANIM 200x (VRML97) Compliance Date: August 12, 2003 HANIM 200x Compliance Information: http://HAnim.org/Specifications/HAnim200x Construction Info (joint centers): The joint centers of this figure are based on the work of Norman Badler, director of the Center for Human Modeling and Simulation at the University of Pennsylvania. The original document which these joint centers are based on can be found at: http://www.cis.upenn.edu/~badler/anthro/89-71.ps \""));
  this.x3dModel = new X3D().setProfile("Immersive").setVersion("4.0")
  .setHead(new head()
    .addComponent(new component().setName("HAnim").setLevel(1))
    .addMeta(new meta().setName("title").setContent("HAnim2SpecificationLOA3Illustrated.x3d"))
    .addMeta(new meta().setName("description").setContent("HAnim Specification reference example providing full coverage (and no illustrated visibility) of all specified HAnim constructs, also suitable for re-use as an authoring template."))
    .addMeta(new meta().setName("reference").setContent("https://www.web3d.org/files/specifications/19774/V1.0/HAnim/BodyDimensionsAndLOAs.html#LOA3ExampleSourceWithDiamonds"))
    .addMeta(new meta().setName("created").setContent("18 February 2021"))
    .addMeta(new meta().setName("modified").setContent("18 February 2021"))
    .addMeta(new meta().setName("creator").setContent("Don Brutzman"))
    .addMeta(new meta().setName("reference").setContent("HAnim2SpecificationLOA3Invisible.x3d"))
    .addMeta(new meta().setName("reference").setContent("HAnim2SpecificationLOA3Animation.x3d"))
    .addMeta(new meta().setName("reference").setContent("HAnimSpecificationExampleChangeLog.txt"))
    .addMeta(new meta().setName("Image").setContent("images/BonesAllSkeletonFrontViewLOA1.png"))
    .addMeta(new meta().setName("Image").setContent("images/BonesAllSkeletonFrontViewLOA2.png"))
    .addMeta(new meta().setName("Image").setContent("images/BonesAllSkeletonFrontViewLOA3.png"))
    .addMeta(new meta().setName("TODO").setContent("move relevant HAnimSite/Viewpoint pairs into skeleton at appropriate locations"))
    .addMeta(new meta().setName("TODO").setContent("insert MetadataInteger nodes indicating LOA for each Joint and Segment"))
    .addMeta(new meta().setName("reference").setContent("Norman Badler et al., ANTHROPOMETRY FOR COMPUTER GRAPHICS HUMAN FIGURES, University of Pennsylvania, 1989."))
    .addMeta(new meta().setName("reference").setContent("http://www.cis.upenn.edu/~badler/anthro/89-71.ps"))
    .addMeta(new meta().setName("reference").setContent("tables/AnthropometryForComputerGraphicsHumanFigures89-71.pdf"))
    .addMeta(new meta().setName("translator").setContent("Don Brutzman and Joe Williams"))
    .addMeta(new meta().setName("generator").setContent("BS Contact Geo 8.001, http://www.bitmanagement.de/en/products/interactive-3d-clients/bs-contact-geo"))
    .addMeta(new meta().setName("reference").setContent("originals/LOA3ExampleSourceWithDiamondsOriginal.wrl"))
    .addMeta(new meta().setName("reference").setContent("originals