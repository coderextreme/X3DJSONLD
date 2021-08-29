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
    meta(content='Figure08_5AnimatingScaleWithAxes.x3d',name='title'),
    meta(content='Figure 8.5, The VRML 2.0 Sourcebook, Copyright [1997] By Andrea L. Ames, David R. Nadeau, and John L. Moreland',name='creator'),
    meta(content='http://www.wiley.com/legacy/compbooks/vrml2sbk/ch08/08fig05.htm',name='reference'),
    meta(content='Kevin S. Anderson, Don Brutzman',name='translators'),
    meta(content='8 August 2000',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='Animation that scales a coordinate system and the ball built within it, with coordinate axes superimposed to show X3D/VRML directions',name='description'),
    meta(content='https://www.web3d.org/x3d/content/examples/Vrml2Sourcebook/Chapter08AnimatingPositionOrientationScale/Figure08_5AnimatingScaleWithAxes.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    #  Pulsing Ball 
    children=[
    WorldInfo(title='Figure08_5AnimatingScaleWithAxes.x3d'),
    Group(
      children=[
      Transform(DEF='BallTransform',
        children=[
        Shape(
          #  Note that simple geometry (such as Sphere scale) is not allowed to change after initial creation. Scale changes are animated through parent Transform scale instead. 
          geometry=Sphere(),
          appearance=Appearance(
            material=Material(ambientIntensity=1,diffuseColor=(1,0,0),shininess=1,specularColor=(1,0,0))))]),
      TimeSensor(DEF='CLOCK',cycleInterval=2.0,loop=True),
      PositionInterpolator(DEF='BALLSIZE',key=[0.0,0.2,0.65,1.0],keyValue=[(1.0,1.0,1.0),(1.5,1.5,1.5),(1.1,1.1,1.1),(1.0,1.0,1.0)])]),
    #  Adding this Inline reference to another scene superimposes X3D/VRML coordinate system axes. 
    Transform(scale=(2,2,2),
      children=[
      Inline(DEF='CoordinateAxes',url=["../../X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.x3d","http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.x3d","https://savage.nps.edu/Savage/Tools/Authoring/CoordinateAxes.x3d","../../X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.wrl","http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.wrl","https://savage.nps.edu/Savage/Tools/Authoring/CoordinateAxes.wrl"])]),
    #  Use of all-capitals for DEF names helps discriminate them from nodes and prototypes. 
    ROUTE(fromField='fraction_changed',fromNode='CLOCK',toField='set_fraction',toNode='BALLSIZE'),
    ROUTE(fromField='value_changed',fromNode='BALLSIZE',toField='set_scale',toNode='BallTransform')])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for Figure08_5AnimatingScaleWithAxes.py")
