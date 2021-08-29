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

newModel=X3D(profile='Immersive',version='3.3',
  head=head(
    children=[
    meta(content='ParallelepipedPrototype.x3d',name='title'),
    meta(content='Reusable prototype for creating a Parallelepiped, which is a 3D figure formed by six parallelograms; also sometimes referred to as a rhomboid.',name='description'),
    meta(content='Don Brutzman',name='creator'),
    meta(content='25 November 2011',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='ParallelepipedExamples.x3d',name='reference'),
    meta(content='ParallelepipedVertexIndices.png',name='Image'),
    meta(content='GeometricShapes.vsd',name='drawing'),
    meta(content='http://en.wikipedia.org/wiki/Parallelepiped',name='reference'),
    meta(content='http://upload.wikimedia.org/wikipedia/commons/f/f6/Parallelepiped.svg',name='reference'),
    meta(content='http://upload.wikimedia.org/wikipedia/commons/thumb/f/f6/Parallelepiped.svg/500px-Parallelepiped.svg.png',name='reference'),
    meta(content='parallelopiped rhomboid geometry polyhedron',name='subject'),
    meta(content='https://x3dgraphics.com/examples/X3dForAdvancedModeling/GeometricShapes/ParallelepipedPrototype.x3d',name='identifier'),
    meta(content='https://www.web3d.org/x3d/content/examples/X3dResources.html',name='reference'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='ParallelepipedPrototype.x3d'),
    ProtoDeclare(appinfo='Parallelepiped is a 3D figure formed by six parallelograms; also sometimes referred to as a rhomboid',name='Parallelepiped',
      ProtoInterface=ProtoInterface(
        field=[
        field(accessType='inputOutput',name='point',type='MFVec3f',value=[(0,1,0),(1,1,0),(1,1,1),(0,1,1),(0,0,0),(1,0,0),(1,0,1),(0,0,1)]),
        field(accessType='initializeOnly',name='colorPerVertex',type='SFBool',value=True),
        field(accessType='initializeOnly',name='normalPerVertex',type='SFBool',value=True),
        field(accessType='initializeOnly',name='colorIndex',type='MFInt32'),
        field(accessType='initializeOnly',name='normalIndex',type='MFInt32'),
        field(accessType='initializeOnly',name='texCoordIndex',type='MFInt32'),
        field(accessType='inputOutput',name='color',type='SFNode',
          #  initialization node (if any) goes here 
          ),
        field(accessType='inputOutput',name='normal',type='SFNode',
          #  initialization node (if any) goes here 
          ),
        field(accessType='inputOutput',name='texCoord',type='SFNode',
          #  initialization node (if any) goes here 
          )]),
      ProtoBody=ProtoBody(
        #  First node determines node type of this prototype 
        children=[
        IndexedFaceSet(DEF='IFS',convex=False,coordIndex=[0,3,2,1,-1,4,5,6,7,-1,0,1,5,4,-1,1,2,6,5,-1,2,3,7,6,-1,3,0,4,7,-1],solid=False,
          IS=IS(
            connect=[
            connect(nodeField='colorPerVertex',protoField='colorPerVertex'),
            connect(nodeField='normalPerVertex',protoField='normalPerVertex'),
            connect(nodeField='colorIndex',protoField='colorIndex'),
            connect(nodeField='normalIndex',protoField='normalIndex'),
            connect(nodeField='texCoordIndex',protoField='texCoordIndex'),
            connect(nodeField='color',protoField='color'),
            connect(nodeField='normal',protoField='normal'),
            connect(nodeField='texCoord',protoField='texCoord')]),
          coord=Coordinate(
            IS=IS(
              connect=[
              connect(nodeField='point',protoField='point')]))),
        #  This embedded Script provides the X3D author with additional visibility and control over prototype inputs and outputs 
        Script(DEF='ParallelepipedScript',
          field=[
          field(accessType='inputOutput',name='point',type='MFVec3f')],
          IS=IS(
            connect=[
            connect(nodeField='point',protoField='point')]))])),
    #  ================================================================================ 
    Background(skyColor=[(0.905882,1,0.858824)]),
    Anchor(description='Open ParallelepipedExamples scene',url=["ParallelepipedExamples.x3d","https://x3dgraphics.com/examples/X3dForAdvancedModeling/GeometricShapes/ParallelepipedExamples.x3d","ParallelepipedExamples.wrl","https://x3dgraphics.com/examples/X3dForAdvancedModeling/GeometricShapes/ParallelepipedExamples.wrl"],
      children=[
      Shape(
        geometry=Text(string=["This scene defines a","Parallelepiped prototype","","Select this text to open","ParallelepipedExamples scene"],
          fontStyle=FontStyle(justify=["MIDDLE","MIDDLE"])),
        appearance=Appearance(DEF='BlueAppearance',
          material=Material(diffuseColor=(0,0.698039,1)))),
      Shape(DEF='TransparentBox',
        geometry=Box(size=(11,5,0.1)),
        appearance=Appearance(
          material=Material(transparency=1)))])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for ParallelepipedPrototype.py")
