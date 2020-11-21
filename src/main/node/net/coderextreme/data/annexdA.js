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
      var X3D0 =  (new autoclass.X3D()).setProfile("Immersive").setVersion("4.0")
      .setHead((new autoclass.head())
        .addComponent((new autoclass.component()).setName("HAnim").setLevel(1))
        .addMeta((new autoclass.meta()).setName("title").setContent("KoreanCharacterAnnexD01Jin.x3d"))
        .addMeta((new autoclass.meta()).setName("creator").setContent("Jin Hoon Lee and Min Joo Lee"))
        .addMeta((new autoclass.meta()).setName("translator").setContent("Chul Hee Jung and Myeong Won Lee"))
        .addMeta((new autoclass.meta()).setName("created").setContent("31 March 2011"))
        .addMeta((new autoclass.meta()).setName("translated").setContent("1 November 2014"))
        .addMeta((new autoclass.meta()).setName("modified").setContent("28 May 2018"))
        .addMeta((new autoclass.meta()).setName("description").setContent("Articulated 3D game character designed with a general graphics tool, then converted into an X3D HAnim model."))
        .addMeta((new autoclass.meta()).setName("reference").setContent("KoreanCharacter00ReadMe.txt"))
        .addMeta((new autoclass.meta()).setName("reference").setContent("KoreanCharacterHumanMotion_Infotech2014_140706.pdf"))
        .addMeta((new autoclass.meta()).setName("reference").setContent("KoreanCharactersIllustrated.pdf"))
        .addMeta((new autoclass.meta()).setName("identifier").setContent("https://www.web3d.org/x3d/content/examples/Basic/HumanoidAnimation/KoreanCharacterAnnexD01Jin.x3d"))
        .addMeta((new autoclass.meta()).setName("generator").setContent("3DS MAX, http://www.autodesk.com/products/autodesk-3ds-max/overview"))
        .addMeta((new autoclass.meta()).setName("generator").setContent("Suwon HAnim Converter"))
        .addMeta((new autoclass.meta()).setName("generator").setContent("Gnu Image Manipulation Program, http://www.gimp.org"))
        .addMeta((new autoclass.meta()).setName("generator").setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
        .addMeta((new autoclass.meta()).setName("license").setContent("../license.html")))
      .setScene((new autoclass.Scene())
        .addChild((new autoclass.WorldInfo()).setTitle("KoreanCharacterAnnexD01Jin.x3d"))
        .addChild((new autoclass.NavigationInfo()).setSpeed(java.newFloat(1.5)))
        .addComments((new autoclass.CommentsBlock("Viewpoint centerOfRotation=\"0 1 0\" description=\"AnnexD01Jin\" position=\"0 35 113\"/")))
        .addChild((new autoclass.Viewpoint()).setCenterOfRotation(java.newArray("float", [java.newFloat(0), java.newFloat(1), java.newFloat(0)])).setDescription("AnnexD01Jin").setPosition(java.newArray("float", [java.newFloat(0), java.newFloat(40), java.newFloat(140)]))))      ;
    X3D0.toFileX3D("../data/annexdA.new.x3d");
