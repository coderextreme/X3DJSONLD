import java from 'node-java';
import util from 'util';
import autoclass from '../../../X3Dautoclass.js';
var ConfigurationProperties = autoclass.ConfigurationProperties;
ConfigurationProperties.showDefaultAttributes = false;
ConfigurationProperties.xsltEngine = ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA;
ConfigurationProperties.deleteIntermediateFiles = false;
ConfigurationProperties.setStripTrailingZeroes(true);
ConfigurationProperties.setStripDefaultAttributes(true);
      var X3D0 =  (new autoclass.X3D()).setProfile("Interactive").setVersion("4.0")
      .setHead(new autoclass.head()
        .addMeta(new autoclass.meta().setName("title").setContent("TestCycleTimeStart.x3d"))
        .addMeta(new autoclass.meta().setName("creator").setContent("Andreas"))
        .addMeta(new autoclass.meta().setName("creator").setContent("Joe D. Williams"))
        .addMeta(new autoclass.meta().setName("description").setContent("Test design patterns for animation control."))
        .addMeta(new autoclass.meta().setName("created").setContent("10 September 2023"))
        .addMeta(new autoclass.meta().setName("modified").setContent("Mon, 15 Sep 2025 05:20:59 GMT"))
        .addMeta(new autoclass.meta().setName("reference").setContent("https://www.web3d.org/x3d/content/examples/ConformanceNist/Sensors/TimeSensor/cycletimeIndex.html"))
        .addMeta(new autoclass.meta().setName("reference").setContent("https://sourceforge.net/p/x3d/code/HEAD/tree/www.web3d.org/x3d/content/examples/HumanoidAnimation/WinterAndSpring/originals/cycleTimeStart.x3d"))
        .addMeta(new autoclass.meta().setName("identifier").setContent("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/WinterAndSpring/TestCycleTimeStart.x3d")))
      .setScene(new autoclass.Scene()
        .addChild(new autoclass.WorldInfo().setTitle("TestCycleTimeStart.x3d"))
        .addChild(new autoclass.Viewpoint().setDescription("hello in there"))
        .addChild(new autoclass.TimeSensor().setDEF("REDTIME1").setLoop(true).setStopTime(1757913659.298))
        .addChild(new autoclass.TimeSensor().setDEF("GREENTIME2").setCycleInterval(5).setStartTime(1757913659.298))
        .addChild(new autoclass.TimeSensor().setDEF("BLUETIME3").setCycleInterval(10))
        .addChild(new autoclass.BooleanFilter().setDEF("GREENFILTER"))
        .addChild(new autoclass.TimeTrigger().setDEF("BLUETRIGGER"))
        .addChild(new autoclass.Transform().setDEF("REDBALL").setTranslation(java.newArray("float", [java.newFloat(1.615999), java.newFloat(0), java.newFloat(0)]))
          .addChild(new autoclass.Shape()
            .setAppearance(new autoclass.Appearance()
              .setMaterial(new autoclass.Material().setDiffuseColor(java.newArray("float", [java.newFloat(1), java.newFloat(0), java.newFloat(0)]))))
            .setGeometry(new autoclass.Sphere())))
        .addChild(new autoclass.Transform().setDEF("GREENBALL")
          .addChild(new autoclass.Shape()
            .setAppearance(new autoclass.Appearance()
              .setMaterial(new autoclass.Material().setDiffuseColor(java.newArray("float", [java.newFloat(0), java.newFloat(1), java.newFloat(0)]))))
            .setGeometry(new autoclass.Sphere())))
        .addChild(new autoclass.Transform().setDEF("BLUEBALL")
          .addChild(new autoclass.Shape()
            .setAppearance(new autoclass.Appearance()
              .setMaterial(new autoclass.Material().setDiffuseColor(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(1)]))))
            .setGeometry(new autoclass.Sphere())))
        .addChild(new autoclass.PositionInterpolator().setDEF("REDINTERP1").setKey(java.newArray("float", [java.newFloat(0), java.newFloat(0.25), java.newFloat(0.5), java.newFloat(0.75), java.newFloat(1)])).setKeyValue(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(0), java.newFloat(2), java.newFloat(0), java.newFloat(0), java.newFloat(0), java.newFloat(0), java.newFloat(0), java.newFloat(-2), java.newFloat(0), java.newFloat(0), java.newFloat(0), java.newFloat(0), java.newFloat(0)])))
        .addChild(new autoclass.PositionInterpolator().setDEF("GREENINTERP2").setKey(java.newArray("float", [java.newFloat(0), java.newFloat(0.25), java.newFloat(0.5), java.newFloat(0.75), java.newFloat(1)])).setKeyValue(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(0), java.newFloat(0), java.newFloat(2), java.newFloat(0), java.newFloat(0), java.newFloat(0), java.newFloat(0), java.newFloat(0), java.newFloat(-2), java.newFloat(0), java.newFloat(0), java.newFloat(0), java.newFloat(0)])))
        .addChild(new autoclass.PositionInterpolator().setDEF("BLUEINTERP3").setKey(java.newArray("float", [java.newFloat(0), java.newFloat(0.25), java.newFloat(0.5), java.newFloat(0.75), java.newFloat(1)])).setKeyValue(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(0), java.newFloat(0), java.newFloat(-2), java.newFloat(0), java.newFloat(0), java.newFloat(0), java.newFloat(0), java.newFloat(0), java.newFloat(2), java.newFloat(0), java.newFloat(0), java.newFloat(0), java.newFloat(0)])))
        .addChild(new autoclass.ROUTE().setFromNode("REDTIME1").setFromField("cycleTime").setToNode("REDTIME1").setToField("set_stopTime"))
        .addChild(new autoclass.ROUTE().setFromNode("REDTIME1").setFromField("stopTime_changed").setToNode("GREENTIME2").setToField("set_startTime"))
        .addChild(new autoclass.ROUTE().setFromNode("GREENTIME2").setFromField("isActive").setToNode("GREENFILTER").setToField("set_boolean"))
        .addChild(new autoclass.ROUTE().setFromNode("GREENFILTER").setFromField("inputFalse").setToNode("BLUETRIGGER").setToField("set_boolean"))
        .addChild(new autoclass.ROUTE().setFromNode("BLUETRIGGER").setFromField("triggerTime").setToNode("BLUETIME3").setToField("set_startTime"))
        .addChild(new autoclass.ROUTE().setFromNode("REDTIME1").setFromField("fraction_changed").setToNode("REDINTERP1").setToField("set_fraction"))
        .addChild(new autoclass.ROUTE().setFromNode("REDINTERP1").setFromField("value_changed").setToNode("REDBALL").setToField("set_translation"))
        .addChild(new autoclass.ROUTE().setFromNode("GREENTIME2").setFromField("fraction_changed").setToNode("GREENINTERP2").setToField("set_fraction"))
        .addChild(new autoclass.ROUTE().setFromNode("GREENINTERP2").setFromField("value_changed").setToNode("GREENBALL").setToField("set_translation"))
        .addChild(new autoclass.ROUTE().setFromNode("BLUETIME3").setFromField("fraction_changed").setToNode("BLUEINTERP3").setToField("set_fraction"))
        .addChild(new autoclass.ROUTE().setFromNode("BLUEINTERP3").setFromField("value_changed").setToNode("BLUEBALL").setToField("set_translation")))      ;
    X3D0.toFileX3D("../data/TestCycleTimeStart.new.node.x3d");
    X3D0.toFileJSON("../data/TestCycleTimeStart.new.node.x3dj");
    process.exit(0);
