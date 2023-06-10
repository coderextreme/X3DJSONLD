import java from 'java';
import util from 'util';
import promisify from 'util';
java.asyncOptions = {
  asyncSuffix: undefined,     // Don't generate node-style methods taking callbacks
  syncSuffix: "",              // Sync methods use the base name(!!)
  promiseSuffix: "Promise",   // Generate methods returning promises, using the suffix Promise.
  promisify: promisify, // Needs Node.js version 8 or greater, see comment below
  ifReadOnlySuffix: "_alt"
};
import autoclass from '../../../X3Dautoclass.mjs';
var ConfigurationProperties = autoclass.ConfigurationProperties;
ConfigurationProperties.showDefaultAttributes = false;
ConfigurationProperties.xsltEngine = ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA;
ConfigurationProperties.deleteIntermediateFiles = false;
ConfigurationProperties.setStripTrailingZeroes(true);
      var X3D0 =  (new autoclass.X3D()).setProfile("Immersive").setVersion("4.0")
      .setHead((new autoclass.head())
        .addComponent((new autoclass.component()).setName("H-Anim").setLevel(1))
        .addMeta((new autoclass.meta()).setName("title").setContent("JohnBoy.x3d"))
        .addMeta((new autoclass.meta()).setName("identifier").setContent("http://www.web3d.org/x3d/content/examples/HumanoidAnimation/JohnBoy.x3d"))
        .addMeta((new autoclass.meta()).setName("description").setContent("An attempt at a standard LOA-4 skeleton"))
        .addMeta((new autoclass.meta()).setName("generator").setContent("h.pl"))
        .addMeta((new autoclass.meta()).setName("creator").setContent("John Carlson"))
        .addMeta((new autoclass.meta()).setName("created").setContent("12 June 2020"))
        .addMeta((new autoclass.meta()).setName("license").setContent("../license.html")))
      .setScene((new autoclass.Scene())
        .addChild((new autoclass.WorldInfo()).setTitle("JohnBoy.x3d"))
        .addChild((new autoclass.NavigationInfo()).setSpeed(java.newFloat(1.5)))
        .addChild((new autoclass.Viewpoint()).setCenterOfRotation(java.newArray("float", [java.newFloat(0), java.newFloat(1), java.newFloat(0)])).setDescription("JohnBoy").setPosition(java.newArray("float", [java.newFloat(0), java.newFloat(1), java.newFloat(3)]))))      ;
    X3D0.toFileX3D("../data/skeletonTidy.new.x3d");
    process.exit(0);
