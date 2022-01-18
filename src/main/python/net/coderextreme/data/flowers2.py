from x3d import *
print(
X3D(
  profile="Immersive", version="3.0", head=head(  children=[
      
          component(name="Scripting", level=1), 
          meta(name="title", content="flowers2.x3d"),
          meta(name="creator", content="John Carlson"),
          meta(name="transcriber", content="John Carlson"),
          meta(name="created", content="23 January 2005"),
          meta(name="modified", content="21 March 2018"),
          meta(name="description", content="2 random mathematical roses in spherical dimensions. rho = a + b * cos(c * theta) * cos(d * phi)"),
          meta(name="identifier", content="https://coderextreme.net/X3DJSONLD/src/main/data/flowers2.x3d"),
          meta(name="generator", content="manually written"),
          meta(name="license", content="https://www.web3d.org/x3d/content/examples/license.html"),
          meta(name="translated", content="18 January 2022"),
          meta(name="generator", content="X3dToJson.xslt, https://www.web3d.org/x3d/stylesheets/X3dToJson.html"),
          meta(name="reference", content="X3D JSON encoding: https://www.web3d.org/wiki/index.php/X3D_JSON_Encoding")]), Scene=Scene(
    children=[
        NavigationInfo(
          ),
        Viewpoint(
          description="Two mathematical orbitals", position=(0,0,50)),
        Group(
          children=[
              DirectionalLight(
                direction=(1,1,1)),
              ProtoDeclare(
                name="orbit", ProtoInterface=ProtoInterface(
                  field=[
                      field(name="translation", accessType="inputOutput", type="SFVec3f", value=(-8,0,0)),
                      field(name="diffuseColor", accessType="inputOutput", type="SFColor", value=(1,0.5,0)),
                      field(name="specularColor", accessType="inputOutput", type="SFColor", value=(1,0.5,0)),
                      field(name="transparency", accessType="inputOutput", type="SFFloat", value=0.75)]), ProtoBody=ProtoBody(
                  children=[
                      Group(
                        children=[
                            TimeSensor(
                              DEF="Clock", cycleInterval=16, loop=True),
                            OrientationInterpolator(
                              DEF="OrbitPath", key=[0.0,0.5,1.0], keyValue=[1.0,0.0,0.0,0.0,1.0,0.0,0.0,3.14,1.0,0.0,0.0,6.28]),
                            Transform(
                              DEF="OrbitTransform", IS=IS(
                                connect=[
                                    connect(nodeField="translation", protoField="translation")]), children=[
                                  Shape(
                                    appearance=Appearance(
                                        material=Material(
                                            IS=IS(
                                              connect=[
                                                  connect(nodeField="diffuseColor", protoField="diffuseColor"),
                                                  connect(nodeField="specularColor", protoField="specularColor"),
                                                  connect(nodeField="transparency", protoField="transparency")]))), children=[#<IndexedFaceSet DEF="Orbit" creaseAngle="0"> <Coordinate DEF="OrbitCoordinates"/> </IndexedFaceSet>
], geometry=IndexedFaceSet(
                                        ccw=False, convex=False, coordIndex=(0,1,2,-1), DEF="Orbit", coord(
                                          Coordinate(
                                            DEF="OrbitCoordinates", point=(0,0,1,0,1,0,1,0,0)))))]),
                            Script(
                              DEF="OrbitScript", field=[
                                  field(name="set_fraction", accessType="inputOnly", type="SFFloat"),
                                  field(name="coordinates", accessType="outputOnly", type="MFVec3f"),
                                  field(name="coordIndexes", accessType="outputOnly", type="MFInt32"),
                                  field(name="e", accessType="inputOutput", type="SFFloat", value=5),
                                  field(name="f", accessType="inputOutput", type="SFFloat", value=5),
                                  field(name="g", accessType="inputOutput", type="SFFloat", value=5),
                                  field(name="h", accessType="inputOutput", type="SFFloat", value=5),
                                  field(name="resolution", accessType="inputOutput", type="SFInt32", value=50)], #['', '\t\t\t', '\t\t\tecmascript:', '', '\t\t\tvar e = 5;', '\t\t\tvar f = 5;', '\t\t\tvar g = 5;', '\t\t\tvar h = 5;', '\t\t\tvar resolution = 100;', '', '\t\t\tfunction initialize() {', '\t\t\t     generateCoordinates();', '\t\t\t     var localci = [];', '\t\t\t     for (var i = 0; i < resolution-1; i++) {', '\t\t\t\tfor (var j = 0; j < resolution-1; j++) {', '\t\t\t\t     localci.push(i*resolution+j);', '\t\t\t\t     localci.push(i*resolution+j+1);', '\t\t\t\t     localci.push((i+1)*resolution+j+1);', '\t\t\t\t     localci.push((i+1)*resolution+j);', '\t\t\t\t     localci.push(-1);', '\t\t\t\t}', '\t\t\t    }', '\t\t\t    coordIndexes = new MFInt32(localci);', '\t\t\t}', '', '\t\t\tfunction generateCoordinates() {', '\t\t\t     var theta = 0.0;', '\t\t\t     var phi = 0.0;', '\t\t\t     var delta = (2 * 3.141592653) / (resolution-1);', '\t\t\t     var localc = [];', '\t\t\t     for (var i = 0; i < resolution; i++) {', '\t\t\t\tfor (var j = 0; j < resolution; j++) {', '\t\t\t\t\tvar rho = e + f * Math.cos(g * theta) * Math.cos(h * phi);', '\t\t\t\t\tlocalc.push(new SFVec3f(', '\t\t\t\t\t\trho * Math.cos(phi) * Math.cos(theta),', '\t\t\t\t\t\trho * Math.cos(phi) * Math.sin(theta),', '\t\t\t\t\t\trho * Math.sin(phi)', '\t\t\t\t\t));', '\t\t\t\t\ttheta += delta;', '\t\t\t\t}', '\t\t\t\tphi += delta;', '\t\t\t     }', '\t\t\t     ', '\t\t\t     coordinates = new MFVec3f(localc);', '\t\t\t}', '', '\t\t\tfunction set_fraction(fraction, eventTime) {', '\t\t\t\tvar choice = Math.floor(Math.random() * 4);', '\t\t\t\tswitch (choice) {', '\t\t\t\tcase 0:', '\t\t\t\t\te += Math.floor(Math.random() * 2) * 2 - 1;', '\t\t\t\t\tbreak;', '\t\t\t\tcase 1:', '\t\t\t\t\tf += Math.floor(Math.random() * 2) * 2 - 1;', '\t\t\t\t\tbreak;', '\t\t\t\tcase 2:', '\t\t\t\t\tg += Math.floor(Math.random() * 2) * 2 - 1;', '\t\t\t\t\tbreak;', '\t\t\t\tcase 3:', '\t\t\t\t\th += Math.floor(Math.random() * 2) * 2 - 1;', '\t\t\t\t\tbreak;', '\t\t\t\t}', '\t\t\t\tif (e < 1) {', '\t\t\t\t\tf = 10;', '\t\t\t\t}', '\t\t\t\tif (f < 1) {', '\t\t\t\t\tf = 10;', '\t\t\t\t}', '\t\t\t\tif (g < 1) {', '\t\t\t\t\tg = 4;', '\t\t\t\t}', '\t\t\t\tif (h < 1) {', '\t\t\t\t\th = 4;', '\t\t\t\t}', '\t\t\t\tgenerateCoordinates();', '\t\t\t}', '\t\t\t      ']
    
    ),
                            ROUTE(
                              fromNode="OrbitScript", fromField="coordIndexes", toNode="Orbit", toField="set_coordIndex"),
                            ROUTE(
                              fromNode="OrbitScript", fromField="coordinates", toNode="OrbitCoordinates", toField="point"),
                            ROUTE(
                              fromNode="Clock", fromField="fraction_changed", toNode="OrbitScript", toField="set_fraction"),
                            ROUTE(
                              fromNode="OrbitPath", fromField="value_changed", toNode="OrbitTransform", toField="rotation"),
                            ROUTE(
                              fromNode="Clock", fromField="fraction_changed", toNode="OrbitPath", toField="set_fraction")])])),
              ProtoInstance(
                name="orbit", fieldValue=[
                    fieldValue(name="translation", value=(-8,0,0)),
                    fieldValue(name="diffuseColor", value=(1,0.5,0)),
                    fieldValue(name="specularColor", value=(1,0.5,0)),
                    fieldValue(name="transparency", value=0.75)]),
              ProtoInstance(
                name="orbit", fieldValue=[
                    fieldValue(name="translation", value=(8,0,0)),
                    fieldValue(name="diffuseColor", value=(0,0.5,1)),
                    fieldValue(name="specularColor", value=(0,0.5,1)),
                    fieldValue(name="transparency", value=0.5)])])]))
.XML())
