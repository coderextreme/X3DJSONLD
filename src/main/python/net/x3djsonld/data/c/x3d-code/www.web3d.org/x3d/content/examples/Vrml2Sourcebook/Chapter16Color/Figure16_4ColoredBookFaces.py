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

newModel=X3D(profile='Interchange',version='3.0',
  head=head(
    children=[
    meta(content='Figure16_4ColoredBookFaces.x3d',name='title'),
    meta(content='Figure 16.4, The VRML 2.0 Sourcebook, Copyright [1997] By Andrea L. Ames, David R. Nadeau, and John L. Moreland',name='creator'),
    meta(content='http://www.wiley.com/legacy/compbooks/vrml2sbk/ch16/16fig04.htm',name='reference'),
    meta(content='Don Brutzman',name='translator'),
    meta(content='25 August 2000',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='A book with its faces individually colored using colors from a ColorNode.',name='description'),
    meta(content='https://www.web3d.org/x3d/content/examples/Vrml2Sourcebook/Chapter16Color/Figure16_4ColoredBookFaces.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='Figure16_4ColoredBookFaces.x3d'),
    Viewpoint(description='Book',orientation=(1,0,0,1.4),position=(0,-1,0.3)),
    Transform(DEF='SPINNING_VIEWPOINT_PARENT_TRANSFORM',
      children=[
      Viewpoint(description='Spinning viewpoint',orientation=(1,0,0,1.4),position=(0,-1,0.3))]),
    Shape(
      #  no appearance, use Color node colors instead 
      geometry=IndexedFaceSet(colorIndex=[0,0,0,1,1,1],colorPerVertex=False,coordIndex=[0,1,2,3,-1,7,6,5,4,-1,0,3,7,4,-1,0,4,5,1,-1,1,5,6,2,-1,2,6,7,3],
        coord=Coordinate(point=[(-0.095,-0.115,0.04),(0.095,-0.115,0.04),(0.095,0.115,0.04),(-0.095,0.115,0.04),(-0.095,-0.115,0.00),(0.095,-0.115,0.00),(0.095,0.115,0.00),(-0.095,0.115,0.00)]),
        color=Color(color=[(0.7,0.5,0.2),(0.8,0.8,0.8)]))),
    TimeSensor(DEF='TIMER',cycleInterval=4,loop=True),
    #  Note direction of rotation is negative, since we are rotating the position of a Viewpoint looking down the default -Z axis 
    OrientationInterpolator(DEF='SPINNER',key=[0,.5,1],keyValue=[(0,0,1,0),(0,0,1,-3.1416),(0,0,1,-6.2832)]),
    ROUTE(fromField='fraction_changed',fromNode='TIMER',toField='set_fraction',toNode='SPINNER'),
    ROUTE(fromField='value_changed',fromNode='SPINNER',toField='set_rotation',toNode='SPINNING_VIEWPOINT_PARENT_TRANSFORM')])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for Figure16_4ColoredBookFaces.py")
