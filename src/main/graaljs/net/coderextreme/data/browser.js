load('X3Dautoclass.js');
var ConfigurationProperties = Packages.org.web3d.x3d.jsail.ConfigurationProperties;
ConfigurationProperties.showDefaultAttributes = false;
ConfigurationProperties.xsltEngine = ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA;
ConfigurationProperties.deleteIntermediateFiles = false;
ConfigurationProperties.setStripTrailingZeroes(true);
      var X3D0 =  new X3D().setProfile("Immersive").setVersion("3.3")
      .setHead(new head()
        .addMeta(new meta().setName("title").setContent("browser.x3d"))
        .addMeta(new meta().setName("creator").setContent("John Carlson"))
        .addMeta(new meta().setName("generator").setContent("manual"))
        .addMeta(new meta().setName("identifier").setContent("https://coderextreme.net/X3DJSONLD/src/main/data/browser.x3d"))
        .addMeta(new meta().setName("description").setContent("a script test with embedded \\n between single quotes, a double backslash \\\\\\\\ a backslash \\\\ and a closing quote \"")))
      .setScene(new Scene()
        .addChild(new Script().setDEF("Browser")
          .setSourceCode(`ecmascript:
                function initialize() {
		    Browser.print('DUDES\\n'+'\"DUDETTES');
                }`))
        .addChild(new Script().setDEF("Clouds")
          .setSourceCode(`ecmascript:


function cumulustranslation() // These values designate the boundary location of the cloud
{
var xxx = ' '+' '+
'	Transform		\\n'+
'    ' + '               	\\n';

}`)))      ;
    X3D0.toFileX3D("../data/browser.new.graal.x3d");
    X3D0.toFileJSON("../data/browser.new.graal.json");
