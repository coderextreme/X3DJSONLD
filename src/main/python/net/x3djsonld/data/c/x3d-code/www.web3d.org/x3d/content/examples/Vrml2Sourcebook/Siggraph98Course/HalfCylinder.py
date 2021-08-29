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
    meta(content='HalfCylinder.x3d',name='title'),
    meta(content='Half-cylinder crease-angle demo illustrates how the crease angle value affects the smoothness of shading on a half-cylinder. The left half-cylinder has a crease angle of 0.0, causing faceted shading. The right half-cylinder has a crease angle of 1.571 (90 degrees), causing smooth shading. Both half-cylinders have *exactly* the same number of coordinates and faces, but the smooth shaded one looks better!',name='description'),
    meta(content='David R. Nadeau',name='creator'),
    meta(content='Don Brutzman',name='translator'),
    meta(content='1 July 1998',name='created'),
    meta(content='2 February 2014',name='translated'),
    meta(content='20 October 2019',name='modified'),
    meta(content='originals/hcyl.wrl',name='reference'),
    meta(content='http://www.siggraph.org/s98',name='reference'),
    meta(content='http://www.siggraph.org/s98/conference/courses/18.html',name='reference'),
    meta(content='http://www.sdsc.edu/~moreland/courses/Siggraph98/vrml97/slides/mt0244.htm',name='reference'),
    meta(content='http://www.sdsc.edu/~moreland/courses/Siggraph98/vrml97/vrml97.htm',name='reference'),
    meta(content='https://www.web3d.org/x3d/content/examples/X3dResources.html',name='reference'),
    meta(content='https://www.web3d.org/x3d/content/examples/Vrml2Sourcebook/Siggraph98Course/HalfCylinder.x3d',name='identifier'),
    meta(content='Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html',name='generator'),
    meta(content='X3D-Edit, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(info=["Copyright (c) 1997, David R. Nadeau"],title='Half-cylinder crease angle demo'),
    Viewpoint(description='Entry view',position=(0.0,0.5,4.0)),
    NavigationInfo(),
    Transform(translation=(-1.0,0.0,0.0),
      children=[
      Shape(
        appearance=Appearance(DEF='White',
          material=Material(),),
        geometry=IndexedFaceSet(coordIndex=[0,1,3,2,-1,2,3,5,4,-1,4,5,7,6,-1,6,7,9,8,-1,8,9,11,10,-1,10,11,13,12,-1,12,13,15,14,-1,14,15,17,16,-1],solid=False,
          coord=Coordinate(DEF='Coord',point=[(-0.5,0.0,1.0),(0.5,0.0,1.0),(-0.5,0.38,0.92),(0.5,0.38,0.92),(-0.5,0.71,0.71),(0.5,0.71,0.71),(-0.5,0.92,0.38),(0.5,0.92,0.38),(-0.5,1.0,0.0),(0.5,1.0,0.0),(-0.5,0.92,-0.38),(0.5,0.92,-0.38),(-0.5,0.71,-0.71),(0.5,0.71,-0.71),(-0.5,0.38,-0.92),(0.5,0.38,-0.92),(-0.5,0.0,-1.0),(0.5,0.0,-1.0)])))]),
    Transform(translation=(1.0,0.0,0.0),
      children=[
      Shape(
        appearance=Appearance(USE='White'),
        geometry=IndexedFaceSet(coordIndex=[0,1,3,2,-1,2,3,5,4,-1,4,5,7,6,-1,6,7,9,8,-1,8,9,11,10,-1,10,11,13,12,-1,12,13,15,14,-1,14,15,17,16,-1],creaseAngle=1.571,solid=False,
          coord=Coordinate(USE='Coord')))])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for HalfCylinder.py")
