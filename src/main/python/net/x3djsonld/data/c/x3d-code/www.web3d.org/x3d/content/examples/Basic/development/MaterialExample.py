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

newModel=X3D(profile='Immersive',version='3.2',
  head=head(
    children=[
    meta(content='MaterialExample.x3d',name='title'),
    meta(content='Material node example for X3D-Edit MaterialEditor, which uses Scene Access Interface (SAI) externally to select/deselect different shapes, axes and lights while modifying Material values.',name='description'),
    meta(content='Don Brutzman',name='creator'),
    meta(content='17 December 2006',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='X3D-Edit example',name='subject'),
    meta(content='https://www.web3d.org/x3d/content/examples/Basic/development/MaterialExample.x3d',name='identifier'),
    meta(content='src/www.web3d.org/x3d/tools/X3dEdit3.3/X3D/src/org/web3d/x3d/templates/MaterialExample.x3d',name='reference'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='MaterialExample.x3d'),
    Viewpoint(DEF='ViewpointNode',description='default',position=(0,0,4)),
    NavigationInfo(headlight=False,type=["EXAMINE"]),
    Background(DEF='BackgroundNode'),
    DirectionalLight(DEF='DirectionalLightNode',direction=(-0.707,0,-0.707)),
    Shape(DEF='ShapeNode',
      geometry=Sphere(),
      appearance=Appearance(
        material=Material(DEF='MaterialNode'))),
    Switch(DEF='AxesSwitch',whichChoice=0,
      children=[
      Group(
        children=[
        Group(DEF='xAxis',
          children=[
          Shape(
            geometry=IndexedLineSet(coordIndex=[0,1],
              coord=Coordinate(point=[(0,0,0),(1.25,0,0)])),
            appearance=Appearance(DEF='AppearanceRed',
              material=Material(diffuseColor=(0,0,0),emissiveColor=(0.8,0,0)))),
          Transform(translation=(1.4,0,0),
            children=[
            Billboard(
              children=[
              Shape(
                geometry=Text(string=["x"],
                  fontStyle=FontStyle(DEF='LabelStyle',justify=["MIDDLE","MIDDLE"],size=0.3)),
                appearance=Appearance(USE='AppearanceRed'))])])]),
        Group(DEF='yAxis',
          children=[
          Shape(
            geometry=IndexedLineSet(coordIndex=[0,1],
              coord=Coordinate(point=[(0,0,0),(0,1.25,0)])),
            appearance=Appearance(DEF='AppearanceGreen',
              material=Material(diffuseColor=(0,0,0),emissiveColor=(0,0.8,0)))),
          Transform(translation=(0,1.4,0),
            children=[
            Billboard(axisOfRotation=(0,0,0),
              children=[
              Shape(
                geometry=Text(string=["y"],
                  fontStyle=FontStyle(USE='LabelStyle')),
                appearance=Appearance(USE='AppearanceGreen'))])])]),
        Group(DEF='zAxis',
          children=[
          Shape(
            geometry=IndexedLineSet(coordIndex=[0,1],
              coord=Coordinate(point=[(0,0,0),(0,0,1.25)])),
            appearance=Appearance(DEF='AppearanceBlue',
              material=Material(diffuseColor=(0,0,0),emissiveColor=(0,0,0.8)))),
          Transform(translation=(0,0,1.4),
            children=[
            Billboard(axisOfRotation=(0,0,0),
              children=[
              Shape(
                geometry=Text(string=["z"],
                  fontStyle=FontStyle(USE='LabelStyle')),
                appearance=Appearance(USE='AppearanceBlue'))])])])])]),
    Switch(DEF='LightDirectionVectorSwitch',whichChoice=0,
      children=[
      Transform(scale=(1.25,1.25,1.25),
        children=[
        Shape(
          geometry=IndexedLineSet(coordIndex=[0,1],
            #  negate direction-vector values so that line approaches from light direction towards origin 
            coord=Coordinate(DEF='LightDirectionCoordinateNode',point=[(0.707,0,0.707),(0,0,0)])),
          appearance=Appearance(
            material=Material(DEF='LightDirectionLineMaterial',diffuseColor=(0,0,0),emissiveColor=(1,1,1))))])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for MaterialExample.py")
