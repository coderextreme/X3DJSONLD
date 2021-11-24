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

#  XML declaration encoding must have all-capital letters for UTF-8 
#  Test case: <?xml version="1.0" encoding="utf-8"?> 
#  DOCTYPE final forms: 
#  <!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D 4.0//EN" "https://www.web3d.org/specifications/x3d-4.0.dtd"> 
#  <!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D 3.3//EN" "https://www.web3d.org/specifications/x3d-3.3.dtd"> 
#  <!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D 3.2//EN" "https://www.web3d.org/specifications/x3d-3.2.dtd"> 
#  <!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D 3.1//EN" "https://www.web3d.org/specifications/x3d-3.1.dtd"> 
#  <!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D 3.0//EN" "https://www.web3d.org/specifications/x3d-3.0.dtd"> 
#  DOCTYPE transitional forms (3.0 and 3.1 only): 
#  <!DOCTYPE X3D PUBLIC "https://www.web3d.org/specifications/x3d-3.0.dtd" "file:///www.web3d.org/TaskGroups/x3d/translation/x3d-3.0.dtd"> 
#  <!DOCTYPE X3D PUBLIC "https://www.web3d.org/specifications/x3d-3.1.dtd" "file:///www.web3d.org/TaskGroups/x3d/translation/x3d-3.1.dtd"> 
newModel=X3D(profile='Immersive',version='3.3',
  head=head(
    children=[
    meta(content='TestDoctype.x3d',name='title'),
    meta(content='Don Brutzman',name='creator'),
    meta(content='14 July 2000',name='created'),
    meta(content='21 January 2020',name='modified'),
    meta(content='A simple X3D scene to test XML declaration and DOCTYPE declaration syntax.',name='description'),
    meta(content='https://www.web3d.org/x3d/content/examples/Basic/development/TestDoctype.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(info=["Basic examples archive for development"],title='TestDoctype.x3d checks XML declaration and DOCTYPE syntax'),
    Viewpoint(description='Hello, world',orientation=(0,1,0,3.14159),position=(0,0,-8)),
    Transform(DEF='EarthCoordinateSystem',
      children=[
      Transform(DEF='SimpleGeoStationarySatellite',rotation=(1,0,0,.3),scale=(0.1,0.3,0.1),translation=(0,0,5),
        children=[
        Shape(
          appearance=Appearance(DEF='TEXT_MATERIAL',
            material=Material(diffuseColor=(0.9,0.1,0.1))),
          geometry=Text(string=["TestDoctype.x3d"],
            fontStyle=FontStyle(justify=["MIDDLE","MIDDLE"],size=3)))]),
      Group(DEF='MiniWorld',
        children=[
        Shape(
          appearance=Appearance(
            texture=ImageTexture(url=["earth-topo.png","earth-topo.gif","https://www.web3d.org/x3d/content/earth-topo.png","https://www.web3d.org/x3d/content/earth-topo.gif"]),
            material=Material(emissiveColor=(.05,.05,.1))),
          geometry=Sphere(),)])]),
    TimeSensor(DEF='OrbitalTimeInterval',cycleInterval=20.0,loop=True),
    OrientationInterpolator(DEF='SpinThoseThings',key=[0.00,0.25,0.50,0.75,1.00],keyValue=[(0,1,0,0),(0,1,0,1.57079),(0,1,0,3.14159),(0,1,0,4.7123889),(0,1,0,6.2831852)]),
    ROUTE(fromField='fraction_changed',fromNode='OrbitalTimeInterval',toField='set_fraction',toNode='SpinThoseThings'),
    ROUTE(fromField='value_changed',fromNode='SpinThoseThings',toField='rotation',toNode='EarthCoordinateSystem')])
) # X3D model complete

#  this comment which appears after the X3D element is typically ignored by conversions 

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for TestDoctype.py")
