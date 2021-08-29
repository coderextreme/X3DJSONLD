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

newModel=X3D(profile='Interactive',version='3.3',
  head=head(
    children=[
    meta(content='SphereWithThreeCircumferenceRings.x3d',name='title'),
    meta(content='Semitransparent Sphere with circumference circles on x-y-z planes to facilitate user rotation of an object, suitable for use as rotation widget. Labeled box also inserted as Inline.',name='description'),
    meta(content='Don Brutzman',name='creator'),
    meta(content='10 May 2013',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='Consider using TwoSidedMaterial with external transparency on Sphere so that only reverse circles are greyed out (similar to MeshLab widget)',name='TODO'),
    meta(content='Add widget to X3D-Edit palette',name='TODO'),
    meta(content='The labeled box CubeWithLabeledSides.x3d is inserted as an Inline in order to see orientations, authors can remove that and copy the rest if they want.',name='hint'),
    meta(content='SphereWithThreeCircumferenceRingsContainingBox.png',name='Image'),
    meta(content='TouchSensor Interface',name='subject'),
    meta(content='https://x3dgraphics.com/examples/X3dForAdvancedModeling/GeometricShapes/SphereWithThreeCircumferenceRings.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='SphereWithThreeCircumferenceRings.x3d'),
    Viewpoint(description='Sphere with 3 circumferences around labeled cube',position=(0,0,4)),
    Background(skyColor=[(0.3,0.7,0.7)]),
    Transform(scale=(0.5,0.5,0.5),
      #  CubeWithLabeledSides.x3d has profile='Interchange' 
      children=[
      Inline(url=["CubeWithLabeledSides.x3d","https://x3dgraphics.com/examples/X3dForAdvancedModeling/GeometricShapes/CubeWithLabeledSides.x3d","CubeWithLabeledSides.wrl","https://x3dgraphics.com/examples/X3dForAdvancedModeling/GeometricShapes/CubeWithLabeledSides.wrl"])]),
    #  *Authors* the following scene subgraph is portable and can easily be copied for use in other scenes. 
    Transform(DEF='SphereWithThreeCircumferenceRingsTransform',
      children=[
      Shape(
        geometry=Sphere(radius=0.9999),
        appearance=Appearance(DEF='AppearanceGreyDiffuseTransparent',
          material=Material(diffuseColor=(0.8,0.8,0.5),transparency=0.95))),
      Shape(
        #  X-Y plane, perpendicular to Z axis 
        geometry=LineSet(DEF='Circle120LineSet',vertexCount=[121],
          coord=Coordinate(DEF='CirclePoints60',point=[(0,1,0),(0.052,0.999,0),(0.105,0.995,0),(0.156,0.988,0),(0.208,0.978,0),(0.259,0.966,0),(0.309,0.951,0),(0.358,0.934,0),(0.407,0.914,0),(0.454,0.891,0),(0.5,0.866,0),(0.545,0.839,0),(0.588,0.809,0),(0.629,0.777,0),(0.669,0.743,0),(0.707,0.707,0),(0.743,0.669,0),(0.777,0.629,0),(0.809,0.588,0),(0.839,0.545,0),(0.866,0.5,0),(0.891,0.454,0),(0.914,0.407,0),(0.934,0.358,0),(0.951,0.309,0),(0.966,0.259,0),(0.978,0.208,0),(0.988,0.156,0),(0.995,0.105,0),(0.999,0.052,0),(1,0,0),(0.999,-0.052,0),(0.995,-0.105,0),(0.988,-0.156,0),(0.978,-0.208,0),(0.966,-0.259,0),(0.951,-0.309,0),(0.934,-0.358,0),(0.914,-0.407,0),(0.891,-0.454,0),(0.866,-0.5,0),(0.839,-0.545,0),(0.809,-0.588,0),(0.777,-0.629,0),(0.743,-0.669,0),(0.707,-0.707,0),(0.669,-0.743,0),(0.629,-0.777,0),(0.588,-0.809,0),(0.545,-0.839,0),(0.5,-0.866,0),(0.454,-0.891,0),(0.407,-0.914,0),(0.358,-0.934,0),(0.309,-0.951,0),(0.259,-0.966,0),(0.208,-0.978,0),(0.156,-0.988,0),(0.105,-0.995,0),(0.052,-0.999,0),(0,-1,0),(-0.052,-0.999,0),(-0.105,-0.995,0),(-0.156,-0.988,0),(-0.208,-0.978,0),(-0.259,-0.966,0),(-0.309,-0.951,0),(-0.358,-0.934,0),(-0.407,-0.914,0),(-0.454,-0.891,0),(-0.5,-0.866,0),(-0.545,-0.839,0),(-0.588,-0.809,0),(-0.629,-0.777,0),(-0.669,-0.743,0),(-0.707,-0.707,0),(-0.743,-0.669,0),(-0.777,-0.629,0),(-0.809,-0.588,0),(-0.839,-0.545,0),(-0.866,-0.5,0),(-0.891,-0.454,0),(-0.914,-0.407,0),(-0.934,-0.358,0),(-0.951,-0.309,0),(-0.966,-0.259,0),(-0.978,-0.208,0),(-0.988,-0.156,0),(-0.995,-0.105,0),(-0.999,-0.052,0),(-1,-0,0),(-0.999,0.052,0),(-0.995,0.105,0),(-0.988,0.156,0),(-0.978,0.208,0),(-0.966,0.259,0),(-0.951,0.309,0),(-0.934,0.358,0),(-0.914,0.407,0),(-0.891,0.454,0),(-0.866,0.5,0),(-0.839,0.545,0),(-0.809,0.588,0),(-0.777,0.629,0),(-0.743,0.669,0),(-0.707,0.707,0),(-0.669,0.743,0),(-0.629,0.777,0),(-0.588,0.809,0),(-0.545,0.839,0),(-0.5,0.866,0),(-0.454,0.891,0),(-0.407,0.914,0),(-0.358,0.934,0),(-0.309,0.951,0),(-0.259,0.966,0),(-0.208,0.978,0),(-0.156,0.988,0),(-0.105,0.995,0),(-0.052,0.999,0),(0,1,0)])),
        appearance=Appearance(DEF='BlueEmissive',
          material=Material(emissiveColor=(0,0,1),transparency=0.8))),
      Transform(rotation=(1,0,0,1.570796),
        #  X-Z plane, perpendicular to Y axis 
        children=[
        Shape(
          geometry=LineSet(USE='Circle120LineSet'),
          appearance=Appearance(DEF='GreenEmissive',
            material=Material(emissiveColor=(0,1,0),transparency=0.8)))]),
      Transform(rotation=(0,1,0,1.570796),
        #  Y-Z plane, perpendicular to X axis 
        children=[
        Shape(
          geometry=LineSet(USE='Circle120LineSet'),
          appearance=Appearance(DEF='RedEmissive',
            material=Material(emissiveColor=(1,0,0),transparency=0.8)))])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for SphereWithThreeCircumferenceRings.py")
