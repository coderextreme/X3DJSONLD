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
    meta(content='HelloWWW9.x3d',name='title'),
    meta(content='Don Brutzman',name='creator'),
    meta(content='9 January 2000',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='A simple VRML/X3D scene graph example for May 2000 WWW symposium.',name='description'),
    meta(content='https://www.web3d.org/x3d/content/examples/Basic/development/HelloWWW9.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(info=["A simple example VRML/X3D scene graph, easily modifiable for demonstration at WWW9 Amsterdam."],title='Hello WWW 9'),
    Background(groundColor=[(0.8,0.8,1)],skyColor=[(0.8,0.8,1)]),
    Viewpoint(description='Hello, world',orientation=(0,1,0,3.14159),position=(0,0,-8)),
    Anchor(description='World WIde Web Conference 9 home page',parameter=["target=_blank"],url=["http://www.www9.org"],
      children=[
      Transform(DEF='EarthCoordinateSystem',
        children=[
        Group(DEF='MiniWorld',
          children=[
          Shape(
            appearance=Appearance(
              texture=ImageTexture(url=["earth-topo.png","earth-topo.gif","https://www.web3d.org/x3d/content/earth-topo.png","https://www.web3d.org/x3d/content/earth-topo.gif"])),
            geometry=Sphere(),)]),
        Transform(DEF='SimpleGeoStationarySatellite',rotation=(1,0,0,.3),scale=(0.1,0.3,0.1),translation=(0,0,5),
          children=[
          Shape(
            appearance=Appearance(
              material=Material(diffuseColor=(0.9,0.1,0.1))),
            geometry=Text(string=["Hello WWW9 !!","and WWW 2003 too!!"],
              fontStyle=FontStyle(justify=["MIDDLE","MIDDLE"],size=3,style_='BOLD')))])])]),
    TimeSensor(DEF='OrbitalTimeInterval',cycleInterval=30.0,loop=True),
    OrientationInterpolator(DEF='SpinThoseThings',key=[0.00,0.25,0.50,0.75,1.00],keyValue=[(0,1,0,0),(0,1,0,1.57079),(0,1,0,3.14159),(0,1,0,4.7123889),(0,1,0,6.2831852)]),
    ROUTE(fromField='fraction_changed',fromNode='OrbitalTimeInterval',toField='set_fraction',toNode='SpinThoseThings'),
    ROUTE(fromField='value_changed',fromNode='SpinThoseThings',toField='rotation',toNode='EarthCoordinateSystem')])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for HelloWWW9.py")
