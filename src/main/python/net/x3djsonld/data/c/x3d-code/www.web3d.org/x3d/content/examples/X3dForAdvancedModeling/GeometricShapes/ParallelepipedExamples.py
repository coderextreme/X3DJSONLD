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
    meta(content='ParallelepipedExamples.x3d',name='title'),
    meta(content='Example use of external prototype declaration for Parallelepiped, which is a 3D figure formed by six parallelograms.',name='description'),
    meta(content='Don Brutzman',name='creator'),
    meta(content='25 November 2011',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='ParallelepipedPrototype.x3d',name='reference'),
    meta(content='ParallelepipedVertexIndices.png',name='Image'),
    meta(content='GeometricShapes.vsd',name='drawing'),
    meta(content='http://en.wikipedia.org/wiki/Parallelepiped',name='reference'),
    meta(content='http://upload.wikimedia.org/wikipedia/commons/f/f6/Parallelepiped.svg',name='reference'),
    meta(content='http://upload.wikimedia.org/wikipedia/commons/thumb/f/f6/Parallelepiped.svg/500px-Parallelepiped.svg.png',name='reference'),
    meta(content='parallelopiped rhomboid geometry polyhedron',name='subject'),
    meta(content='https://x3dgraphics.com/examples/X3dForAdvancedModeling/GeometricShapes/ParallelepipedExamples.x3d',name='identifier'),
    meta(content='https://www.web3d.org/x3d/content/examples/X3dResources.html',name='reference'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='ParallelepipedExamples.x3d'),
    ExternProtoDeclare(appinfo='Parallelepiped is a 3D figure formed by six parallelograms; also sometimes referred to as a rhomboid',name='Parallelepiped',url=["ParallelepipedPrototype.x3d#Parallelepiped","https://x3dgraphics.com/examples/X3dForAdvancedModeling/GeometricShapes/ParallelepipedPrototype.x3d#Parallelepiped","ParallelepipedPrototype.wrl#Parallelepiped","https://x3dgraphics.com/examples/X3dForAdvancedModeling/GeometricShapes/ParallelepipedPrototype.wrl#Parallelepiped"],
      field=[
      field(accessType='inputOutput',name='point',type='MFVec3f'),
      field(accessType='initializeOnly',name='colorPerVertex',type='SFBool'),
      field(accessType='initializeOnly',name='normalPerVertex',type='SFBool'),
      field(accessType='initializeOnly',name='colorIndex',type='MFInt32'),
      field(accessType='initializeOnly',name='normalIndex',type='MFInt32'),
      field(accessType='initializeOnly',name='texCoordIndex',type='MFInt32'),
      field(accessType='inputOutput',name='color',type='SFNode'),
      field(accessType='inputOutput',name='normal',type='SFNode'),
      field(accessType='inputOutput',name='texCoord',type='SFNode')]),
    #  ================================================================================ 
    Background(skyColor=[(0.905882,1,0.858824)]),
    Viewpoint(description='Parellelopiped examples',orientation=(1,0,0,-0.46365),position=(0,5,10)),
    Transform(translation=(-4,0,0),
      children=[
      Shape(
        geometry=ProtoInstance(name='Parallelepiped',
          fieldValue=[
          fieldValue(name='point',value=[(-0.5,1,-0.5),(0.5,1,-0.5),(0.5,1,0.5),(-0.5,1,0.5),(0,0,0),(1,0,0),(1,0,1),(0,0,1)])]),
        appearance=Appearance(DEF='BlueAppearance',
          material=Material(diffuseColor=(0,0.698039,1))))]),
    Transform(translation=(-2,0,0),
      children=[
      Shape(
        geometry=ProtoInstance(name='Parallelepiped',
          fieldValue=[
          fieldValue(name='point',value=[(-0.5,1,0),(0.5,1,0),(0.5,1,1),(-0.5,1,1),(0,0,0),(1,0,0),(1,0,1),(0,0,1)])]),
        appearance=Appearance(USE='BlueAppearance'))]),
    Transform(
      children=[
      Shape(
        geometry=ProtoInstance(DEF='ParallelepipedBox',name='Parallelepiped',
          fieldValue=[
          fieldValue(name='point',value=[(0,1,0),(1,1,0),(1,1,1),(0,1,1),(0,0,0),(1,0,0),(1,0,1),(0,0,1)])]),
        appearance=Appearance(USE='BlueAppearance'))]),
    Transform(translation=(2,0,0),
      children=[
      Shape(
        geometry=ProtoInstance(name='Parallelepiped',
          fieldValue=[
          fieldValue(name='point',value=[(0.5,1,0),(1.5,1,0),(1.5,1,1),(0.5,1,1),(0,0,0),(1,0,0),(1,0,1),(0,0,1)])]),
        appearance=Appearance(USE='BlueAppearance'))]),
    Transform(translation=(4,0,0),
      children=[
      Shape(
        geometry=ProtoInstance(name='Parallelepiped',
          fieldValue=[
          fieldValue(name='point',value=[(0.5,1,0.5),(1.5,1,0.5),(1.5,1,1.5),(0.5,1,1.5),(0,0,0),(1,0,0),(1,0,1),(0,0,1)])]),
        appearance=Appearance(USE='BlueAppearance'))])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for ParallelepipedExamples.py")
