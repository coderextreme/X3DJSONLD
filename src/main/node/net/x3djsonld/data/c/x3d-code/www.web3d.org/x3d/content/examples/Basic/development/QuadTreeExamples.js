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
 * <p> Show four ways of solving the QuadTree problem using native XML tags, PROTOs, IDREF/USE and MFNode children compatibly - view XML source to see DTD internal-subset declarations. </p>
 <p> Related links: QuadTreeExamples.java source, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a> and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;" summary="Scene Metadata">
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">net.x3djsonld.data.QuadTreeExamples&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/development/QuadTreeExamples.x3d">QuadTreeExamples.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> Don Brutzman </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> created </i> </td>
			<td> 26 June 2000 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> modified </i> </td>
			<td> 20 January 2020 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> Show four ways of solving the QuadTree problem using native XML tags, PROTOs, IDREF/USE and MFNode children compatibly - view XML source to see DTD internal-subset declarations. </td>
		</tr>
		<tr style="color:red">
			<td style="text-align:right; vertical-align: text-top;"> <i> error </i> </td>
			<td> Test to demonstrate DOCTYPE extensibility, this X3D scene not valid and does not render. </td>
		</tr>
		<tr style="color:burntorange">
			<td style="text-align:right; vertical-align: text-top;"> <i> warning </i> </td>
			<td> You must view full source of the DTD declarations (QuadTreeExamples.x3d.txt) to fully understand validation techniques in this file. </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/development/QuadTreeExamplesExplanation.html">QuadTreeExamplesExplanation.html</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> QuadTreeExamples.x3d.txt </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> QuadTreeExamples.png </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/development/QuadTreeExamples.x3d" target="_blank">https://www.web3d.org/x3d/content/examples/development/QuadTreeExamples.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> generator </i> </td>
			<td> X3D-Edit 3.1, <a href="https://www.web3d.org/x3d/content/README.X3D-Edit.html" target="_blank">https://www.web3d.org/x3d/content/README.X3D-Edit.html</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> license </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/development/../license.html">../license.html</a> </td>
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
 */

function QuadTreeExamples
  /** Default constructor to create this object. */
  ()
  {
    /** The initialized model object, created within initialize() method. */
    this.x3dModel = {};
    this.initialize();
    return this;
  }
