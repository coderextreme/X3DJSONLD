var java = require('java');
java.asyncOptions = {
  asyncSuffix: undefined,     // Don't generate node-style methods taking callbacks
  syncSuffix: "",              // Sync methods use the base name(!!)
  promiseSuffix: "Promise",   // Generate methods returning promises, using the suffix Promise.
  promisify: require('util').promisify, // Needs Node.js version 8 or greater, see comment below
  ifReadOnlySuffix: "_alt"
};
var autoclass = require('../../../X3Dautoclass');
var ConfigurationProperties = autoclass.ConfigurationProperties;
ConfigurationProperties.showDefaultAttributes = false;
ConfigurationProperties.xsltEngine = ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA;
ConfigurationProperties.deleteIntermediateFiles = false;
ConfigurationProperties.setStripTrailingZeroes(true);
      var X3D0 =  (new autoclass.X3D()).setProfile("Immersive").setVersion("3.0")
      .setHead((new autoclass.head())
        .addMeta((new autoclass.meta()).setName("title").setContent("ViewPositionOrientationPrototype.x3d"))
        .addMeta((new autoclass.meta()).setName("creator").setContent("Leonard Daly and Don Brutzman"))
        .addMeta((new autoclass.meta()).setName("translator").setContent("Don Brutzman"))
        .addMeta((new autoclass.meta()).setName("created").setContent("1 November 2000"))
        .addMeta((new autoclass.meta()).setName("modified").setContent("27 May 2017"))
        .addMeta((new autoclass.meta()).setName("description").setContent("ViewPositionOrientation prototype provides local position and orientation as user navigates, with optional console output"))
        .addMeta((new autoclass.meta()).setName("info").setContent("Note fix: metadata is no longer an allowed ProtoDeclare field name, since ProtoInstance already includes a metadata field"))
        .addMeta((new autoclass.meta()).setName("reference").setContent("ViewPositionOrientationExample.x3d"))
        .addMeta((new autoclass.meta()).setName("reference").setContent("http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/WhereAmIExample.x3d"))
        .addMeta((new autoclass.meta()).setName("reference").setContent("http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/WhereAmIPrototype.x3d"))
        .addMeta((new autoclass.meta()).setName("reference").setContent("http://www.realism.com/Web3D/Examples#WhereAmI"))
        .addMeta((new autoclass.meta()).setName("reference").setContent("http://www.realism.com/vrml/Example/WhereAmI/WhereAmI_Proto.wrl"))
        .addMeta((new autoclass.meta()).setName("identifier").setContent("https://savage.nps.edu/Savage/Tools/Authoring/ViewPositionOrientationPrototype.x3d"))
        .addMeta((new autoclass.meta()).setName("generator").setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
        .addMeta((new autoclass.meta()).setName("license").setContent("../../license.html")))
      .setScene((new autoclass.Scene())
        .addComments((new autoclass.CommentsBlock("Thanks to Leonard Daly for the original design of this prototype")))
        .addChild((new autoclass.ProtoDeclare()).setName("ViewPositionOrientation").setAppinfo("ViewPositionOrientation provides provides console output of local position and orientation as user navigates")
          .setProtoInterface((new autoclass.ProtoInterface())
            .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFBOOL).setName("enabled").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Whether or not ViewPositionOrientation sends output to console").setValue("true"))
            .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFBOOL).setName("traceEnabled").setAccessType(autoclass.field.ACCESSTYPE_INITIALIZEONLY).setAppinfo("Output internal trace messages for debugging this node, intended for developer use only").setValue("true"))
            .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFBOOL).setName("set_traceEnabled").setAccessType(autoclass.field.ACCESSTYPE_INPUTONLY).setAppinfo("Ability to turn output tracing on/off at runtime"))
            .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFVEC3F).setName("position_changed").setAccessType(autoclass.field.ACCESSTYPE_OUTPUTONLY).setAppinfo("Output local position"))
            .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFROTATION).setName("orientation_changed").setAccessType(autoclass.field.ACCESSTYPE_OUTPUTONLY).setAppinfo("Output local orientation"))
            .addField((new autoclass.field()).setType(autoclass.field.TYPE_MFSTRING).setName("outputViewpointString").setAccessType(autoclass.field.ACCESSTYPE_OUTPUTONLY).setAppinfo("MFString value of new Viewpoint, suitable for use in string field of a Text node")))
          .setProtoBody((new autoclass.ProtoBody())
            .addChild((new autoclass.ProximitySensor()).setDEF("WhereSensor").setSize(java.newArray("float", [java.newFloat(1000000000), java.newFloat(1000000000), java.newFloat(1000000000)]))
              .setIS((new autoclass.IS())
                .addConnect((new autoclass.connect()).setNodeField("enabled").setProtoField("enabled"))))
            .addComments((new autoclass.CommentsBlock("it's a big old world out there! large box likely handles most use cases.")))
            .addChild((new autoclass.Script()).setDEF("OutputPositionOrientation")
              .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFBOOL).setName("traceEnabled").setAccessType(autoclass.field.ACCESSTYPE_INITIALIZEONLY))
              .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFBOOL).setName("set_traceEnabled").setAccessType(autoclass.field.ACCESSTYPE_INPUTONLY))
              .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFVEC3F).setName("set_position").setAccessType(autoclass.field.ACCESSTYPE_INPUTONLY))
              .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFROTATION).setName("set_orientation").setAccessType(autoclass.field.ACCESSTYPE_INPUTONLY))
              .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFVEC3F).setName("position").setAccessType(autoclass.field.ACCESSTYPE_INITIALIZEONLY).setValue("0 0 0"))
              .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFROTATION).setName("orientation").setAccessType(autoclass.field.ACCESSTYPE_INITIALIZEONLY).setValue("0 1 0 0"))
              .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFVEC3F).setName("position_changed").setAccessType(autoclass.field.ACCESSTYPE_OUTPUTONLY))
              .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFROTATION).setName("orientation_changed").setAccessType(autoclass.field.ACCESSTYPE_OUTPUTONLY))
              .addField((new autoclass.field()).setType(autoclass.field.TYPE_MFSTRING).setName("outputViewpointString").setAccessType(autoclass.field.ACCESSTYPE_OUTPUTONLY))
              .setIS((new autoclass.IS())
                .addConnect((new autoclass.connect()).setNodeField("traceEnabled").setProtoField("traceEnabled"))
                .addConnect((new autoclass.connect()).setNodeField("set_traceEnabled").setProtoField("set_traceEnabled"))
                .addConnect((new autoclass.connect()).setNodeField("position_changed").setProtoField("position_changed"))
                .addConnect((new autoclass.connect()).setNodeField("orientation_changed").setProtoField("orientation_changed"))
                .addConnect((new autoclass.connect()).setNodeField("outputViewpointString").setProtoField("outputViewpointString")))
              .setSourceCode("ecmascript:\n"+
"\n"+
"function roundoff (value, digits) // for local use only\n"+
"{\n"+
"	var resolution = 1;\n"+
"	for (i = 1; i <= digits; i++ )\n"+
"	{\n"+
"		resolution *= 10;\n"+
"	}\n"+
"	return Math.round (value*resolution) / resolution; // round to resolution\n"+
"}\n"+
"function outputViewpoint ()\n"+
"{\n"+
"  var holdString = \n"+
"        '<Viewpoint position=\"' +\n"+
"		roundoff (position.x, 1) + ' ' +\n"+
"		roundoff (position.y, 1) + ' ' +\n"+
"		roundoff (position.z, 1) +\n"+
"        '\" orientation=\"' +\n"+
"		roundoff (orientation.x, 3) + ' ' +\n"+
"		roundoff (orientation.y, 3) + ' ' +\n"+
"		roundoff (orientation.z, 3) + ' ' +\n"+
"		roundoff (orientation.angle, 4) + '\"/>' ;\n"+
"   tracePrint (holdString);\n"+
"   outputViewpointString = new MFString (holdString);\n"+
"}\n"+
"function set_position (value)\n"+
"{\n"+
"	position = value; // save persistent value\n"+
"	position_changed = position; // output event\n"+
"	outputViewpoint ();\n"+
"}\n"+
"function set_orientation (value)\n"+
"{\n"+
"	orientation = value; // save persistent value\n"+
"	orientation_changed = orientation; // output event\n"+
"	outputViewpoint ();\n"+
"}\n"+
"function set_traceEnabled (value)\n"+
"{\n"+
"	traceEnabled = value;\n"+
"	alwaysPrint ('traceEnabled=' + traceEnabled);\n"+
"}\n"+
"function alwaysPrint (text)\n"+
"{\n"+
"	Browser.print ('[ViewPositionOrientation] ' + text + '\\n');\n"+
"}\n"+
"function tracePrint (text)\n"+
"{\n"+
"	if (traceEnabled) alwaysPrint (text);\n"+
"}"))
            .addChild((new autoclass.ROUTE()).setFromField("position_changed").setFromNode("WhereSensor").setToField("set_position").setToNode("OutputPositionOrientation"))
            .addChild((new autoclass.ROUTE()).setFromField("orientation_changed").setFromNode("WhereSensor").setToField("set_orientation").setToNode("OutputPositionOrientation"))))
        .addComments((new autoclass.CommentsBlock("====================")))
        .addChild((new autoclass.Viewpoint()).setDescription("ViewPositionOrientation prototype").setPosition(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(14)])))
        .addChild((new autoclass.Anchor()).setDescription("ViewPositionOrientation Example").setParameter(java.newArray("java.lang.String", ["target=_blank"])).setUrl(java.newArray("java.lang.String", ["ViewPositionOrientationExample.x3d","https://savage.nps.edu/Savage/Tools/Authoring/ViewPositionOrientationExample.x3d","ViewPositionOrientationExample.wrl","https://savage.nps.edu/Savage/Tools/Authoring/ViewPositionOrientationExample.wrl"]))
          .addChild((new autoclass.Shape())
            .setGeometry((new autoclass.Text()).setString(java.newArray("java.lang.String", ["ViewPositionOrientationPrototype","is a prototype definition file","","Click this text to see","ViewPositionOrientationExample"]))
              .setFontStyle((new autoclass.FontStyle()).setJustify(java.newArray("java.lang.String", ["MIDDLE","MIDDLE"])).setSize(java.newFloat(1.2))))
            .setAppearance((new autoclass.Appearance())
              .setMaterial((new autoclass.Material()).setDiffuseColor(java.newArray("float", [java.newFloat(0.6), java.newFloat(0.8), java.newFloat(0.4)])))))
          .addComments((new autoclass.CommentsBlock("Selectable Text design pattern has transparent Box and TouchSensor description as a tooltip")))
          .addChild((new autoclass.Shape())
            .addComments((new autoclass.CommentsBlock("Author TODO: to adjust transparent Box as text-selection assist, set width and height to match size, then set transparency='1' to make invisible.")))
            .setGeometry((new autoclass.Box()).setSize(java.newArray("float", [java.newFloat(16), java.newFloat(7), java.newFloat(0.001)])))
            .setAppearance((new autoclass.Appearance())
              .setMaterial((new autoclass.Material()).setTransparency(java.newFloat(1)))))))      ;
    X3D0.toFileX3D("../data/ViewPositionOrientationPrototype.new.x3d");
