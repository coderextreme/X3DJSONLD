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
    component(level=3,name='Interpolation'),
    meta(content='CoordinateInterpolator2dExample.x3d',name='title'),
    meta(content='Example to interpolate using CoordinateInterpolator2D - click geometry to activate animation loop.',name='description'),
    meta(content='Don Brutzman, Jeff Weekley, Jane Wu',name='creator'),
    meta(content='9 October 2001',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='CoordinateInterpolator2D',name='subject'),
    meta(content='http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter07EventAnimationInterpolation/CoordinateInterpolator2dExample.x3d',name='identifier'),
    meta(content='https://www.web3d.org/x3d/content/examples/Basic/development/CoordinateInterpolator2dExample.x3d',name='reference'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='CoordinateInterpolator2dExample.x3d'),
    Viewpoint(description='Click to activate animation',orientation=(1,0,0,-0.4),position=(0,4,10)),
    TimeSensor(DEF='Clock',cycleInterval=5,enabled=False,loop=True),
    CoordinateInterpolator2D(DEF='InterpolateCrossSection',key=[0,0.45,0.9,1],keyValue=[(1,1),(1,-1),(-1,-1),(-1,1),(1,1),(2,2),(2,-2),(-1,-1),(-1,1),(2,2),(1,1),(1,-1),(-1,-1),(-1,1),(1,1),(1,1),(1,-1),(-1,-1),(-1,1),(1,1)]),
    ROUTE(fromField='fraction_changed',fromNode='Clock',toField='set_fraction',toNode='InterpolateCrossSection'),
    Transform(translation=(0.25,1,0),
      #  &amp; is the XML escape character code for ampersand character 
      children=[
      TouchSensor(DEF='Toucher',description='select & hold shape to animate Extrusion'),
      ROUTE(fromField='isActive',fromNode='Toucher',toField='enabled',toNode='Clock'),
      #  also reset clock to restart 
      ROUTE(fromField='touchTime',fromNode='Toucher',toField='startTime',toNode='Clock'),
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.2,0.8,0.4),emissiveColor=(0.05,0.2,0.1))),
        geometry=Extrusion(DEF='AnimatedCrossSectionExtrusion',spine=[(-4,0,-2),(-1,0,-2),(2,0,1),(2,0,4)]),
        #  default Extrusion crossSection='1 1 1 -1 -1 -1 -1 1 1 1' is a square 
        ),
      ROUTE(fromField='value_changed',fromNode='InterpolateCrossSection',toField='set_crossSection',toNode='AnimatedCrossSectionExtrusion')]),
    Transform(translation=(-1.5,-1,2),
      children=[
      Billboard(axisOfRotation=(0,0,0),
        children=[
        Shape(
          geometry=Text(string=["select & hold shape","to animate Extrusion"],
            fontStyle=FontStyle(family=["SANS"],justify=["MIDDLE","MIDDLE"],size=0.8)),
          appearance=Appearance(
            material=Material(diffuseColor=(0.8,0.4,0.2))))])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for CoordinateInterpolator2dExample.py")
