from x3d import *
print(
X3D(
  profile="Immersive", version="3.3", head=head(  children=[
      
          meta(name="title", content="ViewFrustumPrototype.x3d"),
          meta(name="description", content="Define a view frustum associated with a given pair of Viewpoint and NavigationInfo nodes, provided as a reusable prototype."),
          meta(name="creator", content="Don Brutzman"),
          meta(name="translated", content="16 August 2008"),
          meta(name="modified", content="20 October 2019"),
          meta(name="reference", content="ViewFrustumExample.x3d"),
          meta(name="drawing", content="ViewFrustumComputation.png"),
          meta(name="Image", content="ViewFrustumOverheadView.png"),
          meta(name="Image", content="ViewFrustumObliqueView.png"),
          meta(name="subject", content="view culling frustum"),
          meta(name="identifier", content="http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/ViewFrustumPrototype.x3d"),
          meta(name="generator", content="X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"),
          meta(name="license", content="../license.html"),
          meta(name="translated", content="16 January 2022"),
          meta(name="generator", content="X3dToJson.xslt, https://www.web3d.org/x3d/stylesheets/X3dToJson.html"),
          meta(name="reference", content="X3D JSON encoding: https://www.web3d.org/wiki/index.php/X3D_JSON_Encoding")]), Scene=Scene(
    children=[
        WorldInfo(
          title="ViewFrustumPrototype.x3d"),
        ProtoDeclare(
          name="ViewFrustum", appinfo="Display view frustum associated with a given pair of Viewpoint NavigationInfo nodes", ProtoInterface=ProtoInterface(
            field=[
                field(name="ViewpointNode", accessType="initializeOnly", appinfo="required: insert Viewpoint DEF or USE node for view of interest", type="SFNode", children=[#NULL node, ProtoInstance must provide
]),
                field(name="NavigationInfoNode", accessType="initializeOnly", appinfo="required: insert NavigationInfo DEF or USE node of interest", type="SFNode", children=[#NULL node, ProtoInstance must provide
]),
                field(name="visible", accessType="inputOutput", appinfo="whether or not frustum geometry is rendered", type="SFBool", value=True),
                field(name="lineColor", accessType="inputOutput", appinfo="RGB color of ViewFrustum outline, default value 0.9 0.9 0.9", type="SFColor", value=(0.9,0.9,0.9)),
                field(name="frustumColor", accessType="inputOutput", appinfo="RGB color of ViewFrustum hull geometry, default value 0.8 0.8 0.8", type="SFColor", value=(0.8,0.8,0.8)),
                field(name="transparency", accessType="inputOutput", appinfo="transparency of ViewFrustum hull geometry, default value 0.5", type="SFFloat", value=0.5),
                field(name="aspectRatio", accessType="inputOutput", appinfo="assumed ratio height/width, default value 0.75", type="SFFloat", value=0.75),
                field(name="trace", accessType="initializeOnly", appinfo="debug support, default false", type="SFBool", value=False)]), ProtoBody=ProtoBody(
            children=[
                Switch(
                  DEF="VisibilitySwitch", whichChoice=-1, children=[
                      Transform(
                        DEF="PositionTransform", rotation=(0,1,0,3.14159), children=[
                            Transform(
                              DEF="OrientationTransform", children=[
                                  Shape(
                                    geometry=IndexedLineSet(
                                        DEF="FrustumLines", coordIndex=(0,1,2,3,0,-1,4,5,6,7,4,-1,0,4,-1,1,5,-1,2,6,-1,3,7,-1), coord(
                                          Coordinate(
                                            DEF="FrustumCoordinate", point=(0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0)))), appearance=Appearance(
                                        material=Material(
                                            IS=IS(
                                              connect=[
                                                  connect(nodeField="emissiveColor", protoField="lineColor")])))),
                                  Shape(
                                    geometry=Extrusion(
                                        DEF="FrustumExtrusion"), appearance=Appearance(
                                        DEF="FrustumAppearance", material=Material(
                                            IS=IS(
                                              connect=[
                                                  connect(nodeField="diffuseColor", protoField="frustumColor"),
                                                  connect(nodeField="transparency", protoField="transparency")])))),
                                  Shape(
                                    geometry=Sphere(
                                        radius=0.08), appearance=Appearance(
                                        USE="FrustumAppearance"))])])]),
                Script(
                  DEF="GeometryComputationScript", directOutput=True, url=["ViewFrustumPrototypeScript.js"], field=[
                      field(name="visible", accessType="inputOutput", appinfo="Whether or not frustum geometry is rendered", type="SFBool"),
                      field(name="visibilitySwitchSelection", accessType="outputOnly", appinfo="Adjust Switch selection to make geometry visible or not", type="SFInt32"),
                      field(name="ViewpointNode", accessType="initializeOnly", type="SFNode", children=[#initialization node (if any) goes here
]),
                      field(name="NavigationInfoNode", accessType="initializeOnly", type="SFNode", children=[#initialization node (if any) goes here
]),
                      field(name="FrustumCoordinate", accessType="initializeOnly", type="SFNode", children=[
                          Coordinate(
                            USE="FrustumCoordinate")]),
                      field(name="FrustumExtrusion", accessType="initializeOnly", type="SFNode", children=[
                          Extrusion(
                            USE="FrustumExtrusion")]),
                      field(name="recompute", accessType="inputOnly", type="SFBool"),
                      field(name="aspectRatio", accessType="inputOutput", appinfo="assumed ratio height/width", type="SFFloat"),
                      field(name="position_changed", accessType="outputOnly", type="SFVec3f"),
                      field(name="orientation_changed", accessType="outputOnly", type="SFRotation"),
                      field(name="spine_changed", accessType="outputOnly", type="MFVec3f"),
                      field(name="scale_changed", accessType="outputOnly", type="MFVec2f"),
                      field(name="point_changed", accessType="outputOnly", type="MFVec3f"),
                      field(name="trace", accessType="initializeOnly", type="SFBool")], IS=IS(
                    connect=[
                        connect(nodeField="visible", protoField="visible"),
                        connect(nodeField="ViewpointNode", protoField="ViewpointNode"),
                        connect(nodeField="NavigationInfoNode", protoField="NavigationInfoNode"),
                        connect(nodeField="aspectRatio", protoField="aspectRatio"),
                        connect(nodeField="trace", protoField="trace")])),
                ROUTE(
                  fromField="visibilitySwitchSelection", fromNode="GeometryComputationScript", toField="whichChoice", toNode="VisibilitySwitch"),
                ROUTE(
                  fromField="position_changed", fromNode="GeometryComputationScript", toField="translation", toNode="PositionTransform"),
                ROUTE(
                  fromField="orientation_changed", fromNode="GeometryComputationScript", toField="rotation", toNode="OrientationTransform"),
                ROUTE(
                  fromField="spine_changed", fromNode="GeometryComputationScript", toField="set_spine", toNode="FrustumExtrusion"),
                ROUTE(
                  fromField="scale_changed", fromNode="GeometryComputationScript", toField="set_scale", toNode="FrustumExtrusion"),
                ROUTE(
                  fromField="point_changed", fromNode="GeometryComputationScript", toField="point", toNode="FrustumCoordinate")])),#Example use is in separate scene

        Anchor(
          description="ViewFrustum Example", url=["ViewFrustumExample.x3d"], children=[
              Shape(
                appearance=Appearance(
                    material=Material(
                        diffuseColor=(0.8,0.4,0))), geometry=Text(
                    string=["ViewFrustumPrototype.x3d","is a Prototype declaration file.","For an example scene using the prototype,","click this text and view","ViewFrustumExample.x3d"], fontStyle=FontStyle(
                        justify=["MIDDLE","MIDDLE"], size=0.8)))])]))
.XML())