QuadTreeExamples.prototype = {
  /** Create and initialize the X3D model. */
  initialize : function ()
  {
  this.x3dModel = (new autoclass.X3D()).setProfile("Immersive").setVersion("3.0")
  .setHead((new autoclass.head())
    .addMeta((new autoclass.meta()).setName("title").setContent("QuadTreeExamples.x3d"))
    .addMeta((new autoclass.meta()).setName("creator").setContent("Don Brutzman"))
    .addMeta((new autoclass.meta()).setName("created").setContent("26 June 2000"))
    .addMeta((new autoclass.meta()).setName("modified").setContent("20 January 2020"))
    .addMeta((new autoclass.meta()).setName("description").setContent("Show four ways of solving the QuadTree problem using native XML tags, PROTOs, IDREF/USE and MFNode children compatibly - view XML source to see DTD internal-subset declarations."))
    .addMeta((new autoclass.meta()).setName("error").setContent("Test to demonstrate DOCTYPE extensibility, this X3D scene not valid and does not render."))
    .addMeta((new autoclass.meta()).setName("warning").setContent("You must view full source of the DTD declarations (QuadTreeExamples.x3d.txt) to fully understand validation techniques in this file."))
    .addMeta((new autoclass.meta()).setName("reference").setContent("QuadTreeExamplesExplanation.html"))
    .addMeta((new autoclass.meta()).setName("reference").setContent("QuadTreeExamples.x3d.txt"))
    .addMeta((new autoclass.meta()).setName("reference").setContent("QuadTreeExamples.png"))
    .addMeta((new autoclass.meta()).setName("identifier").setContent("https://www.web3d.org/x3d/content/examples/development/QuadTreeExamples.x3d"))
    .addMeta((new autoclass.meta()).setName("generator").setContent("X3D-Edit 3.1, https://www.web3d.org/x3d/content/README.X3D-Edit.html"))
    .addMeta((new autoclass.meta()).setName("license").setContent("../license.html")))
  .setScene((new autoclass.Scene())
    .addComments(" - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - ")
    .addComments(" Example solution approach #1 ")
    .addComments(" Note that PROTO declarations are also provided for compatible backwards translation to VRML 97 encoding. They are not necessary for independent X3D use of the QuadTree examples. ")
    .addChild((new autoclass.ProtoDeclare()).setName("QuadTree-USEchildren")
      .setProtoInterface((new autoclass.ProtoInterface())
        .addField((new autoclass.field()).setAccessType("inputOutput").setName("upperLeftDEFName").setType("MFNode"))
        .addField((new autoclass.field()).setAccessType("inputOutput").setName("upperRightDEFName").setType("MFNode"))
        .addField((new autoclass.field()).setAccessType("inputOutput").setName("lowerLeftDEFName").setType("MFNode"))
        .addField((new autoclass.field()).setAccessType("inputOutput").setName("lowerRightDEFName").setType("MFNode"))
        .addField((new autoclass.field()).setAccessType("inputOutput").setName("children").setType("MFNode"))
        .addComments(" children field must be declared for any PROTOs or native-tag nodes with children "))
      .setProtoBody((new autoclass.ProtoBody())
        .addComments(" VRML 97 specification paragraph 4.8.3, PROTO definition semantics: \"A prototype definition consists of one or more nodes.\" PROTO body follows. ")
        .addChild((new autoclass.Group())
          .addChild((new autoclass.Group("GroupA"))
            .setIS((new autoclass.IS())
              .addConnect((new autoclass.connect()).setNodeField("children").setProtoField("upperLeftDEFName"))))
          .addChild((new autoclass.Group("GroupB"))
            .setIS((new autoclass.IS())
              .addConnect((new autoclass.connect()).setNodeField("children").setProtoField("upperRightDEFName"))))
          .addChild((new autoclass.Group("GroupC"))
            .setIS((new autoclass.IS())
              .addConnect((new autoclass.connect()).setNodeField("children").setProtoField("lowerLeftDEFName"))))
          .addChild((new autoclass.Group("GroupD"))
            .setIS((new autoclass.IS())
              .addConnect((new autoclass.connect()).setNodeField("children").setProtoField("lowerRightDEFName")))))))
    .addComments(" Example solution approach #3 ")
    .addChild((new autoclass.ProtoDeclare()).setName("QuadTree-TagChildren")
      .setProtoInterface((new autoclass.ProtoInterface())
        .addField((new autoclass.field()).setAccessType("inputOutput").setName("upperLeftNode").setType("MFNode")
          .addComments(" no initialization node "))
        .addField((new autoclass.field()).setAccessType("inputOutput").setName("upperRightNode").setType("MFNode")
          .addComments(" no initialization node "))
        .addField((new autoclass.field()).setAccessType("inputOutput").setName("lowerLeftNode").setType("MFNode")
          .addComments(" no initialization node "))
        .addField((new autoclass.field()).setAccessType("inputOutput").setName("lowerRightNode").setType("MFNode")
          .addComments(" no initialization node "))
        .addField((new autoclass.field()).setAccessType("inputOutput").setName("children").setType("MFNode")))
      .setProtoBody((new autoclass.ProtoBody())
        .addComments(" PROTO body follows. ")
        .addChild((new autoclass.Group())
          .addChild((new autoclass.Group("GroupE"))
            .setIS((new autoclass.IS())
              .addConnect((new autoclass.connect()).setNodeField("children").setProtoField("upperLeftNode"))))
          .addChild((new autoclass.Group("GroupF"))
            .setIS((new autoclass.IS())
              .addConnect((new autoclass.connect()).setNodeField("children").setProtoField("upperRightNode"))))
          .addChild((new autoclass.Group("GroupG"))
            .setIS((new autoclass.IS())
              .addConnect((new autoclass.connect()).setNodeField("children").setProtoField("lowerLeftNode"))))
          .addChild((new autoclass.Group("GroupH"))
            .setIS((new autoclass.IS())
              .addConnect((new autoclass.connect()).setNodeField("children").setProtoField("lowerRightNode")))))))
    .addComments(" - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - ")
    .addChild((new autoclass.Group())
      .addChild((new autoclass.Viewpoint()).setDescription("View QuadTree examples").setPosition(0.0,0.0,30.0))
      .addChild((new autoclass.Transform("Example_1")).setTranslation(0.0,6.0,0.0)
        .addChild((new autoclass.ProtoInstance()).setName("QuadTree-USEchildren")
          .addFieldValue((new autoclass.fieldValue()).setName("children")
            .addChild((new autoclass.Group())
              .addChild((new autoclass.Transform("UPPER_LEFT")).setTranslation(4.0,0.0,4.0)
                .addChild((new autoclass.Shape())
                  .setAppearance((new autoclass.Appearance("RED"))
                    .setMaterial((new autoclass.Material()).setDiffuseColor(1.0,0.0,0.0)))
                  .setGeometry((new autoclass.Box()))))
              .addChild((new autoclass.Transform("UPPER_RIGHT")).setTranslati