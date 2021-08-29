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

newModel=X3D(profile='Immersive',version='3.0',
  head=head(
    children=[
    meta(content='RenderingComponentExternProtoDefinitions.x3d',name='title'),
    meta(content='Examples showing use of new X3D Rendering component nodes (IndexedTriangleFanSet IndexedTriangleSet IndexedTriangleStripSet LineSet TriangleFanSet TriangleSet TriangleStripSet), implemented as prototypes for backwards compatibility with VRML 97.',name='description'),
    meta(content='.wrl url links intentionally precede .x3d links, X3D-Edit stylesheet X3dToVrml97.xslt automatically inserts VRML97 translations of these external prototype declarations upon encountering any new Rendering nodes.',name='info'),
    meta(content='Don Brutzman, Ken Curtin, Duane Davis, Christos Kalogrias',name='creator'),
    meta(content='17 November 2003',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='RenderingComponentPrototypes.x3d',name='reference'),
    meta(content='RenderingComponentExamples.x3d',name='reference'),
    meta(content='https://www.web3d.org/documents/specifications/19775-1/V3.3/Part01/components/rendering.html',name='reference'),
    meta(content='X3D Rendering component nodes (IndexedTriangleFanSet IndexedTriangleSet IndexedTriangleStripSet LineSet TriangleFanSet TriangleSet TriangleStripSet)',name='subject'),
    meta(content='https://www.web3d.org/x3d/content/examples/Basic/development/RenderingComponentExternProtoDefinitions.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    #  ==================== 
    #  Do not copy these ExternProtoDeclare statements, they are only provided for preparation of X3dToVrml97.xslt stylesheet mappings for backwards compatibility. 
    #  ==================== 
    children=[
    WorldInfo(title='RenderingComponentExternProtoDefinitions.x3d'),
    ExternProtoDeclare(appinfo='ColorRGBA defines a set of RGBA colors.',name='ColorRGBA',url=["RenderingComponentPrototypes.wrl#ColorRGBA","https://www.web3d.org/x3d/content/examples/Basic/development/RenderingComponentPrototypes.wrl#ColorRGBA","RenderingComponentPrototypes.x3d#ColorRGBA","https://www.web3d.org/x3d/content/examples/Basic/development/RenderingComponentPrototypes.x3d#ColorRGBA"],
      field=[
      field(accessType='inputOutput',appinfo='locally override MFColorRGBA type (which is not supported in VRML 97) in order to downgrade to Color RGB',name='color',type='MFRotation'),
      field(accessType='inputOutput',appinfo='Metadata node only',name='metadata',type='SFNode')]),
    ExternProtoDeclare(appinfo='IndexedTriangleFanSet represents a 3D shape composed of triangles that form a fan shape around the first vertex declared in each fan.',name='IndexedTriangleFanSet',url=["RenderingComponentPrototypes.wrl#IndexedTriangleFanSet","https://www.web3d.org/x3d/content/examples/Basic/development/RenderingComponentPrototypes.wrl#IndexedTriangleFanSet","RenderingComponentPrototypes.x3d#IndexedTriangleFanSet","https://www.web3d.org/x3d/content/examples/Basic/development/RenderingComponentPrototypes.x3d#IndexedTriangleFanSet"],
      field=[
      field(accessType='initializeOnly',name='ccw',type='SFBool'),
      field(accessType='initializeOnly',name='colorPerVertex',type='SFBool'),
      field(accessType='initializeOnly',name='normalPerVertex',type='SFBool'),
      field(accessType='initializeOnly',name='solid',type='SFBool'),
      field(accessType='initializeOnly',name='index',type='MFInt32'),
      field(accessType='inputOnly',name='set_index',type='MFInt32'),
      field(accessType='inputOutput',appinfo='Color ColorRGBA node only',name='color',type='SFNode'),
      field(accessType='inputOutput',appinfo='Coordinate node only',name='coord',type='SFNode'),
      field(accessType='inputOutput',appinfo='Normal node only',name='normal',type='SFNode'),
      field(accessType='inputOutput',appinfo='TextureCoordinate node only',name='texCoord',type='SFNode'),
      field(accessType='inputOutput',appinfo='Metadata node only',name='metadata',type='SFNode')]),
    ExternProtoDeclare(appinfo='IndexedTriangleSet represents a 3D shape composed of a collection of individual triangles.',name='IndexedTriangleSet',url=["RenderingComponentPrototypes.wrl#IndexedTriangleSet","https://www.web3d.org/x3d/content/examples/Basic/development/RenderingComponentPrototypes.wrl#IndexedTriangleSet","RenderingComponentPrototypes.x3d#IndexedTriangleSet","https://www.web3d.org/x3d/content/examples/Basic/development/RenderingComponentPrototypes.x3d#IndexedTriangleSet"],
      field=[
      field(accessType='initializeOnly',name='ccw',type='SFBool'),
      field(accessType='initializeOnly',name='colorPerVertex',type='SFBool'),
      field(accessType='initializeOnly',name='normalPerVertex',type='SFBool'),
      field(accessType='initializeOnly',name='solid',type='SFBool'),
      field(accessType='initializeOnly',name='index',type='MFInt32'),
      field(accessType='inputOnly',name='set_index',type='MFInt32'),
      field(accessType='inputOutput',appinfo='Color ColorRGBA node only',name='color',type='SFNode'),
      field(accessType='inputOutput',appinfo='Coordinate node only',name='coord',type='SFNode'),
      field(accessType='inputOutput',appinfo='Normal node only',name='normal',type='SFNode'),
      field(accessType='inputOutput',appinfo='TextureCoordinate node only',name='texCoord',type='SFNode'),
      field(accessType='inputOutput',appinfo='Metadata node only',name='metadata',type='SFNode')]),
    ExternProtoDeclare(appinfo='IndexedTriangleStripSet represents a 3D shape composed of strips of triangles.',name='IndexedTriangleStripSet',url=["RenderingComponentPrototypes.wrl#IndexedTriangleStripSet","https://www.web3d.org/x3d/content/examples/Basic/development/RenderingComponentPrototypes.wrl#IndexedTriangleStripSet","RenderingComponentPrototypes.x3d#IndexedTriangleStripSet","https://www.web3d.org/x3d/content/examples/Basic/development/RenderingComponentPrototypes.x3d#IndexedTriangleStripSet"],
      field=[
      field(accessType='initializeOnly',name='ccw',type='SFBool'),
      field(accessType='initializeOnly',name='colorPerVertex',type='SFBool'),
      field(accessType='initializeOnly',name='normalPerVertex',type='SFBool'),
      field(accessType='initializeOnly',name='solid',type='SFBool'),
      field(accessType='initializeOnly',name='index',type='MFInt32'),
      field(accessType='inputOnly',name='set_index',type='MFInt32'),
      field(accessType='inputOutput',appinfo='Color ColorRGBA node only',name='color',type='SFNode'),
      field(accessType='inputOutput',appinfo='Coordinate node only',name='coord',type='SFNode'),
      field(accessType='inputOutput',appinfo='Normal node only',name='normal',type='SFNode'),
      field(accessType='inputOutput',appinfo='TextureCoordinate node only',name='texCoord',type='SFNode'),
      field(accessType='inputOutput',appinfo='Metadata node only',name='metadata',type='SFNode')]),
    ExternProtoDeclare(appinfo='LineSet represents a 3D geometry formed by constructing polylines from 3D vertices.',name='LineSet',url=["RenderingComponentPrototypes.wrl#LineSet","https://www.web3d.org/x3d/content/examples/Basic/development/RenderingComponentPrototypes.wrl#LineSet","RenderingComponentPrototypes.x3d#LineSet","https://www.web3d.org/x3d/content/examples/Basic/development/RenderingComponentPrototypes.x3d#LineSet"],
      field=[
      field(accessType='inputOutput',name='vertexCount',type='MFInt32'),
      field(accessType='inputOutput',appinfo='Color ColorRGBA node only',name='color',type='SFNode'),
      field(accessType='inputOutput',appinfo='Coordinate node only',name='coord',type='SFNode'),
      field(accessType='inputOutput',appinfo='Metadata node only',name='metadata',type='SFNode')]),
    ExternProtoDeclare(appinfo='TriangleFanSet represents a 3D shape composed of triangles that form a fan shape around the first vertex declared in each fan.',name='TriangleFanSet',url=["RenderingComponentPrototypes.wrl#TriangleFanSet","https://www.web3d.org/x3d/content/examples/Basic/development/RenderingComponentPrototypes.wrl#TriangleFanSet","RenderingComponentPrototypes.x3d#TriangleFanSet","https://www.web3d.org/x3d/content/examples/Basic/development/RenderingComponentPrototypes.x3d#TriangleFanSet"],
      field=[
      field(accessType='inputOutput',name='fanCount',type='MFInt32'),
      field(accessType='initializeOnly',name='ccw',type='SFBool'),
      field(accessType='initializeOnly',name='colorPerVertex',type='SFBool'),
      field(accessType='initializeOnly',name='normalPerVertex',type='SFBool'),
      field(accessType='initializeOnly',name='solid',type='SFBool'),
      field(accessType='inputOutput',appinfo='Color ColorRGBA node only',name='color',type='SFNode'),
      field(accessType='inputOutput',appinfo='Coordinate node only',name='coord',type='SFNode'),
      field(accessType='inputOutput',appinfo='Normal node only',name='normal',type='SFNode'),
      field(accessType='inputOutput',appinfo='TextureCoordinate node only',name='texCoord',type='SFNode'),
      field(accessType='inputOutput',appinfo='Metadata node only',name='metadata',type='SFNode')]),
    ExternProtoDeclare(appinfo='TriangleSet represents a 3D shape that represents a collection of individual triangles.',name='TriangleSet',url=["RenderingComponentPrototypes.wrl#TriangleSet","https://www.web3d.org/x3d/content/examples/Basic/development/RenderingComponentPrototypes.wrl#TriangleSet","RenderingComponentPrototypes.x3d#TriangleSet","https://www.web3d.org/x3d/content/examples/Basic/development/RenderingComponentPrototypes.x3d#TriangleSet"],
      field=[
      field(accessType='initializeOnly',name='ccw',type='SFBool'),
      field(accessType='initializeOnly',name='colorPerVertex',type='SFBool'),
      field(accessType='initializeOnly',name='normalPerVertex',type='SFBool'),
      field(accessType='initializeOnly',name='solid',type='SFBool'),
      field(accessType='inputOutput',appinfo='Color ColorRGBA node only',name='color',type='SFNode'),
      field(accessType='inputOutput',appinfo='Coordinate node only',name='coord',type='SFNode'),
      field(accessType='inputOutput',appinfo='Normal node only',name='normal',type='SFNode'),
      field(accessType='inputOutput',appinfo='TextureCoordinate node only',name='texCoord',type='SFNode'),
      field(accessType='inputOutput',appinfo='Metadata node only',name='metadata',type='SFNode')]),
    ExternProtoDeclare(appinfo='TriangleStripSet represents a 3D shape composed of strips of triangles.',name='TriangleStripSet',url=["RenderingComponentPrototypes.wrl#TriangleStripSet","https://www.web3d.org/x3d/content/examples/Basic/development/RenderingComponentPrototypes.wrl#TriangleStripSet","RenderingComponentPrototypes.x3d#TriangleStripSet","https://www.web3d.org/x3d/content/examples/Basic/development/RenderingComponentPrototypes.x3d#TriangleStripSet"],
      field=[
      field(accessType='inputOutput',name='stripCount',type='MFInt32'),
      field(accessType='initializeOnly',name='ccw',type='SFBool'),
      field(accessType='initializeOnly',name='colorPerVertex',type='SFBool'),
      field(accessType='initializeOnly',name='normalPerVertex',type='SFBool'),
      field(accessType='initializeOnly',name='solid',type='SFBool'),
      field(accessType='inputOutput',appinfo='Color ColorRGBA node only',name='color',type='SFNode'),
      field(accessType='inputOutput',appinfo='Coordinate node only',name='coord',type='SFNode'),
      field(accessType='inputOutput',appinfo='Normal node only',name='normal',type='SFNode'),
      field(accessType='inputOutput',appinfo='TextureCoordinate node only',name='texCoord',type='SFNode'),
      field(accessType='inputOutput',appinfo='Metadata node only',name='metadata',type='SFNode')]),
    Background(groundColor=[(0.2,0.2,0.2)],skyColor=[(0.2,0.2,0.2)]),
    Anchor(DEF='LinkToExamples',description='link to examples',url=["RenderingComponentExamples.x3d","https://www.web3d.org/x3d/content/examples/Basic/development/RenderingComponentExamples.x3d","RenderingComponentExamples.wrl","https://www.web3d.org/x3d/content/examples/Basic/development/RenderingComponentExamples.wrl"],
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.8,0.6,0.2))),
        geometry=Text(string=["RenderingComponentExternProtoDefinitions","is a developmental file.","Click this text to view","RenderingComponentExamples"],
          fontStyle=FontStyle(justify=["MIDDLE","MIDDLE"])))])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for RenderingComponentExternProtoDefinitions.py")
