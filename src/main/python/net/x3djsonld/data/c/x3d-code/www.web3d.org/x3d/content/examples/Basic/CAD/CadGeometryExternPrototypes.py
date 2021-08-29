###############################################
#
# Now available: developmental python x3d.py package on PyPi for import.
#   This approach greatly simplifies Python X3D deployment and use.
#   https://pypi.org/project/x3d
#
# Installation:
#       pip install x3d
# or
#       python -m pip install x3d
#
# Developer options for loading x3d package:
#
#    from x3d import *  # preferred approach, terser source that avoids x3d.* class prefixes
#
# or
#    import x3d         # traditional way to subclass x3d package, all classes require x3d.* prefix
#                       # but python source is very verbose, for example x3d.Material x3d.Shape etc.
#                       # X3dToPython.xslt stylesheet insertPackagePrefix=true supports this option.

from x3d import *

###############################################

newModel=X3D(profile='Immersive',version='3.1',
  head=head(
    children=[
    meta(content='CadGeometryExternPrototypes.x3d',name='title'),
    meta(content='This scene provides tool developers with X3D Amendment 1 CAD Component node prototypes, providing backwards compatibility with VRML97 and X3D v3.0.',name='description'),
    meta(content='Travis Rauch, Alan Shaffer, Mounir Sidhom, Patrick Sullivan and Don Brutzman',name='creator'),
    meta(content='28 April 2005',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='Do not use these prototypes in an up-to-date X3D browser that already provides CAD support.',name='warning'),
    meta(content='Recommended practice: avoid using these prototypes, instead use native definitions for CAD nodes using an up-to-date X3D browser.',name='information'),
    meta(content='These scenes are not intended for regular authoring - use X3D v3.2 CAD component instead. Example scenes using these prototypes do not get support for making embdedded metadata values visible at run time, though metadata can certainly be saved in the scene file OK.',name='information'),
    meta(content='Example scenes using these prototypes do not get support for making embedded metadata values visible at run time, though separate metadata nodes can certainly be saved in the scene file OK.',name='information'),
    meta(content='CadGeometryPrototypes.x3d',name='reference'),
    meta(content='CadTeapot.x3d',name='reference'),
    meta(content='CADAssembly CADFace CADLayer CADPart IndexedQuadSet QuadSet',name='subject'),
    meta(content='https://www.web3d.org/files/specifications/19775-1/V3.3/Part01/components/CADGeometry.html',name='reference'),
    meta(content='https://www.web3d.org/x3d/content/examples/Basic/CAD/CadGeometryExternPrototypes.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='CadGeometryExternPrototypes.x3d'),
    ExternProtoDeclare(appinfo='The IndexedQuadSet node represents a 3D shape composed of a collection of individual quadrilaterals (quads). IndexedQuadSet uses the indices in its index field to specify the vertices of each quad from the coord field. Each quad is formed from a set of four vertices of the Coordinate node identified by four consecutive indices from the index field If the index field does not contain a multiple of four coordinate values the remaining vertices shall be ignored.',documentation='https://www.web3d.org/x3d/specifications/ISO-IEC-19775-Amendment1-PDAM-X3DAbstractSpecification/Part01/components/CADGeometry.html#IndexedQuadSet',name='IndexedQuadSet',url=["CadGeometryPrototypes.x3d#IndexedQuadSet","https://www.web3d.org/x3d/content/examples/Basic/CAD/CadGeometryPrototypes.x3d#IndexedQuadSet","CadGeometryPrototypes.wrl#IndexedQuadSet","https://www.web3d.org/x3d/content/examples/Basic/CAD/CadGeometryPrototypes.wrl#IndexedQuadSet"],
      field=[
      field(accessType='inputOnly',name='set_index',type='MFInt32'),
      field(accessType='inputOutput',appinfo='[X3DColorNode]',name='color',type='SFNode'),
      field(accessType='inputOutput',appinfo='[X3DCoordinateNode]',name='coord',type='SFNode'),
      field(accessType='inputOutput',appinfo='[FogCoordinate]',name='fogCoord',type='SFNode'),
      field(accessType='inputOutput',appinfo='[X3DNormalNode]',name='normal',type='SFNode'),
      field(accessType='inputOutput',appinfo='[X3DTextureCoordinateNode]',name='texCoord',type='SFNode'),
      field(accessType='initializeOnly',name='ccw',type='SFBool'),
      field(accessType='initializeOnly',name='colorPerVertex',type='SFBool'),
      field(accessType='initializeOnly',name='normalPerVertex',type='SFBool'),
      field(accessType='initializeOnly',name='solid',type='SFBool'),
      field(accessType='initializeOnly',name='index',type='MFInt32'),
      field(accessType='inputOutput',name='metadata',type='SFNode')]),
    #  =========================================== 
    ExternProtoDeclare(appinfo='The QuadSet node represents a 3D shape that represents a collection of individual planar quadrilaterals. The coord field contains a Coordinate node that defines the 3D vertices that define the quad. Each quad is formed from a consecutive set of four vertices of the coordinate node. If the coordinate node does not contain a multiple of four coordinate values the remaining vertices shall be ignored.',documentation='https://www.web3d.org/x3d/specifications/ISO-IEC-19775-Amendment1-PDAM-X3DAbstractSpecification/Part01/components/CADGeometry.html#QuadSet',name='QuadSet',url=["CadGeometryPrototypes.x3d#QuadSet","https://www.web3d.org/x3d/content/examples/Basic/CAD/CadGeometryPrototypes.x3d#QuadSet","CadGeometryPrototypes.wrl#QuadSet","https://www.web3d.org/x3d/content/examples/Basic/CAD/CadGeometryPrototypes.wrl#QuadSet"],
      field=[
      field(accessType='inputOutput',appinfo='[X3DVertexAttributeNode]',name='attrib',type='MFNode'),
      field(accessType='inputOutput',appinfo='[X3DColorNode]',name='color',type='SFNode'),
      field(accessType='inputOutput',appinfo='[X3DCoordinateNode]',name='coord',type='SFNode'),
      field(accessType='inputOutput',appinfo='[FogCoordinate]',name='fogCoord',type='SFNode'),
      field(accessType='inputOutput',appinfo='[X3DNormalNode]',name='normal',type='SFNode'),
      field(accessType='inputOutput',appinfo='[X3DTextureCoordinateNode]',name='texCoord',type='SFNode'),
      field(accessType='initializeOnly',name='ccw',type='SFBool'),
      field(accessType='initializeOnly',name='colorPerVertex',type='SFBool'),
      field(accessType='initializeOnly',name='normalPerVertex',type='SFBool'),
      field(accessType='initializeOnly',name='solid',type='SFBool'),
      field(accessType='inputOutput',name='metadata',type='SFNode')]),
    #  ======================================== 
    ExternProtoDeclare(appinfo='The CADLayer node defines a hierarchy of nodes used for showing layer structure.',documentation='https://www.web3d.org/x3d/specifications/ISO-IEC-19775-Amendment1-PDAM-X3DAbstractSpecification/Part01/components/CADGeometry.html#CADLayer',name='CADLayer',url=["CadGeometryPrototypes.x3d#CADLayer","https://www.web3d.org/x3d/content/examples/Basic/CAD/CadGeometryPrototypes.x3d#CADLayer","CadGeometryPrototypes.wrl#CADLayer","https://www.web3d.org/x3d/content/examples/Basic/CAD/CadGeometryPrototypes.wrl#CADLayer"],
      field=[
      field(accessType='inputOnly',name='addChildren',type='MFNode'),
      field(accessType='inputOnly',name='removeChildren',type='MFNode'),
      field(accessType='inputOutput',name='children',type='MFNode'),
      field(accessType='inputOutput',name='name',type='SFString'),
      field(accessType='inputOutput',name='visible',type='MFBool'),
      field(accessType='initializeOnly',name='bboxCenter',type='SFVec3f'),
      field(accessType='initializeOnly',name='bboxSize',type='SFVec3f'),
      field(accessType='inputOutput',name='metadata',type='SFNode')]),
    #  ======================================== 
    ExternProtoDeclare(appinfo='The CADAssembly node holds a set of assemblies or parts grouped together.',documentation='https://www.web3d.org/x3d/specifications/ISO-IEC-19775-Amendment1-PDAM-X3DAbstractSpecification/Part01/components/CADGeometry.html#CADAssembly',name='CADAssembly',url=["CadGeometryPrototypes.x3d#CADAssembly","https://www.web3d.org/x3d/content/examples/Basic/CAD/CadGeometryPrototypes.x3d#CADAssembly","CadGeometryPrototypes.wrl#CADAssembly","https://www.web3d.org/x3d/content/examples/Basic/CAD/CadGeometryPrototypes.wrl#CADAssembly"],
      field=[
      field(accessType='inputOnly',name='addChildren',type='MFNode'),
      field(accessType='inputOnly',name='removeChildren',type='MFNode'),
      field(accessType='inputOutput',name='children',type='MFNode'),
      field(accessType='inputOutput',name='name',type='SFString'),
      field(accessType='initializeOnly',name='bboxCenter',type='SFVec3f'),
      field(accessType='initializeOnly',name='bboxSize',type='SFVec3f'),
      field(accessType='inputOutput',name='metadata',type='SFNode')]),
    #  ======================================== 
    ExternProtoDeclare(appinfo='CADPart represents the location and faces that constitute a part',documentation='https://www.web3d.org/x3d/specifications/ISO-IEC-19775-Amendment1-PDAM-X3DAbstractSpecification/Part01/components/CADGeometry.html#CADPart',name='CADPart',url=["CadGeometryPrototypes.wrl#CADPart","https://www.web3d.org/x3d/content/examples/Basic/CAD/CadGeometryPrototypes.wrl#CADPart","CadGeometryPrototypes.x3d#CADPart","https://www.web3d.org/x3d/content/examples/Basic/CAD/CadGeometryPrototypes.x3d#CADPart"],
      field=[
      field(accessType='inputOnly',name='addChildren',type='MFNode'),
      field(accessType='inputOnly',name='removeChildren',type='MFNode'),
      field(accessType='inputOutput',name='children',type='MFNode'),
      field(accessType='inputOutput',name='name',type='SFString'),
      field(accessType='inputOutput',name='translation',type='SFVec3f'),
      field(accessType='inputOutput',name='rotation',type='SFRotation'),
      field(accessType='inputOutput',name='center',type='SFVec3f'),
      field(accessType='inputOutput',name='scale',type='SFVec3f'),
      field(accessType='inputOutput',name='scaleOrientation',type='SFRotation'),
      field(accessType='initializeOnly',name='bboxCenter',type='SFVec3f'),
      field(accessType='initializeOnly',name='bboxSize',type='SFVec3f'),
      field(accessType='inputOutput',name='metadata',type='SFNode')]),
    #  ======================================== 
    ExternProtoDeclare(appinfo='The CADFace node holds the geometry representing a face of a part.',documentation='https://www.web3d.org/x3d/specifications/ISO-IEC-19775-Amendment1-PDAM-X3DAbstractSpecification/Part01/components/CADGeometry.html#CADFace',name='CADFace',url=["CadGeometryPrototypes.x3d#CADFace","https://www.web3d.org/x3d/content/examples/Basic/CAD/CadGeometryPrototypes.x3d#CADFace","CadGeometryPrototypes.wrl#CADFace","https://www.web3d.org/x3d/content/examples/Basic/CAD/CadGeometryPrototypes.wrl#CADFace"],
      field=[
      field(accessType='inputOutput',name='name',type='SFString'),
      field(accessType='inputOutput',name='shape',type='SFNode'),
      field(accessType='initializeOnly',name='bboxCenter',type='SFVec3f'),
      field(accessType='initializeOnly',name='bboxSize',type='SFVec3f'),
      field(accessType='inputOutput',name='metadata',type='SFNode')]),
    #  ======================================== 
    Transform(translation=(0,-2,0),
      children=[
      Anchor(description='CAD Teapot',url=["CadTeapot.x3d","https://www.web3d.org/x3d/content/examples/Basic/CAD/CadTeapot.x3d","CadTeapot.wrl","https://www.web3d.org/x3d/content/examples/Basic/CAD/CadTeapot.wrl"],
        children=[
        Shape(
          geometry=Text(string=["Example CAD structure nodes","are found in CadTeapot.x3d"],
            fontStyle=FontStyle(justify=["MIDDLE","MIDDLE"],size=0.9)),
          appearance=Appearance(
            material=Material(diffuseColor=(1,1,0.2))))])]),
    Transform(translation=(-3,2,0),
      children=[
      Shape(
        appearance=Appearance(DEF='White',
          material=Material(diffuseColor=(1,1,1))),
        geometry=ProtoInstance(name='IndexedQuadSet',
          fieldValue=[
          fieldValue(name='index',value=[0,3,2,1,4,5,6,7,2,7,9,8,2,3,4,7]),
          fieldValue(name='coord',
            children=[
            Coordinate(point=[(-1.5,0,0),(-1.5,1,-1),(-.5,1,-1),(-.5,0,0),(0.5,0,0),(1.5,0,0),(1.5,1,-1),(0.5,1,-1),(-0.5,2,-1),(0.5,2,-1)])])]))]),
    Transform(translation=(3,2,0),
      children=[
      Shape(
        appearance=Appearance(USE='White'),
        geometry=ProtoInstance(name='QuadSet',
          fieldValue=[
          fieldValue(name='coord',
            children=[
            Coordinate(point=[(-1.5,0,0),(-1.5,1,-1),(-0.5,1,-1),(-0.5,0,0),(0.5,0,0),(1.5,0,0),(1.5,1,-1),(0.5,1,-1)])])]))]),
    #  ======================================== 
    #  Silence scene warnings by providing ordered ProtoInstance examples. Note warning above that this scene is for developmental use. The ProtoInstance form of the CAD nodes should not be used, native X3D encoding should be used instead. 
    ProtoInstance(name='CADLayer',
      fieldValue=[
      fieldValue(name='children',
        children=[
        ProtoInstance(name='CADAssembly',
          fieldValue=[
          fieldValue(name='children',
            children=[
            ProtoInstance(name='CADPart',
              fieldValue=[
              fieldValue(name='children',
                children=[
                ProtoInstance(name='CADFace',
                  fieldValue=[
                  fieldValue(name='shape',
                    children=[
                    Shape(
                      geometry=Cylinder(bottom=False,height=0.000001,radius=0.000001,side=False),
                      appearance=Appearance(
                        material=Material(),))])])])])])])])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for CadGeometryExternPrototypes.py")
