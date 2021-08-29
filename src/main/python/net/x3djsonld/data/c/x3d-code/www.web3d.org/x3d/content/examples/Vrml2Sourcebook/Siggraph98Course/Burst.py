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

newModel=X3D(profile='Interchange',version='3.3',
  head=head(
    children=[
    meta(content='Burst.x3d',name='title'),
    meta(content='Burst of lines: illustrate the use of an IndexedLineSet to build a 3D star-burst.',name='description'),
    meta(content='David R. Nadeau',name='creator'),
    meta(content='Don Brutzman',name='translator'),
    meta(content='1 July 1998',name='created'),
    meta(content='2 February 2014',name='translated'),
    meta(content='20 October 2019',name='modified'),
    meta(content='originals/burst.wrl',name='reference'),
    meta(content='http://www.siggraph.org/s98',name='reference'),
    meta(content='http://www.siggraph.org/s98/conference/courses/18.html',name='reference'),
    meta(content='http://www.sdsc.edu/~moreland/courses/Siggraph98/vrml97/slides/mt0230.htm',name='reference'),
    meta(content='http://www.sdsc.edu/~moreland/courses/Siggraph98/vrml97/vrml97.htm',name='reference'),
    meta(content='https://www.web3d.org/x3d/content/examples/X3dResources.html',name='reference'),
    meta(content='https://www.web3d.org/x3d/content/examples/Vrml2Sourcebook/Siggraph98Course/Burst.x3d',name='identifier'),
    meta(content='Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html',name='generator'),
    meta(content='X3D-Edit, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(info=["Copyright (c) 1997, Andrea L. Ames, David R. Nadeau, John L. Moreland"],title='Burst of lines'),
    Viewpoint(description='Entry view',position=(0.0,0.0,3.0)),
    NavigationInfo(),
    Shape(DEF='Burst',
      geometry=IndexedLineSet(coordIndex=[0,1,-1,0,2,-1,0,3,-1,0,4,-1,0,5,-1,0,6,-1,0,7,-1,0,8,-1,0,9,-1,0,10,-1,0,11,-1,0,12,-1,0,13,-1,0,14,-1,0,15,-1,0,16,-1],
        color=Color(color=[(1.0,1.0,0.0),(1.0,0.3,0.3),(1.0,0.3,0.3),(1.0,0.3,0.3),(1.0,0.3,0.3),(1.0,0.3,0.3),(1.0,0.3,0.3),(1.0,0.3,0.3),(1.0,0.3,0.3),(1.0,0.3,0.3),(1.0,0.3,0.3),(1.0,0.3,0.3),(1.0,0.3,0.3),(1.0,0.3,0.3),(1.0,0.3,0.3),(1.0,0.3,0.3),(1.0,0.3,0.3)]),
        coord=Coordinate(point=[(0.0,0.0,0.0),(1.0,0.0,0.0),(0.92,0.38,0.0),(0.71,0.71,0.0),(0.38,0.92,0.0),(0.0,1.0,0.0),(-0.38,0.92,0.0),(-0.71,0.71,0.0),(-0.92,0.38,0.0),(-1.0,0.0,0.0),(-0.92,-0.38,0.0),(-0.71,-0.71,0.0),(-0.38,-0.92,0.0),(0.0,-1.0,0.0),(0.38,-0.92,0.0),(0.71,-0.71,0.0),(0.92,-0.38,0.0)]))),
    Transform(rotation=(0.0,1.0,0.0,0.785),
      children=[
      Shape(USE='Burst')]),
    Transform(rotation=(0.0,1.0,0.0,1.57),
      children=[
      Shape(USE='Burst')]),
    Transform(rotation=(0.0,1.0,0.0,2.355),
      children=[
      Shape(USE='Burst')])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for Burst.py")
